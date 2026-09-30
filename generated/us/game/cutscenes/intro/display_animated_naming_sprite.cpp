// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/display_animated_naming_sprite.asm
bool resume_introduction_display_animated_naming_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/display_animated_naming_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D7D9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7DB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7DC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7DD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D7DE.
    case 0xC4D7E0: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7E1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7E2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:12 STA @LOCAL04
    case 0xC4D7E3: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC4D7E0.
    case 0xC4D7E4: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4D7E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Du : 0x00FD2Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D7E4.
    case 0xC4D7E6: {
        Instruction step(cpu, 0x2D, 0x0085FDu, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D7E5.
    case 0xC4D7E7: {
        Instruction step(cpu, 0xFD, 0x000A85u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4D7E8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D7E6.
    case 0xC4D7E9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4D7EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D7EA.
    case 0xC4D7EC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4D7ED: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:14 LDA @LOCAL04
    case 0xC4D7EF: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:15 ASL
    case 0xC4D7F1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:16 ASL
    case 0xC4D7F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:17 CLC
    case 0xC4D7F3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:18 ADC @VIRTUAL0A
    case 0xC4D7F4: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:19 STA @VIRTUAL0A
    case 0xC4D7F6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D7F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D7F8.
    case 0xC4D7FA: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D7FB: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D7FD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D7FE: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D800: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D802: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:21 BRA @UNKNOWN1
    case 0xC4D804: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:28 STZ @LOCAL00
    case 0xC4D806: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:29 STZ @LOCAL01
    case 0xC4D808: {
        Instruction step(cpu, 0x64, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:31 LDY #$FFFF
    case 0xC4D80A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:31 LDY #$FFFF
    // Overlapping static entry reached from 0xC4D80A.
    case 0xC4D80C: {
        Instruction step(cpu, 0xFF, 0xA01484u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:32 STY @LOCAL03
    case 0xC4D80D: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    case 0xC4D80F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    // Overlapping static entry reached from 0xC4D80C.
    case 0xC4D810: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    // Overlapping static entry reached from 0xC4D80F.
    case 0xC4D811: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:34 LDA [@VIRTUAL06],Y
    case 0xC4D812: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:35 TAX
    case 0xC4D814: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:36 LDA @LOCAL02
    case 0xC4D815: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:37 LDY @LOCAL03
    case 0xC4D817: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:38 JSL CREATE_ENTITY
    case 0xC4D819: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:39 LDA #.SIZEOF(naming_screen_entity)
    case 0xC4D81D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:39 LDA #.SIZEOF(naming_screen_entity)
    // Overlapping static entry reached from 0xC4D81D.
    case 0xC4D81F: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:40 CLC
    case 0xC4D820: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:41 ADC @VIRTUAL06
    case 0xC4D821: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:42 STA @VIRTUAL06
    case 0xC4D823: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:44 LDA [@VIRTUAL06]
    case 0xC4D825: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:45 STA @LOCAL02
    case 0xC4D827: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:46 BNE @UNKNOWN0
    case 0xC4D829: {
        Instruction step(cpu, 0xD0, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:47 STZ WAIT_FOR_NAMING_SCREEN_ACTIONSCRIPT
    case 0xC4D82B: {
        Instruction step(cpu, 0x9C, 0x00B4B4u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:48 END_C_FUNCTION
    case 0xC4D82E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/display_animated_naming_sprite.asm:48 END_C_FUNCTION
    case 0xC4D82F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
