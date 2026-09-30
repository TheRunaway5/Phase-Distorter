// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/fix_target_name.asm
bool resume_text_fix_target_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/fix_target_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23D05: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23D07: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23D08: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23D09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23D09.
    case 0xC23D0B: {
        Instruction step(cpu, 0xFF, 0x20E25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23D0C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/fix_target_name.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC23D0D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:16 STZ PRINT_TARGET_ARTICLE
    case 0xC23D0F: {
        Instruction step(cpu, 0x9C, 0x005E78u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:17 STZ @LOCAL00
    case 0xC23D12: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:19 LDX #.SIZEOF(enemy_data::name) + 2
    case 0xC23D14: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:19 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23D14.
    case 0xC23D16: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC23D17: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:21 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23D19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00A99Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:21 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23D19.
    case 0xC23D1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x00FC22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:22 JSL MEMSET16
    case 0xC23D1C: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:22 JSL MEMSET16
    // Overlapping static entry reached from 0xC23D1B.
    case 0xC23D1D: {
        Instruction step(cpu, 0xFC, 0x00C08Eu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/text/fix_target_name.asm:22 JSL MEMSET16
    // Overlapping static entry reached from 0xC23D1B.
    case 0xC23D1E: {
        Instruction step(cpu, 0x8E, 0x00AEC0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:23 LDX CURRENT_TARGET
    case 0xC23D20: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:23 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC23D1E.
    case 0xC23D21: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:24 LDA a:battler::ally_or_enemy,X
    case 0xC23D23: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:25 AND #$00FF
    case 0xC23D26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC23D26.
    case 0xC23D28: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:26 CMP #1
    case 0xC23D29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:26 CMP #1
    // Overlapping static entry reached from 0xC23D29.
    case 0xC23D2B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:27 BEQ @UNKNOWN0
    case 0xC23D2C: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:28 LDX CURRENT_TARGET
    case 0xC23D2E: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:29 LDA a:battler::npc_id,X
    case 0xC23D31: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:30 AND #$00FF
    case 0xC23D34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC23D34.
    case 0xC23D36: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/fix_target_name.asm:31 BEQL @UNKNOWN4
    case 0xC23D37: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/fix_target_name.asm:31 BEQL @UNKNOWN4
    case 0xC23D39: {
        Instruction step(cpu, 0x4C, 0x003E04u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23D3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23D3C.
    case 0xC23D3E: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23D3F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23D3E.
    case 0xC23D40: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23D41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23D40.
    case 0xC23D42: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23D41.
    case 0xC23D43: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23D44: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:34 LDX CURRENT_TARGET
    case 0xC23D46: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:35 LDA __BSS_START__,X
    case 0xC23D49: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:36 LDY #.SIZEOF(enemy_data)
    case 0xC23D4C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_target_name.asm:36 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23D4C.
    case 0xC23D4E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:37 JSL MULT168
    case 0xC23D4F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:39 INC
    case 0xC23D53: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/fix_target_name.asm:41 CLC
    case 0xC23D54: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:42 ADC @VIRTUAL06
    case 0xC23D55: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:43 STA @VIRTUAL06
    case 0xC23D57: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:44 STA @LOCAL00
    case 0xC23D59: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:45 LDA @VIRTUAL08
    case 0xC23D5B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:46 STA @LOCAL00 + 2
    case 0xC23D5D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:47 LDX #.SIZEOF(enemy_data::name)
    case 0xC23D5F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:47 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23D5F.
    case 0xC23D61: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:48 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23D62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00A99Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:48 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23D62.
    case 0xC23D64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x006620u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:49 JSR COPY_ENEMY_NAME
    case 0xC23D65: {
        Instruction step(cpu, 0x20, 0x003B66u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/fix_target_name.asm:49 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23D64.
    case 0xC23D66: {
        Instruction step(cpu, 0x66, 0x00003Bu, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/fix_target_name.asm:49 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23D64.
    case 0xC23D67: {
        Instruction step(cpu, 0x3B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:50 TAX
    case 0xC23D68: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:51 STX @LOCAL01
    case 0xC23D69: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:52 LDX CURRENT_TARGET
    case 0xC23D6B: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:53 LDA a:battler::ally_or_enemy,X
    case 0xC23D6E: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:54 AND #$00FF
    case 0xC23D71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC23D71.
    case 0xC23D73: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:55 CMP #1
    case 0xC23D74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:55 CMP #1
    // Overlapping static entry reached from 0xC23D74.
    case 0xC23D76: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:56 BNE @UNKNOWN2
    case 0xC23D77: {
        Instruction step(cpu, 0xD0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:57 LDX CURRENT_TARGET
    case 0xC23D79: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:58 LDA a:battler::the_flag,X
    case 0xC23D7C: {
        Instruction step(cpu, 0xBD, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:59 AND #$00FF
    case 0xC23D7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC23D7F.
    case 0xC23D81: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:60 CMP #1
    case 0xC23D82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:60 CMP #1
    // Overlapping static entry reached from 0xC23D82.
    case 0xC23D84: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:61 BNE @UNKNOWN1
    case 0xC23D85: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:62 LDX CURRENT_TARGET
    case 0xC23D87: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:63 LDA __BSS_START__+76,X
    case 0xC23D8A: {
        Instruction step(cpu, 0xBD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:64 JSL UNKNOWN_C2B66A
    case 0xC23D8D: {
        Instruction step(cpu, 0x22, 0xC2B66Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC23D91: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:66 AND #$00FF
    case 0xC23D93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC23D93.
    case 0xC23D95: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:67 CMP #2
    case 0xC23D96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:67 CMP #2
    // Overlapping static entry reached from 0xC23D96.
    case 0xC23D98: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:68 BEQ @UNKNOWN2
    case 0xC23D99: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC23D9B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:76 LDA #CHAR::SPACE
    case 0xC23D9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x00A650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:77 LDX @LOCAL01
    case 0xC23D9F: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:77 LDX @LOCAL01
    // Overlapping static entry reached from 0xC23D9D.
    case 0xC23DA0: {
        Instruction step(cpu, 0x14, 0x00009Du, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:78 STA __BSS_START__,X
    case 0xC23DA1: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:78 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23DA0.
    case 0xC23DA2: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:79 INX
    case 0xC23DA4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:80 STX @LOCALX
    case 0xC23DA5: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:81 LDA #1
    case 0xC23DA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:82 STA PRINT_TARGET_ARTICLE
    case 0xC23DA9: {
        Instruction step(cpu, 0x8D, 0x005E78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:82 STA PRINT_TARGET_ARTICLE
    // Overlapping static entry reached from 0xC23DA7.
    case 0xC23DAA: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/text/fix_target_name.asm:82 STA PRINT_TARGET_ARTICLE
    // Overlapping static entry reached from 0xC23DAA.
    case 0xC23DAB: {
        Instruction step(cpu, 0x5E, 0x0072AEu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/fix_target_name.asm:83 LDX CURRENT_TARGET
    case 0xC23DAC: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:83 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC23DAB.
    case 0xC23DAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x000BBDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:86 LDA a:battler::the_flag,X
    case 0xC23DAF: {
        Instruction step(cpu, 0xBD, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:86 LDA a:battler::the_flag,X
    // Overlapping static entry reached from 0xC23DAE.
    case 0xC23DB0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // src/text/fix_target_name.asm:86 LDA a:battler::the_flag,X
    // Overlapping static entry reached from 0xC23DAE.
    case 0xC23DB1: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:87 CLC
    case 0xC23DB2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:88 ADC #CHAR::A_ - 1
    case 0xC23DB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000070u : 0x00A670u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:89 LDX @LETTER_POSITION
    case 0xC23DB5: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:89 LDX @LETTER_POSITION
    // Overlapping static entry reached from 0xC23DB3.
    case 0xC23DB6: {
        Instruction step(cpu, 0x12, 0x00009Du, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:90 STA __BSS_START__,X
    case 0xC23DB7: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:90 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23DB6.
    case 0xC23DB8: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:92 LDX CURRENT_TARGET
    case 0xC23DBA: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC23DBD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:94 LDA __BSS_START__,X
    case 0xC23DBF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:95 CMP #ENEMY::MY_PET
    case 0xC23DC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:95 CMP #ENEMY::MY_PET
    // Overlapping static entry reached from 0xC23DC2.
    case 0xC23DC4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:96 BNE @UNKNOWN3
    case 0xC23DC5: {
        Instruction step(cpu, 0xD0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x009819u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC23DC7.
    case 0xC23DC9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DCA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DCC: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DCD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DCF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DD0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DD2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC23DD4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23DD6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23DD8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23DDA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23DDC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:100 LDX #6
    case 0xC23DDE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:100 LDX #6
    // Overlapping static entry reached from 0xC23DDE.
    case 0xC23DE0: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:101 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23DE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00A99Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:101 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23DE1.
    case 0xC23DE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x00D222u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    case 0xC23DE4: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23DE3.
    case 0xC23DE5: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23DE3.
    case 0xC23DE6: {
        Instruction step(cpu, 0x8E, 0x00E2C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23DE5.
    case 0xC23DE7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/fix_target_name.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC23DE8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:103 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23DE6.
    case 0xC23DE9: {
        Instruction step(cpu, 0x20, 0x00A49Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/fix_target_name.asm:104 STZ TARGET_NAME_ADJUST_SCRATCH+6
    case 0xC23DEA: {
        Instruction step(cpu, 0x9C, 0x00A9A4u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/fix_target_name.asm:104 STZ TARGET_NAME_ADJUST_SCRATCH+6
    // Overlapping static entry reached from 0xC23DE9.
    case 0xC23DEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A2u : 0x001BA2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:109 LDX #.SIZEOF(enemy_data::name) + 2
    case 0xC23DED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:109 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23DEC.
    case 0xC23DEE: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/fix_target_name.asm:109 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23DED.
    case 0xC23DEF: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC23DF0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/fix_target_name.asm:112 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23DF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00A99Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:112 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23DF2.
    case 0xC23DF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x007622u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    case 0xC23DF5: {
        Instruction step(cpu, 0x22, 0xC1DD76u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    // Overlapping static entry reached from 0xC23DF4.
    case 0xC23DF6: {
        Instruction step(cpu, 0x76, 0x0000DDu, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    // Overlapping static entry reached from 0xC23DF4.
    case 0xC23DF7: {
        Instruction step(cpu, 0xDD, 0x00AEC1u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    // Overlapping static entry reached from 0xC23DF6.
    case 0xC23DF8: {
        Instruction step(cpu, 0xC1, 0x0000AEu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:115 LDX CURRENT_TARGET
    case 0xC23DF9: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:115 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC23DF7.
    case 0xC23DFA: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:116 LDA __BSS_START__,X
    case 0xC23DFC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:117 STA TARGET_ENEMY_ID
    case 0xC23DFF: {
        Instruction step(cpu, 0x8D, 0x00965Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:119 BRA @UNKNOWN6
    case 0xC23E02: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/fix_target_name.asm:121 LDX CURRENT_TARGET
    case 0xC23E04: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:122 LDA __BSS_START__,X
    case 0xC23E07: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:123 CMP #4
    case 0xC23E0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:123 CMP #4
    // Overlapping static entry reached from 0xC23E0A.
    case 0xC23E0C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/fix_target_name.asm:124 BGT @UNKNOWN6
    case 0xC23E0D: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/fix_target_name.asm:124 BGT @UNKNOWN6
    case 0xC23E0F: {
        Instruction step(cpu, 0xB0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/fix_target_name.asm:125 LDX #.SIZEOF(char_struct::name)
    case 0xC23E11: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:125 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23E11.
    case 0xC23E13: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:126 STX @LOCAL01
    case 0xC23E14: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:127 LDX CURRENT_TARGET
    case 0xC23E16: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:128 LDA a:battler::row,X
    case 0xC23E19: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:129 AND #$00FF
    case 0xC23E1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC23E1C.
    case 0xC23E1E: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:130 LDY #.SIZEOF(char_struct)
    case 0xC23E1F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/fix_target_name.asm:130 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23E1F.
    case 0xC23E21: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/fix_target_name.asm:131 JSL MULT168
    case 0xC23E22: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/fix_target_name.asm:132 CLC
    case 0xC23E26: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:133 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23E27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/fix_target_name.asm:133 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23E27.
    case 0xC23E29: {
        Instruction step(cpu, 0x99, 0x0014A6u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/fix_target_name.asm:134 LDX @LOCAL01
    case 0xC23E2A: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/fix_target_name.asm:135 JSL REDIRECT_C1ACA1
    case 0xC23E2C: {
        Instruction step(cpu, 0x22, 0xC1DD76u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/fix_target_name.asm:137 END_C_FUNCTION
    case 0xC23E30: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/fix_target_name.asm:137 END_C_FUNCTION
    case 0xC23E31: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
