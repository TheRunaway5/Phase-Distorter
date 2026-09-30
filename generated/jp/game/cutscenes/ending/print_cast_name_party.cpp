// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/print_cast_name_party.asm
bool resume_ending_print_cast_name_party(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name_party.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BD9D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BD9F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BDA2.
    case 0xC4BDA4: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:14 STY @VIRTUAL04
    case 0xC4BDA7: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:14 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4BDA4.
    case 0xC4BDA8: {
        Instruction step(cpu, 0x04, 0x000086u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:15 STX @VIRTUAL02
    case 0xC4BDA9: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:15 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BDA8.
    case 0xC4BDAA: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:16 TAX
    case 0xC4BDAB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:17 CPX #7
    case 0xC4BDAC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:17 CPX #7
    // Overlapping static entry reached from 0xC4BDAC.
    case 0xC4BDAE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:18 BEQ @UNKNOWN0
    case 0xC4BDAF: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:19 TXA
    case 0xC4BDB1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:20 DEC
    case 0xC4BDB2: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:21 LDY #.SIZEOF(char_struct)
    case 0xC4BDB3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:21 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4BDB3.
    case 0xC4BDB5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:22 JSL MULT168
    case 0xC4BDB6: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:23 CLC
    case 0xC4BDBA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:24 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC4BDBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:24 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC4BDBB.
    case 0xC4BDBD: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDBE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC0: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC6: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC4BDC8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_party.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDCA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDCC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_party.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDCE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_party.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDD0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:28 LDX #.SIZEOF(char_struct::name)
    case 0xC4BDD2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:28 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC4BDD2.
    case 0xC4BDD4: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:29 LDA @VIRTUAL02
    case 0xC4BDD5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:30 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BDD7: {
        Instruction step(cpu, 0x22, 0xC4BBE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:31 TAX
    case 0xC4BDDB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:32 BRA @UNKNOWN1
    case 0xC4BDDC: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CDu : 0x009ACDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BDDE.
    case 0xC4BDE0: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE3: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE9: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC4BDEB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_party.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDED: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDEF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_party.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDF1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_party.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDF3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:37 LDX #.SIZEOF(game_state::pet_name)
    case 0xC4BDF5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:37 LDX #.SIZEOF(game_state::pet_name)
    // Overlapping static entry reached from 0xC4BDF5.
    case 0xC4BDF7: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:38 LDA @VIRTUAL02
    case 0xC4BDF8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:39 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BDFA: {
        Instruction step(cpu, 0x22, 0xC4BBE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:40 TAX
    case 0xC4BDFE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:42 TXY
    case 0xC4BDFF: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:43 LDX @VIRTUAL04
    case 0xC4BE00: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:44 LDA @VIRTUAL02
    case 0xC4BE02: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:45 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4BE04: {
        Instruction step(cpu, 0x22, 0xC4BC65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/print_cast_name_party.asm:76 END_C_FUNCTION
    case 0xC4BE08: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/print_cast_name_party.asm:76 END_C_FUNCTION
    case 0xC4BE09: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
