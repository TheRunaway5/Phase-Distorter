// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/load_battle_sprite.asm
bool resume_battle_load_battle_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_battle_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC2EAEA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAEC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAED: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAEE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00FFD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EAEF.
    case 0xC2EAF1: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAF2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAF3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:24 TAX
    case 0xC2EAF4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:25 STX @LOCAL09
    case 0xC2EAF5: {
        Instruction step(cpu, 0x86, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:26 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EAF7: {
        Instruction step(cpu, 0xAD, 0x00AAB4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:27 ASL
    case 0xC2EAFA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:28 TAX
    case 0xC2EAFB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:29 LDA CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EAFC: {
        Instruction step(cpu, 0xAD, 0x00AAB2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:30 STA BATTLE_SPRITEMAP_ALLOCATION_COUNTS,X
    case 0xC2EAFF: {
        Instruction step(cpu, 0x9D, 0x00AAB6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:31 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EB02: {
        Instruction step(cpu, 0xAD, 0x00AAB4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB05: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB07: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB08: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB09: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB0B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB0C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB0D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB0E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:33 CLC
    case 0xC2EB0F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:34 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2EB10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00AAD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:34 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2EB10.
    case 0xC2EB12: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:35 STA @LOCAL08
    case 0xC2EB13: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:36 LDX @LOCAL09
    case 0xC2EB15: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:37 TXA
    case 0xC2EB17: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:38 DEC
    case 0xC2EB18: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:39 STA @VIRTUAL04
    case 0xC2EB19: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:40 STA @LOCAL09
    case 0xC2EB1B: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:41 LDY #1
    case 0xC2EB1D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:41 LDY #1
    // Overlapping static entry reached from 0xC2EB1D.
    case 0xC2EB1F: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:42 STY @LOCAL07
    case 0xC2EB20: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:43 TYA
    case 0xC2EB22: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:44 STA @VIRTUAL02
    case 0xC2EB23: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:45 STA @LOCAL06
    case 0xC2EB25: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:46 LDX #0
    case 0xC2EB27: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:46 LDX #0
    // Overlapping static entry reached from 0xC2EB27.
    case 0xC2EB29: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:47 STX @LOCAL05
    case 0xC2EB2A: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:48 JMP @UNKNOWN1
    case 0xC2EB2C: {
        Instruction step(cpu, 0x4C, 0x00EBC4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC2EB2F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:51 TXA
    case 0xC2EB31: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EB32: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EB34: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EB35: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EB36: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:53 STA @LOCAL04
    case 0xC2EB38: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:54 TAY
    case 0xC2EB3A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB3B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:56 LDA #224
    case 0xC2EB3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0091E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:57 STA (@LOCAL08),Y ;spritemap::y_offset
    case 0xC2EB3F: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:57 STA (@LOCAL08),Y ;spritemap::y_offset
    // Overlapping static entry reached from 0xC2EB3D.
    case 0xC2EB40: {
        Instruction step(cpu, 0x26, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC2EB41: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2EB40.
    case 0xC2EB42: {
        Instruction step(cpu, 0x20, 0x00B1A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EB43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B1u : 0x00F8B1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EB43.
    case 0xC2EB45: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EB46: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EB48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EB48.
    case 0xC2EB4A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EB4B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:60 LDA @LOCAL04
    case 0xC2EB4D: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:61 TAY
    case 0xC2EB4F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:62 INY
    case 0xC2EB50: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:63 TXA
    case 0xC2EB51: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:64 CLC
    case 0xC2EB52: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:65 ADC CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EB53: {
        Instruction step(cpu, 0x6D, 0x00AAB2u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:66 ASL
    case 0xC2EB56: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:67 PHA
    case 0xC2EB57: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EB58: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EB5A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EB5C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EB5E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:69 PLA
    case 0xC2EB60: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:70 CLC
    case 0xC2EB61: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:71 ADC @VIRTUAL0A
    case 0xC2EB62: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:72 STA @VIRTUAL0A
    case 0xC2EB64: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB66: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:74 LDA [@VIRTUAL0A]
    case 0xC2EB68: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:75 STA (@LOCAL08),Y ;spritemap::tile
    case 0xC2EB6A: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:76 LDA #8
    case 0xC2EB6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x004808u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:77 PHA
    case 0xC2EB6E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC2EB6F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:79 TXA
    case 0xC2EB71: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:80 CLC
    case 0xC2EB72: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:81 ADC CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EB73: {
        Instruction step(cpu, 0x6D, 0x00AAB2u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:82 ASL
    case 0xC2EB76: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:83 CLC
    case 0xC2EB77: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:84 ADC @VIRTUAL06
    case 0xC2EB78: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:85 STA @VIRTUAL06
    case 0xC2EB7A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:86 LDA [@VIRTUAL06]
    case 0xC2EB7C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:87 SEP #PROC_FLAGS::INDEX8
    case 0xC2EB7E: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:88 PLY
    case 0xC2EB80: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:89 JSL ASR8_UNKNOWN1
    case 0xC2EB81: {
        Instruction step(cpu, 0x22, 0xC09251u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB85: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:91 STA @VIRTUAL00
    case 0xC2EB87: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:92 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EB89: {
        Instruction step(cpu, 0xAD, 0x00AAB4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:93 ASL
    case 0xC2EB8C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:94 CLC
    case 0xC2EB8D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:95 ADC @VIRTUAL00
    case 0xC2EB8E: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:96 CLC
    case 0xC2EB90: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:97 ADC #32
    case 0xC2EB91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x004820u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:98 PHA
    case 0xC2EB93: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC2EB94: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:100 LDA @LOCAL04
    case 0xC2EB96: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:101 REP #PROC_FLAGS::INDEX8
    case 0xC2EB98: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:102 TAY
    case 0xC2EB9A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:103 INY
    case 0xC2EB9B: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:104 INY
    case 0xC2EB9C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB9D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:106 PLA
    case 0xC2EB9F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:107 STA (@LOCAL08),Y ;spritemap::flags
    case 0xC2EBA0: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC2EBA2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:109 LDA @LOCAL04
    case 0xC2EBA4: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:110 TAY
    case 0xC2EBA6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:111 INY
    case 0xC2EBA7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:112 INY
    case 0xC2EBA8: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:113 INY
    case 0xC2EBA9: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:114 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EBAA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:115 LDA #240
    case 0xC2EBAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F0u : 0x0091F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:116 STA (@LOCAL08),Y ;;spritemap::x_offset
    case 0xC2EBAE: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:116 STA (@LOCAL08),Y ;;spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBAC.
    case 0xC2EBAF: {
        Instruction step(cpu, 0x26, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC2EBB0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:117 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2EBAF.
    case 0xC2EBB1: {
        Instruction step(cpu, 0x20, 0x001EA5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:118 LDA @LOCAL04
    case 0xC2EBB2: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:119 TAY
    case 0xC2EBB4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:120 INY
    case 0xC2EBB5: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:121 INY
    case 0xC2EBB6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:122 INY
    case 0xC2EBB7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:123 INY
    case 0xC2EBB8: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:124 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EBB9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:125 LDA #1
    case 0xC2EBBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009101u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:126 STA (@LOCAL08),Y ;spritemap::special_flags
    case 0xC2EBBD: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:126 STA (@LOCAL08),Y ;spritemap::special_flags
    // Overlapping static entry reached from 0xC2EBBB.
    case 0xC2EBBE: {
        Instruction step(cpu, 0x26, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:127 LDX @LOCAL05
    case 0xC2EBBF: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:127 LDX @LOCAL05
    // Overlapping static entry reached from 0xC2EBBE.
    case 0xC2EBC0: {
        Instruction step(cpu, 0x20, 0x0086E8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:128 INX
    case 0xC2EBC1: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:129 STX @LOCAL05
    case 0xC2EBC2: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:129 STX @LOCAL05
    // Overlapping static entry reached from 0xC2EBC0.
    case 0xC2EBC3: {
        Instruction step(cpu, 0x20, 0x0010E0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:131 CPX #16
    case 0xC2EBC4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:131 CPX #16
    // Overlapping static entry reached from 0xC2EBC4.
    case 0xC2EBC6: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/load_battle_sprite.asm:132 BCCL @UNKNOWN0
    case 0xC2EBC7: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/load_battle_sprite.asm:132 BCCL @UNKNOWN0
    case 0xC2EBC9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/load_battle_sprite.asm:132 BCCL @UNKNOWN0
    case 0xC2EBCB: {
        Instruction step(cpu, 0x4C, 0x00EB2Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC2EBCE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:134 LDA @LOCAL09
    case 0xC2EBD0: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:135 STA @VIRTUAL04
    case 0xC2EBD2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EBD4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EBD6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EBD7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EBD8: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:137 TAX
    case 0xC2EBDA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:138 INX
    case 0xC2EBDB: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:139 INX
    case 0xC2EBDC: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:140 INX
    case 0xC2EBDD: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:141 INX
    case 0xC2EBDE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:142 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2EBDF: {
        Instruction step(cpu, 0xBF, 0xCE62EEu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:143 AND #$00FF
    case 0xC2EBE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC2EBE3.
    case 0xC2EBE5: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:144 CMP #2
    case 0xC2EBE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:144 CMP #2
    // Overlapping static entry reached from 0xC2EBE6.
    case 0xC2EBE8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:145 BEQ @UNKNOWN4
    case 0xC2EBE9: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:146 CMP #3
    case 0xC2EBEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:146 CMP #3
    // Overlapping static entry reached from 0xC2EBEB.
    case 0xC2EBED: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:147 BEQ @UNKNOWN5
    case 0xC2EBEE: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:148 CMP #4
    case 0xC2EBF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:148 CMP #4
    // Overlapping static entry reached from 0xC2EBF0.
    case 0xC2EBF2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:149 BEQ @UNKNOWN6
    case 0xC2EBF3: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:150 CMP #5
    case 0xC2EBF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:150 CMP #5
    // Overlapping static entry reached from 0xC2EBF5.
    case 0xC2EBF7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:151 BEQ @UNKNOWN7
    case 0xC2EBF8: {
        Instruction step(cpu, 0xF0, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:152 CMP #6
    case 0xC2EBFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:152 CMP #6
    // Overlapping static entry reached from 0xC2EBFA.
    case 0xC2EBFC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battle_sprite.asm:153 BEQL @UNKNOWN8
    case 0xC2EBFD: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battle_sprite.asm:153 BEQL @UNKNOWN8
    case 0xC2EBFF: {
        Instruction step(cpu, 0x4C, 0x00ECAEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:154 JMP @UNKNOWN9
    case 0xC2EC02: {
        Instruction step(cpu, 0x4C, 0x00ED4Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:156 LDA #2
    case 0xC2EC05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:156 LDA #2
    // Overlapping static entry reached from 0xC2EC05.
    case 0xC2EC07: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:157 STA @VIRTUAL02
    case 0xC2EC08: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:158 STA @LOCAL06
    case 0xC2EC0A: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EC0C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:160 LDA #224
    case 0xC2EC0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x00A0E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:161 LDY #spritemap::x_offset
    case 0xC2EC10: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:161 LDY #spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC0E.
    case 0xC2EC11: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:161 LDY #spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC10.
    case 0xC2EC12: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:162 STA (@LOCAL08),Y
    case 0xC2EC13: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:163 LDX @LOCAL08
    case 0xC2EC15: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:164 STZ a:0 + (.SIZEOF(spritemap) * 1) + spritemap::x_offset,X ;not sure why the +0 is necessary here
    case 0xC2EC17: {
        Instruction step(cpu, 0x9E, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:165 JMP @UNKNOWN9
    case 0xC2EC1A: {
        Instruction step(cpu, 0x4C, 0x00ED4Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:167 LDY #2
    case 0xC2EC1D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:167 LDY #2
    // Overlapping static entry reached from 0xC2EC1D.
    case 0xC2EC1F: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:168 STY @LOCAL07
    case 0xC2EC20: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EC22: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:170 LDA #192
    case 0xC2EC24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0092C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:171 STA (@LOCAL08) ;spritemap::y_offset
    case 0xC2EC26: {
        Instruction step(cpu, 0x92, 0x000026u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:171 STA (@LOCAL08) ;spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC24.
    case 0xC2EC27: {
        Instruction step(cpu, 0x26, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:172 JMP @UNKNOWN9
    case 0xC2EC28: {
        Instruction step(cpu, 0x4C, 0x00ED4Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:172 JMP @UNKNOWN9
    // Overlapping static entry reached from 0xC2EC27.
    case 0xC2EC29: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:172 JMP @UNKNOWN9
    // Overlapping static entry reached from 0xC2EC29.
    case 0xC2EC2A: {
        Instruction step(cpu, 0xED, 0x0002A0u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:174 LDY #2
    case 0xC2EC2B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:174 LDY #2
    // Overlapping static entry reached from 0xC2EC2B.
    case 0xC2EC2D: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:175 STY @LOCAL07
    case 0xC2EC2E: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:176 STY @VIRTUAL02
    case 0xC2EC30: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:177 LDA @VIRTUAL02
    case 0xC2EC32: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:178 STA @LOCAL06
    case 0xC2EC34: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:179 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EC36: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:180 LDA #192
    case 0xC2EC38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x00A0C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:181 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    case 0xC2EC3A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:181 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC38.
    case 0xC2EC3B: {
        Instruction step(cpu, 0x05, 0x000000u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:181 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC3A.
    case 0xC2EC3C: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:182 STA (@LOCAL08),Y
    case 0xC2EC3D: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:183 STA (@LOCAL08) ;spritemap::y_offset
    case 0xC2EC3F: {
        Instruction step(cpu, 0x92, 0x000026u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:184 LDA #224
    case 0xC2EC41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x00A0E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:185 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    case 0xC2EC43: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:185 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC41.
    case 0xC2EC44: {
        Instruction step(cpu, 0x0D, 0x009100u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:185 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC43.
    case 0xC2EC45: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:186 STA (@LOCAL08),Y
    case 0xC2EC46: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:186 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2EC44.
    case 0xC2EC47: {
        Instruction step(cpu, 0x26, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:187 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    case 0xC2EC48: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:187 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC47.
    case 0xC2EC49: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:187 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC48.
    case 0xC2EC4A: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:188 STA (@LOCAL08),Y
    case 0xC2EC4B: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:189 LDA #0
    case 0xC2EC4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:190 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    case 0xC2EC4F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:190 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC4D.
    case 0xC2EC50: {
        Instruction step(cpu, 0x12, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:190 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC4F.
    case 0xC2EC51: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:191 STA (@LOCAL08),Y
    case 0xC2EC52: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:192 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    case 0xC2EC54: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:192 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC54.
    case 0xC2EC56: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:193 STA (@LOCAL08),Y
    case 0xC2EC57: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:194 JMP @UNKNOWN9
    case 0xC2EC59: {
        Instruction step(cpu, 0x4C, 0x00ED4Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:197 LDA #4
    case 0xC2EC5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:197 LDA #4
    // Overlapping static entry reached from 0xC2EC5C.
    case 0xC2EC5E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:198 STA @VIRTUAL02
    case 0xC2EC5F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:199 STA @LOCAL06
    case 0xC2EC61: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:200 LDY #2
    case 0xC2EC63: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:200 LDY #2
    // Overlapping static entry reached from 0xC2EC63.
    case 0xC2EC65: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:201 STY @LOCAL07
    case 0xC2EC66: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EC68: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:203 LDA #192
    case 0xC2EC6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x00A0C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:204 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    case 0xC2EC6C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:204 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC6A.
    case 0xC2EC6D: {
        Instruction step(cpu, 0x0F, 0x269100u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:204 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC6C.
    case 0xC2EC6E: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:205 STA (@LOCAL08),Y
    case 0xC2EC6F: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:206 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    case 0xC2EC71: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:206 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC71.
    case 0xC2EC73: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:207 STA (@LOCAL08),Y
    case 0xC2EC74: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:208 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    case 0xC2EC76: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:208 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC76.
    case 0xC2EC78: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:209 STA (@LOCAL08),Y
    case 0xC2EC79: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:210 STA (@LOCAL08) ;(.SIZEOF(spritemap) * 0) + spritemap::y_offset
    case 0xC2EC7B: {
        Instruction step(cpu, 0x92, 0x000026u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:211 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    case 0xC2EC7D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:211 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC7D.
    case 0xC2EC7F: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:212 STA (@LOCAL08),Y
    case 0xC2EC80: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:213 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    case 0xC2EC82: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:213 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC82.
    case 0xC2EC84: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:214 STA (@LOCAL08),Y
    case 0xC2EC85: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:215 LDA #224
    case 0xC2EC87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x00A0E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:216 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    case 0xC2EC89: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:216 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC87.
    case 0xC2EC8A: {
        Instruction step(cpu, 0x1C, 0x009100u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:216 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC89.
    case 0xC2EC8B: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:217 STA (@LOCAL08),Y
    case 0xC2EC8C: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:217 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2EC8A.
    case 0xC2EC8D: {
        Instruction step(cpu, 0x26, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:218 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    case 0xC2EC8E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:218 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC8D.
    case 0xC2EC8F: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:218 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC8E.
    case 0xC2EC90: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:219 STA (@LOCAL08),Y
    case 0xC2EC91: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:220 LDA #0
    case 0xC2EC93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:221 LDY #(.SIZEOF(spritemap) * 6) + spritemap::x_offset
    case 0xC2EC95: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:221 LDY #(.SIZEOF(spritemap) * 6) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC93.
    case 0xC2EC96: {
        Instruction step(cpu, 0x21, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:221 LDY #(.SIZEOF(spritemap) * 6) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC95.
    case 0xC2EC97: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:222 STA (@LOCAL08),Y
    case 0xC2EC98: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:223 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    case 0xC2EC9A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:223 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC9A.
    case 0xC2EC9C: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:224 STA (@LOCAL08),Y
    case 0xC2EC9D: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:225 LDA #32
    case 0xC2EC9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x00A020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:226 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    case 0xC2ECA1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:226 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC9F.
    case 0xC2ECA2: {
        Instruction step(cpu, 0x26, 0x000000u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:226 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ECA1.
    case 0xC2ECA3: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:227 STA (@LOCAL08),Y
    case 0xC2ECA4: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:228 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    case 0xC2ECA6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:228 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ECA6.
    case 0xC2ECA8: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:229 STA (@LOCAL08),Y
    case 0xC2ECA9: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:230 JMP @UNKNOWN9
    case 0xC2ECAB: {
        Instruction step(cpu, 0x4C, 0x00ED4Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:232 LDY #4
    case 0xC2ECAE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:232 LDY #4
    // Overlapping static entry reached from 0xC2ECAE.
    case 0xC2ECB0: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:233 STY @LOCAL07
    case 0xC2ECB1: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:234 TYA
    case 0xC2ECB3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:235 STA @VIRTUAL02
    case 0xC2ECB4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:236 STA @LOCAL06
    case 0xC2ECB6: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ECB8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:238 LDA #160
    case 0xC2ECBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A0u : 0x00A0A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:239 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    case 0xC2ECBC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:239 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECBA.
    case 0xC2ECBD: {
        Instruction step(cpu, 0x0F, 0x269100u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:239 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECBC.
    case 0xC2ECBE: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:240 STA (@LOCAL08),Y
    case 0xC2ECBF: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:241 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    case 0xC2ECC1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:241 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECC1.
    case 0xC2ECC3: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:242 STA (@LOCAL08),Y
    case 0xC2ECC4: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:243 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    case 0xC2ECC6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:243 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECC6.
    case 0xC2ECC8: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:244 STA (@LOCAL08),Y
    case 0xC2ECC9: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:245 STA (@LOCAL08) ;(.SIZEOF(spritemap) * 0) + spritemap::y_offset
    case 0xC2ECCB: {
        Instruction step(cpu, 0x92, 0x000026u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:246 LDA #192
    case 0xC2ECCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x00A0C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:247 LDY #(.SIZEOF(spritemap) * 7) + spritemap::y_offset
    case 0xC2ECCF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:247 LDY #(.SIZEOF(spritemap) * 7) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECCD.
    case 0xC2ECD0: {
        Instruction step(cpu, 0x23, 0x000000u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:247 LDY #(.SIZEOF(spritemap) * 7) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECCF.
    case 0xC2ECD1: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:248 STA (@LOCAL08),Y
    case 0xC2ECD2: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:249 LDY #(.SIZEOF(spritemap) * 6) + spritemap::y_offset
    case 0xC2ECD4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:249 LDY #(.SIZEOF(spritemap) * 6) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECD4.
    case 0xC2ECD6: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:250 STA (@LOCAL08),Y
    case 0xC2ECD7: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:251 LDY #(.SIZEOF(spritemap) * 5) + spritemap::y_offset
    case 0xC2ECD9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:251 LDY #(.SIZEOF(spritemap) * 5) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECD9.
    case 0xC2ECDB: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:252 STA (@LOCAL08),Y
    case 0xC2ECDC: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:253 LDY #(.SIZEOF(spritemap) * 4) + spritemap::y_offset
    case 0xC2ECDE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:253 LDY #(.SIZEOF(spritemap) * 4) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECDE.
    case 0xC2ECE0: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:254 STA (@LOCAL08),Y
    case 0xC2ECE1: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:255 LDX @LOCAL08
    case 0xC2ECE3: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:256 STZ a:0 + (.SIZEOF(spritemap) * 15) + spritemap::y_offset,X
    case 0xC2ECE5: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:257 LDX @LOCAL08
    case 0xC2ECE8: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:258 STZ a:0 + (.SIZEOF(spritemap) * 14) + spritemap::y_offset,X
    case 0xC2ECEA: {
        Instruction step(cpu, 0x9E, 0x000046u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:259 LDX @LOCAL08
    case 0xC2ECED: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:260 STZ a:0 + (.SIZEOF(spritemap) * 13) + spritemap::y_offset,X
    case 0xC2ECEF: {
        Instruction step(cpu, 0x9E, 0x000041u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:261 LDX @LOCAL08
    case 0xC2ECF2: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:262 STZ a:0 + (.SIZEOF(spritemap) * 12) + spritemap::y_offset,X
    case 0xC2ECF4: {
        Instruction step(cpu, 0x9E, 0x00003Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:263 LDY #(.SIZEOF(spritemap) * 12) + spritemap::x_offset
    case 0xC2ECF7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:263 LDY #(.SIZEOF(spritemap) * 12) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ECF7.
    case 0xC2ECF9: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:264 STA (@LOCAL08),Y
    case 0xC2ECFA: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:265 LDY #(.SIZEOF(spritemap) * 8) + spritemap::x_offset
    case 0xC2ECFC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Bu : 0x00002Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:265 LDY #(.SIZEOF(spritemap) * 8) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ECFC.
    case 0xC2ECFE: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:266 STA (@LOCAL08),Y
    case 0xC2ECFF: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:267 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    case 0xC2ED01: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:267 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED01.
    case 0xC2ED03: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:268 STA (@LOCAL08),Y
    case 0xC2ED04: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:269 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    case 0xC2ED06: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:269 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED06.
    case 0xC2ED08: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:270 STA (@LOCAL08),Y
    case 0xC2ED09: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:271 LDA #224
    case 0xC2ED0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x00A0E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:272 LDY #(.SIZEOF(spritemap) * 13) + spritemap::x_offset
    case 0xC2ED0D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000044u : 0x000044u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:272 LDY #(.SIZEOF(spritemap) * 13) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED0B.
    case 0xC2ED0E: {
        Instruction step(cpu, 0x44, 0x009100u, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:272 LDY #(.SIZEOF(spritemap) * 13) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED0D.
    case 0xC2ED0F: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:273 STA (@LOCAL08),Y
    case 0xC2ED10: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:273 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2ED0E.
    case 0xC2ED11: {
        Instruction step(cpu, 0x26, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:274 LDY #(.SIZEOF(spritemap) * 9) + spritemap::x_offset
    case 0xC2ED12: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:274 LDY #(.SIZEOF(spritemap) * 9) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED11.
    case 0xC2ED13: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:274 LDY #(.SIZEOF(spritemap) * 9) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED12.
    case 0xC2ED14: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:275 STA (@LOCAL08),Y
    case 0xC2ED15: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:276 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    case 0xC2ED17: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:276 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED17.
    case 0xC2ED19: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:277 STA (@LOCAL08),Y
    case 0xC2ED1A: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:278 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    case 0xC2ED1C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:278 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED1C.
    case 0xC2ED1E: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:279 STA (@LOCAL08),Y
    case 0xC2ED1F: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:280 LDX @LOCAL08
    case 0xC2ED21: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:281 STZ a:0 + (.SIZEOF(spritemap) * 14) + spritemap::x_offset,X
    case 0xC2ED23: {
        Instruction step(cpu, 0x9E, 0x000049u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:282 LDX @LOCAL08
    case 0xC2ED26: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:283 STZ a:0 + (.SIZEOF(spritemap) * 10) + spritemap::x_offset,X
    case 0xC2ED28: {
        Instruction step(cpu, 0x9E, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:284 LDX @LOCAL08
    case 0xC2ED2B: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:285 STZ a:0 + (.SIZEOF(spritemap) * 6) + spritemap::x_offset,X
    case 0xC2ED2D: {
        Instruction step(cpu, 0x9E, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:286 LDX @LOCAL08
    case 0xC2ED30: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:287 STZ a:0 + (.SIZEOF(spritemap) * 2) + spritemap::x_offset,X
    case 0xC2ED32: {
        Instruction step(cpu, 0x9E, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:288 LDA #32
    case 0xC2ED35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x00A020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:289 LDY #(.SIZEOF(spritemap) * 15) + spritemap::x_offset
    case 0xC2ED37: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:289 LDY #(.SIZEOF(spritemap) * 15) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED35.
    case 0xC2ED38: {
        Instruction step(cpu, 0x4E, 0x009100u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:289 LDY #(.SIZEOF(spritemap) * 15) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED37.
    case 0xC2ED39: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:290 STA (@LOCAL08),Y
    case 0xC2ED3A: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:290 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2ED38.
    case 0xC2ED3B: {
        Instruction step(cpu, 0x26, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:291 LDY #(.SIZEOF(spritemap) * 11) + spritemap::x_offset
    case 0xC2ED3C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:291 LDY #(.SIZEOF(spritemap) * 11) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED3B.
    case 0xC2ED3D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:291 LDY #(.SIZEOF(spritemap) * 11) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED3C.
    case 0xC2ED3E: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:292 STA (@LOCAL08),Y
    case 0xC2ED3F: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:293 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    case 0xC2ED41: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:293 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED41.
    case 0xC2ED43: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:294 STA (@LOCAL08),Y
    case 0xC2ED44: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:295 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    case 0xC2ED46: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:295 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED46.
    case 0xC2ED48: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:296 STA (@LOCAL08),Y
    case 0xC2ED49: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:298 LDY @LOCAL07
    case 0xC2ED4B: {
        Instruction step(cpu, 0xA4, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:299 REP #PROC_FLAGS::ACCUM8
    case 0xC2ED4D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:300 LDA @VIRTUAL02
    case 0xC2ED4F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:301 JSL MULT16
    case 0xC2ED51: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED55: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED57: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED58: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED59: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:303 TAY
    case 0xC2ED5B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:304 DEY
    case 0xC2ED5C: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:305 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ED5D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:306 LDA #$81
    case 0xC2ED5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000081u : 0x009181u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:307 STA (@LOCAL08),Y
    case 0xC2ED61: {
        Instruction step(cpu, 0x91, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:307 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2ED5F.
    case 0xC2ED62: {
        Instruction step(cpu, 0x26, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC2ED63: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:308 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2ED62.
    case 0xC2ED64: {
        Instruction step(cpu, 0x20, 0x00B4ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:309 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2ED65: {
        Instruction step(cpu, 0xAD, 0x00AAB4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:309 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    // Overlapping static entry reached from 0xC2ED64.
    case 0xC2ED67: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED68: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED70: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED71: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:311 STA @LOCAL04
    case 0xC2ED72: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:312 LDA #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2ED74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x00AC16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:312 LDA #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2ED74.
    case 0xC2ED76: {
        Instruction step(cpu, 0xAC, 0x002685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:313 STA @LOCAL20ALT2
    case 0xC2ED77: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:314 LDA @LOCAL04
    case 0xC2ED79: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:315 CLC
    case 0xC2ED7B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:316 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2ED7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00AAD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:316 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2ED7C.
    case 0xC2ED7E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED7F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED81: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED82: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED84: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED85: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED87: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:318 REP #PROC_FLAGS::ACCUM8
    case 0xC2ED89: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ED8B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ED8D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ED8F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ED91: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:320 LDX #80
    case 0xC2ED93: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:320 LDX #80
    // Overlapping static entry reached from 0xC2ED93.
    case 0xC2ED95: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:321 LDA @LOCAL04
    case 0xC2ED96: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:322 CLC
    case 0xC2ED98: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:323 ADC @LOCAL20ALT2
    case 0xC2ED99: {
        Instruction step(cpu, 0x65, 0x000026u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:324 JSL MEMCPY16
    case 0xC2ED9B: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:325 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2ED9F: {
        Instruction step(cpu, 0xAD, 0x00AAB4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDAA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDAB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:327 CLC
    case 0xC2EDAC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:328 ADC @LOCAL20ALT2
    case 0xC2EDAD: {
        Instruction step(cpu, 0x65, 0x000026u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:329 STA @LOCAL04
    case 0xC2EDAF: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:330 LDX #0
    case 0xC2EDB1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:330 LDX #0
    // Overlapping static entry reached from 0xC2EDB1.
    case 0xC2EDB3: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:331 BRA @UNKNOWN11
    case 0xC2EDB4: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:333 REP #PROC_FLAGS::ACCUM8
    case 0xC2EDB6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:334 TXA
    case 0xC2EDB8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EDB9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EDBB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EDBC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EDBD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:336 STA @VIRTUAL02
    case 0xC2EDBF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:337 INC @VIRTUAL02
    case 0xC2EDC1: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:338 INC @VIRTUAL02
    case 0xC2EDC3: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:339 LDA @LOCAL04
    case 0xC2EDC5: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:340 CLC
    case 0xC2EDC7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:341 ADC @VIRTUAL02
    case 0xC2EDC8: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:342 STA @LOCAL05
    case 0xC2EDCA: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:343 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EDCC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:344 LDA (@LOCAL05)
    case 0xC2EDCE: {
        Instruction step(cpu, 0xB2, 0x000020u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:345 CLC
    case 0xC2EDD0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:346 ADC #8
    case 0xC2EDD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x009208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:347 STA (@LOCAL05)
    case 0xC2EDD3: {
        Instruction step(cpu, 0x92, 0x000020u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:347 STA (@LOCAL05)
    // Overlapping static entry reached from 0xC2EDD1.
    case 0xC2EDD4: {
        Instruction step(cpu, 0x20, 0x00E0E8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:348 INX
    case 0xC2EDD5: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:350 CPX #16
    case 0xC2EDD6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:350 CPX #16
    // Overlapping static entry reached from 0xC2EDD4.
    case 0xC2EDD7: {
        Instruction step(cpu, 0x10, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:350 CPX #16
    // Overlapping static entry reached from 0xC2EDD6.
    case 0xC2EDD8: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:351 BCC @UNKNOWN10
    case 0xC2EDD9: {
        Instruction step(cpu, 0x90, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC2EDDB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:353 LDA @LOCAL06
    case 0xC2EDDD: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:354 STA @VIRTUAL02
    case 0xC2EDDF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:355 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EDE1: {
        Instruction step(cpu, 0xAD, 0x00AAB4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:356 ASL
    case 0xC2EDE4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:357 TAX
    case 0xC2EDE5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:358 LDA @VIRTUAL02
    case 0xC2EDE6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:359 STA CURRENT_BATTLE_SPRITE_WIDTHS,X
    case 0xC2EDE8: {
        Instruction step(cpu, 0x9D, 0x00AAC6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:360 LDY @LOCAL07
    case 0xC2EDEB: {
        Instruction step(cpu, 0xA4, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:361 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EDED: {
        Instruction step(cpu, 0xAD, 0x00AAB4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:362 ASL
    case 0xC2EDF0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:363 TAX
    case 0xC2EDF1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:364 TYA
    case 0xC2EDF2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:365 STA CURRENT_BATTLE_SPRITE_HEIGHTS,X
    case 0xC2EDF3: {
        Instruction step(cpu, 0x9D, 0x00AACEu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:366 INC CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EDF6: {
        Instruction step(cpu, 0xEE, 0x00AAB4u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2EDF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EDF9.
    case 0xC2EDFB: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2EDFC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2EDFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EDFE.
    case 0xC2EE00: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2EE01: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE03: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE05: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE07: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE09: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    case 0xC2EE0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EEu : 0x0062EEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE0B.
    case 0xC2EE0D: {
        Instruction step(cpu, 0x62, 0x000A85u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    case 0xC2EE0E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    case 0xC2EE10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CEu : 0x0000CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE10.
    case 0xC2EE12: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    case 0xC2EE13: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:374 LDA @LOCAL09
    case 0xC2EE15: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:375 STA @VIRTUAL04
    case 0xC2EE17: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EE19: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EE1B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EE1C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EE1D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:377 CLC
    case 0xC2EE1F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:384 ADC @VIRTUAL0A
    case 0xC2EE20: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:385 STA @VIRTUAL0A
    case 0xC2EE22: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE24: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE24.
    case 0xC2EE26: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE27: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE29: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE2A: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE2C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE2E: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:387 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2EE30: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:387 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2EE32: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:387 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2EE34: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:387 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2EE36: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE38: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE3A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE3C: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE3E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2EE40: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2EE42: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2EE44: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2EE46: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:391 JSL DECOMP
    case 0xC2EE48: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE4C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE4E: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE50: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE52: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:393 LDY @LOCAL07
    case 0xC2EE54: {
        Instruction step(cpu, 0xA4, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:394 LDA @VIRTUAL02
    case 0xC2EE56: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:395 JSL MULT16
    case 0xC2EE58: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:396 TAY
    case 0xC2EE5C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:397 JMP @UNKNOWN17
    case 0xC2EE5D: {
        Instruction step(cpu, 0x4C, 0x00EEDBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2EE60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE60.
    case 0xC2EE62: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2EE63: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2EE65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE65.
    case 0xC2EE67: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2EE68: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:400 LDA CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EE6A: {
        Instruction step(cpu, 0xAD, 0x00AAB2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:401 ASL
    case 0xC2EE6D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:402 TAX
    case 0xC2EE6E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:403 LDA f:UNKNOWN_C3F871,X
    case 0xC2EE6F: {
        Instruction step(cpu, 0xBF, 0xC3F871u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:404 CLC
    case 0xC2EE73: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:405 ADC @VIRTUAL0A
    case 0xC2EE74: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:406 STA @VIRTUAL0A
    case 0xC2EE76: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:407 INC CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EE78: {
        Instruction step(cpu, 0xEE, 0x00AAB2u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:408 LDA #0
    case 0xC2EE7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:408 LDA #0
    // Overlapping static entry reached from 0xC2EE7B.
    case 0xC2EE7D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:409 STA @LOCAL20ALT
    case 0xC2EE7E: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:410 BRA @UNKNOWN16
    case 0xC2EE80: {
        Instruction step(cpu, 0x80, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE82: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE84: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE86: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE88: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EE8A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EE8C: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EE8E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EE90: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:414 LDX #0
    case 0xC2EE92: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:414 LDX #0
    // Overlapping static entry reached from 0xC2EE92.
    case 0xC2EE94: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:415 BRA @UNKNOWN15
    case 0xC2EE95: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:417 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EE97: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:418 LDA [@LOCAL03]
    case 0xC2EE99: {
        Instruction step(cpu, 0xA7, 0x00001Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:419 STA [@VIRTUAL06]
    case 0xC2EE9B: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:420 REP #PROC_FLAGS::ACCUM8
    case 0xC2EE9D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE9F: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EEA1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EEA3: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EEA5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:422 INC @VIRTUAL06
    case 0xC2EEA7: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EEA9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EEAB: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EEAD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EEAF: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EEB1: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EEB3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EEB5: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EEB7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:425 INC @VIRTUAL06
    case 0xC2EEB9: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EEBB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EEBD: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EEBF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EEC1: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:427 INX
    case 0xC2EEC3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:429 CPX #$0080
    case 0xC2EEC4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:429 CPX #$0080
    // Overlapping static entry reached from 0xC2EEC4.
    case 0xC2EEC6: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:430 BCC @UNKNOWN14
    case 0xC2EEC7: {
        Instruction step(cpu, 0x90, 0x0000CEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:431 LDA #$0200
    case 0xC2EEC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:431 LDA #$0200
    // Overlapping static entry reached from 0xC2EEC9.
    case 0xC2EECB: {
        Instruction step(cpu, 0x02, 0x000018u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:432 CLC
    case 0xC2EECC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:433 ADC @VIRTUAL0A
    case 0xC2EECD: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:434 STA @VIRTUAL0A
    case 0xC2EECF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:435 LDA @LOCAL20ALT
    case 0xC2EED1: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:436 INC
    case 0xC2EED3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:437 STA @LOCAL20ALT
    case 0xC2EED4: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:439 CMP #4
    case 0xC2EED6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:439 CMP #4
    // Overlapping static entry reached from 0xC2EED6.
    case 0xC2EED8: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:440 BCC @UNKNOWN13
    case 0xC2EED9: {
        Instruction step(cpu, 0x90, 0x0000A7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:442 TYX
    case 0xC2EEDB: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:443 DEY
    case 0xC2EEDC: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:444 CPX #0
    case 0xC2EEDD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/load_battle_sprite.asm:444 CPX #0
    // Overlapping static entry reached from 0xC2EEDD.
    case 0xC2EEDF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/load_battle_sprite.asm:445 BNEL @UNKNOWN12
    case 0xC2EEE0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/load_battle_sprite.asm:445 BNEL @UNKNOWN12
    case 0xC2EEE2: {
        Instruction step(cpu, 0x4C, 0x00EE60u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_battle_sprite.asm:446 END_C_FUNCTION
    case 0xC2EEE5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/load_battle_sprite.asm:446 END_C_FUNCTION
    case 0xC2EEE6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
