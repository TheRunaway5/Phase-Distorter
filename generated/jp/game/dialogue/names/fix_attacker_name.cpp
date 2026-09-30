// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/fix_attacker_name.asm
bool resume_text_fix_attacker_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/fix_attacker_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23AB9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23ABB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23ABC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23ABD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23ABE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23ABE.
    case 0xC23AC0: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23AC1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23AC2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:11 TAY
    case 0xC23AC3: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:12 STY @LOCAL03
    case 0xC23AC4: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC23AC6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/text/fix_attacker_name.asm:17 STZ_BADOPT @LOCAL00
    case 0xC23AC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:17 STZ_BADOPT @LOCAL00
    case 0xC23ACA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:17 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC23AC8.
    case 0xC23ACB: {
        Instruction step(cpu, 0x0E, 0x000CA2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:18 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    case 0xC23ACC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:18 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    // Overlapping static entry reached from 0xC23ACC.
    case 0xC23ACE: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC23ACF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:20 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23AD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x00AB85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:20 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23AD1.
    case 0xC23AD3: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:21 JSL MEMSET16
    case 0xC23AD4: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:22 LDX CURRENT_ATTACKER
    case 0xC23AD8: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC23ADB: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:24 AND #$00FF
    case 0xC23ADE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC23ADE.
    case 0xC23AE0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:25 CMP #1
    case 0xC23AE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:25 CMP #1
    // Overlapping static entry reached from 0xC23AE1.
    case 0xC23AE3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:26 BEQ @UNKNOWN0
    case 0xC23AE4: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:27 LDX CURRENT_ATTACKER
    case 0xC23AE6: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:28 LDA a:battler::npc_id,X
    case 0xC23AE9: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:29 AND #$00FF
    case 0xC23AEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23AEC.
    case 0xC23AEE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/fix_attacker_name.asm:30 BEQL @UNKNOWN4
    case 0xC23AEF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/fix_attacker_name.asm:30 BEQL @UNKNOWN4
    case 0xC23AF1: {
        Instruction step(cpu, 0x4C, 0x003BC6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23AF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23AF4.
    case 0xC23AF6: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23AF7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23AF6.
    case 0xC23AF8: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23AF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23AF8.
    case 0xC23AFA: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23AF9.
    case 0xC23AFB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23AFC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:33 LDX CURRENT_ATTACKER
    case 0xC23AFE: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:34 LDA a:battler::id,X
    case 0xC23B01: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:35 LDY #.SIZEOF(enemy_data)
    case 0xC23B04: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:35 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23B04.
    case 0xC23B06: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:36 JSL MULT168
    case 0xC23B07: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:40 CLC
    case 0xC23B0B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:41 ADC @VIRTUAL06
    case 0xC23B0C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:42 STA @VIRTUAL06
    case 0xC23B0E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:43 STA @LOCAL00
    case 0xC23B10: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:44 LDA @VIRTUAL06+2
    case 0xC23B12: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:45 STA @LOCAL00+2
    case 0xC23B14: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:46 LDX #.SIZEOF(enemy_data::name)
    case 0xC23B16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:46 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23B16.
    case 0xC23B18: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:47 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23B19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x00AB85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:47 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23B19.
    case 0xC23B1B: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:48 JSR COPY_ENEMY_NAME
    case 0xC23B1C: {
        Instruction step(cpu, 0x20, 0x003A50u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:49 TAX
    case 0xC23B1F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:50 STX @LOCAL02
    case 0xC23B20: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:51 LDX CURRENT_ATTACKER
    case 0xC23B22: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:52 LDA a:battler::ally_or_enemy,X
    case 0xC23B25: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:53 AND #$00FF
    case 0xC23B28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC23B28.
    case 0xC23B2A: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:54 CMP #1
    case 0xC23B2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:54 CMP #1
    // Overlapping static entry reached from 0xC23B2B.
    case 0xC23B2D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:55 BNE @UNKNOWN2
    case 0xC23B2E: {
        Instruction step(cpu, 0xD0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:56 LDY @LOCAL03
    case 0xC23B30: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:57 BNE @UNKNOWN_M2
    case 0xC23B32: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:58 LDX CURRENT_ATTACKER
    case 0xC23B34: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:59 LDA a:battler::the_flag,X
    case 0xC23B37: {
        Instruction step(cpu, 0xBD, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:60 AND #$00FF
    case 0xC23B3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC23B3A.
    case 0xC23B3C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:61 CMP #1
    case 0xC23B3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:61 CMP #1
    // Overlapping static entry reached from 0xC23B3D.
    case 0xC23B3F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:62 BNE @UNKNOWN1
    case 0xC23B40: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:63 LDX CURRENT_ATTACKER
    case 0xC23B42: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:64 LDA a:battler::unknown76,X
    case 0xC23B45: {
        Instruction step(cpu, 0xBD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:65 JSL UNKNOWN_C2B66A
    case 0xC23B48: {
        Instruction step(cpu, 0x22, 0xC2B60Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC23B4C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:67 AND #$00FF
    case 0xC23B4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC23B4E.
    case 0xC23B50: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:68 CMP #2
    case 0xC23B51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:68 CMP #2
    // Overlapping static entry reached from 0xC23B51.
    case 0xC23B53: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:69 BEQ @UNKNOWN_M2
    case 0xC23B54: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:72 LDX CURRENT_ATTACKER
    case 0xC23B56: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B59: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:74 LDA a:battler::the_flag,X
    case 0xC23B5B: {
        Instruction step(cpu, 0xBD, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:75 CLC
    case 0xC23B5E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:76 ADC #CHAR::A_ - 1
    case 0xC23B5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x00A640u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:77 LDX @LOCAL02
    case 0xC23B61: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:77 LDX @LOCAL02
    // Overlapping static entry reached from 0xC23B5F.
    case 0xC23B62: {
        Instruction step(cpu, 0x14, 0x00009Du, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:78 STA __BSS_START__,X
    case 0xC23B63: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:78 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23B62.
    case 0xC23B64: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:80 LDY @LOCAL03
    case 0xC23B66: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:81 BEQ @UNKNOWN2
    case 0xC23B68: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC23B6A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:83 LDA ENEMIES_IN_BATTLE
    case 0xC23B6C: {
        Instruction step(cpu, 0xAD, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:84 CMP #1
    case 0xC23B6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:84 CMP #1
    // Overlapping static entry reached from 0xC23B6F.
    case 0xC23B71: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/fix_attacker_name.asm:85 BLTEQ @UNKNOWN2
    case 0xC23B72: {
        Instruction step(cpu, 0x90, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/fix_attacker_name.asm:85 BLTEQ @UNKNOWN2
    case 0xC23B74: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B76: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:87 LDA #102
    case 0xC23B78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000066u : 0x00A666u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:88 LDX @LOCAL02
    case 0xC23B7A: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:88 LDX @LOCAL02
    // Overlapping static entry reached from 0xC23B78.
    case 0xC23B7B: {
        Instruction step(cpu, 0x14, 0x00009Du, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:89 STA __BSS_START__,X
    case 0xC23B7C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:89 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23B7B.
    case 0xC23B7D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:90 INX
    case 0xC23B7F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:91 LDA #118
    case 0xC23B80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000076u : 0x009D76u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:92 STA __BSS_START__,X
    case 0xC23B82: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23B80.
    case 0xC23B83: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:111 LDX CURRENT_ATTACKER
    case 0xC23B85: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC23B88: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:113 LDA a:battler::id,X
    case 0xC23B8A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:114 CMP #ENEMY::MY_PET
    case 0xC23B8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:114 CMP #ENEMY::MY_PET
    // Overlapping static entry reached from 0xC23B8D.
    case 0xC23B8F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:115 BNE @UNKNOWN3
    case 0xC23B90: {
        Instruction step(cpu, 0xD0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CDu : 0x009ACDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC23B92.
    case 0xC23B94: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B95: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B97: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B98: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B9A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B9B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B9D: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC23B9F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23BA1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23BA3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23BA5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23BA7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:119 LDX #6
    case 0xC23BA9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:119 LDX #6
    // Overlapping static entry reached from 0xC23BA9.
    case 0xC23BAB: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:120 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23BAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x00AB85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:120 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23BAC.
    case 0xC23BAE: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    case 0xC23BAF: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:122 SEP #PROC_FLAGS::ACCUM8
    case 0xC23BB3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:123 STZ ATTACKER_NAME_ADJUST_SCRATCH+6
    case 0xC23BB5: {
        Instruction step(cpu, 0x9C, 0x00AB8Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:126 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    case 0xC23BB8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:126 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    // Overlapping static entry reached from 0xC23BB8.
    case 0xC23BBA: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:130 REP #PROC_FLAGS::ACCUM8
    case 0xC23BBB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:131 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23BBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x00AB85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:131 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23BBD.
    case 0xC23BBF: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    case 0xC23BC0: {
        Instruction step(cpu, 0x22, 0xC1DB4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:138 BRA @UNKNOWN6
    case 0xC23BC4: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:140 LDX CURRENT_ATTACKER
    case 0xC23BC6: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:141 LDA a:battler::id,X
    case 0xC23BC9: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:142 CMP #4
    case 0xC23BCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:142 CMP #4
    // Overlapping static entry reached from 0xC23BCC.
    case 0xC23BCE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/fix_attacker_name.asm:143 BGT @UNKNOWN6
    case 0xC23BCF: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/fix_attacker_name.asm:143 BGT @UNKNOWN6
    case 0xC23BD1: {
        Instruction step(cpu, 0xB0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:144 LDX #.SIZEOF(char_struct::name)
    case 0xC23BD3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:144 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23BD3.
    case 0xC23BD5: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:145 STX @LOCAL01
    case 0xC23BD6: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:146 LDX CURRENT_ATTACKER
    case 0xC23BD8: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:147 LDA a:battler::row,X
    case 0xC23BDB: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:148 AND #$00FF
    case 0xC23BDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:148 AND #$00FF
    // Overlapping static entry reached from 0xC23BDE.
    case 0xC23BE0: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:149 LDY #.SIZEOF(char_struct)
    case 0xC23BE1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:149 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23BE1.
    case 0xC23BE3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:150 JSL MULT168
    case 0xC23BE4: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:151 CLC
    case 0xC23BE8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:152 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23BE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:152 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23BE9.
    case 0xC23BEB: {
        Instruction step(cpu, 0x9C, 0x0012A6u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:153 LDX @LOCAL01
    case 0xC23BEC: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:154 JSL REDIRECT_C1AC4A
    case 0xC23BEE: {
        Instruction step(cpu, 0x22, 0xC1DB4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/fix_attacker_name.asm:156 END_C_FUNCTION
    case 0xC23BF2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/fix_attacker_name.asm:156 END_C_FUNCTION
    case 0xC23BF3: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
