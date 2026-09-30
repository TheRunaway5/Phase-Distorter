// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/print_cast_name_entity_var0.asm
bool resume_ending_print_cast_name_entity_var0(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BE0A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE0C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE0D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE0E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BE0F.
    case 0xC4BE11: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE12: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE13: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:15 STY @LOCAL02
    case 0xC4BE14: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:15 STY @LOCAL02
    // Overlapping static entry reached from 0xC4BE11.
    case 0xC4BE15: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:16 STX @VIRTUAL04
    case 0xC4BE16: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:16 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4BE15.
    case 0xC4BE17: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:17 TAX
    case 0xC4BE18: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:18 DEC
    case 0xC4BE19: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC4BE1A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4BE1A.
    case 0xC4BE1C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:20 JSL MULT168
    case 0xC4BE1D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:21 CLC
    case 0xC4BE21: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:22 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC4BE22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:22 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC4BE22.
    case 0xC4BE24: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE25: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE27: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE28: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE2A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE2B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE2D: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC4BE2F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BE31: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BE33: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BE35: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BE37: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:26 LDX #.SIZEOF(char_struct::name)
    case 0xC4BE39: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:26 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC4BE39.
    case 0xC4BE3B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:27 LDA @VIRTUAL04
    case 0xC4BE3C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:28 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BE3E: {
        Instruction step(cpu, 0x22, 0xC4BBE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:29 STA @VIRTUAL02
    case 0xC4BE42: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BE44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000081u : 0x002381u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BE44.
    case 0xC4BE46: {
        Instruction step(cpu, 0x23, 0x000085u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BE47: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BE46.
    case 0xC4BE48: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BE49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BE48.
    case 0xC4BE4A: {
        Instruction step(cpu, 0xE1, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BE49.
    case 0xC4BE4B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BE4C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BE4E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BE50: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BE52: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BE54: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:32 LDA CURRENT_ENTITY_SLOT
    case 0xC4BE56: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:33 ASL
    case 0xC4BE59: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:34 TAX
    case 0xC4BE5A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:35 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4BE5B: {
        Instruction step(cpu, 0xBD, 0x000E54u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:36 ASL
    case 0xC4BE5E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:37 CLC
    case 0xC4BE5F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:38 ADC @VIRTUAL06
    case 0xC4BE60: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:39 STA @VIRTUAL06
    case 0xC4BE62: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:40 LDA [@VIRTUAL06]
    case 0xC4BE64: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:41 STORE_INT1632 @VIRTUAL0A
    case 0xC4BE66: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:41 STORE_INT1632 @VIRTUAL0A
    case 0xC4BE68: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:42 PUSH32 @VIRTUAL0A
    case 0xC4BE6A: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:42 PUSH32 @VIRTUAL0A
    case 0xC4BE6C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:42 PUSH32 @VIRTUAL0A
    case 0xC4BE6D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:42 PUSH32 @VIRTUAL0A
    case 0xC4BE6F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BE70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4BE70.
    case 0xC4BE72: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BE73: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BE75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4BE75.
    case 0xC4BE77: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BE78: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:44 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BE7A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:44 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BE7C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:44 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BE7E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:44 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BE80: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:968 LDA val1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE82: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:969 AND val2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE84: {
        Instruction step(cpu, 0x25, 0x00000Au, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:970 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE86: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE88: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE8A: {
        Instruction step(cpu, 0x25, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE8C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:46 PULL32 @VIRTUAL0A
    case 0xC4BE8E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:46 PULL32 @VIRTUAL0A
    case 0xC4BE8F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:46 PULL32 @VIRTUAL0A
    case 0xC4BE91: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:46 PULL32 @VIRTUAL0A
    case 0xC4BE92: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:47 CLC
    case 0xC4BE94: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE95: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE97: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE99: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE9B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE9D: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE9F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEA1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEA3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEA5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEA7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:50 LDX #32
    case 0xC4BEA9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:50 LDX #32
    // Overlapping static entry reached from 0xC4BEA9.
    case 0xC4BEAB: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:51 LDA @VIRTUAL04
    case 0xC4BEAC: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:52 CLC
    case 0xC4BEAE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:53 ADC @VIRTUAL02
    case 0xC4BEAF: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:54 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BEB1: {
        Instruction step(cpu, 0x22, 0xC4BBE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:55 PHA
    case 0xC4BEB5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:56 LDA @VIRTUAL02
    case 0xC4BEB6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:57 PLY
    case 0xC4BEB8: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:58 STY @VIRTUAL02
    case 0xC4BEB9: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:59 CLC
    case 0xC4BEBB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:60 ADC @VIRTUAL02
    case 0xC4BEBC: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:61 TAY
    case 0xC4BEBE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:62 LDX @LOCAL02
    case 0xC4BEBF: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:63 LDA @VIRTUAL04
    case 0xC4BEC1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:64 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4BEC3: {
        Instruction step(cpu, 0x22, 0xC4BC65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:74 PLD
    case 0xC4BEC7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:75 RTL
    case 0xC4BEC8: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
