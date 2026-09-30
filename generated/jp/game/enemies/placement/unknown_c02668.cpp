// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C02668.asm
bool resume_unresolved_c0_c02668(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C02668.asm:3 BEGIN_C_FUNCTION
    case 0xC02676: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC02678: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC02679: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0267A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0267B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x00FFCEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC0267B.
    case 0xC0267D: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0267E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0267F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:22 STY @LOCAL0E
    case 0xC02680: {
        Instruction step(cpu, 0x84, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:22 STY @LOCAL0E
    // Overlapping static entry reached from 0xC0267D.
    case 0xC02681: {
        Instruction step(cpu, 0x30, 0x000086u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:23 STX @LOCAL0D
    case 0xC02682: {
        Instruction step(cpu, 0x86, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:23 STX @LOCAL0D
    // Overlapping static entry reached from 0xC02681.
    case 0xC02683: {
        Instruction step(cpu, 0x2E, 0x002C85u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:24 STA @LOCAL0C
    case 0xC02684: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:25 LDA DEBUG
    case 0xC02686: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:26 BEQ @UNKNOWN0
    case 0xC02689: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:27 JSL UNKNOWN_EFE759
    case 0xC0268B: {
        Instruction step(cpu, 0x22, 0xEFD07Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:28 CMP #0
    case 0xC0268F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:28 CMP #0
    // Overlapping static entry reached from 0xC0268F.
    case 0xC02691: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:29 BEQ @UNKNOWN0
    case 0xC02692: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:30 JSL RAND
    case 0xC02694: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:31 CMP #16
    case 0xC02698: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:31 CMP #16
    // Overlapping static entry reached from 0xC02698.
    case 0xC0269A: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:32 BCS @UNKNOWN0
    case 0xC0269B: {
        Instruction step(cpu, 0xB0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:33 STZ @LOCAL0B
    case 0xC0269D: {
        Instruction step(cpu, 0x64, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC0269F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Du : 0x00D52Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0269F.
    case 0xC026A1: {
        Instruction step(cpu, 0xD5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC026A2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC026A1.
    case 0xC026A3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC026A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC026A4.
    case 0xC026A6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC026A7: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:35 JMP @UNKNOWN31
    case 0xC026A9: {
        Instruction step(cpu, 0x4C, 0x002A60u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:37 LDA ENEMY_SPAWN_COUNTER
    case 0xC026AC: {
        Instruction step(cpu, 0xAD, 0x004E00u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:38 INC
    case 0xC026AF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:39 STA ENEMY_SPAWN_COUNTER
    case 0xC026B0: {
        Instruction step(cpu, 0x8D, 0x004E00u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:40 AND #$000F
    case 0xC026B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:40 AND #$000F
    // Overlapping static entry reached from 0xC026B3.
    case 0xC026B5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:41 BNEL @UNKNOWN10
    case 0xC026B6: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:41 BNEL @UNKNOWN10
    case 0xC026B8: {
        Instruction step(cpu, 0x4C, 0x002760u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:42 LDA @LOCAL0C
    case 0xC026BB: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:43 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026BD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:43 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:43 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:44 LSR
    case 0xC026C0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:45 LSR
    case 0xC026C1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:46 LSR
    case 0xC026C2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:47 LSR
    case 0xC026C3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:48 LSR
    case 0xC026C4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:49 ASL
    case 0xC026C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:50 STA @VIRTUAL04
    case 0xC026C6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:51 LDA @LOCAL0D
    case 0xC026C8: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:52 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026CA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:52 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:52 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:53 LSR
    case 0xC026CD: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:54 LSR
    case 0xC026CE: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:55 LSR
    case 0xC026CF: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:56 LSR
    case 0xC026D0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:58 CLC
    case 0xC026D7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:59 ADC @VIRTUAL04
    case 0xC026D8: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:60 TAX
    case 0xC026DA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:61 LDA f:MAP_DATA_PER_SECTOR_ATTRIBUTES_TABLE,X
    case 0xC026DB: {
        Instruction step(cpu, 0xBF, 0xD7B200u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:62 AND #$0007
    case 0xC026DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:62 AND #$0007
    // Overlapping static entry reached from 0xC026DF.
    case 0xC026E1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:63 BEQ @UNKNOWN2
    case 0xC026E2: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:64 CMP #1
    case 0xC026E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:64 CMP #1
    // Overlapping static entry reached from 0xC026E4.
    case 0xC026E6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:65 BEQ @UNKNOWN3
    case 0xC026E7: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:66 CMP #2
    case 0xC026E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:66 CMP #2
    // Overlapping static entry reached from 0xC026E9.
    case 0xC026EB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:67 BEQ @UNKNOWN4
    case 0xC026EC: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:68 CMP #3
    case 0xC026EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:68 CMP #3
    // Overlapping static entry reached from 0xC026EE.
    case 0xC026F0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:69 BEQ @UNKNOWN5
    case 0xC026F1: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:70 CMP #4
    case 0xC026F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:70 CMP #4
    // Overlapping static entry reached from 0xC026F3.
    case 0xC026F5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:71 BEQ @UNKNOWN6
    case 0xC026F6: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:72 CMP #5
    case 0xC026F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:72 CMP #5
    // Overlapping static entry reached from 0xC026F8.
    case 0xC026FA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:73 BEQ @UNKNOWN7
    case 0xC026FB: {
        Instruction step(cpu, 0xF0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:74 BRA @UNKNOWN8
    case 0xC026FD: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:76 LDA #2
    case 0xC026FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:76 LDA #2
    // Overlapping static entry reached from 0xC026FF.
    case 0xC02701: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:77 STA @VIRTUAL02
    case 0xC02702: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:78 STA @LOCAL0A
    case 0xC02704: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:79 BRA @UNKNOWN8
    case 0xC02706: {
        Instruction step(cpu, 0x80, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:81 LDA #0
    case 0xC02708: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:81 LDA #0
    // Overlapping static entry reached from 0xC02708.
    case 0xC0270A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:82 STA @VIRTUAL02
    case 0xC0270B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:83 STA @LOCAL0A
    case 0xC0270D: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:84 BRA @UNKNOWN8
    case 0xC0270F: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:86 LDA #1
    case 0xC02711: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:86 LDA #1
    // Overlapping static entry reached from 0xC02711.
    case 0xC02713: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:87 STA @VIRTUAL02
    case 0xC02714: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:88 STA @LOCAL0A
    case 0xC02716: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:89 BRA @UNKNOWN8
    case 0xC02718: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:91 LDA #0
    case 0xC0271A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:91 LDA #0
    // Overlapping static entry reached from 0xC0271A.
    case 0xC0271C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:92 STA @VIRTUAL02
    case 0xC0271D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:93 STA @LOCAL0A
    case 0xC0271F: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:94 BRA @UNKNOWN8
    case 0xC02721: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:96 LDA #5
    case 0xC02723: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:96 LDA #5
    // Overlapping static entry reached from 0xC02723.
    case 0xC02725: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:97 STA @VIRTUAL02
    case 0xC02726: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:98 STA @LOCAL0A
    case 0xC02728: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:99 BRA @UNKNOWN8
    case 0xC0272A: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:101 LDA #1
    case 0xC0272C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:101 LDA #1
    // Overlapping static entry reached from 0xC0272C.
    case 0xC0272E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:102 STA @VIRTUAL02
    case 0xC0272F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:103 STA @LOCAL0A
    case 0xC02731: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:105 JSL RAND
    case 0xC02733: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:106 LDX @LOCAL0A
    case 0xC02737: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:107 STX @VIRTUAL02
    case 0xC02739: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:108 LDY #100
    case 0xC0273B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:108 LDY #100
    // Overlapping static entry reached from 0xC0273B.
    case 0xC0273D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:109 JSL MODULUS16
    case 0xC0273E: {
        Instruction step(cpu, 0x22, 0xC09213u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:110 CMP @VIRTUAL02
    case 0xC02742: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:111 BCC @UNKNOWN9
    case 0xC02744: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:112 JMP @UNKNOWN32
    case 0xC02746: {
        Instruction step(cpu, 0x4C, 0x002A79u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:114 LDA #MAGIC_BUTTERFLY_BATTLEGROUP
    case 0xC02749: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0001E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:114 LDA #MAGIC_BUTTERFLY_BATTLEGROUP
    // Overlapping static entry reached from 0xC02749.
    case 0xC0274B: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:115 STA @LOCAL0B
    case 0xC0274C: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:115 STA @LOCAL0B
    // Overlapping static entry reached from 0xC0274B.
    case 0xC0274D: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:116 STA SPAWNING_ENEMY_GROUP
    case 0xC0274E: {
        Instruction step(cpu, 0x8D, 0x004DF8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC02751: {
        Instruction step(cpu, 0xAF, 0xD0D515u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC02755: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC02757: {
        Instruction step(cpu, 0xAF, 0xD0D517u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC0275B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:118 JMP @UNKNOWN31
    case 0xC0275D: {
        Instruction step(cpu, 0x4C, 0x002A60u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:120 LDY @LOCAL0E
    case 0xC02760: {
        Instruction step(cpu, 0xA4, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C02668.asm:121 BEQL @UNKNOWN32
    case 0xC02762: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:121 BEQL @UNKNOWN32
    case 0xC02764: {
        Instruction step(cpu, 0x4C, 0x002A79u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:122 LDA @LOCAL0C
    case 0xC02767: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:123 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02769: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:123 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0276A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:123 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0276B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:124 LSR
    case 0xC0276C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:125 LSR
    case 0xC0276D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:126 LSR
    case 0xC0276E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:127 LSR
    case 0xC0276F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:128 LSR
    case 0xC02770: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:129 STA @VIRTUAL02
    case 0xC02771: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:130 LDA @LOCAL0D
    case 0xC02773: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:131 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02775: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:131 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02776: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:131 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02777: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:132 LSR
    case 0xC02778: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:133 LSR
    case 0xC02779: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:134 LSR
    case 0xC0277A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:135 LSR
    case 0xC0277B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0277C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0277D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0277E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0277F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02780: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:137 CLC
    case 0xC02781: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:138 ADC @VIRTUAL02
    case 0xC02782: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:139 TAX
    case 0xC02784: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:140 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC02785: {
        Instruction step(cpu, 0xBF, 0xD7A800u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:141 AND #$00FF
    case 0xC02789: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC02789.
    case 0xC0278B: {
        Instruction step(cpu, 0x00, 0x00004Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:142 LSR
    case 0xC0278C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:143 LSR
    case 0xC0278D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:144 LSR
    case 0xC0278E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:145 CMP LOADED_MAP_TILE_COMBO
    case 0xC0278F: {
        Instruction step(cpu, 0xCD, 0x0046F4u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:146 BNEL @UNKNOWN32
    case 0xC02792: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:146 BNEL @UNKNOWN32
    case 0xC02794: {
        Instruction step(cpu, 0x4C, 0x002A79u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:147 STY ENEMY_SPAWN_ENCOUNTER_ID
    case 0xC02797: {
        Instruction step(cpu, 0x8C, 0x004DF2u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC0279A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x00B880u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0279A.
    case 0xC0279C: {
        Instruction step(cpu, 0xB8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_overflow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC0279D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC0279F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0279F.
    case 0xC027A1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC027A2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:149 TYA
    case 0xC027A4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:150 ASL
    case 0xC027A5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:151 ASL
    case 0xC027A6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:152 CLC
    case 0xC027A7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:153 ADC @VIRTUAL06
    case 0xC027A8: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:154 STA @VIRTUAL06
    case 0xC027AA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC027AC.
    case 0xC027AE: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027AF: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027B1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027B2: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027B4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027B6: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027B8: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027BA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027BC: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027BE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:157 LDA [@VIRTUAL06]
    case 0xC027C0: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:158 STA @LOCAL09
    case 0xC027C2: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:159 LDA #enemy_placement::groups
    case 0xC027C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:159 LDA #enemy_placement::groups
    // Overlapping static entry reached from 0xC027C4.
    case 0xC027C6: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027C7: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027C9: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027CB: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027CD: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:161 CLC
    case 0xC027CF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:162 ADC @VIRTUAL06
    case 0xC027D0: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:163 STA @VIRTUAL06
    case 0xC027D2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:164 STA @LOCAL08
    case 0xC027D4: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:165 LDA @VIRTUAL06+2
    case 0xC027D6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:166 STA @LOCAL08+2
    case 0xC027D8: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027DA: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027DC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027DE: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027E0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:168 INC @VIRTUAL06
    case 0xC027E2: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:169 INC @VIRTUAL06
    case 0xC027E4: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027E6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027E8: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027EA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027EC: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:171 LDA [@LOCAL07] ;enemy_placement::spawn_chance
    case 0xC027EE: {
        Instruction step(cpu, 0xA7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:172 AND #$00FF
    case 0xC027F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC027F0.
    case 0xC027F2: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:173 STA ENEMY_SPAWN_CHANCE
    case 0xC027F3: {
        Instruction step(cpu, 0x8D, 0x004DF6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:174 LDX #0
    case 0xC027F6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:174 LDX #0
    // Overlapping static entry reached from 0xC027F6.
    case 0xC027F8: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:175 STX @LOCAL06
    case 0xC027F9: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:176 LDA @LOCAL09
    case 0xC027FB: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:177 BEQ @UNKNOWN13
    case 0xC027FD: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:178 JSL GET_EVENT_FLAG
    case 0xC027FF: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:179 CMP #0
    case 0xC02803: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:179 CMP #0
    // Overlapping static entry reached from 0xC02803.
    case 0xC02805: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:180 BEQ @UNKNOWN13
    case 0xC02806: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC02808: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:182 LDY #enemy_placement::spawn_chance_alt
    case 0xC0280A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:182 LDY #enemy_placement::spawn_chance_alt
    // Overlapping static entry reached from 0xC0280A.
    case 0xC0280C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:183 LDA [@VIRTUAL0A],Y
    case 0xC0280D: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:184 REP #PROC_FLAGS::ACCUM8
    case 0xC0280F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:185 AND #$00FF
    case 0xC02811: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:185 AND #$00FF
    // Overlapping static entry reached from 0xC02811.
    case 0xC02813: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:186 STA ENEMY_SPAWN_CHANCE
    case 0xC02814: {
        Instruction step(cpu, 0x8D, 0x004DF6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:187 LDA [@LOCAL07]
    case 0xC02817: {
        Instruction step(cpu, 0xA7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:188 AND #$00FF
    case 0xC02819: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:188 AND #$00FF
    // Overlapping static entry reached from 0xC02819.
    case 0xC0281B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:189 BEQ @UNKNOWN13
    case 0xC0281C: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:190 LDX #8
    case 0xC0281E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:190 LDX #8
    // Overlapping static entry reached from 0xC0281E.
    case 0xC02820: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:191 STX @LOCAL06
    case 0xC02821: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:193 LDY ENEMY_SPAWN_CHANCE
    case 0xC02823: {
        Instruction step(cpu, 0xAC, 0x004DF6u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:194 STY @LOCAL09
    case 0xC02826: {
        Instruction step(cpu, 0x84, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:195 LDA PIRACY_FLAG
    case 0xC02828: {
        Instruction step(cpu, 0xAD, 0x00B6EAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:196 BNE @UNKNOWN14
    case 0xC0282B: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:197 JSL RAND
    case 0xC0282D: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:198 LDY @LOCAL09
    case 0xC02831: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:199 STY @VIRTUAL02
    case 0xC02833: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:200 LDY #100
    case 0xC02835: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:200 LDY #100
    // Overlapping static entry reached from 0xC02835.
    case 0xC02837: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:201 JSL MULT168
    case 0xC02838: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:202 XBA
    case 0xC0283C: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:203 AND #$00FF
    case 0xC0283D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC0283D.
    case 0xC0283F: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:204 CMP @VIRTUAL02
    case 0xC02840: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:205 BCC @UNKNOWN14
    case 0xC02842: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:206 JMP @UNKNOWN32
    case 0xC02844: {
        Instruction step(cpu, 0x4C, 0x002A79u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:208 JSL RAND
    case 0xC02847: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:209 AND #$0007
    case 0xC0284B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:209 AND #$0007
    // Overlapping static entry reached from 0xC0284B.
    case 0xC0284D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:210 STA @VIRTUAL02
    case 0xC0284E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:211 LDX @LOCAL06
    case 0xC02850: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:212 TXA
    case 0xC02852: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:213 CLC
    case 0xC02853: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:214 ADC @VIRTUAL02
    case 0xC02854: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:215 STA @LOCAL05
    case 0xC02856: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:216 LDX #0
    case 0xC02858: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:216 LDX #0
    // Overlapping static entry reached from 0xC02858.
    case 0xC0285A: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0285B: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0285D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0285F: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02861: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02863: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02865: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02867: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02869: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:220 LDA [@VIRTUAL0A] ;enemy_group::slots
    case 0xC0286B: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:221 AND #$00FF
    case 0xC0286D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC0286D.
    case 0xC0286F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:222 STA @VIRTUAL02
    case 0xC02870: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:223 TXA
    case 0xC02872: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:224 CLC
    case 0xC02873: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:225 ADC @VIRTUAL02
    case 0xC02874: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:226 TAX
    case 0xC02876: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:227 STX @VIRTUAL02
    case 0xC02877: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:228 LDA @LOCAL05
    case 0xC02879: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:229 CMP @VIRTUAL02
    case 0xC0287B: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:230 BCC @UNKNOWN16
    case 0xC0287D: {
        Instruction step(cpu, 0x90, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:231 LDA #.SIZEOF(enemy_group)
    case 0xC0287F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:231 LDA #.SIZEOF(enemy_group)
    // Overlapping static entry reached from 0xC0287F.
    case 0xC02881: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:232 CLC
    case 0xC02882: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:233 ADC @VIRTUAL06
    case 0xC02883: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:234 STA @VIRTUAL06
    case 0xC02885: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:235 STA @LOCAL08
    case 0xC02887: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:236 LDA @VIRTUAL06+2
    case 0xC02889: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:237 STA @LOCAL08+2
    case 0xC0288B: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:238 BRA @UNKNOWN15
    case 0xC0288D: {
        Instruction step(cpu, 0x80, 0x0000CCu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:240 LDY #enemy_group::group
    case 0xC0288F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:240 LDY #enemy_group::group
    // Overlapping static entry reached from 0xC0288F.
    case 0xC02891: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:241 LDA [@VIRTUAL06],Y
    case 0xC02892: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:242 STA @LOCAL0B
    case 0xC02894: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:243 STA SPAWNING_ENEMY_GROUP
    case 0xC02896: {
        Instruction step(cpu, 0x8D, 0x004DF8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC02899: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00C60Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC02899.
    case 0xC0289B: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0289C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0289B.
    case 0xC0289D: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0289E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0289D.
    case 0xC0289F: {
        Instruction step(cpu, 0xD0, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0289E.
    case 0xC028A0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC028A1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:245 LDA @LOCAL0B
    case 0xC028A3: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:246 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC028A5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:246 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC028A6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:246 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC028A7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:247 CLC
    case 0xC028A8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:248 ADC @VIRTUAL06
    case 0xC028A9: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:249 STA @VIRTUAL06
    case 0xC028AB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028AD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC028AD.
    case 0xC028AF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B0: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B3: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B7: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:251 LDA @LOCAL0D
    case 0xC028B9: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:721 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:722 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:723 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:724 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:725 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:726 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:727 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028C1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:253 CLC
    case 0xC028C2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:254 ADC @LOCAL0C
    case 0xC028C3: {
        Instruction step(cpu, 0x65, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:255 STA @LOCAL06
    case 0xC028C5: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:256 LDY #0
    case 0xC028C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:256 LDY #0
    // Overlapping static entry reached from 0xC028C7.
    case 0xC028C9: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:257 BRA @UNKNOWN19
    case 0xC028CA: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:259 TYA
    case 0xC028CC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:260 ASL
    case 0xC028CD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:261 TAX
    case 0xC028CE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:262 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC028CF: {
        Instruction step(cpu, 0xBD, 0x000A58u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:263 CMP #.LOWORD(-1)
    case 0xC028D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:263 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC028D2.
    case 0xC028D4: {
        Instruction step(cpu, 0xFF, 0xA515F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:264 BEQ @UNKNOWN18
    case 0xC028D5: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:265 LDA @LOCAL0B
    case 0xC028D7: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:265 LDA @LOCAL0B
    // Overlapping static entry reached from 0xC028D4.
    case 0xC028D8: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:266 CLC
    case 0xC028D9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:267 ADC #$8000
    case 0xC028DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:267 ADC #$8000
    // Overlapping static entry reached from 0xC028DA.
    case 0xC028DC: {
        Instruction step(cpu, 0x80, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:268 CMP ENTITY_NPC_IDS,X
    case 0xC028DD: {
        Instruction step(cpu, 0xDD, 0x003098u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:269 BNE @UNKNOWN18
    case 0xC028E0: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:270 LDA @LOCAL06
    case 0xC028E2: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:271 CMP ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC028E4: {
        Instruction step(cpu, 0xDD, 0x00314Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C02668.asm:272 BEQL @UNKNOWN32
    case 0xC028E7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:272 BEQL @UNKNOWN32
    case 0xC028E9: {
        Instruction step(cpu, 0x4C, 0x002A79u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:274 INY
    case 0xC028EC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:276 CPY #23
    case 0xC028ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:276 CPY #23
    // Overlapping static entry reached from 0xC028ED.
    case 0xC028EF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:277 BNE @UNKNOWN17
    case 0xC028F0: {
        Instruction step(cpu, 0xD0, 0x0000DAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:278 JMP @UNKNOWN31
    case 0xC028F2: {
        Instruction step(cpu, 0x4C, 0x002A60u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:280 LDY #battle_group_entry::id
    case 0xC028F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:280 LDY #battle_group_entry::id
    // Overlapping static entry reached from 0xC028F5.
    case 0xC028F7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:281 LDA [@VIRTUAL0A],Y
    case 0xC028F8: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:282 STA @LOCAL04
    case 0xC028FA: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC028FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC028FC.
    case 0xC028FE: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC028FF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC028FE.
    case 0xC02900: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC02901: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC02900.
    case 0xC02902: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC02901.
    case 0xC02903: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC02904: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC02906: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC02908: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0290A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0290C: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:285 LDA @LOCAL04
    case 0xC0290E: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:286 LDY #.SIZEOF(enemy_data)
    case 0xC02910: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:286 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC02910.
    case 0xC02912: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:287 JSL MULT168
    case 0xC02913: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:288 STA @LOCAL03
    case 0xC02917: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:292 CLC
    case 0xC02919: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:293 ADC @VIRTUAL06
    case 0xC0291A: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:294 STA @VIRTUAL06
    case 0xC0291C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:295 LDA [@VIRTUAL06]
    case 0xC0291E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:296 AND #$00FF
    case 0xC02920: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:296 AND #$00FF
    // Overlapping static entry reached from 0xC02920.
    case 0xC02922: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:297 STA SPAWNING_ENEMY_NAME
    case 0xC02923: {
        Instruction step(cpu, 0x8D, 0x004DFCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:298 LDA @LOCAL03
    case 0xC02926: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:299 CLC
    case 0xC02928: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:300 ADC #enemy_data::overworld_sprite
    case 0xC02929: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:300 ADC #enemy_data::overworld_sprite
    // Overlapping static entry reached from 0xC02929.
    case 0xC0292B: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0292C: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0292E: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02930: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02932: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:302 CLC
    case 0xC02934: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:303 ADC @VIRTUAL06
    case 0xC02935: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:304 STA @VIRTUAL06
    case 0xC02937: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:305 LDA [@VIRTUAL06]
    case 0xC02939: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:306 STA @LOCAL09
    case 0xC0293B: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:307 STA SPAWNING_ENEMY_SPRITE
    case 0xC0293D: {
        Instruction step(cpu, 0x8D, 0x004DFAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:308 LDA @LOCAL03
    case 0xC02940: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:309 CLC
    case 0xC02942: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:310 ADC #enemy_data::event_script
    case 0xC02943: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:310 ADC #enemy_data::event_script
    // Overlapping static entry reached from 0xC02943.
    case 0xC02945: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02946: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02948: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0294A: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0294C: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:312 CLC
    case 0xC0294E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:313 ADC @VIRTUAL06
    case 0xC0294F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:314 STA @VIRTUAL06
    case 0xC02951: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:315 LDA [@VIRTUAL06]
    case 0xC02953: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:316 STA @LOCAL03
    case 0xC02955: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:317 BNEL @UNKNOWN29
    case 0xC02957: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:317 BNEL @UNKNOWN29
    case 0xC02959: {
        Instruction step(cpu, 0x4C, 0x002A4Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:318 LDA #DEFAULT_ENEMY_MOVEMENT_STYLE
    case 0xC0295C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:318 LDA #DEFAULT_ENEMY_MOVEMENT_STYLE
    // Overlapping static entry reached from 0xC0295C.
    case 0xC0295E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:319 STA @LOCAL03
    case 0xC0295F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:320 JMP @UNKNOWN29
    case 0xC02961: {
        Instruction step(cpu, 0x4C, 0x002A4Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:322 LDA @LOCAL04
    case 0xC02964: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:323 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02966: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:323 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02966.
    case 0xC02968: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:324 BNE @UNKNOWN23
    case 0xC02969: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:325 LDA MAGIC_BUTTERFLY_SPAWNED
    case 0xC0296B: {
        Instruction step(cpu, 0xAD, 0x004DE6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:326 BNEL @UNKNOWN29
    case 0xC0296E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:326 BNEL @UNKNOWN29
    case 0xC02970: {
        Instruction step(cpu, 0x4C, 0x002A4Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:328 LDA OVERWORLD_ENEMY_COUNT
    case 0xC02973: {
        Instruction step(cpu, 0xAD, 0x004DE2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:329 CMP OVERWORLD_ENEMY_MAXIMUM
    case 0xC02976: {
        Instruction step(cpu, 0xCD, 0x004DE4u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:330 BNE @UNKNOWN24
    case 0xC02979: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:331 INC ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC0297B: {
        Instruction step(cpu, 0xEE, 0x004DEEu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:332 JMP @UNKNOWN29
    case 0xC0297E: {
        Instruction step(cpu, 0x4C, 0x002A4Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:334 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC02981: {
        Instruction step(cpu, 0x9C, 0x004DEEu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C0/C02668.asm:335 STZ_BADOPT @LOCAL00
    case 0xC02984: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C0/C02668.asm:335 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC02984.
    case 0xC02986: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:335 STZ_BADOPT @LOCAL00
    case 0xC02987: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:339 STA @LOCAL00+2
    case 0xC02989: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:341 LDY #.LOWORD(-1)
    case 0xC0298B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:341 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0298B.
    case 0xC0298D: {
        Instruction step(cpu, 0xFF, 0xA516A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:342 LDX @LOCAL03
    case 0xC0298E: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:343 LDA @LOCAL09
    case 0xC02990: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:343 LDA @LOCAL09
    // Overlapping static entry reached from 0xC0298D.
    case 0xC02991: {
        Instruction step(cpu, 0x26, 0x000022u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:344 JSL CREATE_ENTITY
    case 0xC02992: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:344 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC02991.
    case 0xC02993: {
        Instruction step(cpu, 0x5F, 0x85C01Eu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:345 STA @LOCAL02
    case 0xC02996: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:345 STA @LOCAL02
    // Overlapping static entry reached from 0xC02993.
    case 0xC02997: {
        Instruction step(cpu, 0x14, 0x000064u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:346 STZ @LOCAL06
    case 0xC02998: {
        Instruction step(cpu, 0x64, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:346 STZ @LOCAL06
    // Overlapping static entry reached from 0xC02997.
    case 0xC02999: {
        Instruction step(cpu, 0x1C, 0x005680u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:347 BRA @UNKNOWN27
    case 0xC0299A: {
        Instruction step(cpu, 0x80, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:349 JSL RAND
    case 0xC0299C: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:350 LDY ENEMY_SPAWN_RANGE_WIDTH
    case 0xC029A0: {
        Instruction step(cpu, 0xAC, 0x004DE8u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:351 JSL MODULUS16
    case 0xC029A3: {
        Instruction step(cpu, 0x22, 0xC09213u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:352 STA @VIRTUAL02
    case 0xC029A7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:353 LDA @LOCAL0C
    case 0xC029A9: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:354 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:354 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029AC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:354 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:355 CLC
    case 0xC029AE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:356 ADC @VIRTUAL02
    case 0xC029AF: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:357 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029B1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:357 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029B2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:357 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:358 STA @VIRTUAL04
    case 0xC029B4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:358 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02A16.
    case 0xC029B5: {
        Instruction step(cpu, 0x04, 0x000022u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:359 JSL RAND
    case 0xC029B6: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:359 JSL RAND
    // Overlapping static entry reached from 0xC029B5.
    case 0xC029B7: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:359 JSL RAND
    // Overlapping static entry reached from 0xC029B7.
    case 0xC029B8: {
        Instruction step(cpu, 0x8E, 0x00ACC0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:360 LDY ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC029BA: {
        Instruction step(cpu, 0xAC, 0x004DEAu, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:360 LDY ENEMY_SPAWN_RANGE_HEIGHT
    // Overlapping static entry reached from 0xC029B8.
    case 0xC029BB: {
        Instruction step(cpu, 0xEA, 0x000000u, 1u, AddressMode::Implied);
        step.no_operation();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:360 LDY ENEMY_SPAWN_RANGE_HEIGHT
    // Overlapping static entry reached from 0xC029BB.
    case 0xC029BC: {
        Instruction step(cpu, 0x4D, 0x001322u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:361 JSL MODULUS16
    case 0xC029BD: {
        Instruction step(cpu, 0x22, 0xC09213u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:361 JSL MODULUS16
    // Overlapping static entry reached from 0xC029BC.
    case 0xC029BF: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:362 STA @VIRTUAL02
    case 0xC029C1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:363 LDA @LOCAL0D
    case 0xC029C3: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:364 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:364 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:364 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:365 CLC
    case 0xC029C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:366 ADC @VIRTUAL02
    case 0xC029C9: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:367 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:367 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:367 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029CD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:368 STA @VIRTUAL02
    case 0xC029CE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:369 LDY @LOCAL02
    case 0xC029D0: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:370 LDX @VIRTUAL02
    case 0xC029D2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:371 LDA @VIRTUAL04
    case 0xC029D4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:372 JSL UNKNOWN_C05F33
    case 0xC029D6: {
        Instruction step(cpu, 0x22, 0xC06161u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:373 STA @LOCAL01
    case 0xC029DA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:374 AND #$00D0
    case 0xC029DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:374 AND #$00D0
    // Overlapping static entry reached from 0xC029DC.
    case 0xC029DE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:375 BNE @UNKNOWN26
    case 0xC029DF: {
        Instruction step(cpu, 0xD0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:376 LDY @LOCAL04
    case 0xC029E1: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:377 LDX @LOCAL02
    case 0xC029E3: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:378 LDA @LOCAL01
    case 0xC029E5: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:379 JSL UNKNOWN_C05DE7
    case 0xC029E7: {
        Instruction step(cpu, 0x22, 0xC06015u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:380 CMP #0
    case 0xC029EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:380 CMP #0
    // Overlapping static entry reached from 0xC029EB.
    case 0xC029ED: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:381 BEQ @UNKNOWN28
    case 0xC029EE: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:383 INC @LOCAL06
    case 0xC029F0: {
        Instruction step(cpu, 0xE6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:385 LDA @LOCAL06
    case 0xC029F2: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:386 CMP #20
    case 0xC029F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:386 CMP #20
    // Overlapping static entry reached from 0xC029F4.
    case 0xC029F6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:387 BNE @UNKNOWN25
    case 0xC029F7: {
        Instruction step(cpu, 0xD0, 0x0000A3u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:388 LDA @LOCAL02
    case 0xC029F9: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:389 JSL UNKNOWN_C02140
    case 0xC029FB: {
        Instruction step(cpu, 0x22, 0xC0214Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:390 BRA @UNKNOWN29
    case 0xC029FF: {
        Instruction step(cpu, 0x80, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:392 LDA @LOCAL02
    case 0xC02A01: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:393 ASL
    case 0xC02A03: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:394 TAX
    case 0xC02A04: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:395 STX @LOCAL06
    case 0xC02A05: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:396 LDA @VIRTUAL04
    case 0xC02A07: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:397 STA ENTITY_ABS_X_TABLE,X
    case 0xC02A09: {
        Instruction step(cpu, 0x9D, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:398 LDA @VIRTUAL02
    case 0xC02A0C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:399 STA ENTITY_ABS_Y_TABLE,X
    case 0xC02A0E: {
        Instruction step(cpu, 0x9D, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:400 LDA @LOCAL0B
    case 0xC02A11: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:401 CLC
    case 0xC02A13: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:402 ADC #$8000
    case 0xC02A14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:402 ADC #$8000
    // Overlapping static entry reached from 0xC02A14.
    case 0xC02A16: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:403 STA ENTITY_NPC_IDS,X
    case 0xC02A17: {
        Instruction step(cpu, 0x9D, 0x003098u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:404 LDA @LOCAL04
    case 0xC02A1A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:405 STA ENTITY_ENEMY_IDS,X
    case 0xC02A1C: {
        Instruction step(cpu, 0x9D, 0x003110u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:406 LDA @LOCAL0D
    case 0xC02A1F: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:721 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A21: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:722 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A22: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:723 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A23: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:724 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A24: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:725 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A25: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:726 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A26: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:727 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A27: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:408 CLC
    case 0xC02A28: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:409 ADC @LOCAL0C
    case 0xC02A29: {
        Instruction step(cpu, 0x65, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:410 STA ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC02A2B: {
        Instruction step(cpu, 0x9D, 0x00314Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:411 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC02A2E: {
        Instruction step(cpu, 0x9E, 0x00305Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:412 JSL RAND
    case 0xC02A31: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:413 LDX @LOCAL06
    case 0xC02A35: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:414 STA ENTITY_WEAK_ENEMY_VALUE,X
    case 0xC02A37: {
        Instruction step(cpu, 0x9D, 0x003584u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:415 INC OVERWORLD_ENEMY_COUNT
    case 0xC02A3A: {
        Instruction step(cpu, 0xEE, 0x004DE2u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:416 LDA @LOCAL04
    case 0xC02A3D: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:417 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02A3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:417 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02A3F.
    case 0xC02A41: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:418 BNE @UNKNOWN29
    case 0xC02A42: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:419 LDA #1
    case 0xC02A44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:419 LDA #1
    // Overlapping static entry reached from 0xC02A44.
    case 0xC02A46: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:420 STA MAGIC_BUTTERFLY_SPAWNED
    case 0xC02A47: {
        Instruction step(cpu, 0x8D, 0x004DE6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:422 LDX ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    case 0xC02A4A: {
        Instruction step(cpu, 0xAE, 0x004DF4u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:423 DEC ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    case 0xC02A4D: {
        Instruction step(cpu, 0xCE, 0x004DF4u, 3u, AddressMode::Absolute);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:424 CPX #0
    case 0xC02A50: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:424 CPX #0
    // Overlapping static entry reached from 0xC02A50.
    case 0xC02A52: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:425 BNEL @UNKNOWN22
    case 0xC02A53: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:425 BNEL @UNKNOWN22
    case 0xC02A55: {
        Instruction step(cpu, 0x4C, 0x002964u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:426 LDA #3
    case 0xC02A58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:426 LDA #3
    // Overlapping static entry reached from 0xC02A58.
    case 0xC02A5A: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:427 CLC
    case 0xC02A5B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:428 ADC @VIRTUAL0A
    case 0xC02A5C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:429 STA @VIRTUAL0A
    case 0xC02A5E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A60: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A62: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A64: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A66: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:432 LDA [@VIRTUAL06] ;battle_group_entry::count
    case 0xC02A68: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:433 AND #$00FF
    case 0xC02A6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:433 AND #$00FF
    // Overlapping static entry reached from 0xC02A6A.
    case 0xC02A6C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:434 TAX
    case 0xC02A6D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:435 STX ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    case 0xC02A6E: {
        Instruction step(cpu, 0x8E, 0x004DF4u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:436 CPX #>-1
    case 0xC02A71: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C02668.asm:436 CPX #>-1
    // Overlapping static entry reached from 0xC02A71.
    case 0xC02A73: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:437 BNEL @UNKNOWN20
    case 0xC02A74: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:437 BNEL @UNKNOWN20
    case 0xC02A76: {
        Instruction step(cpu, 0x4C, 0x0028F5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C02668.asm:439 END_C_FUNCTION
    case 0xC02A79: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C02668.asm:439 END_C_FUNCTION
    case 0xC02A7A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
