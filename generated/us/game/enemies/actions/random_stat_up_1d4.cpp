// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/random_stat_up_1d4.asm
bool resume_battle_actions_random_stat_up_1d4(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A27F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A281: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A282: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A283: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A283.
    case 0xC2A285: {
        Instruction step(cpu, 0xFF, 0x07A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A286: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:9 LDA #7
    case 0xC2A287: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:9 LDA #7
    // Overlapping static entry reached from 0xC2A287.
    case 0xC2A289: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:10 JSR RAND_LIMIT
    case 0xC2A28A: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:11 CMP #0
    case 0xC2A28D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:11 CMP #0
    // Overlapping static entry reached from 0xC2A28D.
    case 0xC2A28F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:12 BEQ @UNKNOWN5
    case 0xC2A290: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:13 CMP #1
    case 0xC2A292: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:13 CMP #1
    // Overlapping static entry reached from 0xC2A292.
    case 0xC2A294: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:14 BEQ @UNKNOWN7
    case 0xC2A295: {
        Instruction step(cpu, 0xF0, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:15 CMP #2
    case 0xC2A297: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:15 CMP #2
    // Overlapping static entry reached from 0xC2A297.
    case 0xC2A299: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:16 BEQL @UNKNOWN9
    case 0xC2A29A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:16 BEQL @UNKNOWN9
    case 0xC2A29C: {
        Instruction step(cpu, 0x4C, 0x00A342u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:17 CMP #3
    case 0xC2A29F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:17 CMP #3
    // Overlapping static entry reached from 0xC2A29F.
    case 0xC2A2A1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:18 BEQL @UNKNOWN10
    case 0xC2A2A2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:18 BEQL @UNKNOWN10
    case 0xC2A2A4: {
        Instruction step(cpu, 0x4C, 0x00A348u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:19 CMP #4
    case 0xC2A2A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:19 CMP #4
    // Overlapping static entry reached from 0xC2A2A7.
    case 0xC2A2A9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:20 BEQL @UNKNOWN11
    case 0xC2A2AA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:20 BEQL @UNKNOWN11
    case 0xC2A2AC: {
        Instruction step(cpu, 0x4C, 0x00A34Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:21 CMP #5
    case 0xC2A2AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:21 CMP #5
    // Overlapping static entry reached from 0xC2A2AF.
    case 0xC2A2B1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:22 BEQL @UNKNOWN12
    case 0xC2A2B2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:22 BEQL @UNKNOWN12
    case 0xC2A2B4: {
        Instruction step(cpu, 0x4C, 0x00A354u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:23 CMP #6
    case 0xC2A2B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:23 CMP #6
    // Overlapping static entry reached from 0xC2A2B7.
    case 0xC2A2B9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:24 BEQL @UNKNOWN13
    case 0xC2A2BA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:24 BEQL @UNKNOWN13
    case 0xC2A2BC: {
        Instruction step(cpu, 0x4C, 0x00A35Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:25 JMP @UNKNOWN14
    case 0xC2A2BF: {
        Instruction step(cpu, 0x4C, 0x00A35Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:27 LDA #4
    case 0xC2A2C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:27 LDA #4
    // Overlapping static entry reached from 0xC2A2C2.
    case 0xC2A2C4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:28 JSR RAND_LIMIT
    case 0xC2A2C5: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:29 INC
    case 0xC2A2C8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:30 STA @LOCAL02
    case 0xC2A2C9: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:31 LDA CURRENT_TARGET
    case 0xC2A2CB: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:32 CLC
    case 0xC2A2CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:33 ADC #battler::defense
    case 0xC2A2CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:33 ADC #battler::defense
    // Overlapping static entry reached from 0xC2A2CF.
    case 0xC2A2D1: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:34 TAX
    case 0xC2A2D2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:35 LDA @LOCAL02
    case 0xC2A2D3: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:36 STA @VIRTUAL02
    case 0xC2A2D5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:37 LDA __BSS_START__,X
    case 0xC2A2D7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:38 CLC
    case 0xC2A2DA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:39 ADC @VIRTUAL02
    case 0xC2A2DB: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:40 STA __BSS_START__,X
    case 0xC2A2DD: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A2E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Au : 0x00F79Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A2E0.
    case 0xC2A2E2: {
        Instruction step(cpu, 0xF7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A2E3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A2E2.
    case 0xC2A2E4: {
        Instruction step(cpu, 0x0E, 0x00C8A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A2E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A2E5.
    case 0xC2A2E7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A2E8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2EA: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2EC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2EE: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2F0: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2F2: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2F4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2F6: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2F8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2FA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:44 JSL DISPLAY_TEXT_WAIT
    case 0xC2A2FC: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:45 BRA @UNKNOWN14
    case 0xC2A300: {
        Instruction step(cpu, 0x80, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:47 LDA #4
    case 0xC2A302: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:47 LDA #4
    // Overlapping static entry reached from 0xC2A302.
    case 0xC2A304: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:48 JSR RAND_LIMIT
    case 0xC2A305: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:49 INC
    case 0xC2A308: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:50 STA @LOCAL02
    case 0xC2A309: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:51 LDA CURRENT_TARGET
    case 0xC2A30B: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:52 CLC
    case 0xC2A30E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:53 ADC #battler::offense
    case 0xC2A30F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:53 ADC #battler::offense
    // Overlapping static entry reached from 0xC2A30F.
    case 0xC2A311: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:54 TAX
    case 0xC2A312: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:55 LDA @LOCAL02
    case 0xC2A313: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:56 STA @VIRTUAL02
    case 0xC2A315: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:57 LDA __BSS_START__,X
    case 0xC2A317: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:58 CLC
    case 0xC2A31A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:59 ADC @VIRTUAL02
    case 0xC2A31B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:60 STA __BSS_START__,X
    case 0xC2A31D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A320: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00F77Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A320.
    case 0xC2A322: {
        Instruction step(cpu, 0xF7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A323: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A322.
    case 0xC2A324: {
        Instruction step(cpu, 0x0E, 0x00C8A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A325: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A325.
    case 0xC2A327: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A328: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A32A: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A32C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A32E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A330: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A332: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A334: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A336: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A338: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A33A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:64 JSL DISPLAY_TEXT_WAIT
    case 0xC2A33C: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:65 BRA @UNKNOWN14
    case 0xC2A340: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:67 JSL BTLACT_SPEED_UP_1D4
    case 0xC2A342: {
        Instruction step(cpu, 0x22, 0xC2A193u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:68 BRA @UNKNOWN14
    case 0xC2A346: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:70 JSL BTLACT_GUTS_UP_1D4
    case 0xC2A348: {
        Instruction step(cpu, 0x22, 0xC2A14Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:71 BRA @UNKNOWN14
    case 0xC2A34C: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:73 JSL BTLACT_VITALITY_UP_1D4
    case 0xC2A34E: {
        Instruction step(cpu, 0x22, 0xC2A1DBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:74 BRA @UNKNOWN14
    case 0xC2A352: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:76 JSL BTLACT_IQ_UP_1D4
    case 0xC2A354: {
        Instruction step(cpu, 0x22, 0xC2A0FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:77 BRA @UNKNOWN14
    case 0xC2A358: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/random_stat_up_1d4.asm:79 JSL BTLACT_LUCK_UP_1D4
    case 0xC2A35A: {
        Instruction step(cpu, 0x22, 0xC2A227u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:81 END_C_FUNCTION
    case 0xC2A35E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:81 END_C_FUNCTION
    case 0xC2A35F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
