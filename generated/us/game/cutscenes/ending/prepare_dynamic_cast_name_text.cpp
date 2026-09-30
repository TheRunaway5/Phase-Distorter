// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/prepare_dynamic_cast_name_text.asm
bool resume_ending_prepare_dynamic_cast_name_text(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E7AE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    case 0xC4E7B0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    case 0xC4E7B1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    case 0xC4E7B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CAu : 0x00FFCAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E7B2.
    case 0xC4E7B4: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    case 0xC4E7B5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:14 LDA #0
    case 0xC4E7B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:14 LDA #0
    // Overlapping static entry reached from 0xC4E7B6.
    case 0xC4E7B8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:15 STA @VIRTUAL02
    case 0xC4E7B9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:16 BRA @UNKNOWN1
    case 0xC4E7BB: {
        Instruction step(cpu, 0x80, 0x000069u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E7BD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:19 STZ @LOCAL00
    case 0xC4E7BF: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:20 LDX #16
    case 0xC4E7C1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:20 LDX #16
    // Overlapping static entry reached from 0xC4E7C1.
    case 0xC4E7C3: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC4E7C4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:22 TDC
    case 0xC4E7C6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:23 CLC
    case 0xC4E7C7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:24 ADC #@LOCAL02
    case 0xC4E7C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:24 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E7C8.
    case 0xC4E7CA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:25 JSL MEMSET16
    case 0xC4E7CB: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:26 TDC
    case 0xC4E7CF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:27 CLC
    case 0xC4E7D0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:28 ADC #@LOCAL02
    case 0xC4E7D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:28 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E7D1.
    case 0xC4E7D3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7D4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7D6: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7D7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7D9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7DA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7DC: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC4E7DE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E7E0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E7E2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E7E4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E7E6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:32 LDA @VIRTUAL02
    case 0xC4E7E8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC4E7EA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4E7EA.
    case 0xC4E7EC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:34 JSL MULT168
    case 0xC4E7ED: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:35 CLC
    case 0xC4E7F1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC4E7F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC4E7F2.
    case 0xC4E7F4: {
        Instruction step(cpu, 0x99, 0x000685u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7F5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7F7: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7F8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7FA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7FB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7FD: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC4E7FF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E801: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E803: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E805: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E807: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:40 LDA #5
    case 0xC4E809: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:40 LDA #5
    // Overlapping static entry reached from 0xC4E809.
    case 0xC4E80B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:41 JSL MEMCPY24
    case 0xC4E80C: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:42 LDA @VIRTUAL02
    case 0xC4E810: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:43 ASL
    case 0xC4E812: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:44 TAX
    case 0xC4E813: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:45 LDA PARTY_MEMBER_CAST_TILE_IDS,X
    case 0xC4E814: {
        Instruction step(cpu, 0xBF, 0xC3FDB5u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:46 TAY
    case 0xC4E818: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:47 LDX #UNK_SIZE
    case 0xC4E819: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:47 LDX #UNK_SIZE
    // Overlapping static entry reached from 0xC4E819.
    case 0xC4E81B: {
        Instruction step(cpu, 0x00, 0x00007Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:48 TDC
    case 0xC4E81C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:49 CLC
    case 0xC4E81D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:50 ADC #@LOCAL02
    case 0xC4E81E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:50 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E81E.
    case 0xC4E820: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:51 JSR RENDER_CAST_NAME_TEXT
    case 0xC4E821: {
        Instruction step(cpu, 0x20, 0x00E583u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:52 INC @VIRTUAL02
    case 0xC4E824: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:54 LDA @VIRTUAL02
    case 0xC4E826: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:55 CMP #4
    case 0xC4E828: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:55 CMP #4
    // Overlapping static entry reached from 0xC4E828.
    case 0xC4E82A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:56 BCC @UNKNOWN0
    case 0xC4E82B: {
        Instruction step(cpu, 0x90, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E82D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:58 STZ @LOCAL00
    case 0xC4E82F: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:59 LDX #16
    case 0xC4E831: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:59 LDX #16
    // Overlapping static entry reached from 0xC4E831.
    case 0xC4E833: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC4E834: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:61 TDC
    case 0xC4E836: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:62 CLC
    case 0xC4E837: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:63 ADC #@LOCAL02
    case 0xC4E838: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:63 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E838.
    case 0xC4E83A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:64 JSL MEMSET16
    case 0xC4E83B: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:65 TDC
    case 0xC4E83F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:66 CLC
    case 0xC4E840: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:67 ADC #@LOCAL02
    case 0xC4E841: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:67 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E841.
    case 0xC4E843: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E844: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E846: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E847: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E849: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E84A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E84C: {
        Instruction step(cpu, 0x64, 0x00000Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC4E84E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:70 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E850: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:70 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E852: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:70 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E854: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:70 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E856: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E858: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E85A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E85C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E85E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E860: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x009819u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E860.
    case 0xC4E862: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E863: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E865: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E866: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E868: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E869: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E86B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC4E86D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E86F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E871: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E873: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E875: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:75 LDA #6
    case 0xC4E877: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:75 LDA #6
    // Overlapping static entry reached from 0xC4E877.
    case 0xC4E879: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:76 JSL MEMCPY24
    case 0xC4E87A: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:77 LDY #448
    case 0xC4E87E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000C0u : 0x0001C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:77 LDY #448
    // Overlapping static entry reached from 0xC4E87E.
    case 0xC4E880: {
        Instruction step(cpu, 0x01, 0x0000A2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:78 LDX #6
    case 0xC4E881: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:78 LDX #6
    // Overlapping static entry reached from 0xC4E880.
    case 0xC4E882: {
        Instruction step(cpu, 0x06, 0x000000u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:78 LDX #6
    // Overlapping static entry reached from 0xC4E881.
    case 0xC4E883: {
        Instruction step(cpu, 0x00, 0x00007Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:79 TDC
    case 0xC4E884: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:80 CLC
    case 0xC4E885: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:81 ADC #@LOCAL02
    case 0xC4E886: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:81 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E886.
    case 0xC4E888: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:82 JSR RENDER_CAST_NAME_TEXT
    case 0xC4E889: {
        Instruction step(cpu, 0x20, 0x00E583u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    case 0xC4E88C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x002EFAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    // Overlapping static entry reached from 0xC4E88C.
    case 0xC4E88E: {
        Instruction step(cpu, 0x2E, 0x003285u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    case 0xC4E88F: {
        Instruction step(cpu, 0x85, 0x000032u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    case 0xC4E891: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    // Overlapping static entry reached from 0xC4E891.
    case 0xC4E893: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    case 0xC4E894: {
        Instruction step(cpu, 0x85, 0x000034u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:84 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E896: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:84 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E898: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:84 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E89A: {
        Instruction step(cpu, 0xA5, 0x000034u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:84 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E89C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:85 LDA #39
    case 0xC4E89E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:85 LDA #39
    // Overlapping static entry reached from 0xC4E89E.
    case 0xC4E8A0: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:86 CLC
    case 0xC4E8A1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:87 ADC @VIRTUAL06
    case 0xC4E8A2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:88 STA @VIRTUAL06
    case 0xC4E8A4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:89 STA @LOCAL06
    case 0xC4E8A6: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:90 LDA @VIRTUAL06+2
    case 0xC4E8A8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:91 STA @LOCAL06+2
    case 0xC4E8AA: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:92 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8AC: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:92 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8AE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:92 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8B0: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:92 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8B2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8B4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8B6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8B8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8BA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:94 LDX #16
    case 0xC4E8BC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:94 LDX #16
    // Overlapping static entry reached from 0xC4E8BC.
    case 0xC4E8BE: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:95 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E8BF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:96 LDA #0
    case 0xC4E8C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:97 JSL MEMSET24
    case 0xC4E8C3: {
        Instruction step(cpu, 0x22, 0xC08F15u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:97 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E8C1.
    case 0xC4E8C4: {
        Instruction step(cpu, 0x15, 0x00008Fu, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:97 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E8C4.
    case 0xC4E8C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x002DA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Du : 0x009A2Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E8C6.
    case 0xC4E8C8: {
        Instruction step(cpu, 0x2D, 0x00859Au, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E8C7.
    case 0xC4E8C9: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8CA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E8C8.
    case 0xC4E8CB: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8CC: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8CD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8CF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8D0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8D2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC4E8D4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:101 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4E8D6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:101 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4E8D8: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:101 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4E8DA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:101 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4E8DC: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:102 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8DE: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:102 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8E0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:102 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8E2: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:102 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8E4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8E6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8E8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8EA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8EC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:104 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E8EE: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:104 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E8F0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:104 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E8F2: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:104 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E8F4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E8F6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E8F8: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E8FA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E8FC: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:106 LDA #5
    case 0xC4E8FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:106 LDA #5
    // Overlapping static entry reached from 0xC4E8FE.
    case 0xC4E900: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:107 JSL MEMCPY24
    case 0xC4E901: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E905: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E907: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E909: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E90B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E90D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E90F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E911: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E913: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    case 0xC4E915: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x00E796u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    // Overlapping static entry reached from 0xC4E915.
    case 0xC4E917: {
        Instruction step(cpu, 0xE7, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    case 0xC4E918: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    // Overlapping static entry reached from 0xC4E917.
    case 0xC4E919: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    case 0xC4E91A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    // Overlapping static entry reached from 0xC4E919.
    case 0xC4E91B: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    // Overlapping static entry reached from 0xC4E91A.
    case 0xC4E91C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    case 0xC4E91D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:111 JSL STRCAT
    case 0xC4E91F: {
        Instruction step(cpu, 0x22, 0xC07C8Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:112 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E923: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:112 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E925: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:112 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E927: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:112 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E929: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:113 LDA [@VIRTUAL06]
    case 0xC4E92B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:114 TAY
    case 0xC4E92D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:115 STY @LOCAL04
    case 0xC4E92E: {
        Instruction step(cpu, 0x84, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:116 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E930: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:116 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E932: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:116 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E934: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:116 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E936: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E938: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:118 LDY #2
    case 0xC4E93A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:118 LDY #2
    // Overlapping static entry reached from 0xC4E93A.
    case 0xC4E93C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:119 LDA [@VIRTUAL06],Y
    case 0xC4E93D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC4E93F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:121 AND #$00FF
    case 0xC4E941: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC4E941.
    case 0xC4E943: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:122 TAX
    case 0xC4E944: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:123 TDC
    case 0xC4E945: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:124 CLC
    case 0xC4E946: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:125 ADC #@LOCAL02
    case 0xC4E947: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:125 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E947.
    case 0xC4E949: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:126 LDY @LOCAL04
    case 0xC4E94A: {
        Instruction step(cpu, 0xA4, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:127 JSR RENDER_CAST_NAME_TEXT
    case 0xC4E94C: {
        Instruction step(cpu, 0x20, 0x00E583u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:128 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E94F: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:128 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E951: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:128 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E953: {
        Instruction step(cpu, 0xA5, 0x000034u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:128 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E955: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:129 LDA #36
    case 0xC4E957: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:129 LDA #36
    // Overlapping static entry reached from 0xC4E957.
    case 0xC4E959: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:130 CLC
    case 0xC4E95A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:131 ADC @VIRTUAL06
    case 0xC4E95B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:132 STA @VIRTUAL06
    case 0xC4E95D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:133 STA @LOCAL06
    case 0xC4E95F: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:134 LDA @VIRTUAL06+2
    case 0xC4E961: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:135 STA @LOCAL06+2
    case 0xC4E963: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:136 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E965: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:136 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E967: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:136 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E969: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:136 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E96B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:137 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E96D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:137 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E96F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:137 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E971: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:137 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E973: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:138 LDX #16
    case 0xC4E975: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:138 LDX #16
    // Overlapping static entry reached from 0xC4E975.
    case 0xC4E977: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:139 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E978: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:140 LDA #0
    case 0xC4E97A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:141 JSL MEMSET24
    case 0xC4E97C: {
        Instruction step(cpu, 0x22, 0xC08F15u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:141 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E97A.
    case 0xC4E97D: {
        Instruction step(cpu, 0x15, 0x00008Fu, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:141 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E97D.
    case 0xC4E97F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x000AA5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E980: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E97F.
    case 0xC4E981: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E982: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E984: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E986: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E988: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E98A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E98C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E98E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:145 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E990: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:145 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E992: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:145 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E994: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:145 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E996: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:146 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E998: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:146 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E99A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:146 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E99C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:146 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E99E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:147 LDA #5
    case 0xC4E9A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:147 LDA #5
    // Overlapping static entry reached from 0xC4E9A0.
    case 0xC4E9A2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:148 JSL MEMCPY24
    case 0xC4E9A3: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:150 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E9A7: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:150 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E9A9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:150 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E9AB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:150 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E9AD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E9AF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E9B1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E9B3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E9B5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    case 0xC4E9B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Du : 0x00E79Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    // Overlapping static entry reached from 0xC4E9B7.
    case 0xC4E9B9: {
        Instruction step(cpu, 0xE7, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    case 0xC4E9BA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    // Overlapping static entry reached from 0xC4E9B9.
    case 0xC4E9BB: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    case 0xC4E9BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    // Overlapping static entry reached from 0xC4E9BB.
    case 0xC4E9BD: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    // Overlapping static entry reached from 0xC4E9BC.
    case 0xC4E9BE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    case 0xC4E9BF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:153 JSL STRCAT
    case 0xC4E9C1: {
        Instruction step(cpu, 0x22, 0xC07C8Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:154 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9C5: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:154 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9C7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:154 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9C9: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:154 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9CB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:155 LDA [@VIRTUAL06]
    case 0xC4E9CD: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:156 TAY
    case 0xC4E9CF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:157 STY @LOCAL04
    case 0xC4E9D0: {
        Instruction step(cpu, 0x84, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:158 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9D2: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:158 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9D4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:158 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9D6: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:158 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9D8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E9DA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:160 LDY #2
    case 0xC4E9DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:160 LDY #2
    // Overlapping static entry reached from 0xC4E9DC.
    case 0xC4E9DE: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:161 LDA [@VIRTUAL06],Y
    case 0xC4E9DF: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:162 REP #PROC_FLAGS::ACCUM8
    case 0xC4E9E1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:163 AND #$00FF
    case 0xC4E9E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:163 AND #$00FF
    // Overlapping static entry reached from 0xC4E9E3.
    case 0xC4E9E5: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:164 TAX
    case 0xC4E9E6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:165 TDC
    case 0xC4E9E7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:166 CLC
    case 0xC4E9E8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:167 ADC #@LOCAL02
    case 0xC4E9E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:167 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E9E9.
    case 0xC4E9EB: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:168 LDY @LOCAL04
    case 0xC4E9EC: {
        Instruction step(cpu, 0xA4, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:169 JSR RENDER_CAST_NAME_TEXT
    case 0xC4E9EE: {
        Instruction step(cpu, 0x20, 0x00E583u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:170 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E9F1: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:170 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E9F3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:170 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E9F5: {
        Instruction step(cpu, 0xA5, 0x000034u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:170 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E9F7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:171 LDA #108
    case 0xC4E9F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Cu : 0x00006Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:171 LDA #108
    // Overlapping static entry reached from 0xC4E9F9.
    case 0xC4E9FB: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:172 CLC
    case 0xC4E9FC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:173 ADC @VIRTUAL06
    case 0xC4E9FD: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:174 STA @VIRTUAL06
    case 0xC4E9FF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:175 STA @LOCAL06
    case 0xC4EA01: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:176 LDA @VIRTUAL06+2
    case 0xC4EA03: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:177 STA @LOCAL06+2
    case 0xC4EA05: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:178 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA07: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:178 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA09: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:178 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA0B: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:178 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA0D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:179 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA0F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:179 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA11: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:179 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA13: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:179 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA15: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:180 LDX #16
    case 0xC4EA17: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:180 LDX #16
    // Overlapping static entry reached from 0xC4EA17.
    case 0xC4EA19: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EA1A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:182 LDA #0
    case 0xC4EA1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:183 JSL MEMSET24
    case 0xC4EA1E: {
        Instruction step(cpu, 0x22, 0xC08F15u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:183 JSL MEMSET24
    // Overlapping static entry reached from 0xC4EA1C.
    case 0xC4EA1F: {
        Instruction step(cpu, 0x15, 0x00008Fu, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:183 JSL MEMSET24
    // Overlapping static entry reached from 0xC4EA1F.
    case 0xC4EA21: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x000AA5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA22: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EA21.
    case 0xC4EA23: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA24: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA26: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA28: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA2A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA2C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA2E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA30: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EBu : 0x009AEBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    // Overlapping static entry reached from 0xC4EA32.
    case 0xC4EA34: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA35: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA37: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA38: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA3A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA3B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA3D: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:188 REP #PROC_FLAGS::ACCUM8
    case 0xC4EA3F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:189 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4EA41: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:189 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4EA43: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:189 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4EA45: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:189 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4EA47: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:190 LDA #5
    case 0xC4EA49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:190 LDA #5
    // Overlapping static entry reached from 0xC4EA49.
    case 0xC4EA4B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:191 JSL MEMCPY24
    case 0xC4EA4C: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:192 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA50: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:192 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA52: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:192 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA54: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:192 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA56: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:193 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA58: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:193 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA5A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:193 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA5C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:193 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA5E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    case 0xC4EA60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A4u : 0x00E7A4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    // Overlapping static entry reached from 0xC4EA60.
    case 0xC4EA62: {
        Instruction step(cpu, 0xE7, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    case 0xC4EA63: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    // Overlapping static entry reached from 0xC4EA62.
    case 0xC4EA64: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    case 0xC4EA65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    // Overlapping static entry reached from 0xC4EA64.
    case 0xC4EA66: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    // Overlapping static entry reached from 0xC4EA65.
    case 0xC4EA67: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    case 0xC4EA68: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:195 JSL STRCAT
    case 0xC4EA6A: {
        Instruction step(cpu, 0x22, 0xC07C8Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:196 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4EA6E: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:196 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4EA70: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:196 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4EA72: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:196 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4EA74: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:197 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EA76: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:197 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EA78: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:197 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EA7A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:197 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EA7C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:198 LDA [@VIRTUAL0A]
    case 0xC4EA7E: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:199 TAY
    case 0xC4EA80: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:200 STY @LOCAL03
    case 0xC4EA81: {
        Instruction step(cpu, 0x84, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:201 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EA83: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:202 LDY #2
    case 0xC4EA85: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:202 LDY #2
    // Overlapping static entry reached from 0xC4EA85.
    case 0xC4EA87: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:203 LDA [@VIRTUAL06],Y
    case 0xC4EA88: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:204 REP #PROC_FLAGS::ACCUM8
    case 0xC4EA8A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:205 AND #$00FF
    case 0xC4EA8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:205 AND #$00FF
    // Overlapping static entry reached from 0xC4EA8C.
    case 0xC4EA8E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:206 TAX
    case 0xC4EA8F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:207 TDC
    case 0xC4EA90: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:208 CLC
    case 0xC4EA91: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:209 ADC #@LOCAL02
    case 0xC4EA92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:209 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4EA92.
    case 0xC4EA94: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:210 LDY @LOCAL03
    case 0xC4EA95: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/prepare_dynamic_cast_name_text.asm:211 JSR RENDER_CAST_NAME_TEXT
    case 0xC4EA97: {
        Instruction step(cpu, 0x20, 0x00E583u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:212 END_C_FUNCTION
    case 0xC4EA9A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:212 END_C_FUNCTION
    case 0xC4EA9B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
