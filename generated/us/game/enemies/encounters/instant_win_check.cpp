// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/instant_win_check.asm
bool resume_battle_instant_win_check(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/instant_win_check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26634: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC26636: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC26637: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC26638: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC26638.
    case 0xC2663A: {
        Instruction step(cpu, 0xFF, 0xBCAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC2663B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:17 LDA BATTLE_INITIATIVE
    case 0xC2663C: {
        Instruction step(cpu, 0xAD, 0x004DBCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:17 LDA BATTLE_INITIATIVE
    // Overlapping static entry reached from 0xC2663A.
    case 0xC2663E: {
        Instruction step(cpu, 0x4D, 0x0002C9u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:18 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC2663F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:18 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC2663F.
    case 0xC26641: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:19 BNE @UNKNOWN0
    case 0xC26642: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:20 LDA #0
    case 0xC26644: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:20 LDA #0
    // Overlapping static entry reached from 0xC26644.
    case 0xC26646: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:21 JMP @UNKNOWN37
    case 0xC26647: {
        Instruction step(cpu, 0x4C, 0x006989u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:23 STZ @LOCAL09
    case 0xC2664A: {
        Instruction step(cpu, 0x64, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:24 STZ @LOCAL08
    case 0xC2664C: {
        Instruction step(cpu, 0x64, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:25 LDA #$FFFF
    case 0xC2664E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:25 LDA #$FFFF
    // Overlapping static entry reached from 0xC2664E.
    case 0xC26650: {
        Instruction step(cpu, 0xFF, 0x850285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:26 STA @VIRTUAL02
    case 0xC26651: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:27 STA @LOCAL07
    case 0xC26653: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:27 STA @LOCAL07
    // Overlapping static entry reached from 0xC26650.
    case 0xC26654: {
        Instruction step(cpu, 0x1E, 0x0002A5u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:28 LDA @VIRTUAL02
    case 0xC26655: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:29 STA @VIRTUAL04
    case 0xC26657: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:30 LDY #0
    case 0xC26659: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:30 LDY #0
    // Overlapping static entry reached from 0xC26659.
    case 0xC2665B: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:31 STY @LOCAL06
    case 0xC2665C: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:32 JMP @UNKNOWN7
    case 0xC2665E: {
        Instruction step(cpu, 0x4C, 0x006720u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:41 LDA GAME_STATE + game_state::party_members,Y
    case 0xC26661: {
        Instruction step(cpu, 0xB9, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:43 AND #$00FF
    case 0xC26664: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC26664.
    case 0xC26666: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:44 TAX
    case 0xC26667: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:45 STX @LOCAL05
    case 0xC26668: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:46 CPX #1
    case 0xC2666A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:46 CPX #1
    // Overlapping static entry reached from 0xC2666A.
    case 0xC2666C: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/instant_win_check.asm:47 BCCL @UNKNOWN6
    case 0xC2666D: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:47 BCCL @UNKNOWN6
    case 0xC2666F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:47 BCCL @UNKNOWN6
    case 0xC26671: {
        Instruction step(cpu, 0x4C, 0x00671Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:48 CPX #4
    case 0xC26674: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:48 CPX #4
    // Overlapping static entry reached from 0xC26674.
    case 0xC26676: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:49 BGTL @UNKNOWN6
    case 0xC26677: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/instant_win_check.asm:49 BGTL @UNKNOWN6
    case 0xC26679: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:49 BGTL @UNKNOWN6
    case 0xC2667B: {
        Instruction step(cpu, 0x4C, 0x00671Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:50 TXA
    case 0xC2667E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:51 DEC
    case 0xC2667F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:52 LDY #.SIZEOF(char_struct)
    case 0xC26680: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:52 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC26680.
    case 0xC26682: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:53 JSL MULT168
    case 0xC26683: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:54 TAX
    case 0xC26687: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:55 LDA PARTY_CHARACTERS+char_struct::speed,X
    case 0xC26688: {
        Instruction step(cpu, 0xBD, 0x0099E5u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:56 AND #$00FF
    case 0xC2668B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC2668B.
    case 0xC2668D: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:57 CMP @VIRTUAL04
    case 0xC2668E: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:58 BCS @UNKNOWN4
    case 0xC26690: {
        Instruction step(cpu, 0xB0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:59 STA @VIRTUAL04
    case 0xC26692: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:61 LDX @LOCAL05
    case 0xC26694: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:62 TXA
    case 0xC26696: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:63 DEC
    case 0xC26697: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC26698: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC26698.
    case 0xC2669A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:65 JSL MULT168
    case 0xC2669B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:66 TAX
    case 0xC2669F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:67 LDA PARTY_CHARACTERS+char_struct::offense,X
    case 0xC266A0: {
        Instruction step(cpu, 0xBD, 0x0099E3u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:68 AND #$00FF
    case 0xC266A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC266A3.
    case 0xC266A5: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:69 CMP @VIRTUAL02
    case 0xC266A6: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:70 BCS @UNKNOWN5
    case 0xC266A8: {
        Instruction step(cpu, 0xB0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:71 STA @VIRTUAL02
    case 0xC266AA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:72 STA @LOCAL07
    case 0xC266AC: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:74 LDX @LOCAL05
    case 0xC266AE: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:75 TXA
    case 0xC266B0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:76 DEC
    case 0xC266B1: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:77 LDY #.SIZEOF(char_struct)
    case 0xC266B2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:77 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC266B2.
    case 0xC266B4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:78 JSL MULT168
    case 0xC266B5: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:79 STA @LOCAL04
    case 0xC266B9: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:80 CLC
    case 0xC266BB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:81 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC266BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x0099DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:81 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC266BC.
    case 0xC266BE: {
        Instruction step(cpu, 0x99, 0x00BDAAu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:82 TAX
    case 0xC266BF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:83 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC266C0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:83 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC266BE.
    case 0xC266C1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:84 AND #$00FF
    case 0xC266C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC266C3.
    case 0xC266C5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:85 STA @LOCAL03
    case 0xC266C6: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:86 CMP #STATUS_0::UNCONSCIOUS
    case 0xC266C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:86 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC266C8.
    case 0xC266CA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:87 BEQ @UNKNOWN6
    case 0xC266CB: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:88 LDA @LOCAL03
    case 0xC266CD: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:89 CMP #STATUS_0::DIAMONDIZED
    case 0xC266CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:89 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC266CF.
    case 0xC266D1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:90 BEQ @UNKNOWN6
    case 0xC266D2: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:91 LDA @LOCAL03
    case 0xC266D4: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:92 CMP #STATUS_0::PARALYZED
    case 0xC266D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:92 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC266D6.
    case 0xC266D8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:93 BEQ @UNKNOWN6
    case 0xC266D9: {
        Instruction step(cpu, 0xF0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:94 LDA @LOCAL03
    case 0xC266DB: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:95 CMP #STATUS_0::NAUSEOUS
    case 0xC266DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:95 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC266DD.
    case 0xC266DF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:96 BEQ @UNKNOWN6
    case 0xC266E0: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:97 LDA @LOCAL03
    case 0xC266E2: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:98 CMP #STATUS_0::POISONED
    case 0xC266E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:98 CMP #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC266E4.
    case 0xC266E6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:99 BEQ @UNKNOWN6
    case 0xC266E7: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:100 LDA @LOCAL03
    case 0xC266E9: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:101 CMP #STATUS_0::SUNSTROKE
    case 0xC266EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:101 CMP #STATUS_0::SUNSTROKE
    // Overlapping static entry reached from 0xC266EB.
    case 0xC266ED: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:102 BEQ @UNKNOWN6
    case 0xC266EE: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:103 LDA @LOCAL03
    case 0xC266F0: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:104 CMP #STATUS_0::COLD
    case 0xC266F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:104 CMP #STATUS_0::COLD
    // Overlapping static entry reached from 0xC266F2.
    case 0xC266F4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:105 BEQ @UNKNOWN6
    case 0xC266F5: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:106 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC266F7: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:107 AND #$00FF
    case 0xC266FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC266FA.
    case 0xC266FC: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:108 TAX
    case 0xC266FD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:109 CPX #STATUS_1::MUSHROOMIZED
    case 0xC266FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:109 CPX #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC266FE.
    case 0xC26700: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:110 BEQ @UNKNOWN6
    case 0xC26701: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:111 CPX #STATUS_1::POSSESSED
    case 0xC26703: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:111 CPX #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC26703.
    case 0xC26705: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:112 BEQ @UNKNOWN6
    case 0xC26706: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:113 LDA @LOCAL08
    case 0xC26708: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:114 ASL
    case 0xC2670A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:115 PHA
    case 0xC2670B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:116 LDA @LOCAL04
    case 0xC2670C: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:117 TAX
    case 0xC2670E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:118 LDA PARTY_CHARACTERS+char_struct::offense,X
    case 0xC2670F: {
        Instruction step(cpu, 0xBD, 0x0099E3u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:119 AND #$00FF
    case 0xC26712: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC26712.
    case 0xC26714: {
        Instruction step(cpu, 0x00, 0x0000FAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:120 PLX
    case 0xC26715: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:121 STA INSTANT_WIN_SORTED_OFFENSE,X
    case 0xC26716: {
        Instruction step(cpu, 0x9D, 0x00AA76u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:122 INC @LOCAL08
    case 0xC26719: {
        Instruction step(cpu, 0xE6, 0x000020u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:124 LDY @LOCAL06
    case 0xC2671B: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:125 INY
    case 0xC2671D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:126 STY @LOCAL06
    case 0xC2671E: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:128 CPY #6
    case 0xC26720: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:128 CPY #6
    // Overlapping static entry reached from 0xC26720.
    case 0xC26722: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/instant_win_check.asm:129 BCCL @UNKNOWN1
    case 0xC26723: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:129 BCCL @UNKNOWN1
    case 0xC26725: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:129 BCCL @UNKNOWN1
    case 0xC26727: {
        Instruction step(cpu, 0x4C, 0x006661u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:130 LDA ENEMIES_IN_BATTLE
    case 0xC2672A: {
        Instruction step(cpu, 0xAD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:131 CMP @LOCAL08
    case 0xC2672D: {
        Instruction step(cpu, 0xC5, 0x000020u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:132 BLTEQ @UNKNOWN9
    case 0xC2672F: {
        Instruction step(cpu, 0x90, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:132 BLTEQ @UNKNOWN9
    case 0xC26731: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:133 LDA #0
    case 0xC26733: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:133 LDA #0
    // Overlapping static entry reached from 0xC26733.
    case 0xC26735: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:134 JMP @UNKNOWN37
    case 0xC26736: {
        Instruction step(cpu, 0x4C, 0x006989u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:136 LDA BATTLE_INITIATIVE
    case 0xC26739: {
        Instruction step(cpu, 0xAD, 0x004DBCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:137 BNEL @UNKNOWN18
    case 0xC2673C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:137 BNEL @UNKNOWN18
    case 0xC2673E: {
        Instruction step(cpu, 0x4C, 0x0067ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:138 LDA #0
    case 0xC26741: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:138 LDA #0
    // Overlapping static entry reached from 0xC26741.
    case 0xC26743: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:139 STA @LOCAL05
    case 0xC26744: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:140 BRA @UNKNOWN13
    case 0xC26746: {
        Instruction step(cpu, 0x80, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:142 ASL
    case 0xC26748: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:143 TAX
    case 0xC26749: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:144 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2674A: {
        Instruction step(cpu, 0xBD, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:145 LDY #.SIZEOF(enemy_data)
    case 0xC2674D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:145 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2674D.
    case 0xC2674F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:146 JSL MULT168
    case 0xC26750: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:147 CLC
    case 0xC26754: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:148 ADC #enemy_data::speed
    case 0xC26755: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:148 ADC #enemy_data::speed
    // Overlapping static entry reached from 0xC26755.
    case 0xC26757: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:149 TAX
    case 0xC26758: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:150 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC26759: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:151 AND #$00FF
    case 0xC2675D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC2675D.
    case 0xC2675F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:152 TAX
    case 0xC26760: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:153 CPX @LOCAL09
    case 0xC26761: {
        Instruction step(cpu, 0xE4, 0x000022u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:154 BLTEQ @UNKNOWN12
    case 0xC26763: {
        Instruction step(cpu, 0x90, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:154 BLTEQ @UNKNOWN12
    case 0xC26765: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:155 STX @LOCAL09
    case 0xC26767: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:157 LDA @LOCAL05
    case 0xC26769: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:158 INC
    case 0xC2676B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:159 STA @LOCAL05
    case 0xC2676C: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:161 CMP ENEMIES_IN_BATTLE
    case 0xC2676E: {
        Instruction step(cpu, 0xCD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:162 BCC @UNKNOWN11
    case 0xC26771: {
        Instruction step(cpu, 0x90, 0x0000D5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:163 LDA @VIRTUAL04
    case 0xC26773: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:164 CMP @LOCAL09
    case 0xC26775: {
        Instruction step(cpu, 0xC5, 0x000022u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:165 BCS @UNKNOWN14
    case 0xC26777: {
        Instruction step(cpu, 0xB0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:166 LDA #0
    case 0xC26779: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:166 LDA #0
    // Overlapping static entry reached from 0xC26779.
    case 0xC2677B: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:167 JMP @UNKNOWN37
    case 0xC2677C: {
        Instruction step(cpu, 0x4C, 0x006989u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:169 LDA #0
    case 0xC2677F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:169 LDA #0
    // Overlapping static entry reached from 0xC2677F.
    case 0xC26781: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:170 STA @LOCAL03
    case 0xC26782: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:171 BRA @UNKNOWN17
    case 0xC26784: {
        Instruction step(cpu, 0x80, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26786: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26786.
    case 0xC26788: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26789: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26788.
    case 0xC2678A: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2678B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2678A.
    case 0xC2678C: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2678B.
    case 0xC2678D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2678E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC26790: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC26792: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC26794: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC26796: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:175 LDA @LOCAL03
    case 0xC26798: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:176 ASL
    case 0xC2679A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:177 TAX
    case 0xC2679B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:178 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2679C: {
        Instruction step(cpu, 0xBD, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:179 LDY #.SIZEOF(enemy_data)
    case 0xC2679F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:179 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2679F.
    case 0xC267A1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:180 JSL MULT168
    case 0xC267A2: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:181 TAX
    case 0xC267A6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:182 CLC
    case 0xC267A7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:183 ADC #enemy_data::defense
    case 0xC267A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:183 ADC #enemy_data::defense
    // Overlapping static entry reached from 0xC267A8.
    case 0xC267AA: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:184 CLC
    case 0xC267AB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:185 ADC @VIRTUAL06
    case 0xC267AC: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:186 STA @VIRTUAL06
    case 0xC267AE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:187 LDA [@VIRTUAL06]
    case 0xC267B0: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:188 STA @VIRTUAL02
    case 0xC267B2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:189 TXA
    case 0xC267B4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:190 CLC
    case 0xC267B5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:191 ADC #enemy_data::hp
    case 0xC267B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:191 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC267B6.
    case 0xC267B8: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC267B9: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC267BB: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC267BD: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC267BF: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:193 CLC
    case 0xC267C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:194 ADC @VIRTUAL06
    case 0xC267C2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:195 STA @VIRTUAL06
    case 0xC267C4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:196 LDA [@VIRTUAL06]
    case 0xC267C6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:197 CLC
    case 0xC267C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:198 ADC @VIRTUAL02
    case 0xC267C9: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:199 STA @VIRTUAL04
    case 0xC267CB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:200 LDA @LOCAL07
    case 0xC267CD: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:201 STA @VIRTUAL02
    case 0xC267CF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:202 ASL
    case 0xC267D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:203 CMP @VIRTUAL04
    case 0xC267D2: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:204 BCS @UNKNOWN16
    case 0xC267D4: {
        Instruction step(cpu, 0xB0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:205 LDA #0
    case 0xC267D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:205 LDA #0
    // Overlapping static entry reached from 0xC267D6.
    case 0xC267D8: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:206 JMP @UNKNOWN37
    case 0xC267D9: {
        Instruction step(cpu, 0x4C, 0x006989u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:208 LDA @LOCAL03
    case 0xC267DC: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:209 INC
    case 0xC267DE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:210 STA @LOCAL03
    case 0xC267DF: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:212 CMP ENEMIES_IN_BATTLE
    case 0xC267E1: {
        Instruction step(cpu, 0xCD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:213 BCC @UNKNOWN15
    case 0xC267E4: {
        Instruction step(cpu, 0x90, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:214 LDA #1
    case 0xC267E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:214 LDA #1
    // Overlapping static entry reached from 0xC267E6.
    case 0xC267E8: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:215 JMP @UNKNOWN37
    case 0xC267E9: {
        Instruction step(cpu, 0x4C, 0x006989u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:217 LDA #0
    case 0xC267EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:217 LDA #0
    // Overlapping static entry reached from 0xC267EC.
    case 0xC267EE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:218 STA @LOCAL03
    case 0xC267EF: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:219 BRA @UNKNOWN20
    case 0xC267F1: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:221 ASL
    case 0xC267F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:222 TAY
    case 0xC267F4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:223 STY @LOCAL05
    case 0xC267F5: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC267F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC267F7.
    case 0xC267F9: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC267FA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC267F9.
    case 0xC267FB: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC267FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC267FB.
    case 0xC267FD: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC267FC.
    case 0xC267FE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC267FF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:225 TYA
    case 0xC26801: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:226 CLC
    case 0xC26802: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:227 ADC #.LOWORD(ENEMIES_IN_BATTLE_IDS)
    case 0xC26803: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Cu : 0x009F8Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:227 ADC #.LOWORD(ENEMIES_IN_BATTLE_IDS)
    // Overlapping static entry reached from 0xC26803.
    case 0xC26805: {
        Instruction step(cpu, 0x9F, 0x00BDAAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:228 TAX
    case 0xC26806: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:229 LDA __BSS_START__,X
    case 0xC26807: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:229 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC26805.
    case 0xC26809: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:230 LDY #.SIZEOF(enemy_data)
    case 0xC2680A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:230 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2680A.
    case 0xC2680C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:231 JSL MULT168
    case 0xC2680D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:232 CLC
    case 0xC26811: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:233 ADC #enemy_data::hp
    case 0xC26812: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:233 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC26812.
    case 0xC26814: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC26815: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC26817: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC26819: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2681B: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:235 CLC
    case 0xC2681D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:236 ADC @VIRTUAL0A
    case 0xC2681E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:237 STA @VIRTUAL0A
    case 0xC26820: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:238 LDA [@VIRTUAL0A]
    case 0xC26822: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:239 LDY @LOCAL05
    case 0xC26824: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:240 STA INSTANT_WIN_SORTED_HP,Y
    case 0xC26826: {
        Instruction step(cpu, 0x99, 0x00AA7Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:241 LDA __BSS_START__,X
    case 0xC26829: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:242 LDY #.SIZEOF(enemy_data)
    case 0xC2682C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:242 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2682C.
    case 0xC2682E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:243 JSL MULT168
    case 0xC2682F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:244 CLC
    case 0xC26833: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:245 ADC #enemy_data::defense
    case 0xC26834: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:245 ADC #enemy_data::defense
    // Overlapping static entry reached from 0xC26834.
    case 0xC26836: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:246 CLC
    case 0xC26837: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:247 ADC @VIRTUAL06
    case 0xC26838: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:248 STA @VIRTUAL06
    case 0xC2683A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:249 LDA [@VIRTUAL06]
    case 0xC2683C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:250 LDY @LOCAL05
    case 0xC2683E: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:251 STA INSTANT_WIN_SORTED_DEFENSE,Y
    case 0xC26840: {
        Instruction step(cpu, 0x99, 0x00AA86u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:252 LDA @LOCAL03
    case 0xC26843: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:253 INC
    case 0xC26845: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:254 STA @LOCAL03
    case 0xC26846: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:256 CMP ENEMIES_IN_BATTLE
    case 0xC26848: {
        Instruction step(cpu, 0xCD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:257 BCC @UNKNOWN19
    case 0xC2684B: {
        Instruction step(cpu, 0x90, 0x0000A6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:259 LDY #1
    case 0xC2684D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:259 LDY #1
    // Overlapping static entry reached from 0xC2684D.
    case 0xC2684F: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:260 LDX #0
    case 0xC26850: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:260 LDX #0
    // Overlapping static entry reached from 0xC26850.
    case 0xC26852: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:261 STX @LOCAL09
    case 0xC26853: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:262 BRA @UNKNOWN26
    case 0xC26855: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:264 TXA
    case 0xC26857: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:265 INC
    case 0xC26858: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:266 STA @LOCAL06
    case 0xC26859: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:267 BRA @UNKNOWN25
    case 0xC2685B: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:269 LDX @LOCAL09
    case 0xC2685D: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:270 TXA
    case 0xC2685F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:271 ASL
    case 0xC26860: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:272 CLC
    case 0xC26861: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:273 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    case 0xC26862: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x00AA76u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:273 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    // Overlapping static entry reached from 0xC26862.
    case 0xC26864: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:274 STA @LOCAL07
    case 0xC26865: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:275 LDA (@LOCAL07)
    case 0xC26867: {
        Instruction step(cpu, 0xB2, 0x00001Eu, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:276 STA @LOCAL01
    case 0xC26869: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:277 LDA @LOCAL06
    case 0xC2686B: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:278 ASL
    case 0xC2686D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:279 CLC
    case 0xC2686E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:280 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    case 0xC2686F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x00AA76u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:280 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    // Overlapping static entry reached from 0xC2686F.
    case 0xC26871: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:281 STA @VIRTUAL04
    case 0xC26872: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:282 LDX @VIRTUAL04
    case 0xC26874: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:283 LDA __BSS_START__,X
    case 0xC26876: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:284 STA @VIRTUAL02
    case 0xC26879: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:285 CMP @LOCAL01
    case 0xC2687B: {
        Instruction step(cpu, 0xC5, 0x000010u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:286 BLTEQ @UNKNOWN24
    case 0xC2687D: {
        Instruction step(cpu, 0x90, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:286 BLTEQ @UNKNOWN24
    case 0xC2687F: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:287 LDY #0
    case 0xC26881: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:287 LDY #0
    // Overlapping static entry reached from 0xC26881.
    case 0xC26883: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:288 LDA @VIRTUAL02
    case 0xC26884: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:289 STA (@LOCAL07)
    case 0xC26886: {
        Instruction step(cpu, 0x92, 0x00001Eu, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:290 LDA @LOCAL01
    case 0xC26888: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:291 LDX @VIRTUAL04
    case 0xC2688A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:292 STA __BSS_START__,X
    case 0xC2688C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:294 LDA @LOCAL06
    case 0xC2688F: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:295 INC
    case 0xC26891: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:296 STA @LOCAL06
    case 0xC26892: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:298 CMP @LOCAL08
    case 0xC26894: {
        Instruction step(cpu, 0xC5, 0x000020u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:299 BCC @UNKNOWN23
    case 0xC26896: {
        Instruction step(cpu, 0x90, 0x0000C5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:300 LDX @LOCAL09
    case 0xC26898: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:301 INX
    case 0xC2689A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:302 STX @LOCAL09
    case 0xC2689B: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:304 LDA @LOCAL08
    case 0xC2689D: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:305 DEC
    case 0xC2689F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:306 STA @VIRTUAL02
    case 0xC268A0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:307 TXA
    case 0xC268A2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:308 CMP @VIRTUAL02
    case 0xC268A3: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:309 BCC @UNKNOWN22
    case 0xC268A5: {
        Instruction step(cpu, 0x90, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:310 CPY #0
    case 0xC268A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:310 CPY #0
    // Overlapping static entry reached from 0xC268A7.
    case 0xC268A9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:311 BEQ @UNKNOWN21
    case 0xC268AA: {
        Instruction step(cpu, 0xF0, 0x0000A1u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:313 LDA #1
    case 0xC268AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:313 LDA #1
    // Overlapping static entry reached from 0xC268AC.
    case 0xC268AE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:314 STA @LOCAL07
    case 0xC268AF: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:315 LDA #0
    case 0xC268B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:315 LDA #0
    // Overlapping static entry reached from 0xC268B1.
    case 0xC268B3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:316 STA @VIRTUAL02
    case 0xC268B4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:317 BRA @UNKNOWN32
    case 0xC268B6: {
        Instruction step(cpu, 0x80, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:319 LDY @VIRTUAL02
    case 0xC268B8: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:320 INY
    case 0xC268BA: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:321 BRA @UNKNOWN31
    case 0xC268BB: {
        Instruction step(cpu, 0x80, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:323 LDA @VIRTUAL02
    case 0xC268BD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:324 ASL
    case 0xC268BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:325 TAX
    case 0xC268C0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:326 CLC
    case 0xC268C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:327 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    case 0xC268C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Eu : 0x00AA7Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:327 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    // Overlapping static entry reached from 0xC268C2.
    case 0xC268C4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:328 STA @LOCAL05
    case 0xC268C5: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:329 LDA (@LOCAL05)
    case 0xC268C7: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:330 STA @LOCAL00
    case 0xC268C9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:331 TYA
    case 0xC268CB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:332 ASL
    case 0xC268CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:333 STA @LOCAL09
    case 0xC268CD: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:334 CLC
    case 0xC268CF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:335 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    case 0xC268D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Eu : 0x00AA7Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:335 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    // Overlapping static entry reached from 0xC268D0.
    case 0xC268D2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:336 STA @LOCAL03
    case 0xC268D3: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:337 LDA (@LOCAL03)
    case 0xC268D5: {
        Instruction step(cpu, 0xB2, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:338 STA @VIRTUAL04
    case 0xC268D7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:339 CMP @LOCAL00
    case 0xC268D9: {
        Instruction step(cpu, 0xC5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:340 BLTEQ @UNKNOWN30
    case 0xC268DB: {
        Instruction step(cpu, 0x90, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:340 BLTEQ @UNKNOWN30
    case 0xC268DD: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:341 STZ @LOCAL07
    case 0xC268DF: {
        Instruction step(cpu, 0x64, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:342 LDA @VIRTUAL04
    case 0xC268E1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:343 STA (@LOCAL05)
    case 0xC268E3: {
        Instruction step(cpu, 0x92, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:344 LDA @LOCAL00
    case 0xC268E5: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:345 STA (@LOCAL03)
    case 0xC268E7: {
        Instruction step(cpu, 0x92, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:346 TXA
    case 0xC268E9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:347 CLC
    case 0xC268EA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:348 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    case 0xC268EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000086u : 0x00AA86u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:348 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    // Overlapping static entry reached from 0xC268EB.
    case 0xC268ED: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:349 STA @LOCAL05
    case 0xC268EE: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:350 LDA (@LOCAL05)
    case 0xC268F0: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:351 STA @VIRTUAL04
    case 0xC268F2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:352 LDA @LOCAL09
    case 0xC268F4: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:353 CLC
    case 0xC268F6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:354 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    case 0xC268F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000086u : 0x00AA86u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:354 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    // Overlapping static entry reached from 0xC268F7.
    case 0xC268F9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:355 TAX
    case 0xC268FA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:356 LDA __BSS_START__,X
    case 0xC268FB: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:357 STA (@LOCAL05)
    case 0xC268FE: {
        Instruction step(cpu, 0x92, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:358 LDA @VIRTUAL04
    case 0xC26900: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:359 STA __BSS_START__,X
    case 0xC26902: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:361 INY
    case 0xC26905: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:363 CPY ENEMIES_IN_BATTLE
    case 0xC26906: {
        Instruction step(cpu, 0xCC, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:364 BCC @UNKNOWN29
    case 0xC26909: {
        Instruction step(cpu, 0x90, 0x0000B2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:365 INC @VIRTUAL02
    case 0xC2690B: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:367 LDA ENEMIES_IN_BATTLE
    case 0xC2690D: {
        Instruction step(cpu, 0xAD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:368 DEC
    case 0xC26910: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:369 STA @VIRTUAL04
    case 0xC26911: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:370 LDA @VIRTUAL02
    case 0xC26913: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:371 CMP @VIRTUAL04
    case 0xC26915: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:372 BCC @UNKNOWN28
    case 0xC26917: {
        Instruction step(cpu, 0x90, 0x00009Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:373 LDA @LOCAL07
    case 0xC26919: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:374 BEQ @UNKNOWN27
    case 0xC2691B: {
        Instruction step(cpu, 0xF0, 0x00008Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:375 LDX #0
    case 0xC2691D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:375 LDX #0
    // Overlapping static entry reached from 0xC2691D.
    case 0xC2691F: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:376 STX @LOCAL09
    case 0xC26920: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:377 TXA
    case 0xC26922: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:378 STA @LOCAL06
    case 0xC26923: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:379 BRA @UNKNOWN36
    case 0xC26925: {
        Instruction step(cpu, 0x80, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:381 ASL
    case 0xC26927: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:382 TAX
    case 0xC26928: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:383 LDA INSTANT_WIN_SORTED_OFFENSE,X
    case 0xC26929: {
        Instruction step(cpu, 0xBD, 0x00AA76u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:384 ASL
    case 0xC2692C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:385 STA @VIRTUAL04
    case 0xC2692D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:386 LDX @LOCAL09
    case 0xC2692F: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:387 TXA
    case 0xC26931: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:388 ASL
    case 0xC26932: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:389 STA @LOCAL05
    case 0xC26933: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:390 CLC
    case 0xC26935: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:391 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    case 0xC26936: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Eu : 0x00AA7Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:391 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    // Overlapping static entry reached from 0xC26936.
    case 0xC26938: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:392 STA @VIRTUAL02
    case 0xC26939: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:393 STA @LOCAL03
    case 0xC2693B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:394 LDX @VIRTUAL02
    case 0xC2693D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:395 LDA __BSS_START__,X
    case 0xC2693F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:396 TAY
    case 0xC26942: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:397 STY @LOCAL04
    case 0xC26943: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:398 LDY #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    case 0xC26945: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000086u : 0x00AA86u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:398 LDY #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    // Overlapping static entry reached from 0xC26945.
    case 0xC26947: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:399 LDA (@LOCAL05),Y
    case 0xC26948: {
        Instruction step(cpu, 0xB1, 0x00001Au, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:400 STA @LOCAL05
    case 0xC2694A: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:401 LDY @LOCAL04
    case 0xC2694C: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:402 TYA
    case 0xC2694E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:403 CLC
    case 0xC2694F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:404 ADC @LOCAL05
    case 0xC26950: {
        Instruction step(cpu, 0x65, 0x00001Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:405 STA @VIRTUAL02
    case 0xC26952: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:406 LDA @VIRTUAL04
    case 0xC26954: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:407 CMP @VIRTUAL02
    case 0xC26956: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:408 BCS @UNKNOWN34
    case 0xC26958: {
        Instruction step(cpu, 0xB0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:409 LDA @VIRTUAL04
    case 0xC2695A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:410 SEC
    case 0xC2695C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:411 SBC @LOCAL05
    case 0xC2695D: {
        Instruction step(cpu, 0xE5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:412 STA @VIRTUAL02
    case 0xC2695F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:413 TYA
    case 0xC26961: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:414 SEC
    case 0xC26962: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:415 SBC @VIRTUAL02
    case 0xC26963: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:416 LDX @LOCAL03
    case 0xC26965: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:417 STX @VIRTUAL02
    case 0xC26967: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:418 STA __BSS_START__,X
    case 0xC26969: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:419 BRA @UNKNOWN35
    case 0xC2696C: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:421 LDX @LOCAL09
    case 0xC2696E: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:422 INX
    case 0xC26970: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:423 STX @LOCAL09
    case 0xC26971: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:424 CPX ENEMIES_IN_BATTLE
    case 0xC26973: {
        Instruction step(cpu, 0xEC, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:425 BCC @UNKNOWN35
    case 0xC26976: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:426 LDA #1
    case 0xC26978: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:426 LDA #1
    // Overlapping static entry reached from 0xC26978.
    case 0xC2697A: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:427 BRA @UNKNOWN37
    case 0xC2697B: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:429 LDA @LOCAL06
    case 0xC2697D: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:430 INC
    case 0xC2697F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:431 STA @LOCAL06
    case 0xC26980: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:433 CMP @LOCAL08
    case 0xC26982: {
        Instruction step(cpu, 0xC5, 0x000020u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:434 BCC @UNKNOWN33
    case 0xC26984: {
        Instruction step(cpu, 0x90, 0x0000A1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:435 LDA #0
    case 0xC26986: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/instant_win_check.asm:435 LDA #0
    // Overlapping static entry reached from 0xC26986.
    case 0xC26988: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/instant_win_check.asm:437 END_C_FUNCTION
    case 0xC26989: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/instant_win_check.asm:437 END_C_FUNCTION
    case 0xC2698A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
