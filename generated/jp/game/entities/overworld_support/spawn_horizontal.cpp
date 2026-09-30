// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/spawn_horizontal.asm
bool resume_overworld_spawn_horizontal(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_horizontal.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02A7B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A7D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A7E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A7F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC02A80.
    case 0xC02A82: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A83: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A84: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:14 STX @LOCAL05
    case 0xC02A85: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:14 STX @LOCAL05
    // Overlapping static entry reached from 0xC02A82.
    case 0xC02A86: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:15 TAY
    case 0xC02A87: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:16 STY @LOCAL04
    case 0xC02A88: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:17 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC02A8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:17 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC02A8A.
    case 0xC02A8C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:18 JSL GET_EVENT_FLAG
    case 0xC02A8D: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:19 CMP #0
    case 0xC02A91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:19 CMP #0
    // Overlapping static entry reached from 0xC02A91.
    case 0xC02A93: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_horizontal.asm:20 BNEL @RETURN
    case 0xC02A94: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:20 BNEL @RETURN
    case 0xC02A96: {
        Instruction step(cpu, 0x4C, 0x002B63u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:21 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC02A99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:21 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC02A99.
    case 0xC02A9B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:22 JSL GET_EVENT_FLAG
    case 0xC02A9C: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:22 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02AF4.
    case 0xC02A9F: {
        Instruction step(cpu, 0xC2, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:23 CMP #0
    case 0xC02AA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:23 CMP #0
    // Overlapping static entry reached from 0xC02A9F.
    case 0xC02AA1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:23 CMP #0
    // Overlapping static entry reached from 0xC02AA0.
    case 0xC02AA2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_horizontal.asm:24 BNEL @RETURN
    case 0xC02AA3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:24 BNEL @RETURN
    case 0xC02AA5: {
        Instruction step(cpu, 0x4C, 0x002B63u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:25 LDA ENEMY_SPAWNS_ENABLED
    case 0xC02AA8: {
        Instruction step(cpu, 0xAD, 0x004DE0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/spawn_horizontal.asm:26 BEQL @RETURN
    case 0xC02AAB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:26 BEQL @RETURN
    case 0xC02AAD: {
        Instruction step(cpu, 0x4C, 0x002B63u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:27 LDX @LOCAL05
    case 0xC02AB0: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:28 TXA
    case 0xC02AB2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:29 AND #$0007
    case 0xC02AB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:29 AND #$0007
    // Overlapping static entry reached from 0xC02AB3.
    case 0xC02AB5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_horizontal.asm:30 BNEL @RETURN
    case 0xC02AB6: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:30 BNEL @RETURN
    case 0xC02AB8: {
        Instruction step(cpu, 0x4C, 0x002B63u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:31 CPX #$FFF0
    case 0xC02ABB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:31 CPX #$FFF0
    // Overlapping static entry reached from 0xC02ABB.
    case 0xC02ABD: {
        Instruction step(cpu, 0xFF, 0xA20390u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:32 BCC @UNKNOWN4
    case 0xC02ABE: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:33 LDX #0
    case 0xC02AC0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:33 LDX #0
    // Overlapping static entry reached from 0xC02ABD.
    case 0xC02AC1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:33 LDX #0
    // Overlapping static entry reached from 0xC02AC0.
    case 0xC02AC2: {
        Instruction step(cpu, 0x00, 0x0000E0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:35 CPX #MAP_HEIGHT_TILES8
    case 0xC02AC3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:35 CPX #MAP_HEIGHT_TILES8
    // Overlapping static entry reached from 0xC02AC3.
    case 0xC02AC5: {
        Instruction step(cpu, 0x05, 0x000090u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:36 BCC @UNKNOWN5
    case 0xC02AC6: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:36 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC02AC5.
    case 0xC02AC7: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:37 JMP @RETURN
    case 0xC02AC8: {
        Instruction step(cpu, 0x4C, 0x002B63u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:37 JMP @RETURN
    // Overlapping static entry reached from 0xC02AC7.
    case 0xC02AC9: {
        Instruction step(cpu, 0x63, 0x00002Bu, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:39 LDY @LOCAL04
    case 0xC02ACB: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:40 TYA
    case 0xC02ACD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:41 ASL
    case 0xC02ACE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:42 PHP
    case 0xC02ACF: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:43 LSR
    case 0xC02AD0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:44 LSR
    case 0xC02AD1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:45 LSR
    case 0xC02AD2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:46 LSR
    case 0xC02AD3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:47 PLP
    case 0xC02AD4: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:48 BCC @UNKNOWN6
    case 0xC02AD5: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:50 ORA #$E000
    case 0xC02AD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00E000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:50 ORA #$E000
    // Overlapping static entry reached from 0xC02AD7.
    case 0xC02AD9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x001485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:55 STA @LOCAL03
    case 0xC02ADA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:55 STA @LOCAL03
    // Overlapping static entry reached from 0xC02AD9.
    case 0xC02ADB: {
        Instruction step(cpu, 0x14, 0x00008Au, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:56 TXA
    case 0xC02ADC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:57 ASL
    case 0xC02ADD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:58 PHP
    case 0xC02ADE: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:59 LSR
    case 0xC02ADF: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:60 LSR
    case 0xC02AE0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:61 LSR
    case 0xC02AE1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:62 LSR
    case 0xC02AE2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:63 PLP
    case 0xC02AE3: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:64 BCC @UNKNOWN7
    case 0xC02AE4: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:66 ORA #$E000
    case 0xC02AE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00E000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:66 ORA #$E000
    // Overlapping static entry reached from 0xC02AE6.
    case 0xC02AE8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x001285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:71 STA @LOCAL02
    case 0xC02AE9: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:71 STA @LOCAL02
    // Overlapping static entry reached from 0xC02AE8.
    case 0xC02AEA: {
        Instruction step(cpu, 0x12, 0x0000A5u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:72 LDA @LOCAL03
    case 0xC02AEB: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:72 LDA @LOCAL03
    // Overlapping static entry reached from 0xC02AEA.
    case 0xC02AEC: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:73 STA @VIRTUAL04
    case 0xC02AED: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:73 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02AEC.
    case 0xC02AEE: {
        Instruction step(cpu, 0x04, 0x000080u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:74 BRA @UNKNOWN12
    case 0xC02AEF: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:74 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC02AEE.
    case 0xC02AF0: {
        Instruction step(cpu, 0x61, 0x0000A5u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:76 LDA @VIRTUAL04
    case 0xC02AF1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:76 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC02AF0.
    case 0xC02AF2: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:77 STA @LOCAL01
    case 0xC02AF3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:77 STA @LOCAL01
    // Overlapping static entry reached from 0xC02AF2.
    case 0xC02AF4: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:78 LDA #8
    case 0xC02AF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02AF4.
    case 0xC02AF6: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02AF5.
    case 0xC02AF7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:79 STA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02AF8: {
        Instruction step(cpu, 0x8D, 0x004DE8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:80 STA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02AFB: {
        Instruction step(cpu, 0x8D, 0x004DEAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:81 LDA #1
    case 0xC02AFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:81 LDA #1
    // Overlapping static entry reached from 0xC02AFE.
    case 0xC02B00: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:82 STA @VIRTUAL02
    case 0xC02B01: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:84 LDX @LOCAL02
    case 0xC02B03: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:85 LDA @VIRTUAL04
    case 0xC02B05: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:86 JSL UNKNOWN_C0263D
    case 0xC02B07: {
        Instruction step(cpu, 0x22, 0xC0264Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:87 STA @LOCAL04
    case 0xC02B0B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:88 LDY @VIRTUAL04
    case 0xC02B0D: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:89 INY
    case 0xC02B0F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:90 STY @LOCAL00
    case 0xC02B10: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:91 LDX @LOCAL02
    case 0xC02B12: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:92 TYA
    case 0xC02B14: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:93 JSL UNKNOWN_C0263D
    case 0xC02B15: {
        Instruction step(cpu, 0x22, 0xC0264Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:94 TAX
    case 0xC02B19: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:95 LDA @LOCAL04
    case 0xC02B1A: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:96 BEQ @UNKNOWN11
    case 0xC02B1C: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:97 CPX @LOCAL04
    case 0xC02B1E: {
        Instruction step(cpu, 0xE4, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:98 BNE @UNKNOWN11
    case 0xC02B20: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:99 LDA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02B22: {
        Instruction step(cpu, 0xAD, 0x004DE8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:100 CLC
    case 0xC02B25: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:101 ADC #8
    case 0xC02B26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:101 ADC #8
    // Overlapping static entry reached from 0xC02B26.
    case 0xC02B28: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:102 STA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02B29: {
        Instruction step(cpu, 0x8D, 0x004DE8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:103 LDY @LOCAL00
    case 0xC02B2C: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:104 STY @VIRTUAL04
    case 0xC02B2E: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:105 INC @VIRTUAL02
    case 0xC02B30: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:106 LDA @VIRTUAL02
    case 0xC02B32: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:107 CMP #6
    case 0xC02B34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:107 CMP #6
    // Overlapping static entry reached from 0xC02B34.
    case 0xC02B36: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:108 BNE @UNKNOWN9
    case 0xC02B37: {
        Instruction step(cpu, 0xD0, 0x0000CAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:109 BRA @UNKNOWN11
    case 0xC02B39: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:111 LDY @LOCAL04
    case 0xC02B3B: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:112 LDX @LOCAL02
    case 0xC02B3D: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:113 LDA @LOCAL01
    case 0xC02B3F: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:114 JSR UNKNOWN_C02668
    case 0xC02B41: {
        Instruction step(cpu, 0x20, 0x002676u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:116 LDX @VIRTUAL02
    case 0xC02B44: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:117 LDA @VIRTUAL02
    case 0xC02B46: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:118 DEC
    case 0xC02B48: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:119 STA @VIRTUAL02
    case 0xC02B49: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:120 CPX #0
    case 0xC02B4B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:120 CPX #0
    // Overlapping static entry reached from 0xC02B4B.
    case 0xC02B4D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:121 BNE @UNKNOWN10
    case 0xC02B4E: {
        Instruction step(cpu, 0xD0, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:122 INC @VIRTUAL04
    case 0xC02B50: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:124 LDA @LOCAL03
    case 0xC02B52: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:125 CLC
    case 0xC02B54: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:126 ADC #5
    case 0xC02B55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:126 ADC #5
    // Overlapping static entry reached from 0xC02B55.
    case 0xC02B57: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:127 CLC
    case 0xC02B58: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn_horizontal.asm:128 SBC @VIRTUAL04
    case 0xC02B59: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B5B: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B5D: {
        Instruction step(cpu, 0x10, 0x000092u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B5F: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B61: {
        Instruction step(cpu, 0x30, 0x00008Eu, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_horizontal.asm:131 END_C_FUNCTION
    case 0xC02B63: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_horizontal.asm:131 END_C_FUNCTION
    case 0xC02B64: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
