// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/fix_attacker_name.asm
bool resume_text_fix_attacker_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/fix_attacker_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23BCF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23BD4.
    case 0xC23BD6: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:11 TAY
    case 0xC23BD9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:12 STY @LOCAL03
    case 0xC23BDA: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC23BDC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:15 STZ PRINT_ATTACKER_ARTICLE
    case 0xC23BDE: {
        Instruction step(cpu, 0x9C, 0x005E77u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/text/fix_attacker_name.asm:17 STZ_BADOPT @LOCAL00
    case 0xC23BE1: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:18 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    case 0xC23BE3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:18 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    // Overlapping static entry reached from 0xC23BE3.
    case 0xC23BE5: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC23BE6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:20 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23BE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x00A983u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:20 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23BE8.
    case 0xC23BEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x00FC22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:21 JSL MEMSET16
    case 0xC23BEB: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:21 JSL MEMSET16
    // Overlapping static entry reached from 0xC23BEA.
    case 0xC23BEC: {
        Instruction step(cpu, 0xFC, 0x00C08Eu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:21 JSL MEMSET16
    // Overlapping static entry reached from 0xC23BEA.
    case 0xC23BED: {
        Instruction step(cpu, 0x8E, 0x00AEC0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:22 LDX CURRENT_ATTACKER
    case 0xC23BEF: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:22 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC23BED.
    case 0xC23BF0: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC23BF2: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:24 AND #$00FF
    case 0xC23BF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC23BF5.
    case 0xC23BF7: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:25 CMP #1
    case 0xC23BF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:25 CMP #1
    // Overlapping static entry reached from 0xC23BF8.
    case 0xC23BFA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:26 BEQ @UNKNOWN0
    case 0xC23BFB: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:27 LDX CURRENT_ATTACKER
    case 0xC23BFD: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:28 LDA a:battler::npc_id,X
    case 0xC23C00: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:29 AND #$00FF
    case 0xC23C03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23C03.
    case 0xC23C05: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/fix_attacker_name.asm:30 BEQL @UNKNOWN4
    case 0xC23C06: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/fix_attacker_name.asm:30 BEQL @UNKNOWN4
    case 0xC23C08: {
        Instruction step(cpu, 0x4C, 0x003CD7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C0B.
    case 0xC23C0D: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C0E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C0D.
    case 0xC23C0F: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C0F.
    case 0xC23C11: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C10.
    case 0xC23C12: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C13: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:33 LDX CURRENT_ATTACKER
    case 0xC23C15: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:34 LDA a:battler::id,X
    case 0xC23C18: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:35 LDY #.SIZEOF(enemy_data)
    case 0xC23C1B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:35 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23C1B.
    case 0xC23C1D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:36 JSL MULT168
    case 0xC23C1E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:38 INC
    case 0xC23C22: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:40 CLC
    case 0xC23C23: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:41 ADC @VIRTUAL06
    case 0xC23C24: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:42 STA @VIRTUAL06
    case 0xC23C26: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:43 STA @LOCAL00
    case 0xC23C28: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:44 LDA @VIRTUAL06+2
    case 0xC23C2A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:45 STA @LOCAL00+2
    case 0xC23C2C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:46 LDX #.SIZEOF(enemy_data::name)
    case 0xC23C2E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:46 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23C2E.
    case 0xC23C30: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:47 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23C31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x00A983u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:47 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23C31.
    case 0xC23C33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x006620u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:48 JSR COPY_ENEMY_NAME
    case 0xC23C34: {
        Instruction step(cpu, 0x20, 0x003B66u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:48 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23C33.
    case 0xC23C35: {
        Instruction step(cpu, 0x66, 0x00003Bu, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:48 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23C33.
    case 0xC23C36: {
        Instruction step(cpu, 0x3B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:49 TAX
    case 0xC23C37: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:50 STX @LOCAL02
    case 0xC23C38: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:51 LDX CURRENT_ATTACKER
    case 0xC23C3A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:52 LDA a:battler::ally_or_enemy,X
    case 0xC23C3D: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:53 AND #$00FF
    case 0xC23C40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC23C40.
    case 0xC23C42: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:54 CMP #1
    case 0xC23C43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:54 CMP #1
    // Overlapping static entry reached from 0xC23C43.
    case 0xC23C45: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:55 BNE @UNKNOWN2
    case 0xC23C46: {
        Instruction step(cpu, 0xD0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:56 LDY @LOCAL03
    case 0xC23C48: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:57 BNE @UNKNOWN_M2
    case 0xC23C4A: {
        Instruction step(cpu, 0xD0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:58 LDX CURRENT_ATTACKER
    case 0xC23C4C: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:59 LDA a:battler::the_flag,X
    case 0xC23C4F: {
        Instruction step(cpu, 0xBD, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:60 AND #$00FF
    case 0xC23C52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC23C52.
    case 0xC23C54: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:61 CMP #1
    case 0xC23C55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:61 CMP #1
    // Overlapping static entry reached from 0xC23C55.
    case 0xC23C57: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:62 BNE @UNKNOWN1
    case 0xC23C58: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:63 LDX CURRENT_ATTACKER
    case 0xC23C5A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:64 LDA a:battler::unknown76,X
    case 0xC23C5D: {
        Instruction step(cpu, 0xBD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:65 JSL UNKNOWN_C2B66A
    case 0xC23C60: {
        Instruction step(cpu, 0x22, 0xC2B66Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC23C64: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:67 AND #$00FF
    case 0xC23C66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC23C66.
    case 0xC23C68: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:68 CMP #2
    case 0xC23C69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:68 CMP #2
    // Overlapping static entry reached from 0xC23C69.
    case 0xC23C6B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:69 BEQ @UNKNOWN_M2
    case 0xC23C6C: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:94 SEP #PROC_FLAGS::ACCUM8
    case 0xC23C6E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:95 LDA #CHAR::SPACE
    case 0xC23C70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x00A650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:96 LDX @LOCAL02
    case 0xC23C72: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:96 LDX @LOCAL02
    // Overlapping static entry reached from 0xC23C70.
    case 0xC23C73: {
        Instruction step(cpu, 0x14, 0x00009Du, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:97 STA __BSS_START__,X
    case 0xC23C74: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:97 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23C73.
    case 0xC23C75: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:98 INX
    case 0xC23C77: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:99 STX @LOCAL03
    case 0xC23C78: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:100 LDA #1
    case 0xC23C7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:101 STA PRINT_ATTACKER_ARTICLE
    case 0xC23C7C: {
        Instruction step(cpu, 0x8D, 0x005E77u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:101 STA PRINT_ATTACKER_ARTICLE
    // Overlapping static entry reached from 0xC23C7A.
    case 0xC23C7D: {
        Instruction step(cpu, 0x77, 0x00005Eu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:102 LDX CURRENT_ATTACKER
    case 0xC23C7F: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:103 LDA a:battler::the_flag,X
    case 0xC23C82: {
        Instruction step(cpu, 0xBD, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:104 CLC
    case 0xC23C85: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:105 ADC #CHAR::A_ - 1
    case 0xC23C86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000070u : 0x00A670u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:106 LDX @LOCAL03
    case 0xC23C88: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:106 LDX @LOCAL03
    // Overlapping static entry reached from 0xC23C86.
    case 0xC23C89: {
        Instruction step(cpu, 0x16, 0x00009Du, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:107 STA a:battler::id,X
    case 0xC23C8A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:107 STA a:battler::id,X
    // Overlapping static entry reached from 0xC23C89.
    case 0xC23C8B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:111 LDX CURRENT_ATTACKER
    case 0xC23C8D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC23C90: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:113 LDA a:battler::id,X
    case 0xC23C92: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:114 CMP #ENEMY::MY_PET
    case 0xC23C95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:114 CMP #ENEMY::MY_PET
    // Overlapping static entry reached from 0xC23C95.
    case 0xC23C97: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:115 BNE @UNKNOWN3
    case 0xC23C98: {
        Instruction step(cpu, 0xD0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23C9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x009819u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C9A.
    case 0xC23C9C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23C9D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23C9F: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA5: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC23CA7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:117 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23CC9.
    case 0xC23CA8: {
        Instruction step(cpu, 0x20, 0x0006A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CA9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CAB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CAD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CAF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:119 LDX #6
    case 0xC23CB1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:119 LDX #6
    // Overlapping static entry reached from 0xC23CB1.
    case 0xC23CB3: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:120 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23CB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x00A983u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:120 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23CB4.
    case 0xC23CB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x00D222u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    case 0xC23CB7: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23CB6.
    case 0xC23CB8: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23CB6.
    case 0xC23CB9: {
        Instruction step(cpu, 0x8E, 0x00E2C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23CB8.
    case 0xC23CBA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:122 SEP #PROC_FLAGS::ACCUM8
    case 0xC23CBB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:122 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23CB9.
    case 0xC23CBC: {
        Instruction step(cpu, 0x20, 0x00899Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:123 STZ ATTACKER_NAME_ADJUST_SCRATCH+6
    case 0xC23CBD: {
        Instruction step(cpu, 0x9C, 0x00A989u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:123 STZ ATTACKER_NAME_ADJUST_SCRATCH+6
    // Overlapping static entry reached from 0xC23CBC.
    case 0xC23CBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A2u : 0x001BA2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:128 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 3
    case 0xC23CC0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:128 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 3
    // Overlapping static entry reached from 0xC23CBF.
    case 0xC23CC1: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:128 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 3
    // Overlapping static entry reached from 0xC23CC0.
    case 0xC23CC2: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:130 REP #PROC_FLAGS::ACCUM8
    case 0xC23CC3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:131 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23CC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x00A983u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:131 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23CC5.
    case 0xC23CC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x007022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    case 0xC23CC8: {
        Instruction step(cpu, 0x22, 0xC1DD70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    // Overlapping static entry reached from 0xC23CC7.
    case 0xC23CC9: {
        Instruction step(cpu, 0x70, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    // Overlapping static entry reached from 0xC23CC7.
    case 0xC23CCA: {
        Instruction step(cpu, 0xDD, 0x00AEC1u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    // Overlapping static entry reached from 0xC23CC9.
    case 0xC23CCB: {
        Instruction step(cpu, 0xC1, 0x0000AEu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:134 LDX CURRENT_ATTACKER
    case 0xC23CCC: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:134 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC23CCA.
    case 0xC23CCD: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:135 LDA a:battler::id,X
    case 0xC23CCF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:136 STA ATTACKER_ENEMY_ID
    case 0xC23CD2: {
        Instruction step(cpu, 0x8D, 0x009658u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:138 BRA @UNKNOWN6
    case 0xC23CD5: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:140 LDX CURRENT_ATTACKER
    case 0xC23CD7: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:141 LDA a:battler::id,X
    case 0xC23CDA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:142 CMP #4
    case 0xC23CDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:142 CMP #4
    // Overlapping static entry reached from 0xC23CDD.
    case 0xC23CDF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/fix_attacker_name.asm:143 BGT @UNKNOWN6
    case 0xC23CE0: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/fix_attacker_name.asm:143 BGT @UNKNOWN6
    case 0xC23CE2: {
        Instruction step(cpu, 0xB0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:144 LDX #.SIZEOF(char_struct::name)
    case 0xC23CE4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:144 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23CE4.
    case 0xC23CE6: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:145 STX @LOCAL01
    case 0xC23CE7: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:146 LDX CURRENT_ATTACKER
    case 0xC23CE9: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:147 LDA a:battler::row,X
    case 0xC23CEC: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:148 AND #$00FF
    case 0xC23CEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:148 AND #$00FF
    // Overlapping static entry reached from 0xC23CEF.
    case 0xC23CF1: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:149 LDY #.SIZEOF(char_struct)
    case 0xC23CF2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:149 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23CF2.
    case 0xC23CF4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:150 JSL MULT168
    case 0xC23CF5: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:151 CLC
    case 0xC23CF9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:152 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23CFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:152 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23CFA.
    case 0xC23CFC: {
        Instruction step(cpu, 0x99, 0x0012A6u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:153 LDX @LOCAL01
    case 0xC23CFD: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_attacker_name.asm:154 JSL REDIRECT_C1AC4A
    case 0xC23CFF: {
        Instruction step(cpu, 0x22, 0xC1DD70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/fix_attacker_name.asm:156 END_C_FUNCTION
    case 0xC23D03: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/fix_attacker_name.asm:156 END_C_FUNCTION
    case 0xC23D04: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
