// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/inflict_sunstroke_check.asm
bool resume_overworld_inflict_sunstroke_check(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20000: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    case 0xC20002: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    case 0xC20003: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    case 0xC20004: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20004.
    case 0xC20006: {
        Instruction step(cpu, 0xFF, 0x98AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    case 0xC20007: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:8 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xC20008: {
        Instruction step(cpu, 0xAD, 0x005D98u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:8 LDA OVERWORLD_STATUS_SUPPRESSION
    // Overlapping static entry reached from 0xC20077.
    case 0xC20009: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:8 LDA OVERWORLD_STATUS_SUPPRESSION
    // Overlapping static entry reached from 0xC20006.
    case 0xC2000A: {
        Instruction step(cpu, 0x5D, 0x0003F0u, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:9 BNEL @UNKNOWN11
    case 0xC2000B: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:9 BNEL @UNKNOWN11
    case 0xC2000D: {
        Instruction step(cpu, 0x4C, 0x0000B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:10 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC20010: {
        Instruction step(cpu, 0xAD, 0x009881u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:11 AND #$000C
    case 0xC20013: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:11 AND #$000C
    // Overlapping static entry reached from 0xC20013.
    case 0xC20015: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:12 CMP #4
    case 0xC20016: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:12 CMP #4
    // Overlapping static entry reached from 0xC20016.
    case 0xC20018: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:13 BNEL @UNKNOWN11
    case 0xC20019: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:13 BNEL @UNKNOWN11
    case 0xC2001B: {
        Instruction step(cpu, 0x4C, 0x0000B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:14 LDX #0
    case 0xC2001E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:14 LDX #0
    // Overlapping static entry reached from 0xC2001E.
    case 0xC20020: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:15 STX @LOCAL01
    case 0xC20021: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:16 JMP @UNKNOWN10
    case 0xC20023: {
        Instruction step(cpu, 0x4C, 0x0000ABu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC20026: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:19 TXA
    case 0xC20028: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:20 CLC
    case 0xC20029: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:21 ADC #.LOWORD(GAME_STATE)
    case 0xC2002A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F5u : 0x0097F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:21 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2002A.
    case 0xC2002C: {
        Instruction step(cpu, 0x97, 0x0000A8u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:22 TAY
    case 0xC2002D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:23 LDA __BSS_START__ + game_state::unknown96,Y
    case 0xC2002E: {
        Instruction step(cpu, 0xB9, 0x000096u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:24 AND #$00FF
    case 0xC20031: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC20031.
    case 0xC20033: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:25 BEQL @UNKNOWN11
    case 0xC20034: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:25 BEQL @UNKNOWN11
    case 0xC20036: {
        Instruction step(cpu, 0x4C, 0x0000B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:26 AND #$00FF
    case 0xC20039: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC20039.
    case 0xC2003B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:27 CLC
    case 0xC2003C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:28 SBC #4
    case 0xC2003D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:28 SBC #4
    // Overlapping static entry reached from 0xC2003D.
    case 0xC2003F: {
        Instruction step(cpu, 0x00, 0x000070u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:29 BRANCHGTS @UNKNOWN11
    case 0xC20040: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:29 BRANCHGTS @UNKNOWN11
    case 0xC20042: {
        Instruction step(cpu, 0x10, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:29 BRANCHGTS @UNKNOWN11
    case 0xC20044: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:29 BRANCHGTS @UNKNOWN11
    case 0xC20046: {
        Instruction step(cpu, 0x30, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:30 LDA __BSS_START__+game_state::player_controlled_party_members,Y
    case 0xC20048: {
        Instruction step(cpu, 0xB9, 0x00009Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:31 AND #$00FF
    case 0xC2004B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2004B.
    case 0xC2004D: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:32 ASL
    case 0xC2004E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:33 TAX
    case 0xC2004F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:34 LDY CHOSEN_FOUR_PTRS,X
    case 0xC20050: {
        Instruction step(cpu, 0xBC, 0x004DC8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:35 STY CURRENT_PARTY_MEMBER_TICK
    case 0xC20053: {
        Instruction step(cpu, 0x8C, 0x004DC6u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:36 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC20056: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:37 AND #$00FF
    case 0xC20059: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC20059.
    case 0xC2005B: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:38 TAY
    case 0xC2005C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:39 BEQ @UNKNOWN6
    case 0xC2005D: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:40 CPY #STATUS_0::COLD
    case 0xC2005F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:40 CPY #STATUS_0::COLD
    // Overlapping static entry reached from 0xC2005F.
    case 0xC20061: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:41 BNE @UNKNOWN9
    case 0xC20062: {
        Instruction step(cpu, 0xD0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:43 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC20064: {
        Instruction step(cpu, 0xAE, 0x004DC6u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:44 LDA a:char_struct::guts,X
    case 0xC20067: {
        Instruction step(cpu, 0xBD, 0x000018u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:45 AND #$00FF
    case 0xC2006A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC2006A.
    case 0xC2006C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:46 STA @VIRTUAL02
    case 0xC2006D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:47 LDA #30
    case 0xC2006F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:47 LDA #30
    // Overlapping static entry reached from 0xC2006F.
    case 0xC20071: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:48 SEC
    case 0xC20072: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:49 SBC @VIRTUAL02
    case 0xC20073: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:50 CMP #$8000
    case 0xC20075: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:50 CMP #$8000
    // Overlapping static entry reached from 0xC20075.
    case 0xC20077: {
        Instruction step(cpu, 0x80, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:51 BLTEQ @UNKNOWN7
    case 0xC20078: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:51 BLTEQ @UNKNOWN7
    case 0xC2007A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:52 LDA #1
    case 0xC2007C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:52 LDA #1
    // Overlapping static entry reached from 0xC2007C.
    case 0xC2007E: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:54 LDY #100
    case 0xC2007F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:54 LDY #100
    // Overlapping static entry reached from 0xC2007F.
    case 0xC20081: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:55 XBA
    case 0xC20082: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:56 AND #$FF00
    case 0xC20083: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:56 AND #$FF00
    // Overlapping static entry reached from 0xC20083.
    case 0xC20085: {
        Instruction step(cpu, 0xFF, 0x915B22u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:57 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20086: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:57 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC20085.
    case 0xC20089: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:58 STA @LOCAL00
    case 0xC2008A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:58 STA @LOCAL00
    // Overlapping static entry reached from 0xC20089.
    case 0xC2008B: {
        Instruction step(cpu, 0x0E, 0x009A22u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:59 JSL RAND
    case 0xC2008C: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:59 JSL RAND
    // Overlapping static entry reached from 0xC2008B.
    case 0xC2008E: {
        Instruction step(cpu, 0x8E, 0x00A8C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:60 TAY
    case 0xC20090: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:61 LDA @LOCAL00
    case 0xC20091: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:62 STA @VIRTUAL02
    case 0xC20093: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:63 TYA
    case 0xC20095: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:64 CMP @VIRTUAL02
    case 0xC20096: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:65 BGT @UNKNOWN9
    case 0xC20098: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:65 BGT @UNKNOWN9
    case 0xC2009A: {
        Instruction step(cpu, 0xB0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC2009C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:66 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2049D.
    case 0xC2009D: {
        Instruction step(cpu, 0x20, 0x0006A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:67 LDA #STATUS_0::SUNSTROKE
    case 0xC2009E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x00AE06u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:68 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC200A0: {
        Instruction step(cpu, 0xAE, 0x004DC6u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:68 LDX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC2009E.
    case 0xC200A1: {
        Instruction step(cpu, 0xC6, 0x00004Du, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:69 STA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC200A3: {
        Instruction step(cpu, 0x9D, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:71 LDX @LOCAL01
    case 0xC200A6: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:72 INX
    case 0xC200A8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:73 STX @LOCAL01
    case 0xC200A9: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:75 CPX #6
    case 0xC200AB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:75 CPX #6
    // Overlapping static entry reached from 0xC200AB.
    case 0xC200AD: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:76 BCCL @UNKNOWN2
    case 0xC200AE: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:76 BCCL @UNKNOWN2
    case 0xC200B0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:76 BCCL @UNKNOWN2
    case 0xC200B2: {
        Instruction step(cpu, 0x4C, 0x000026u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/inflict_sunstroke_check.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC200B5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:79 END_C_FUNCTION
    case 0xC200B7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:79 END_C_FUNCTION
    case 0xC200B8: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
