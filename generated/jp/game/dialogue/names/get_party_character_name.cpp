// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/get_party_character_name.asm
bool resume_text_get_party_character_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_party_character_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22172: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC22174: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC22175: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC22176: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC22177: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22177.
    case 0xC22179: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC2217A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC2217B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:9 STA @LOCAL00
    case 0xC2217C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC22179.
    case 0xC2217D: {
        Instruction step(cpu, 0x0E, 0x0004C9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:10 CMP #PARTY_MEMBER::POO
    case 0xC2217E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:10 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2217E.
    case 0xC22180: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/get_party_character_name.asm:11 BLTEQ @UNKNOWN1
    case 0xC22181: {
        Instruction step(cpu, 0x90, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/get_party_character_name.asm:11 BLTEQ @UNKNOWN1
    case 0xC22183: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:12 CMP #PARTY_MEMBER::KING
    case 0xC22185: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:12 CMP #PARTY_MEMBER::KING
    // Overlapping static entry reached from 0xC22185.
    case 0xC22187: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:13 BNE @UNKNOWN0
    case 0xC22188: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC2218A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CDu : 0x009ACDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC2218A.
    case 0xC2218C: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC2218D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC2218F: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC22190: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC22192: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC22193: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC22195: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC22197: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22199: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2219B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2219D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2219F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:17 BRA @RETURN
    case 0xC221A1: {
        Instruction step(cpu, 0x80, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC221A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC221A3.
    case 0xC221A5: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC221A6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC221A5.
    case 0xC221A7: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC221A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC221A7.
    case 0xC221A9: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC221A8.
    case 0xC221AA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC221AB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:20 LDA @LOCAL00
    case 0xC221AD: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:21 ASL
    case 0xC221AF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:22 TAX
    case 0xC221B0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:23 INX
    case 0xC221B1: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:24 LDA f:NPC_AI_TABLE,X
    case 0xC221B2: {
        Instruction step(cpu, 0xBF, 0xD59DDAu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:25 AND #$00FF
    case 0xC221B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC221B6.
    case 0xC221B8: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:26 LDY #.SIZEOF(enemy_data)
    case 0xC221B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:26 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC221B9.
    case 0xC221BB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:27 JSL MULT168
    case 0xC221BC: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:31 CLC
    case 0xC221C0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:32 ADC @VIRTUAL06
    case 0xC221C1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:33 STA @VIRTUAL06
    case 0xC221C3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:34 STA @RETURNVAL
    case 0xC221C5: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:35 LDA @VIRTUAL06+2
    case 0xC221C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:36 STA @RETURNVAL+2
    case 0xC221C9: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:37 BRA @RETURN
    case 0xC221CB: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:39 DEC
    case 0xC221CD: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:40 LDY #.SIZEOF(char_struct)
    case 0xC221CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:40 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC221CE.
    case 0xC221D0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:41 JSL MULT168
    case 0xC221D1: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:42 CLC
    case 0xC221D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC221D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC221D6.
    case 0xC221D8: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221D9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221DB: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221DC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221DE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221DF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221E1: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC221E3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC221E5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC221E7: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC221E9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC221EB: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_party_character_name.asm:48 END_C_FUNCTION
    case 0xC221ED: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/get_party_character_name.asm:48 END_C_FUNCTION
    case 0xC221EE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
