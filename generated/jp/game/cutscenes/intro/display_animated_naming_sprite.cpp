// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/display_animated_naming_sprite.asm
bool resume_introduction_display_animated_naming_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/display_animated_naming_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4AAA9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAAB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAAC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAAD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AAAE.
    case 0xC4AAB0: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAB1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAB2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:12 STA @LOCAL04
    case 0xC4AAB3: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC4AAB0.
    case 0xC4AAB4: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4AAB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000063u : 0x00F863u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AAB4.
    case 0xC4AAB6: {
        Instruction step(cpu, 0x63, 0x0000F8u, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AAB5.
    case 0xC4AAB7: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4AAB8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4AABA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AABA.
    case 0xC4AABC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4AABD: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:14 LDA @LOCAL04
    case 0xC4AABF: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:15 ASL
    case 0xC4AAC1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:16 ASL
    case 0xC4AAC2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:17 CLC
    case 0xC4AAC3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:18 ADC @VIRTUAL0A
    case 0xC4AAC4: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:19 STA @VIRTUAL0A
    case 0xC4AAC6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AAC8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AAC8.
    case 0xC4AACA: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AACB: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AACD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AACE: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AAD0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AAD2: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:21 BRA @UNKNOWN1
    case 0xC4AAD4: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:24 LDA #0
    case 0xC4AAD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:24 LDA #0
    // Overlapping static entry reached from 0xC4AAD6.
    case 0xC4AAD8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:25 STA @LOCAL00
    case 0xC4AAD9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:26 STA @LOCAL01
    case 0xC4AADB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:31 LDY #$FFFF
    case 0xC4AADD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:31 LDY #$FFFF
    // Overlapping static entry reached from 0xC4AADD.
    case 0xC4AADF: {
        Instruction step(cpu, 0xFF, 0xA01484u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:32 STY @LOCAL03
    case 0xC4AAE0: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    case 0xC4AAE2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    // Overlapping static entry reached from 0xC4AADF.
    case 0xC4AAE3: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    // Overlapping static entry reached from 0xC4AAE2.
    case 0xC4AAE4: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:34 LDA [@VIRTUAL06],Y
    case 0xC4AAE5: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:35 TAX
    case 0xC4AAE7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:36 LDA @LOCAL02
    case 0xC4AAE8: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:37 LDY @LOCAL03
    case 0xC4AAEA: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:38 JSL CREATE_ENTITY
    case 0xC4AAEC: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:39 LDA #.SIZEOF(naming_screen_entity)
    case 0xC4AAF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:39 LDA #.SIZEOF(naming_screen_entity)
    // Overlapping static entry reached from 0xC4AAF0.
    case 0xC4AAF2: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:40 CLC
    case 0xC4AAF3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:41 ADC @VIRTUAL06
    case 0xC4AAF4: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:42 STA @VIRTUAL06
    case 0xC4AAF6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:44 LDA [@VIRTUAL06]
    case 0xC4AAF8: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:45 STA @LOCAL02
    case 0xC4AAFA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:46 BNE @UNKNOWN0
    case 0xC4AAFC: {
        Instruction step(cpu, 0xD0, 0x0000D8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/display_animated_naming_sprite.asm:47 STZ WAIT_FOR_NAMING_SCREEN_ACTIONSCRIPT
    case 0xC4AAFE: {
        Instruction step(cpu, 0x9C, 0x00B688u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:48 END_C_FUNCTION
    case 0xC4AB01: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/display_animated_naming_sprite.asm:48 END_C_FUNCTION
    case 0xC4AB02: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
