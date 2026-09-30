// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/spawn_vertical.asm
bool resume_overworld_spawn_vertical(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_vertical.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02B65: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B67: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B68: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B69: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC02B6A.
    case 0xC02B6C: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B6D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B6E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:14 TXY
    case 0xC02B6F: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:15 STY @LOCAL05
    case 0xC02B70: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:16 TAX
    case 0xC02B72: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:17 STX @LOCAL04
    case 0xC02B73: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:18 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC02B75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:18 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC02B75.
    case 0xC02B77: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:19 JSL GET_EVENT_FLAG
    case 0xC02B78: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:20 CMP #0
    case 0xC02B7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:20 CMP #0
    // Overlapping static entry reached from 0xC02B7C.
    case 0xC02B7E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_vertical.asm:21 BNEL @UNKNOWN14
    case 0xC02B7F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:21 BNEL @UNKNOWN14
    case 0xC02B81: {
        Instruction step(cpu, 0x4C, 0x002C4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:22 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC02B84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:22 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC02B84.
    case 0xC02B86: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:23 JSL GET_EVENT_FLAG
    case 0xC02B87: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:23 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02BDD.
    case 0xC02B88: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:23 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02B88.
    case 0xC02B8A: {
        Instruction step(cpu, 0xC2, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:24 CMP #0
    case 0xC02B8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:24 CMP #0
    // Overlapping static entry reached from 0xC02B8A.
    case 0xC02B8C: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:24 CMP #0
    // Overlapping static entry reached from 0xC02B8B.
    case 0xC02B8D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_vertical.asm:25 BNEL @UNKNOWN14
    case 0xC02B8E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:25 BNEL @UNKNOWN14
    case 0xC02B90: {
        Instruction step(cpu, 0x4C, 0x002C4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:26 LDA ENEMY_SPAWNS_ENABLED
    case 0xC02B93: {
        Instruction step(cpu, 0xAD, 0x004DE0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/spawn_vertical.asm:27 BEQL @UNKNOWN14
    case 0xC02B96: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:27 BEQL @UNKNOWN14
    case 0xC02B98: {
        Instruction step(cpu, 0x4C, 0x002C4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:28 LDX @LOCAL04
    case 0xC02B9B: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:29 TXA
    case 0xC02B9D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:30 AND #$0007
    case 0xC02B9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:30 AND #$0007
    // Overlapping static entry reached from 0xC02B9E.
    case 0xC02BA0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_vertical.asm:31 BNEL @UNKNOWN14
    case 0xC02BA1: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:31 BNEL @UNKNOWN14
    case 0xC02BA3: {
        Instruction step(cpu, 0x4C, 0x002C4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:32 CPX #$FFF0
    case 0xC02BA6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:32 CPX #$FFF0
    // Overlapping static entry reached from 0xC02BA6.
    case 0xC02BA8: {
        Instruction step(cpu, 0xFF, 0xA20390u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:33 BCC @UNKNOWN4
    case 0xC02BA9: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:34 LDX #0
    case 0xC02BAB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:34 LDX #0
    // Overlapping static entry reached from 0xC02BA8.
    case 0xC02BAC: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:34 LDX #0
    // Overlapping static entry reached from 0xC02BAB.
    case 0xC02BAD: {
        Instruction step(cpu, 0x00, 0x0000E0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:36 CPX #MAP_WIDTH_TILES8
    case 0xC02BAE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:36 CPX #MAP_WIDTH_TILES8
    // Overlapping static entry reached from 0xC02BAE.
    case 0xC02BB0: {
        Instruction step(cpu, 0x04, 0x000090u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:37 BCC @UNKNOWN5
    case 0xC02BB1: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:37 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC02BB0.
    case 0xC02BB2: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:38 JMP @UNKNOWN14
    case 0xC02BB3: {
        Instruction step(cpu, 0x4C, 0x002C4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:38 JMP @UNKNOWN14
    // Overlapping static entry reached from 0xC02BB2.
    case 0xC02BB4: {
        Instruction step(cpu, 0x4C, 0x008A2Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:40 TXA
    case 0xC02BB6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:41 ASL
    case 0xC02BB7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:42 PHP
    case 0xC02BB8: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:43 LSR
    case 0xC02BB9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:44 LSR
    case 0xC02BBA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:45 LSR
    case 0xC02BBB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:46 LSR
    case 0xC02BBC: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:47 PLP
    case 0xC02BBD: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:48 BCC @UNKNOWN6
    case 0xC02BBE: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:50 ORA #$E000
    case 0xC02BC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00E000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:50 ORA #$E000
    // Overlapping static entry reached from 0xC02BC0.
    case 0xC02BC2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x001485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:55 STA @LOCAL03
    case 0xC02BC3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:55 STA @LOCAL03
    // Overlapping static entry reached from 0xC02BC2.
    case 0xC02BC4: {
        Instruction step(cpu, 0x14, 0x0000A4u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:56 LDY @LOCAL05
    case 0xC02BC5: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:56 LDY @LOCAL05
    // Overlapping static entry reached from 0xC02BC4.
    case 0xC02BC6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:57 TYA
    case 0xC02BC7: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:58 ASL
    case 0xC02BC8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:59 PHP
    case 0xC02BC9: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:60 LSR
    case 0xC02BCA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:61 LSR
    case 0xC02BCB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:62 LSR
    case 0xC02BCC: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:63 LSR
    case 0xC02BCD: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:64 PLP
    case 0xC02BCE: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:65 BCC @UNKNOWN7
    case 0xC02BCF: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:67 ORA #$E000
    case 0xC02BD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00E000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:67 ORA #$E000
    // Overlapping static entry reached from 0xC02BD1.
    case 0xC02BD3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x001285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:72 STA @LOCAL02
    case 0xC02BD4: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:72 STA @LOCAL02
    // Overlapping static entry reached from 0xC02BD3.
    case 0xC02BD5: {
        Instruction step(cpu, 0x12, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:73 STA @VIRTUAL04
    case 0xC02BD6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:73 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02BD5.
    case 0xC02BD7: {
        Instruction step(cpu, 0x04, 0x000080u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:74 BRA @UNKNOWN12
    case 0xC02BD8: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:74 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC02BD7.
    case 0xC02BD9: {
        Instruction step(cpu, 0x61, 0x0000A5u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:76 LDA @VIRTUAL04
    case 0xC02BDA: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:76 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC02BD9.
    case 0xC02BDB: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:77 STA @LOCAL01
    case 0xC02BDC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:77 STA @LOCAL01
    // Overlapping static entry reached from 0xC02BDB.
    case 0xC02BDD: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:78 LDA #8
    case 0xC02BDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02BDD.
    case 0xC02BDF: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02BDE.
    case 0xC02BE0: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:79 STA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02BE1: {
        Instruction step(cpu, 0x8D, 0x004DE8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:80 STA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02BE4: {
        Instruction step(cpu, 0x8D, 0x004DEAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:81 LDA #1
    case 0xC02BE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:81 LDA #1
    // Overlapping static entry reached from 0xC02BE7.
    case 0xC02BE9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:82 STA @VIRTUAL02
    case 0xC02BEA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:84 LDX @VIRTUAL04
    case 0xC02BEC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:85 LDA @LOCAL03
    case 0xC02BEE: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:86 JSL UNKNOWN_C0263D
    case 0xC02BF0: {
        Instruction step(cpu, 0x22, 0xC0264Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:87 STA @LOCAL05
    case 0xC02BF4: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:88 LDY @VIRTUAL04
    case 0xC02BF6: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:89 INY
    case 0xC02BF8: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:90 STY @LOCAL00
    case 0xC02BF9: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:91 TYX
    case 0xC02BFB: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:92 LDA @LOCAL03
    case 0xC02BFC: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:93 JSL UNKNOWN_C0263D
    case 0xC02BFE: {
        Instruction step(cpu, 0x22, 0xC0264Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:94 TAX
    case 0xC02C02: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:95 LDA @LOCAL05
    case 0xC02C03: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:96 BEQ @UNKNOWN11
    case 0xC02C05: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:97 CPX @LOCAL05
    case 0xC02C07: {
        Instruction step(cpu, 0xE4, 0x000018u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:98 BNE @UNKNOWN11
    case 0xC02C09: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:99 LDA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02C0B: {
        Instruction step(cpu, 0xAD, 0x004DEAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:100 CLC
    case 0xC02C0E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:101 ADC #8
    case 0xC02C0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:101 ADC #8
    // Overlapping static entry reached from 0xC02C0F.
    case 0xC02C11: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:102 STA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02C12: {
        Instruction step(cpu, 0x8D, 0x004DEAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:103 LDY @LOCAL00
    case 0xC02C15: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:104 STY @VIRTUAL04
    case 0xC02C17: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:105 INC @VIRTUAL02
    case 0xC02C19: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:106 LDA @VIRTUAL02
    case 0xC02C1B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:107 CMP #6
    case 0xC02C1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:107 CMP #6
    // Overlapping static entry reached from 0xC02C1D.
    case 0xC02C1F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:108 BNE @UNKNOWN9
    case 0xC02C20: {
        Instruction step(cpu, 0xD0, 0x0000CAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:109 BRA @UNKNOWN11
    case 0xC02C22: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:111 LDY @LOCAL05
    case 0xC02C24: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:112 LDX @LOCAL01
    case 0xC02C26: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:113 LDA @LOCAL03
    case 0xC02C28: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:114 JSR UNKNOWN_C02668
    case 0xC02C2A: {
        Instruction step(cpu, 0x20, 0x002676u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:116 LDX @VIRTUAL02
    case 0xC02C2D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:117 LDA @VIRTUAL02
    case 0xC02C2F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:118 DEC
    case 0xC02C31: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:119 STA @VIRTUAL02
    case 0xC02C32: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:120 CPX #0
    case 0xC02C34: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:120 CPX #0
    // Overlapping static entry reached from 0xC02C34.
    case 0xC02C36: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:121 BNE @UNKNOWN10
    case 0xC02C37: {
        Instruction step(cpu, 0xD0, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:122 INC @VIRTUAL04
    case 0xC02C39: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:124 LDA @LOCAL02
    case 0xC02C3B: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:125 CLC
    case 0xC02C3D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:126 ADC #5
    case 0xC02C3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:126 ADC #5
    // Overlapping static entry reached from 0xC02C3E.
    case 0xC02C40: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:127 CLC
    case 0xC02C41: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn_vertical.asm:128 SBC @VIRTUAL04
    case 0xC02C42: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C44: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C46: {
        Instruction step(cpu, 0x10, 0x000092u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C48: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C4A: {
        Instruction step(cpu, 0x30, 0x00008Eu, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_vertical.asm:131 END_C_FUNCTION
    case 0xC02C4C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_vertical.asm:131 END_C_FUNCTION
    case 0xC02C4D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
