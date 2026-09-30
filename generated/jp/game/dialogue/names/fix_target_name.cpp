// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/fix_target_name.asm
bool resume_text_fix_target_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/fix_target_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23BF4: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23BF6: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23BF7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23BF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23BF8.
    case 0xC23BFA: {
        Instruction step(cpu, 0xFF, 0x20E25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23BFB: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/fix_target_name.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC23BFC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:13 LDA #0
    case 0xC23BFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:14 STA @LOCAL00
    case 0xC23C00: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:14 STA @LOCAL00
    // Overlapping static entry reached from 0xC23BFE.
    case 0xC23C01: {
        Instruction step(cpu, 0x0E, 0x000CA2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/fix_target_name.asm:19 LDX #.SIZEOF(enemy_data::name) + 2
    case 0xC23C02: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:19 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23C02.
    case 0xC23C04: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC23C05: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:21 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23C07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x00AB91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:21 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23C07.
    case 0xC23C09: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/text/fix_target_name.asm:22 JSL MEMSET16
    case 0xC23C0A: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:23 LDX CURRENT_TARGET
    case 0xC23C0E: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:24 LDA a:battler::ally_or_enemy,X
    case 0xC23C11: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:25 AND #$00FF
    case 0xC23C14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC23C14.
    case 0xC23C16: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:26 CMP #1
    case 0xC23C17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:26 CMP #1
    // Overlapping static entry reached from 0xC23C17.
    case 0xC23C19: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:27 BEQ @UNKNOWN0
    case 0xC23C1A: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:28 LDX CURRENT_TARGET
    case 0xC23C1C: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:29 LDA a:battler::npc_id,X
    case 0xC23C1F: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:30 AND #$00FF
    case 0xC23C22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC23C22.
    case 0xC23C24: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/fix_target_name.asm:31 BEQL @UNKNOWN4
    case 0xC23C25: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/fix_target_name.asm:31 BEQL @UNKNOWN4
    case 0xC23C27: {
        Instruction step(cpu, 0x4C, 0x003CD9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C2A.
    case 0xC23C2C: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C2D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C2C.
    case 0xC23C2E: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C2E.
    case 0xC23C30: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C2F.
    case 0xC23C31: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C32: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:34 LDX CURRENT_TARGET
    case 0xC23C34: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:35 LDA __BSS_START__,X
    case 0xC23C37: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:36 LDY #.SIZEOF(enemy_data)
    case 0xC23C3A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_target_name.asm:36 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23C3A.
    case 0xC23C3C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:37 JSL MULT168
    case 0xC23C3D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:41 CLC
    case 0xC23C41: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:42 ADC @VIRTUAL06
    case 0xC23C42: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:43 STA @VIRTUAL06
    case 0xC23C44: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:44 STA @LOCAL00
    case 0xC23C46: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:45 LDA @VIRTUAL08
    case 0xC23C48: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:46 STA @LOCAL00 + 2
    case 0xC23C4A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:47 LDX #.SIZEOF(enemy_data::name)
    case 0xC23C4C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:47 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23C4C.
    case 0xC23C4E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:48 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23C4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x00AB91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:48 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23C4F.
    case 0xC23C51: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/text/fix_target_name.asm:49 JSR COPY_ENEMY_NAME
    case 0xC23C52: {
        Instruction step(cpu, 0x20, 0x003A50u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/fix_target_name.asm:50 TAX
    case 0xC23C55: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:51 STX @LOCAL01
    case 0xC23C56: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:52 LDX CURRENT_TARGET
    case 0xC23C58: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:53 LDA a:battler::ally_or_enemy,X
    case 0xC23C5B: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:54 AND #$00FF
    case 0xC23C5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC23C5E.
    case 0xC23C60: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:55 CMP #1
    case 0xC23C61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:55 CMP #1
    // Overlapping static entry reached from 0xC23C61.
    case 0xC23C63: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:56 BNE @UNKNOWN2
    case 0xC23C64: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:57 LDX CURRENT_TARGET
    case 0xC23C66: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:58 LDA a:battler::the_flag,X
    case 0xC23C69: {
        Instruction step(cpu, 0xBD, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:59 AND #$00FF
    case 0xC23C6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC23C6C.
    case 0xC23C6E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:60 CMP #1
    case 0xC23C6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:60 CMP #1
    // Overlapping static entry reached from 0xC23C6F.
    case 0xC23C71: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:61 BNE @UNKNOWN1
    case 0xC23C72: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:62 LDX CURRENT_TARGET
    case 0xC23C74: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:63 LDA __BSS_START__+76,X
    case 0xC23C77: {
        Instruction step(cpu, 0xBD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:64 JSL UNKNOWN_C2B66A
    case 0xC23C7A: {
        Instruction step(cpu, 0x22, 0xC2B60Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC23C7E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:66 AND #$00FF
    case 0xC23C80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC23C80.
    case 0xC23C82: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:67 CMP #2
    case 0xC23C83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:67 CMP #2
    // Overlapping static entry reached from 0xC23C83.
    case 0xC23C85: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:68 BEQ @UNKNOWN2
    case 0xC23C86: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:71 LDX CURRENT_TARGET
    case 0xC23C88: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC23C8B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:86 LDA a:battler::the_flag,X
    case 0xC23C8D: {
        Instruction step(cpu, 0xBD, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:87 CLC
    case 0xC23C90: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:88 ADC #CHAR::A_ - 1
    case 0xC23C91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x00A640u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:89 LDX @LETTER_POSITION
    case 0xC23C93: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:89 LDX @LETTER_POSITION
    // Overlapping static entry reached from 0xC23C91.
    case 0xC23C94: {
        Instruction step(cpu, 0x12, 0x00009Du, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:90 STA __BSS_START__,X
    case 0xC23C95: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:90 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23C94.
    case 0xC23C96: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:92 LDX CURRENT_TARGET
    case 0xC23C98: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC23C9B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:94 LDA __BSS_START__,X
    case 0xC23C9D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:95 CMP #ENEMY::MY_PET
    case 0xC23CA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:95 CMP #ENEMY::MY_PET
    // Overlapping static entry reached from 0xC23CA0.
    case 0xC23CA2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:96 BNE @UNKNOWN3
    case 0xC23CA3: {
        Instruction step(cpu, 0xD0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CDu : 0x009ACDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC23CA5.
    case 0xC23CA7: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CAA: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CAB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CAD: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CAE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CB0: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC23CB2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CB4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CB6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CB8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CBA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:100 LDX #6
    case 0xC23CBC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:100 LDX #6
    // Overlapping static entry reached from 0xC23CBC.
    case 0xC23CBE: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:101 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23CBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x00AB91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:101 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23CBF.
    case 0xC23CC1: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    case 0xC23CC2: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC23CC6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:104 STZ TARGET_NAME_ADJUST_SCRATCH+6
    case 0xC23CC8: {
        Instruction step(cpu, 0x9C, 0x00AB97u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:107 LDX #.SIZEOF(enemy_data::name) + 1
    case 0xC23CCB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:107 LDX #.SIZEOF(enemy_data::name) + 1
    // Overlapping static entry reached from 0xC23CCB.
    case 0xC23CCD: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC23CCE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:112 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23CD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x00AB91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:112 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23CD0.
    case 0xC23CD2: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    case 0xC23CD3: {
        Instruction step(cpu, 0x22, 0xC1DB53u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:119 BRA @UNKNOWN6
    case 0xC23CD7: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/fix_target_name.asm:121 LDX CURRENT_TARGET
    case 0xC23CD9: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:122 LDA __BSS_START__,X
    case 0xC23CDC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:123 CMP #4
    case 0xC23CDF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:123 CMP #4
    // Overlapping static entry reached from 0xC23CDF.
    case 0xC23CE1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/fix_target_name.asm:124 BGT @UNKNOWN6
    case 0xC23CE2: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/fix_target_name.asm:124 BGT @UNKNOWN6
    case 0xC23CE4: {
        Instruction step(cpu, 0xB0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/fix_target_name.asm:125 LDX #.SIZEOF(char_struct::name)
    case 0xC23CE6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:125 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23CE6.
    case 0xC23CE8: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:126 STX @LOCAL01
    case 0xC23CE9: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:127 LDX CURRENT_TARGET
    case 0xC23CEB: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:128 LDA a:battler::row,X
    case 0xC23CEE: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:129 AND #$00FF
    case 0xC23CF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC23CF1.
    case 0xC23CF3: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:130 LDY #.SIZEOF(char_struct)
    case 0xC23CF4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_target_name.asm:130 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23CF4.
    case 0xC23CF6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:131 JSL MULT168
    case 0xC23CF7: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:132 CLC
    case 0xC23CFB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:133 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23CFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:133 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23CFC.
    case 0xC23CFE: {
        Instruction step(cpu, 0x9C, 0x0012A6u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:134 LDX @LOCAL01
    case 0xC23CFF: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:135 JSL REDIRECT_C1ACA1
    case 0xC23D01: {
        Instruction step(cpu, 0x22, 0xC1DB53u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/fix_target_name.asm:137 END_C_FUNCTION
    case 0xC23D05: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/fix_target_name.asm:137 END_C_FUNCTION
    case 0xC23D06: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
