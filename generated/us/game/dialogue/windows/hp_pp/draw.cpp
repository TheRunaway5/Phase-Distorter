// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/hp_pp_window/draw.asm
bool resume_text_hp_pp_window_draw(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/draw.asm:4 BEGIN_C_FUNCTION
    case 0xC203C3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203C5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203C6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203C7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D8u : 0x00FFD8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC203C8.
    case 0xC203CA: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203CB: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203CC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:26 STA @CHAR_ID
    case 0xC203CD: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:26 STA @CHAR_ID
    // Overlapping static entry reached from 0xC203CA.
    case 0xC203CE: {
        Instruction step(cpu, 0x26, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC203CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC203CE.
    case 0xC203D0: {
        Instruction step(cpu, 0x6F, 0x26B198u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC203CF.
    case 0xC203D1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:34 LDA (@CHAR_ID),Y
    case 0xC203D2: {
        Instruction step(cpu, 0xB1, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:36 AND #$00FF
    case 0xC203D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC203D4.
    case 0xC203D6: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:37 DEC
    case 0xC203D7: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:38 LDY #.SIZEOF(char_struct)
    case 0xC203D8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:38 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC203D8.
    case 0xC203DA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:39 JSL MULT168
    case 0xC203DB: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:40 CLC
    case 0xC203DF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:41 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC203E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:41 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC203E0.
    case 0xC203E2: {
        Instruction step(cpu, 0x99, 0x002485u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:42 STA @CHAR_ENTRY
    case 0xC203E3: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:43 CLC
    case 0xC203E5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:44 ADC #char_struct::afflictions
    case 0xC203E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:44 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC203E6.
    case 0xC203E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:45 STA @VIRTUAL02
    case 0xC203E9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:46 LDX #1
    case 0xC203EB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:46 LDX #1
    // Overlapping static entry reached from 0xC203EB.
    case 0xC203ED: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:47 LDA @VIRTUAL02
    case 0xC203EE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:48 JSL UNKNOWN_C223D9
    case 0xC203F0: {
        Instruction step(cpu, 0x22, 0xC223D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:49 TAY
    case 0xC203F4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:50 STY @LOCAL08
    case 0xC203F5: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:51 LDX #1
    case 0xC203F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:51 LDX #1
    // Overlapping static entry reached from 0xC203F7.
    case 0xC203F9: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:52 LDA @VIRTUAL02
    case 0xC203FA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:53 JSL UNKNOWN_C223D9
    case 0xC203FC: {
        Instruction step(cpu, 0x22, 0xC223D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:54 STA @VIRTUAL04
    case 0xC20400: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:55 LDY @LOCAL08
    case 0xC20402: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:56 TYA
    case 0xC20404: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:57 AND #$FFF0
    case 0xC20405: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:57 AND #$FFF0
    // Overlapping static entry reached from 0xC20405.
    case 0xC20407: {
        Instruction step(cpu, 0xFF, 0x046518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:58 CLC
    case 0xC20408: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:59 ADC @VIRTUAL04
    case 0xC20409: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:64 STA @LOCAL07
    case 0xC2040B: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:66 LDY #char_struct::hp_pp_window_options
    case 0xC2040D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Fu : 0x00004Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:66 LDY #char_struct::hp_pp_window_options
    // Overlapping static entry reached from 0xC2040D.
    case 0xC2040F: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:67 LDA (@CHAR_ENTRY),Y
    case 0xC20410: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:68 STA @VIRTUAL04
    case 0xC20412: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:69 STA @LOCAL06
    case 0xC20414: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:70 LDA @VIRTUAL04
    case 0xC20416: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:71 CMP #$0C00
    case 0xC20418: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:71 CMP #$0C00
    // Overlapping static entry reached from 0xC20418.
    case 0xC2041A: {
        Instruction step(cpu, 0x0C, 0x0010D0u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:72 BNE @UNKNOWN0
    case 0xC2041B: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:73 LDA #$0C00
    case 0xC2041D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:73 LDA #$0C00
    // Overlapping static entry reached from 0xC2041D.
    case 0xC2041F: {
        Instruction step(cpu, 0x0C, 0x000285u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:74 STA @VIRTUAL02
    case 0xC20420: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:75 STA @LOCAL05
    case 0xC20422: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:76 STA @LOCAL08
    case 0xC20424: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:77 LDA #$0800
    case 0xC20426: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:77 LDA #$0800
    // Overlapping static entry reached from 0xC20426.
    case 0xC20428: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:78 STA @LOCAL04
    case 0xC20429: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:79 BRA @UNKNOWN1
    case 0xC2042B: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:81 LDA @VIRTUAL02
    case 0xC2042D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:82 JSL UNKNOWN_C22474
    case 0xC2042F: {
        Instruction step(cpu, 0x22, 0xC22474u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:83 LDY #$0400
    case 0xC20433: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:83 LDY #$0400
    // Overlapping static entry reached from 0xC20433.
    case 0xC20435: {
        Instruction step(cpu, 0x04, 0x000022u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    case 0xC20436: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    // Overlapping static entry reached from 0xC20435.
    case 0xC20437: {
        Instruction step(cpu, 0x32, 0x000090u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    // Overlapping static entry reached from 0xC20437.
    case 0xC20439: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:85 STA @VIRTUAL02
    case 0xC2043A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:85 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC20439.
    case 0xC2043B: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:86 STA @LOCAL05
    case 0xC2043C: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:87 LDA #$1000
    case 0xC2043E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:87 LDA #$1000
    // Overlapping static entry reached from 0xC2043E.
    case 0xC20440: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:88 STA @LOCAL08
    case 0xC20441: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:88 STA @LOCAL08
    // Overlapping static entry reached from 0xC20440.
    case 0xC20442: {
        Instruction step(cpu, 0x22, 0xAD1A64u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:89 STZ @LOCAL04
    case 0xC20443: {
        Instruction step(cpu, 0x64, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:91 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC20445: {
        Instruction step(cpu, 0xAD, 0x0089CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:91 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC20442.
    case 0xC20446: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:91 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC20446.
    case 0xC20447: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000C5u : 0x0026C5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:92 CMP @CHAR_ID
    case 0xC20448: {
        Instruction step(cpu, 0xC5, 0x000026u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:92 CMP @CHAR_ID
    // Overlapping static entry reached from 0xC20447.
    case 0xC20449: {
        Instruction step(cpu, 0x26, 0x0000D0u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:93 BNE @UNKNOWN2
    case 0xC2044A: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:93 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC20449.
    case 0xC2044B: {
        Instruction step(cpu, 0x07, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    case 0xC2044C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC2044B.
    case 0xC2044D: {
        Instruction step(cpu, 0x12, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC2044C.
    case 0xC2044E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:95 STA @LOCAL03
    case 0xC2044F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:96 BRA @UNKNOWN3
    case 0xC20451: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:98 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    case 0xC20453: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:98 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC20453.
    case 0xC20455: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:99 STA @LOCAL03
    case 0xC20456: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:101 LDA @CHAR_ID
    case 0xC20458: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2045A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2045C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2045D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2045F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20460: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:103 PHA
    case 0xC20462: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:104 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC20463: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:105 AND #$00FF
    case 0xC20466: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC20466.
    case 0xC20468: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20469: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2046B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2046C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2046E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2046F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:107 PHA
    case 0xC20471: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:108 ASL
    case 0xC20472: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:109 PLA
    case 0xC20473: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:110 ROR
    case 0xC20474: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:111 STA @VIRTUAL02
    case 0xC20475: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:112 LDA #16
    case 0xC20477: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:112 LDA #16
    // Overlapping static entry reached from 0xC20477.
    case 0xC20479: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:113 SEC
    case 0xC2047A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:114 SBC @VIRTUAL02
    case 0xC2047B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:115 PLY
    case 0xC2047D: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:116 STY @VIRTUAL02
    case 0xC2047E: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:117 CLC
    case 0xC20480: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:118 ADC @VIRTUAL02
    case 0xC20481: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:119 ASL
    case 0xC20483: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:120 STA @VIRTUAL02
    case 0xC20484: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:121 LDA @LOCAL03
    case 0xC20486: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20488: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20489: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2048A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2048B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2048C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2048D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:123 CLC
    case 0xC2048E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:124 ADC @VIRTUAL02
    case 0xC2048F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:125 CLC
    case 0xC20491: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:126 ADC #.LOWORD(BG2_BUFFER)
    case 0xC20492: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:126 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC20492.
    case 0xC20494: {
        Instruction step(cpu, 0x7D, 0x00A5AAu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:127 TAX
    case 0xC20495: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:128 LDA @LOCAL06
    case 0xC20496: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:128 LDA @LOCAL06
    // Overlapping static entry reached from 0xC20494.
    case 0xC20497: {
        Instruction step(cpu, 0x1E, 0x000485u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:129 STA @VIRTUAL04
    case 0xC20498: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:130 CLC
    case 0xC2049A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:131 ADC #$2004
    case 0xC2049B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000004u : 0x002004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:131 ADC #$2004
    // Overlapping static entry reached from 0xC2049B.
    case 0xC2049D: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:132 STA __BSS_START__,X
    case 0xC2049E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:132 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2049D.
    case 0xC204A0: {
        Instruction step(cpu, 0x00, 0x0000E8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:133 INX
    case 0xC204A1: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:134 INX
    case 0xC204A2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:139 LDY #HPPP_WINDOW_WIDTH - 2
    case 0xC204A3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:139 LDY #HPPP_WINDOW_WIDTH - 2
    // Overlapping static entry reached from 0xC204A3.
    case 0xC204A5: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:141 BRA @UNKNOWN5
    case 0xC204A6: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:143 LDA @VIRTUAL04
    case 0xC204A8: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:144 CLC
    case 0xC204AA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:145 ADC #$2005
    case 0xC204AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x002005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:145 ADC #$2005
    // Overlapping static entry reached from 0xC204AB.
    case 0xC204AD: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:146 STA __BSS_START__,X
    case 0xC204AE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:146 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC204AD.
    case 0xC204B0: {
        Instruction step(cpu, 0x00, 0x0000E8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:147 INX
    case 0xC204B1: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:148 INX
    case 0xC204B2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:154 DEY
    case 0xC204B3: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:264 BNE @UNKNOWN4
    case 0xC204B4: {
        Instruction step(cpu, 0xD0, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:265 LDA @VIRTUAL04
    case 0xC204B6: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:266 CLC
    case 0xC204B8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:267 ADC #$6004
    case 0xC204B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000004u : 0x006004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:267 ADC #$6004
    // Overlapping static entry reached from 0xC204B9.
    case 0xC204BB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:268 STA __BSS_START__,X
    case 0xC204BC: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:269 TXA
    case 0xC204BF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:270 INC
    case 0xC204C0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:271 INC
    case 0xC204C1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:272 CLC
    case 0xC204C2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:273 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC204C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:273 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC204C3.
    case 0xC204C5: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:274 TAX
    case 0xC204C6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:275 LDA @VIRTUAL04
    case 0xC204C7: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:276 CLC
    case 0xC204C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:277 ADC #$2006
    case 0xC204CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x002006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:277 ADC #$2006
    // Overlapping static entry reached from 0xC204CA.
    case 0xC204CC: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:278 STA __BSS_START__,X
    case 0xC204CD: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:278 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC204CC.
    case 0xC204CF: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:279 TXA
    case 0xC204D0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:280 INC
    case 0xC204D1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:281 INC
    case 0xC204D2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:282 STA @TILEARRPTR
    case 0xC204D3: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:283 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC204D5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:283 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC204D5.
    case 0xC204D7: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:284 LDA (@CHAR_ID),Y
    case 0xC204D8: {
        Instruction step(cpu, 0xB1, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:285 AND #$00FF
    case 0xC204DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:285 AND #$00FF
    // Overlapping static entry reached from 0xC204DA.
    case 0xC204DC: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:286 DEC
    case 0xC204DD: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:287 ASL
    case 0xC204DE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:288 ASL
    case 0xC204DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:289 CLC
    case 0xC204E0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:290 ADC #$22A0
    case 0xC204E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A0u : 0x0022A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:290 ADC #$22A0
    // Overlapping static entry reached from 0xC204E1.
    case 0xC204E3: {
        Instruction step(cpu, 0x22, 0x1484A8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:291 TAY
    case 0xC204E4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:292 STY @LOCAL02
    case 0xC204E5: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:293 LDA @CHAR_ENTRY
    case 0xC204E7: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204E9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204EB: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204EC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204EE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204EF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204F1: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:295 REP #PROC_FLAGS::ACCUM8
    case 0xC204F3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/hp_pp_window/draw.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC204F5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC204F7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/hp_pp_window/draw.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC204F9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/hp_pp_window/draw.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC204FB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:297 JSL STRLEN
    case 0xC204FD: {
        Instruction step(cpu, 0x22, 0xC08F22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:298 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC20501: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:298 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC20503: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:298 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC20504: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:298 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC20506: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:299 CLC
    case 0xC20507: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:300 ADC #9
    case 0xC20508: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:300 ADC #9
    // Overlapping static entry reached from 0xC20508.
    case 0xC2050A: {
        Instruction step(cpu, 0x00, 0x00004Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:301 LSR
    case 0xC2050B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:302 LSR
    case 0xC2050C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:303 LSR
    case 0xC2050D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:304 STA @LOCAL01
    case 0xC2050E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:305 LDX #0
    case 0xC20510: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:305 LDX #0
    // Overlapping static entry reached from 0xC20510.
    case 0xC20512: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:306 BRA @UNKNOWN9
    case 0xC20513: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:308 LDA @LOCAL01
    case 0xC20515: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:309 BEQ @UNKNOWN7
    case 0xC20517: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:310 LDA @LOCAL05
    case 0xC20519: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:311 STA @VIRTUAL02
    case 0xC2051B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:312 LDY @LOCAL02
    case 0xC2051D: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:313 TYA
    case 0xC2051F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:314 CLC
    case 0xC20520: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:315 ADC @VIRTUAL02
    case 0xC20521: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:316 STA (@TILEARRPTR)
    case 0xC20523: {
        Instruction step(cpu, 0x92, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:317 INC @TILEARRPTR
    case 0xC20525: {
        Instruction step(cpu, 0xE6, 0x000016u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:318 INC @TILEARRPTR
    case 0xC20527: {
        Instruction step(cpu, 0xE6, 0x000016u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:319 INY
    case 0xC20529: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:320 STY @LOCAL02
    case 0xC2052A: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:321 LDA @LOCAL01
    case 0xC2052C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:322 DEC
    case 0xC2052E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:323 STA @LOCAL01
    case 0xC2052F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:324 BRA @UNKNOWN8
    case 0xC20531: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:326 LDA @LOCAL05
    case 0xC20533: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:327 STA @VIRTUAL02
    case 0xC20535: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:328 CLC
    case 0xC20537: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:329 ADC #$2007
    case 0xC20538: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000007u : 0x002007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:329 ADC #$2007
    // Overlapping static entry reached from 0xC20538.
    case 0xC2053A: {
        Instruction step(cpu, 0x20, 0x001692u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:330 STA (@TILEARRPTR)
    case 0xC2053B: {
        Instruction step(cpu, 0x92, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:331 INC @TILEARRPTR
    case 0xC2053D: {
        Instruction step(cpu, 0xE6, 0x000016u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:332 INC @TILEARRPTR
    case 0xC2053F: {
        Instruction step(cpu, 0xE6, 0x000016u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:334 INX
    case 0xC20541: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:336 CPX #HPPP_WINDOW_WIDTH - 3
    case 0xC20542: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:336 CPX #HPPP_WINDOW_WIDTH - 3
    // Overlapping static entry reached from 0xC20542.
    case 0xC20544: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:337 BNE @UNKNOWN6
    case 0xC20545: {
        Instruction step(cpu, 0xD0, 0x0000CEu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:338 LDA @LOCAL05
    case 0xC20547: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:339 STA @VIRTUAL02
    case 0xC20549: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:340 CLC
    case 0xC2054B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:341 ADC @LOCAL07
    case 0xC2054C: {
        Instruction step(cpu, 0x65, 0x000020u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:342 CLC
    case 0xC2054E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:343 ADC #$2000
    case 0xC2054F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:343 ADC #$2000
    // Overlapping static entry reached from 0xC2054F.
    case 0xC20551: {
        Instruction step(cpu, 0x20, 0x001692u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:344 STA (@TILEARRPTR)
    case 0xC20552: {
        Instruction step(cpu, 0x92, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:345 LDX @TILEARRPTR
    case 0xC20554: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:346 INX
    case 0xC20556: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:347 INX
    case 0xC20557: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:348 LDA @LOCAL06
    case 0xC20558: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:349 STA @VIRTUAL04
    case 0xC2055A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:350 CLC
    case 0xC2055C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:351 ADC #$6006
    case 0xC2055D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x006006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:351 ADC #$6006
    // Overlapping static entry reached from 0xC2055D.
    case 0xC2055F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:352 STA __BSS_START__,X
    case 0xC20560: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:353 TXA
    case 0xC20563: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:354 INC
    case 0xC20564: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:355 INC
    case 0xC20565: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:356 CLC
    case 0xC20566: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:357 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC20567: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:357 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20567.
    case 0xC20569: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:358 TAX
    case 0xC2056A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:359 LDA @VIRTUAL04
    case 0xC2056B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:360 CLC
    case 0xC2056D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:361 ADC #$2006
    case 0xC2056E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x002006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:361 ADC #$2006
    // Overlapping static entry reached from 0xC2056E.
    case 0xC20570: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:362 STA __BSS_START__,X
    case 0xC20571: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:362 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20570.
    case 0xC20573: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:363 TXA
    case 0xC20574: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:364 INC
    case 0xC20575: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:365 INC
    case 0xC20576: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:366 STA @TILEARRPTR
    case 0xC20577: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:367 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC20579: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:367 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC20579.
    case 0xC2057B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:368 LDA (@CHAR_ID),Y
    case 0xC2057C: {
        Instruction step(cpu, 0xB1, 0x000026u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:369 AND #$00FF
    case 0xC2057E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:369 AND #$00FF
    // Overlapping static entry reached from 0xC2057E.
    case 0xC20580: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:370 DEC
    case 0xC20581: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:371 ASL
    case 0xC20582: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:372 ASL
    case 0xC20583: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:373 CLC
    case 0xC20584: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:374 ADC #$22B0
    case 0xC20585: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B0u : 0x0022B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:374 ADC #$22B0
    // Overlapping static entry reached from 0xC20585.
    case 0xC20587: {
        Instruction step(cpu, 0x22, 0x1484A8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:375 TAY
    case 0xC20588: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:376 STY @LOCAL02
    case 0xC20589: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:377 LDA @CHAR_ENTRY
    case 0xC2058B: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2058D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2058F: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC20590: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC20592: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC20593: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC20595: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:379 REP #PROC_FLAGS::ACCUM8
    case 0xC20597: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/hp_pp_window/draw.asm:380 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC20599: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:380 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2059B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/hp_pp_window/draw.asm:380 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2059D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/hp_pp_window/draw.asm:380 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2059F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:381 JSL STRLEN
    case 0xC205A1: {
        Instruction step(cpu, 0x22, 0xC08F22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:382 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC205A5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:382 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC205A7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:382 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC205A8: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:382 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC205AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:383 CLC
    case 0xC205AB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:384 ADC #9
    case 0xC205AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:384 ADC #9
    // Overlapping static entry reached from 0xC205AC.
    case 0xC205AE: {
        Instruction step(cpu, 0x00, 0x00004Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:385 LSR
    case 0xC205AF: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:386 LSR
    case 0xC205B0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:387 LSR
    case 0xC205B1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:388 STA @LOCAL01
    case 0xC205B2: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    case 0xC205B4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    // Overlapping static entry reached from 0xC205B4.
    case 0xC205B6: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:391 BRA @UNKNOWN13
    case 0xC205B7: {
        Instruction step(cpu, 0x80, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:408 LDA @LOCAL01
    case 0xC205B9: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:409 BEQ @UNKNOWN11
    case 0xC205BB: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:410 LDY @LOCAL02
    case 0xC205BD: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:411 TYA
    case 0xC205BF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:412 CLC
    case 0xC205C0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:413 ADC @VIRTUAL02
    case 0xC205C1: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:414 STA (@TILEARRPTR)
    case 0xC205C3: {
        Instruction step(cpu, 0x92, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:415 INC @TILEARRPTR
    case 0xC205C5: {
        Instruction step(cpu, 0xE6, 0x000016u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:416 INC @TILEARRPTR
    case 0xC205C7: {
        Instruction step(cpu, 0xE6, 0x000016u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:417 INY
    case 0xC205C9: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:418 STY @LOCAL02
    case 0xC205CA: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:419 LDA @LOCAL01
    case 0xC205CC: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:420 DEC
    case 0xC205CE: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:421 STA @LOCAL01
    case 0xC205CF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:423 BRA @UNKNOWN12
    case 0xC205D1: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:425 LDA @VIRTUAL02
    case 0xC205D3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:426 CLC
    case 0xC205D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:427 ADC #$2017
    case 0xC205D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000017u : 0x002017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:427 ADC #$2017
    // Overlapping static entry reached from 0xC205D6.
    case 0xC205D8: {
        Instruction step(cpu, 0x20, 0x001692u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:428 STA (@TILEARRPTR)
    case 0xC205D9: {
        Instruction step(cpu, 0x92, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:429 INC @TILEARRPTR
    case 0xC205DB: {
        Instruction step(cpu, 0xE6, 0x000016u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:430 INC @TILEARRPTR
    case 0xC205DD: {
        Instruction step(cpu, 0xE6, 0x000016u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:432 INX
    case 0xC205DF: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:434 CPX #HPPP_WINDOW_WIDTH - 3
    case 0xC205E0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:434 CPX #HPPP_WINDOW_WIDTH - 3
    // Overlapping static entry reached from 0xC205E0.
    case 0xC205E2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:435 BNE @UNKNOWN10
    case 0xC205E3: {
        Instruction step(cpu, 0xD0, 0x0000D4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:442 LDA @VIRTUAL02
    case 0xC205E5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:443 CLC
    case 0xC205E7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:444 ADC @LOCAL07
    case 0xC205E8: {
        Instruction step(cpu, 0x65, 0x000020u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:446 CLC
    case 0xC205EA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:447 ADC #$2010
    case 0xC205EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x002010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:447 ADC #$2010
    // Overlapping static entry reached from 0xC205EB.
    case 0xC205ED: {
        Instruction step(cpu, 0x20, 0x001692u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:448 STA (@TILEARRPTR)
    case 0xC205EE: {
        Instruction step(cpu, 0x92, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:449 LDX @TILEARRPTR
    case 0xC205F0: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:450 INX
    case 0xC205F2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:451 INX
    case 0xC205F3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:455 LDA @LOCAL06
    case 0xC205F4: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:456 STA @VIRTUAL04
    case 0xC205F6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:458 CLC
    case 0xC205F8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:459 ADC #$6006
    case 0xC205F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x006006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:459 ADC #$6006
    // Overlapping static entry reached from 0xC205F9.
    case 0xC205FB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:460 STA __BSS_START__,X
    case 0xC205FC: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:461 TXA
    case 0xC205FF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:462 INC
    case 0xC20600: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:463 INC
    case 0xC20601: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:464 CLC
    case 0xC20602: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:465 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC20603: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:465 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20603.
    case 0xC20605: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:466 STA @VIRTUAL02
    case 0xC20606: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:467 LDY #char_struct::current_hp_fraction
    case 0xC20608: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000043u : 0x000043u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:467 LDY #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC20608.
    case 0xC2060A: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:468 LDA (@CHAR_ENTRY),Y
    case 0xC2060B: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:469 TAY
    case 0xC2060D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:473 STY @LOCAL02
    case 0xC2060E: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:475 LDY #char_struct::current_hp
    case 0xC20610: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000045u : 0x000045u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:475 LDY #char_struct::current_hp
    // Overlapping static entry reached from 0xC20610.
    case 0xC20612: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:476 LDA (@CHAR_ENTRY),Y
    case 0xC20613: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:477 TAX
    case 0xC20615: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:478 LDA @CHAR_ID
    case 0xC20616: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:482 LDY @LOCAL02
    case 0xC20618: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:484 JSR FILL_CHARACTER_HP_TILE_BUFFER
    case 0xC2061A: {
        Instruction step(cpu, 0x20, 0x000F08u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC2061D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F8u : 0x00E3F8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2061D.
    case 0xC2061F: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC20620: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2061F.
    case 0xC20621: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC20622: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC20621.
    case 0xC20623: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC20622.
    case 0xC20624: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC20625: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:486 LDA @CHAR_ID
    case 0xC20627: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20629: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2062B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2062C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2062E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2062F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20630: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:488 CLC
    case 0xC20631: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:489 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    case 0xC20632: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000069u : 0x008969u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:489 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    // Overlapping static entry reached from 0xC20632.
    case 0xC20634: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A8u : 0x00A2A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:490 TAY
    case 0xC20635: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    case 0xC20636: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    // Overlapping static entry reached from 0xC20634.
    case 0xC20637: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    // Overlapping static entry reached from 0xC20636.
    case 0xC20638: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:492 STX @LOCAL01
    case 0xC20639: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:493 BRA @UNKNOWN19
    case 0xC2063B: {
        Instruction step(cpu, 0x80, 0x00006Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:495 LDA @LOCAL06
    case 0xC2063D: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:496 STA @VIRTUAL04
    case 0xC2063F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:497 CLC
    case 0xC20641: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:498 ADC #$2006
    case 0xC20642: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x002006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:498 ADC #$2006
    // Overlapping static entry reached from 0xC20642.
    case 0xC20644: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:499 LDX @VIRTUAL02
    case 0xC20645: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:500 STA __BSS_START__,X
    case 0xC20647: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:501 INC @VIRTUAL02
    case 0xC2064A: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:502 INC @VIRTUAL02
    case 0xC2064C: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:503 LDA #2
    case 0xC2064E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:503 LDA #2
    // Overlapping static entry reached from 0xC2064E.
    case 0xC20650: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:504 STA @LOCAL07
    case 0xC20651: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:505 BRA @UNKNOWN16
    case 0xC20653: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:507 LDA [@VIRTUAL06]
    case 0xC20655: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:508 AND #$00FF
    case 0xC20657: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:508 AND #$00FF
    // Overlapping static entry reached from 0xC20657.
    case 0xC20659: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:509 CLC
    case 0xC2065A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:510 ADC @LOCAL08
    case 0xC2065B: {
        Instruction step(cpu, 0x65, 0x000022u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:511 CLC
    case 0xC2065D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:512 ADC #$2000
    case 0xC2065E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:512 ADC #$2000
    // Overlapping static entry reached from 0xC2065E.
    case 0xC20660: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:513 LDX @VIRTUAL02
    case 0xC20661: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:514 STA __BSS_START__,X
    case 0xC20663: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:515 INC @VIRTUAL06
    case 0xC20666: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:516 INC @VIRTUAL02
    case 0xC20668: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:517 INC @VIRTUAL02
    case 0xC2066A: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:518 LDA @LOCAL07
    case 0xC2066C: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:519 DEC
    case 0xC2066E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:520 STA @LOCAL07
    case 0xC2066F: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:522 BNE @UNKNOWN15
    case 0xC20671: {
        Instruction step(cpu, 0xD0, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:523 LDA #HPPP_WINDOW_WIDTH - 4
    case 0xC20673: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:523 LDA #HPPP_WINDOW_WIDTH - 4
    // Overlapping static entry reached from 0xC20673.
    case 0xC20675: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:524 STA @LOCAL07
    case 0xC20676: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:525 BRA @UNKNOWN18
    case 0xC20678: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:527 LDA __BSS_START__,Y
    case 0xC2067A: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:528 CLC
    case 0xC2067D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:529 ADC @LOCAL04
    case 0xC2067E: {
        Instruction step(cpu, 0x65, 0x00001Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:530 LDX @VIRTUAL02
    case 0xC20680: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:531 STA __BSS_START__,X
    case 0xC20682: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:532 INY
    case 0xC20685: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:533 INY
    case 0xC20686: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:534 INC @VIRTUAL02
    case 0xC20687: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:535 INC @VIRTUAL02
    case 0xC20689: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:536 LDA @LOCAL07
    case 0xC2068B: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:537 DEC
    case 0xC2068D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:538 STA @LOCAL07
    case 0xC2068E: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:540 BNE @UNKNOWN17
    case 0xC20690: {
        Instruction step(cpu, 0xD0, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:541 LDA @VIRTUAL04
    case 0xC20692: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:542 CLC
    case 0xC20694: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:543 ADC #$6006
    case 0xC20695: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x006006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:543 ADC #$6006
    // Overlapping static entry reached from 0xC20695.
    case 0xC20697: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:544 LDX @VIRTUAL02
    case 0xC20698: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:545 STA __BSS_START__,X
    case 0xC2069A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:546 LDA @VIRTUAL02
    case 0xC2069D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:547 INC
    case 0xC2069F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:548 INC
    case 0xC206A0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:549 CLC
    case 0xC206A1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:550 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC206A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:550 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC206A2.
    case 0xC206A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:551 STA @VIRTUAL02
    case 0xC206A5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:552 LDX @LOCAL01
    case 0xC206A7: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:553 DEX
    case 0xC206A9: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:554 STX @LOCAL01
    case 0xC206AA: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:556 BNE @UNKNOWN14
    case 0xC206AC: {
        Instruction step(cpu, 0xD0, 0x00008Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:557 LDY #char_struct::current_pp_fraction
    case 0xC206AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:557 LDY #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC206AE.
    case 0xC206B0: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:558 LDA (@CHAR_ENTRY),Y
    case 0xC206B1: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:559 STA @LOCAL00
    case 0xC206B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:560 LDY #char_struct::current_pp
    case 0xC206B5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Bu : 0x00004Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:560 LDY #char_struct::current_pp
    // Overlapping static entry reached from 0xC206B5.
    case 0xC206B7: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:561 LDA (@CHAR_ENTRY),Y
    case 0xC206B8: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:562 TAY
    case 0xC206BA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:563 LDA @CHAR_ENTRY
    case 0xC206BB: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:564 CLC
    case 0xC206BD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:565 ADC #char_struct::afflictions
    case 0xC206BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:565 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC206BE.
    case 0xC206C0: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:566 TAX
    case 0xC206C1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:567 LDA @CHAR_ID
    case 0xC206C2: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:568 JSR FILL_CHARACTER_PP_TILE_BUFFER
    case 0xC206C4: {
        Instruction step(cpu, 0x20, 0x000F26u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:569 LDA @CHAR_ID
    case 0xC206C7: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206C9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206CC: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206CE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206D0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:571 CLC
    case 0xC206D1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:572 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + hp_pp_window_buffer::pp1
    case 0xC206D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000075u : 0x008975u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:572 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + hp_pp_window_buffer::pp1
    // Overlapping static entry reached from 0xC206D2.
    case 0xC206D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A8u : 0x00A2A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:573 TAY
    case 0xC206D5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    case 0xC206D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    // Overlapping static entry reached from 0xC206D4.
    case 0xC206D7: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    // Overlapping static entry reached from 0xC206D6.
    case 0xC206D8: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:575 STX @LOCAL01
    case 0xC206D9: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:576 BRA @UNKNOWN25
    case 0xC206DB: {
        Instruction step(cpu, 0x80, 0x00006Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:578 LDA @LOCAL06
    case 0xC206DD: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:579 STA @VIRTUAL04
    case 0xC206DF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:580 CLC
    case 0xC206E1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:581 ADC #$2006
    case 0xC206E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x002006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:581 ADC #$2006
    // Overlapping static entry reached from 0xC206E2.
    case 0xC206E4: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:582 LDX @VIRTUAL02
    case 0xC206E5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:583 STA __BSS_START__,X
    case 0xC206E7: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:584 INC @VIRTUAL02
    case 0xC206EA: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:585 INC @VIRTUAL02
    case 0xC206EC: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:586 LDA #2
    case 0xC206EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:586 LDA #2
    // Overlapping static entry reached from 0xC206EE.
    case 0xC206F0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:587 STA @LOCAL07
    case 0xC206F1: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:588 BRA @UNKNOWN22
    case 0xC206F3: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:590 LDA [@VIRTUAL06]
    case 0xC206F5: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:591 AND #$00FF
    case 0xC206F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:591 AND #$00FF
    // Overlapping static entry reached from 0xC206F7.
    case 0xC206F9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:592 CLC
    case 0xC206FA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:593 ADC @LOCAL08
    case 0xC206FB: {
        Instruction step(cpu, 0x65, 0x000022u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:594 CLC
    case 0xC206FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:595 ADC #$2000
    case 0xC206FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:595 ADC #$2000
    // Overlapping static entry reached from 0xC206FE.
    case 0xC20700: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:596 LDX @VIRTUAL02
    case 0xC20701: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:597 STA __BSS_START__,X
    case 0xC20703: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:598 INC @VIRTUAL06
    case 0xC20706: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:599 INC @VIRTUAL02
    case 0xC20708: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:600 INC @VIRTUAL02
    case 0xC2070A: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:601 LDA @LOCAL07
    case 0xC2070C: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:602 DEC
    case 0xC2070E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:603 STA @LOCAL07
    case 0xC2070F: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:605 BNE @UNKNOWN21
    case 0xC20711: {
        Instruction step(cpu, 0xD0, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:606 LDA #HPPP_WINDOW_WIDTH - 4
    case 0xC20713: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:606 LDA #HPPP_WINDOW_WIDTH - 4
    // Overlapping static entry reached from 0xC20713.
    case 0xC20715: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:607 STA @LOCAL07
    case 0xC20716: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:608 BRA @UNKNOWN24
    case 0xC20718: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:610 LDA __BSS_START__,Y
    case 0xC2071A: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:611 CLC
    case 0xC2071D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:612 ADC @LOCAL04
    case 0xC2071E: {
        Instruction step(cpu, 0x65, 0x00001Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:613 LDX @VIRTUAL02
    case 0xC20720: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:614 STA __BSS_START__,X
    case 0xC20722: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:615 INY
    case 0xC20725: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:616 INY
    case 0xC20726: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:617 INC @VIRTUAL02
    case 0xC20727: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:618 INC @VIRTUAL02
    case 0xC20729: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:619 LDA @LOCAL07
    case 0xC2072B: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:620 DEC
    case 0xC2072D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:621 STA @LOCAL07
    case 0xC2072E: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:623 BNE @UNKNOWN23
    case 0xC20730: {
        Instruction step(cpu, 0xD0, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:624 LDA @VIRTUAL04
    case 0xC20732: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:625 CLC
    case 0xC20734: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:626 ADC #$6006
    case 0xC20735: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x006006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:626 ADC #$6006
    // Overlapping static entry reached from 0xC20735.
    case 0xC20737: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:627 LDX @VIRTUAL02
    case 0xC20738: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:628 STA __BSS_START__,X
    case 0xC2073A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:629 LDA @VIRTUAL02
    case 0xC2073D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:630 INC
    case 0xC2073F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:631 INC
    case 0xC20740: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:632 CLC
    case 0xC20741: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:633 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC20742: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:633 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20742.
    case 0xC20744: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:634 STA @VIRTUAL02
    case 0xC20745: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:635 LDX @LOCAL01
    case 0xC20747: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:636 DEX
    case 0xC20749: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:637 STX @LOCAL01
    case 0xC2074A: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:639 BNE @UNKNOWN20
    case 0xC2074C: {
        Instruction step(cpu, 0xD0, 0x00008Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:640 LDA @LOCAL06
    case 0xC2074E: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:641 STA @VIRTUAL04
    case 0xC20750: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:642 CLC
    case 0xC20752: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:643 ADC #$A004
    case 0xC20753: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000004u : 0x00A004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:643 ADC #$A004
    // Overlapping static entry reached from 0xC20753.
    case 0xC20755: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000A6u : 0x0002A6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:644 LDX @VIRTUAL02
    case 0xC20756: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:644 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC20755.
    case 0xC20757: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:645 STA __BSS_START__,X
    case 0xC20758: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:646 LDX @VIRTUAL02
    case 0xC2075B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:647 INX
    case 0xC2075D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:648 INX
    case 0xC2075E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:649 LDY #HPPP_WINDOW_WIDTH - 2
    case 0xC2075F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:649 LDY #HPPP_WINDOW_WIDTH - 2
    // Overlapping static entry reached from 0xC2075F.
    case 0xC20761: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:650 BRA @UNKNOWN27
    case 0xC20762: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:652 LDA @VIRTUAL04
    case 0xC20764: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:653 CLC
    case 0xC20766: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:654 ADC #$A005
    case 0xC20767: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x00A005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:654 ADC #$A005
    // Overlapping static entry reached from 0xC20767.
    case 0xC20769: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00009Du : 0x00009Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    case 0xC2076A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20769.
    case 0xC2076B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20769.
    case 0xC2076C: {
        Instruction step(cpu, 0x00, 0x0000E8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:656 INX
    case 0xC2076D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:657 INX
    case 0xC2076E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:658 DEY
    case 0xC2076F: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:660 BNE @UNKNOWN26
    case 0xC20770: {
        Instruction step(cpu, 0xD0, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:661 LDA @VIRTUAL04
    case 0xC20772: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:662 CLC
    case 0xC20774: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:663 ADC #$E004
    case 0xC20775: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000004u : 0x00E004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:663 ADC #$E004
    // Overlapping static entry reached from 0xC20775.
    case 0xC20777: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00009Du : 0x00009Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    case 0xC20778: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20777.
    case 0xC20779: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20777.
    case 0xC2077A: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/draw.asm:665 END_C_FUNCTION
    case 0xC2077B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/draw.asm:665 END_C_FUNCTION
    case 0xC2077C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
