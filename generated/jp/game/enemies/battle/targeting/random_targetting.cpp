// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/random_targetting.asm
bool resume_battle_random_targetting(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/random_targetting.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26E37: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26E39: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26E3A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26E3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC26E3B.
    case 0xC26E3D: {
        Instruction step(cpu, 0xFF, 0x24A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26E3E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26E3F: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26E41: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26E43: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26E45: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26E47: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26E49: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26E4B: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26E4D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26E4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E4F.
    case 0xC26E51: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26E52: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26E54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E54.
    case 0xC26E56: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26E57: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E59: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E5B: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E5D: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E5F: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E61: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:15 BNE @UNKNOWN1
    case 0xC26E63: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26E65: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26E67: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26E69: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26E6B: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:17 JMP @UNKNOWN6
    case 0xC26E6D: {
        Instruction step(cpu, 0x4C, 0x006F19u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/random_targetting.asm:19 LDY #0
    case 0xC26E70: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/random_targetting.asm:19 LDY #0
    // Overlapping static entry reached from 0xC26E70.
    case 0xC26E72: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/random_targetting.asm:20 STY @LOCAL01
    case 0xC26E73: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/random_targetting.asm:21 JSR RAND_LONG
    case 0xC26E75: {
        Instruction step(cpu, 0x20, 0x00692Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/random_targetting.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC26E78: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/random_targetting.asm:23 AND #$00FF
    case 0xC26E7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC26E7A.
    case 0xC26E7C: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/random_targetting.asm:24 AND #$001F
    case 0xC26E7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:24 AND #$001F
    // Overlapping static entry reached from 0xC26E7D.
    case 0xC26E7F: {
        Instruction step(cpu, 0x00, 0x00001Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/random_targetting.asm:25 INC
    case 0xC26E80: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/random_targetting.asm:26 STA @LOCAL00
    case 0xC26E81: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:27 BRA @UNKNOWN5
    case 0xC26E83: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/random_targetting.asm:29 LDY @LOCAL01
    case 0xC26E85: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/random_targetting.asm:30 INY
    case 0xC26E87: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/random_targetting.asm:31 STY @LOCAL01
    case 0xC26E88: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/random_targetting.asm:32 CPY #32
    case 0xC26E8A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/random_targetting.asm:32 CPY #32
    // Overlapping static entry reached from 0xC26E8A.
    case 0xC26E8C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/random_targetting.asm:33 BNE @UNKNOWN3
    case 0xC26E8D: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/random_targetting.asm:34 LDY #0
    case 0xC26E8F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/random_targetting.asm:34 LDY #0
    // Overlapping static entry reached from 0xC26E8F.
    case 0xC26E91: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/random_targetting.asm:35 STY @LOCAL01
    case 0xC26E92: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26E94: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26E96: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26E98: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26E9A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:38 PHA
    case 0xC26E9C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:39 LDA @VIRTUAL0A
    case 0xC26E9D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:40 PHA
    case 0xC26E9F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E6u : 0x0076E6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EA0.
    case 0xC26EA2: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EA2.
    case 0xC26EA4: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EA4.
    case 0xC26EA6: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EA5.
    case 0xC26EA7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:42 TYA
    case 0xC26EAA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:43 ASL
    case 0xC26EAB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/random_targetting.asm:44 ASL
    case 0xC26EAC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/random_targetting.asm:45 CLC
    case 0xC26EAD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/random_targetting.asm:46 ADC @VIRTUAL06
    case 0xC26EAE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/random_targetting.asm:47 STA @VIRTUAL06
    case 0xC26EB0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EB2.
    case 0xC26EB4: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB5: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB8: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EBA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EBC: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26EBE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26EBF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26EC1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26EC2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26EC4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26EC6: {
        Instruction step(cpu, 0x25, 0x00000Au, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26EC8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26ECA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26ECC: {
        Instruction step(cpu, 0x25, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26ECE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26ED0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26ED0.
    case 0xC26ED2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26ED3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26ED5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26ED5.
    case 0xC26ED7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26ED8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EDA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EDC: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EDE: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EE0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EE2: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:53 BEQ @UNKNOWN2
    case 0xC26EE4: {
        Instruction step(cpu, 0xF0, 0x00009Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/random_targetting.asm:55 LDA @LOCAL00
    case 0xC26EE6: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:56 TAX
    case 0xC26EE8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/random_targetting.asm:57 DEC
    case 0xC26EE9: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/random_targetting.asm:58 STA @LOCAL00
    case 0xC26EEA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:59 CPX #0
    case 0xC26EEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/random_targetting.asm:59 CPX #0
    // Overlapping static entry reached from 0xC26EEC.
    case 0xC26EEE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/random_targetting.asm:60 BNE @UNKNOWN2
    case 0xC26EEF: {
        Instruction step(cpu, 0xD0, 0x000094u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26EF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E6u : 0x0076E6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EF1.
    case 0xC26EF3: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26EF4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EF3.
    case 0xC26EF5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26EF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EF6.
    case 0xC26EF8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26EF9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:62 LDY @LOCAL01
    case 0xC26EFB: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/random_targetting.asm:63 TYA
    case 0xC26EFD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/random_targetting.asm:64 ASL
    case 0xC26EFE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/random_targetting.asm:65 ASL
    case 0xC26EFF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/random_targetting.asm:66 CLC
    case 0xC26F00: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/random_targetting.asm:67 ADC @VIRTUAL0A
    case 0xC26F01: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/random_targetting.asm:68 STA @VIRTUAL0A
    case 0xC26F03: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F05: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F05.
    case 0xC26F07: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F08: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F0A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F0B: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F0D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F0F: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F11: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F13: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F15: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F17: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/random_targetting.asm:72 END_C_FUNCTION
    case 0xC26F19: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/random_targetting.asm:72 END_C_FUNCTION
    case 0xC26F1A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
