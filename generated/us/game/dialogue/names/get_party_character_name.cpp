// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/get_party_character_name.asm
bool resume_text_get_party_character_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_party_character_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC222D3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222D5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222D6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222D7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC222D8.
    case 0xC222DA: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222DB: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222DC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:9 STA @LOCAL00
    case 0xC222DD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC222DA.
    case 0xC222DE: {
        Instruction step(cpu, 0x0E, 0x0004C9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:10 CMP #PARTY_MEMBER::POO
    case 0xC222DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:10 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC222DF.
    case 0xC222E1: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/get_party_character_name.asm:11 BLTEQ @UNKNOWN1
    case 0xC222E2: {
        Instruction step(cpu, 0x90, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/get_party_character_name.asm:11 BLTEQ @UNKNOWN1
    case 0xC222E4: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:12 CMP #PARTY_MEMBER::KING
    case 0xC222E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:12 CMP #PARTY_MEMBER::KING
    // Overlapping static entry reached from 0xC222E6.
    case 0xC222E8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:13 BNE @UNKNOWN0
    case 0xC222E9: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x009819u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC222EB.
    case 0xC222ED: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222EE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F0: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F6: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC222F8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC222FA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC222FC: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC222FE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22300: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:17 BRA @RETURN
    case 0xC22302: {
        Instruction step(cpu, 0x80, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC22304: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC22304.
    case 0xC22306: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC22307: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC22306.
    case 0xC22308: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC22309: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC22308.
    case 0xC2230A: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC22309.
    case 0xC2230B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2230C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:20 LDA @LOCAL00
    case 0xC2230E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:21 ASL
    case 0xC22310: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:22 TAX
    case 0xC22311: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:23 INX
    case 0xC22312: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:24 LDA f:NPC_AI_TABLE,X
    case 0xC22313: {
        Instruction step(cpu, 0xBF, 0xD58F23u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:25 AND #$00FF
    case 0xC22317: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC22317.
    case 0xC22319: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:26 LDY #.SIZEOF(enemy_data)
    case 0xC2231A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:26 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2231A.
    case 0xC2231C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:27 JSL MULT168
    case 0xC2231D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:29 INC
    case 0xC22321: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:31 CLC
    case 0xC22322: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:32 ADC @VIRTUAL06
    case 0xC22323: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:33 STA @VIRTUAL06
    case 0xC22325: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:34 STA @RETURNVAL
    case 0xC22327: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:35 LDA @VIRTUAL06+2
    case 0xC22329: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:36 STA @RETURNVAL+2
    case 0xC2232B: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:37 BRA @RETURN
    case 0xC2232D: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:39 DEC
    case 0xC2232F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:40 LDY #.SIZEOF(char_struct)
    case 0xC22330: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:40 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22330.
    case 0xC22332: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:41 JSL MULT168
    case 0xC22333: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:42 CLC
    case 0xC22337: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC22338: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC22338.
    case 0xC2233A: {
        Instruction step(cpu, 0x99, 0x000685u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2233B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2233D: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2233E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC22340: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC22341: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC22343: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/get_party_character_name.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC22345: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22347: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22349: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2234B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2234D: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_party_character_name.asm:48 END_C_FUNCTION
    case 0xC2234F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/get_party_character_name.asm:48 END_C_FUNCTION
    case 0xC22350: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
