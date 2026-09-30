// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/hp_pp_window/draw.asm
bool resume_text_hp_pp_window_draw(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/draw.asm:4 BEGIN_C_FUNCTION
    case 0xC203A4: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203A6: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203A7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203A8: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC203A9.
    case 0xC203AB: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203AC: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203AD: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:26 STA @CHAR_ID
    case 0xC203AE: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:26 STA @CHAR_ID
    // Overlapping static entry reached from 0xC203AB.
    case 0xC203AF: {
        Instruction step(cpu, 0x22, 0xA96918u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:28 CLC
    case 0xC203B0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:29 ADC #.LOWORD(GAME_STATE)
    case 0xC203B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:29 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC203B1.
    case 0xC203B3: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:30 TAX
    case 0xC203B4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:31 LDA a:game_state::party_members,X
    case 0xC203B5: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:36 AND #$00FF
    case 0xC203B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC203B8.
    case 0xC203BA: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:37 DEC
    case 0xC203BB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:38 LDY #.SIZEOF(char_struct)
    case 0xC203BC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:38 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC203BC.
    case 0xC203BE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:39 JSL MULT168
    case 0xC203BF: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:40 CLC
    case 0xC203C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:41 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC203C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:41 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC203C4.
    case 0xC203C6: {
        Instruction step(cpu, 0x9C, 0x002085u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:42 STA @CHAR_ENTRY
    case 0xC203C7: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:43 CLC
    case 0xC203C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:44 ADC #char_struct::afflictions
    case 0xC203CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:44 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC203CA.
    case 0xC203CC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:45 STA @VIRTUAL02
    case 0xC203CD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:46 LDX #1
    case 0xC203CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:46 LDX #1
    // Overlapping static entry reached from 0xC203CF.
    case 0xC203D1: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:47 LDA @VIRTUAL02
    case 0xC203D2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:48 JSL UNKNOWN_C223D9
    case 0xC203D4: {
        Instruction step(cpu, 0x22, 0xC22280u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:49 TAY
    case 0xC203D8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:50 STY @LOCAL08
    case 0xC203D9: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:51 LDX #1
    case 0xC203DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:51 LDX #1
    // Overlapping static entry reached from 0xC203DB.
    case 0xC203DD: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:52 LDA @VIRTUAL02
    case 0xC203DE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:53 JSL UNKNOWN_C223D9
    case 0xC203E0: {
        Instruction step(cpu, 0x22, 0xC22280u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:54 STA @VIRTUAL04
    case 0xC203E4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:55 LDY @LOCAL08
    case 0xC203E6: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:56 TYA
    case 0xC203E8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:57 AND #$FFF0
    case 0xC203E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:57 AND #$FFF0
    // Overlapping static entry reached from 0xC203E9.
    case 0xC203EB: {
        Instruction step(cpu, 0xFF, 0x046518u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:58 CLC
    case 0xC203EC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:59 ADC @VIRTUAL04
    case 0xC203ED: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:61 TAY
    case 0xC203EF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:62 STY @LOCAL07
    case 0xC203F0: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:66 LDY #char_struct::hp_pp_window_options
    case 0xC203F2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:66 LDY #char_struct::hp_pp_window_options
    // Overlapping static entry reached from 0xC203F2.
    case 0xC203F4: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:67 LDA (@CHAR_ENTRY),Y
    case 0xC203F5: {
        Instruction step(cpu, 0xB1, 0x000020u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:68 STA @VIRTUAL04
    case 0xC203F7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:69 STA @LOCAL06
    case 0xC203F9: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:70 LDA @VIRTUAL04
    case 0xC203FB: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:71 CMP #$0C00
    case 0xC203FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:71 CMP #$0C00
    // Overlapping static entry reached from 0xC203FD.
    case 0xC203FF: {
        Instruction step(cpu, 0x0C, 0x0010D0u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:72 BNE @UNKNOWN0
    case 0xC20400: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:73 LDA #$0C00
    case 0xC20402: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:73 LDA #$0C00
    // Overlapping static entry reached from 0xC20402.
    case 0xC20404: {
        Instruction step(cpu, 0x0C, 0x000285u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:74 STA @VIRTUAL02
    case 0xC20405: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:75 STA @LOCAL05
    case 0xC20407: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:76 STA @LOCAL08
    case 0xC20409: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:77 LDA #$0800
    case 0xC2040B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:77 LDA #$0800
    // Overlapping static entry reached from 0xC2040B.
    case 0xC2040D: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:78 STA @LOCAL04
    case 0xC2040E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:79 BRA @UNKNOWN1
    case 0xC20410: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:81 LDA @VIRTUAL02
    case 0xC20412: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:82 JSL UNKNOWN_C22474
    case 0xC20414: {
        Instruction step(cpu, 0x22, 0xC2231Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:83 LDY #$0400
    case 0xC20418: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:83 LDY #$0400
    // Overlapping static entry reached from 0xC20418.
    case 0xC2041A: {
        Instruction step(cpu, 0x04, 0x000022u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    case 0xC2041B: {
        Instruction step(cpu, 0x22, 0xC09014u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    // Overlapping static entry reached from 0xC2041A.
    case 0xC2041C: {
        Instruction step(cpu, 0x14, 0x000090u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    // Overlapping static entry reached from 0xC2041C.
    case 0xC2041E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:85 STA @VIRTUAL02
    case 0xC2041F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:85 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2041E.
    case 0xC20420: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:86 STA @LOCAL05
    case 0xC20421: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:87 LDA #$1000
    case 0xC20423: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:87 LDA #$1000
    // Overlapping static entry reached from 0xC20423.
    case 0xC20425: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:88 STA @LOCAL08
    case 0xC20426: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:88 STA @LOCAL08
    // Overlapping static entry reached from 0xC20425.
    case 0xC20427: {
        Instruction step(cpu, 0x1E, 0x001664u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:89 STZ @LOCAL04
    case 0xC20428: {
        Instruction step(cpu, 0x64, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:91 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC2042A: {
        Instruction step(cpu, 0xAD, 0x008D08u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:92 CMP @CHAR_ID
    case 0xC2042D: {
        Instruction step(cpu, 0xC5, 0x000022u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:93 BNE @UNKNOWN2
    case 0xC2042F: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    case 0xC20431: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC20431.
    case 0xC20433: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:95 STA @LOCAL03
    case 0xC20434: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:96 BRA @UNKNOWN3
    case 0xC20436: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:98 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    case 0xC20438: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:98 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC20438.
    case 0xC2043A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:99 STA @LOCAL03
    case 0xC2043B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:101 LDA @CHAR_ID
    case 0xC2043D: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2043F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20441: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20442: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20444: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20445: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:103 PHA
    case 0xC20447: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:104 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC20448: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:105 AND #$00FF
    case 0xC2044B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC2044B.
    case 0xC2044D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2044E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20450: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20451: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20453: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20454: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:107 PHA
    case 0xC20456: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:108 ASL
    case 0xC20457: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:109 PLA
    case 0xC20458: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:110 ROR
    case 0xC20459: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:111 STA @VIRTUAL02
    case 0xC2045A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:112 LDA #16
    case 0xC2045C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:112 LDA #16
    // Overlapping static entry reached from 0xC2045C.
    case 0xC2045E: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:113 SEC
    case 0xC2045F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:114 SBC @VIRTUAL02
    case 0xC20460: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:115 PLY
    case 0xC20462: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:116 STY @VIRTUAL02
    case 0xC20463: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:117 CLC
    case 0xC20465: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:118 ADC @VIRTUAL02
    case 0xC20466: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:119 ASL
    case 0xC20468: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:120 STA @VIRTUAL02
    case 0xC20469: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:121 LDA @LOCAL03
    case 0xC2046B: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2046D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2046E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2046F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20470: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20471: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20472: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:123 CLC
    case 0xC20473: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:124 ADC @VIRTUAL02
    case 0xC20474: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:125 CLC
    case 0xC20476: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:126 ADC #.LOWORD(BG2_BUFFER)
    case 0xC20477: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:126 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC20477.
    case 0xC20479: {
        Instruction step(cpu, 0x81, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:127 TAX
    case 0xC2047A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:128 LDA @LOCAL06
    case 0xC2047B: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:129 STA @VIRTUAL04
    case 0xC2047D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:130 CLC
    case 0xC2047F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:131 ADC #$2004
    case 0xC20480: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000004u : 0x002004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:131 ADC #$2004
    // Overlapping static entry reached from 0xC20480.
    case 0xC20482: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:132 STA __BSS_START__,X
    case 0xC20483: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:132 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20482.
    case 0xC20485: {
        Instruction step(cpu, 0x00, 0x0000E8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:133 INX
    case 0xC20486: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:134 INX
    case 0xC20487: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:136 LDA #HPPP_WINDOW_WIDTH - 2
    case 0xC20488: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:136 LDA #HPPP_WINDOW_WIDTH - 2
    // Overlapping static entry reached from 0xC20488.
    case 0xC2048A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:137 STA @LOCAL01
    case 0xC2048B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:141 BRA @UNKNOWN5
    case 0xC2048D: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:143 LDA @VIRTUAL04
    case 0xC2048F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:144 CLC
    case 0xC20491: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:145 ADC #$2005
    case 0xC20492: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x002005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:145 ADC #$2005
    // Overlapping static entry reached from 0xC20492.
    case 0xC20494: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:146 STA __BSS_START__,X
    case 0xC20495: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:146 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20494.
    case 0xC20497: {
        Instruction step(cpu, 0x00, 0x0000E8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:147 INX
    case 0xC20498: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:148 INX
    case 0xC20499: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:150 LDA @LOCAL01
    case 0xC2049A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:151 DEC
    case 0xC2049C: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:152 STA @LOCAL01
    case 0xC2049D: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:158 BNE @UNKNOWN4
    case 0xC2049F: {
        Instruction step(cpu, 0xD0, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:159 LDA @VIRTUAL04
    case 0xC204A1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:160 CLC
    case 0xC204A3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:161 ADC #$6004
    case 0xC204A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000004u : 0x006004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:161 ADC #$6004
    // Overlapping static entry reached from 0xC22B00.
    case 0xC204A5: {
        Instruction step(cpu, 0x04, 0x000060u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:161 ADC #$6004
    // Overlapping static entry reached from 0xC204A4.
    case 0xC204A6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:162 STA __BSS_START__,X
    case 0xC204A7: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:163 TXA
    case 0xC204AA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:164 INC
    case 0xC204AB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:165 INC
    case 0xC204AC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:166 CLC
    case 0xC204AD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:167 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC204AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:167 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC204AE.
    case 0xC204B0: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:168 TAX
    case 0xC204B1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:169 LDA @VIRTUAL04
    case 0xC204B2: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:170 CLC
    case 0xC204B4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:171 ADC #$2006
    case 0xC204B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x002006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:171 ADC #$2006
    // Overlapping static entry reached from 0xC204B5.
    case 0xC204B7: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:172 STA __BSS_START__,X
    case 0xC204B8: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:172 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC204B7.
    case 0xC204BA: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:173 TXA
    case 0xC204BB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:174 INC
    case 0xC204BC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:175 INC
    case 0xC204BD: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:176 STA @TILEARRPTR
    case 0xC204BE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:176 STA @TILEARRPTR
    // Overlapping static entry reached from 0xC2DBC1.
    case 0xC204BF: {
        Instruction step(cpu, 0x10, 0x0000A5u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:177 LDA @CHAR_ID
    case 0xC204C0: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:177 LDA @CHAR_ID
    // Overlapping static entry reached from 0xC204BF.
    case 0xC204C1: {
        Instruction step(cpu, 0x22, 0xA96918u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:178 CLC
    case 0xC204C2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:179 ADC #.LOWORD(GAME_STATE)
    case 0xC204C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:179 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC204C3.
    case 0xC204C5: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:180 TAX
    case 0xC204C6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:181 LDA a:game_state::party_members,X
    case 0xC204C7: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:182 AND #$00FF
    case 0xC204CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC204CA.
    case 0xC204CC: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:183 DEC
    case 0xC204CD: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:184 ASL
    case 0xC204CE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:185 ASL
    case 0xC204CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:186 CLC
    case 0xC204D0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:187 ADC #$22A0
    case 0xC204D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A0u : 0x0022A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:187 ADC #$22A0
    // Overlapping static entry reached from 0xC204D1.
    case 0xC204D3: {
        Instruction step(cpu, 0x22, 0xA21485u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:188 STA @LOCAL03
    case 0xC204D4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:189 LDX #0
    case 0xC204D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:189 LDX #0
    // Overlapping static entry reached from 0xC204D3.
    case 0xC204D7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:189 LDX #0
    // Overlapping static entry reached from 0xC204D6.
    case 0xC204D8: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:190 BRA @UNKNOWN9
    case 0xC204D9: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:192 TXY
    case 0xC204DB: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:193 LDA (@CHAR_ENTRY),Y
    case 0xC204DC: {
        Instruction step(cpu, 0xB1, 0x000020u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:194 AND #$00FF
    case 0xC204DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:194 AND #$00FF
    // Overlapping static entry reached from 0xC204DE.
    case 0xC204E0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:195 BEQ @UNKNOWN7
    case 0xC204E1: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:196 LDA @LOCAL05
    case 0xC204E3: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:197 STA @VIRTUAL02
    case 0xC204E5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:198 LDA @LOCAL03
    case 0xC204E7: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:199 CLC
    case 0xC204E9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:200 ADC @VIRTUAL02
    case 0xC204EA: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:201 STA (@TILEARRPTR)
    case 0xC204EC: {
        Instruction step(cpu, 0x92, 0x000010u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:202 INC @TILEARRPTR
    case 0xC204EE: {
        Instruction step(cpu, 0xE6, 0x000010u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:203 INC @TILEARRPTR
    case 0xC204F0: {
        Instruction step(cpu, 0xE6, 0x000010u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:204 LDA @LOCAL03
    case 0xC204F2: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:205 INC
    case 0xC204F4: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:206 STA @LOCAL03
    case 0xC204F5: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:207 BRA @UNKNOWN8
    case 0xC204F7: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:209 LDA @LOCAL05
    case 0xC204F9: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:210 STA @VIRTUAL02
    case 0xC204FB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:211 CLC
    case 0xC204FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:212 ADC #$2007
    case 0xC204FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000007u : 0x002007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:212 ADC #$2007
    // Overlapping static entry reached from 0xC204FE.
    case 0xC20500: {
        Instruction step(cpu, 0x20, 0x001092u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:213 STA (@TILEARRPTR)
    case 0xC20501: {
        Instruction step(cpu, 0x92, 0x000010u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:214 INC @TILEARRPTR
    case 0xC20503: {
        Instruction step(cpu, 0xE6, 0x000010u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:215 INC @TILEARRPTR
    case 0xC20505: {
        Instruction step(cpu, 0xE6, 0x000010u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:217 INX
    case 0xC20507: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:219 CPX #HPPP_WINDOW_WIDTH - 3
    case 0xC20508: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:219 CPX #HPPP_WINDOW_WIDTH - 3
    // Overlapping static entry reached from 0xC20508.
    case 0xC2050A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:220 BNE @UNKNOWN6
    case 0xC2050B: {
        Instruction step(cpu, 0xD0, 0x0000CEu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:221 LDA @LOCAL05
    case 0xC2050D: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:222 STA @VIRTUAL02
    case 0xC2050F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:223 LDY @LOCAL07
    case 0xC20511: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:224 TYA
    case 0xC20513: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:225 CLC
    case 0xC20514: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:226 ADC @VIRTUAL02
    case 0xC20515: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:227 CLC
    case 0xC20517: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:228 ADC #$2000
    case 0xC20518: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:228 ADC #$2000
    // Overlapping static entry reached from 0xC20518.
    case 0xC2051A: {
        Instruction step(cpu, 0x20, 0x001092u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:229 STA (@TILEARRPTR)
    case 0xC2051B: {
        Instruction step(cpu, 0x92, 0x000010u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:230 LDX @TILEARRPTR
    case 0xC2051D: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:231 INX
    case 0xC2051F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:232 INX
    case 0xC20520: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:233 LDA @VIRTUAL04
    case 0xC20521: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:234 CLC
    case 0xC20523: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:235 ADC #$6006
    case 0xC20524: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x006006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:235 ADC #$6006
    // Overlapping static entry reached from 0xC20524.
    case 0xC20526: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:236 STA __BSS_START__,X
    case 0xC20527: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:237 TXA
    case 0xC2052A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:238 INC
    case 0xC2052B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:239 INC
    case 0xC2052C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:240 CLC
    case 0xC2052D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:241 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC2052E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:241 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC2052E.
    case 0xC20530: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:242 TAX
    case 0xC20531: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:243 LDA @VIRTUAL04
    case 0xC20532: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:244 CLC
    case 0xC20534: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:245 ADC #$2006
    case 0xC20535: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x002006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:245 ADC #$2006
    // Overlapping static entry reached from 0xC20535.
    case 0xC20537: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:246 STA __BSS_START__,X
    case 0xC20538: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:246 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20537.
    case 0xC2053A: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:247 TXA
    case 0xC2053B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:248 INC
    case 0xC2053C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:249 INC
    case 0xC2053D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:250 STA @TILEARRPTR
    case 0xC2053E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:251 LDA @CHAR_ID
    case 0xC20540: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:252 CLC
    case 0xC20542: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:253 ADC #.LOWORD(GAME_STATE)
    case 0xC20543: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:253 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC20543.
    case 0xC20545: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:254 TAX
    case 0xC20546: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:255 LDA a:game_state::party_members,X
    case 0xC20547: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:256 AND #$00FF
    case 0xC2054A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:256 AND #$00FF
    // Overlapping static entry reached from 0xC2054A.
    case 0xC2054C: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:257 DEC
    case 0xC2054D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:258 ASL
    case 0xC2054E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:259 ASL
    case 0xC2054F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:260 CLC
    case 0xC20550: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:261 ADC #$22B0
    case 0xC20551: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B0u : 0x0022B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:261 ADC #$22B0
    // Overlapping static entry reached from 0xC20551.
    case 0xC20553: {
        Instruction step(cpu, 0x22, 0xA21485u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:262 STA @LOCAL03
    case 0xC20554: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    case 0xC20556: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    // Overlapping static entry reached from 0xC20553.
    case 0xC20557: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    // Overlapping static entry reached from 0xC20556.
    case 0xC20558: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:391 BRA @UNKNOWN13
    case 0xC20559: {
        Instruction step(cpu, 0x80, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:394 TXY
    case 0xC2055B: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:395 LDA (@CHAR_ENTRY),Y
    case 0xC2055C: {
        Instruction step(cpu, 0xB1, 0x000020u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:396 AND #$00FF
    case 0xC2055E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC2055E.
    case 0xC20560: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:397 BEQ @UNKNOWN11
    case 0xC20561: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:398 LDA @LOCAL03
    case 0xC20563: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:399 CLC
    case 0xC20565: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:400 ADC @VIRTUAL02
    case 0xC20566: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:401 STA (@TILEARRPTR)
    case 0xC20568: {
        Instruction step(cpu, 0x92, 0x000010u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:402 INC @TILEARRPTR
    case 0xC2056A: {
        Instruction step(cpu, 0xE6, 0x000010u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:403 INC @TILEARRPTR
    case 0xC2056C: {
        Instruction step(cpu, 0xE6, 0x000010u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:404 LDA @LOCAL03
    case 0xC2056E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:405 INC
    case 0xC20570: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:406 STA @LOCAL03
    case 0xC20571: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:423 BRA @UNKNOWN12
    case 0xC20573: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:425 LDA @VIRTUAL02
    case 0xC20575: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:426 CLC
    case 0xC20577: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:427 ADC #$2017
    case 0xC20578: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000017u : 0x002017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:427 ADC #$2017
    // Overlapping static entry reached from 0xC20578.
    case 0xC2057A: {
        Instruction step(cpu, 0x20, 0x001092u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:428 STA (@TILEARRPTR)
    case 0xC2057B: {
        Instruction step(cpu, 0x92, 0x000010u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:429 INC @TILEARRPTR
    case 0xC2057D: {
        Instruction step(cpu, 0xE6, 0x000010u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:430 INC @TILEARRPTR
    case 0xC2057F: {
        Instruction step(cpu, 0xE6, 0x000010u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:432 INX
    case 0xC20581: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:434 CPX #HPPP_WINDOW_WIDTH - 3
    case 0xC20582: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:434 CPX #HPPP_WINDOW_WIDTH - 3
    // Overlapping static entry reached from 0xC20582.
    case 0xC20584: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:435 BNE @UNKNOWN10
    case 0xC20585: {
        Instruction step(cpu, 0xD0, 0x0000D4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:437 LDY @LOCAL07
    case 0xC20587: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:438 TYA
    case 0xC20589: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:439 CLC
    case 0xC2058A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:440 ADC @VIRTUAL02
    case 0xC2058B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:446 CLC
    case 0xC2058D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:447 ADC #$2010
    case 0xC2058E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x002010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:447 ADC #$2010
    // Overlapping static entry reached from 0xC2058E.
    case 0xC20590: {
        Instruction step(cpu, 0x20, 0x001092u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:448 STA (@TILEARRPTR)
    case 0xC20591: {
        Instruction step(cpu, 0x92, 0x000010u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:449 LDX @TILEARRPTR
    case 0xC20593: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:450 INX
    case 0xC20595: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:451 INX
    case 0xC20596: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:453 LDA @VIRTUAL04
    case 0xC20597: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:458 CLC
    case 0xC20599: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:459 ADC #$6006
    case 0xC2059A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x006006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:459 ADC #$6006
    // Overlapping static entry reached from 0xC2059A.
    case 0xC2059C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:460 STA __BSS_START__,X
    case 0xC2059D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:461 TXA
    case 0xC205A0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:462 INC
    case 0xC205A1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:463 INC
    case 0xC205A2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:464 CLC
    case 0xC205A3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:465 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC205A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:465 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC205A4.
    case 0xC205A6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:466 STA @VIRTUAL02
    case 0xC205A7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:467 LDY #char_struct::current_hp_fraction
    case 0xC205A9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000042u : 0x000042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:467 LDY #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC205A9.
    case 0xC205AB: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:468 LDA (@CHAR_ENTRY),Y
    case 0xC205AC: {
        Instruction step(cpu, 0xB1, 0x000020u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:469 TAY
    case 0xC205AE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:471 STY @LOCAL05
    case 0xC205AF: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:475 LDY #char_struct::current_hp
    case 0xC205B1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000044u : 0x000044u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:475 LDY #char_struct::current_hp
    // Overlapping static entry reached from 0xC205B1.
    case 0xC205B3: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:476 LDA (@CHAR_ENTRY),Y
    case 0xC205B4: {
        Instruction step(cpu, 0xB1, 0x000020u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:477 TAX
    case 0xC205B6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:478 LDA @CHAR_ID
    case 0xC205B7: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:480 LDY @LOCAL05
    case 0xC205B9: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:484 JSR FILL_CHARACTER_HP_TILE_BUFFER
    case 0xC205BB: {
        Instruction step(cpu, 0x20, 0x000D99u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC205BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DAu : 0x00E3DAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC205BE.
    case 0xC205C0: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC205C1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC205C0.
    case 0xC205C2: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC205C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC205C2.
    case 0xC205C4: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC205C3.
    case 0xC205C5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC205C6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:486 LDA @CHAR_ID
    case 0xC205C8: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205CA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205CD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205D0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:488 CLC
    case 0xC205D2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:489 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    case 0xC205D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A7u : 0x008CA7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:489 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    // Overlapping static entry reached from 0xC205D3.
    case 0xC205D5: {
        Instruction step(cpu, 0x8C, 0x00A2A8u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:490 TAY
    case 0xC205D6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    case 0xC205D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    // Overlapping static entry reached from 0xC205D5.
    case 0xC205D8: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    // Overlapping static entry reached from 0xC205D7.
    case 0xC205D9: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:492 STX @LOCAL01
    case 0xC205DA: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:493 BRA @UNKNOWN19
    case 0xC205DC: {
        Instruction step(cpu, 0x80, 0x00006Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:495 LDA @LOCAL06
    case 0xC205DE: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:496 STA @VIRTUAL04
    case 0xC205E0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:497 CLC
    case 0xC205E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:498 ADC #$2006
    case 0xC205E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x002006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:498 ADC #$2006
    // Overlapping static entry reached from 0xC205E3.
    case 0xC205E5: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:499 LDX @VIRTUAL02
    case 0xC205E6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:500 STA __BSS_START__,X
    case 0xC205E8: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:501 INC @VIRTUAL02
    case 0xC205EB: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:502 INC @VIRTUAL02
    case 0xC205ED: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:503 LDA #2
    case 0xC205EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:503 LDA #2
    // Overlapping static entry reached from 0xC205EF.
    case 0xC205F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:504 STA @LOCAL07
    case 0xC205F2: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:505 BRA @UNKNOWN16
    case 0xC205F4: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:507 LDA [@VIRTUAL06]
    case 0xC205F6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:508 AND #$00FF
    case 0xC205F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:508 AND #$00FF
    // Overlapping static entry reached from 0xC205F8.
    case 0xC205FA: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:509 CLC
    case 0xC205FB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:510 ADC @LOCAL08
    case 0xC205FC: {
        Instruction step(cpu, 0x65, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:511 CLC
    case 0xC205FE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:512 ADC #$2000
    case 0xC205FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:512 ADC #$2000
    // Overlapping static entry reached from 0xC205FF.
    case 0xC20601: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:513 LDX @VIRTUAL02
    case 0xC20602: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:514 STA __BSS_START__,X
    case 0xC20604: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:515 INC @VIRTUAL06
    case 0xC20607: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:516 INC @VIRTUAL02
    case 0xC20609: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:517 INC @VIRTUAL02
    case 0xC2060B: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:518 LDA @LOCAL07
    case 0xC2060D: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:519 DEC
    case 0xC2060F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:520 STA @LOCAL07
    case 0xC20610: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:522 BNE @UNKNOWN15
    case 0xC20612: {
        Instruction step(cpu, 0xD0, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:523 LDA #HPPP_WINDOW_WIDTH - 4
    case 0xC20614: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:523 LDA #HPPP_WINDOW_WIDTH - 4
    // Overlapping static entry reached from 0xC20614.
    case 0xC20616: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:524 STA @LOCAL07
    case 0xC20617: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:525 BRA @UNKNOWN18
    case 0xC20619: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:527 LDA __BSS_START__,Y
    case 0xC2061B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:528 CLC
    case 0xC2061E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:529 ADC @LOCAL04
    case 0xC2061F: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:530 LDX @VIRTUAL02
    case 0xC20621: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:531 STA __BSS_START__,X
    case 0xC20623: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:532 INY
    case 0xC20626: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:533 INY
    case 0xC20627: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:534 INC @VIRTUAL02
    case 0xC20628: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:535 INC @VIRTUAL02
    case 0xC2062A: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:536 LDA @LOCAL07
    case 0xC2062C: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:537 DEC
    case 0xC2062E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:538 STA @LOCAL07
    case 0xC2062F: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:540 BNE @UNKNOWN17
    case 0xC20631: {
        Instruction step(cpu, 0xD0, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:541 LDA @VIRTUAL04
    case 0xC20633: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:542 CLC
    case 0xC20635: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:543 ADC #$6006
    case 0xC20636: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x006006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:543 ADC #$6006
    // Overlapping static entry reached from 0xC20636.
    case 0xC20638: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:544 LDX @VIRTUAL02
    case 0xC20639: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:545 STA __BSS_START__,X
    case 0xC2063B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:546 LDA @VIRTUAL02
    case 0xC2063E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:547 INC
    case 0xC20640: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:548 INC
    case 0xC20641: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:549 CLC
    case 0xC20642: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:550 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC20643: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:550 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20643.
    case 0xC20645: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:551 STA @VIRTUAL02
    case 0xC20646: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:552 LDX @LOCAL01
    case 0xC20648: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:553 DEX
    case 0xC2064A: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:554 STX @LOCAL01
    case 0xC2064B: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:556 BNE @UNKNOWN14
    case 0xC2064D: {
        Instruction step(cpu, 0xD0, 0x00008Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:557 LDY #char_struct::current_pp_fraction
    case 0xC2064F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000048u : 0x000048u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:557 LDY #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC2064F.
    case 0xC20651: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:558 LDA (@CHAR_ENTRY),Y
    case 0xC20652: {
        Instruction step(cpu, 0xB1, 0x000020u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:559 STA @LOCAL00
    case 0xC20654: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:560 LDY #char_struct::current_pp
    case 0xC20656: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:560 LDY #char_struct::current_pp
    // Overlapping static entry reached from 0xC20656.
    case 0xC20658: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:561 LDA (@CHAR_ENTRY),Y
    case 0xC20659: {
        Instruction step(cpu, 0xB1, 0x000020u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:562 TAY
    case 0xC2065B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:563 LDA @CHAR_ENTRY
    case 0xC2065C: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:564 CLC
    case 0xC2065E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:565 ADC #char_struct::afflictions
    case 0xC2065F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:565 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC2065F.
    case 0xC20661: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:566 TAX
    case 0xC20662: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:567 LDA @CHAR_ID
    case 0xC20663: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:568 JSR FILL_CHARACTER_PP_TILE_BUFFER
    case 0xC20665: {
        Instruction step(cpu, 0x20, 0x000DB7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:569 LDA @CHAR_ID
    case 0xC20668: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2066A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2066C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2066D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2066F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20670: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20671: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:571 CLC
    case 0xC20672: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:572 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + hp_pp_window_buffer::pp1
    case 0xC20673: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B3u : 0x008CB3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:572 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + hp_pp_window_buffer::pp1
    // Overlapping static entry reached from 0xC20673.
    case 0xC20675: {
        Instruction step(cpu, 0x8C, 0x00A2A8u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:573 TAY
    case 0xC20676: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    case 0xC20677: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    // Overlapping static entry reached from 0xC20675.
    case 0xC20678: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    // Overlapping static entry reached from 0xC20677.
    case 0xC20679: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:575 STX @LOCAL01
    case 0xC2067A: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:576 BRA @UNKNOWN25
    case 0xC2067C: {
        Instruction step(cpu, 0x80, 0x00006Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:578 LDA @LOCAL06
    case 0xC2067E: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:579 STA @VIRTUAL04
    case 0xC20680: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:580 CLC
    case 0xC20682: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:581 ADC #$2006
    case 0xC20683: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x002006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:581 ADC #$2006
    // Overlapping static entry reached from 0xC20683.
    case 0xC20685: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:582 LDX @VIRTUAL02
    case 0xC20686: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:583 STA __BSS_START__,X
    case 0xC20688: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:584 INC @VIRTUAL02
    case 0xC2068B: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:585 INC @VIRTUAL02
    case 0xC2068D: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:586 LDA #2
    case 0xC2068F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:586 LDA #2
    // Overlapping static entry reached from 0xC2068F.
    case 0xC20691: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:587 STA @LOCAL07
    case 0xC20692: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:588 BRA @UNKNOWN22
    case 0xC20694: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:590 LDA [@VIRTUAL06]
    case 0xC20696: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:591 AND #$00FF
    case 0xC20698: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:591 AND #$00FF
    // Overlapping static entry reached from 0xC20698.
    case 0xC2069A: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:592 CLC
    case 0xC2069B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:593 ADC @LOCAL08
    case 0xC2069C: {
        Instruction step(cpu, 0x65, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:594 CLC
    case 0xC2069E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:595 ADC #$2000
    case 0xC2069F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:595 ADC #$2000
    // Overlapping static entry reached from 0xC2069F.
    case 0xC206A1: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:596 LDX @VIRTUAL02
    case 0xC206A2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:597 STA __BSS_START__,X
    case 0xC206A4: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:597 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2C8CE.
    case 0xC206A5: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:598 INC @VIRTUAL06
    case 0xC206A7: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:599 INC @VIRTUAL02
    case 0xC206A9: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:600 INC @VIRTUAL02
    case 0xC206AB: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:601 LDA @LOCAL07
    case 0xC206AD: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:602 DEC
    case 0xC206AF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:603 STA @LOCAL07
    case 0xC206B0: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:605 BNE @UNKNOWN21
    case 0xC206B2: {
        Instruction step(cpu, 0xD0, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:606 LDA #HPPP_WINDOW_WIDTH - 4
    case 0xC206B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:606 LDA #HPPP_WINDOW_WIDTH - 4
    // Overlapping static entry reached from 0xC206B4.
    case 0xC206B6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:607 STA @LOCAL07
    case 0xC206B7: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:608 BRA @UNKNOWN24
    case 0xC206B9: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:610 LDA __BSS_START__,Y
    case 0xC206BB: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:611 CLC
    case 0xC206BE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:612 ADC @LOCAL04
    case 0xC206BF: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:613 LDX @VIRTUAL02
    case 0xC206C1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:614 STA __BSS_START__,X
    case 0xC206C3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:615 INY
    case 0xC206C6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:616 INY
    case 0xC206C7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:617 INC @VIRTUAL02
    case 0xC206C8: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:618 INC @VIRTUAL02
    case 0xC206CA: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:619 LDA @LOCAL07
    case 0xC206CC: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:620 DEC
    case 0xC206CE: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:621 STA @LOCAL07
    case 0xC206CF: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:623 BNE @UNKNOWN23
    case 0xC206D1: {
        Instruction step(cpu, 0xD0, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:624 LDA @VIRTUAL04
    case 0xC206D3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:625 CLC
    case 0xC206D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:626 ADC #$6006
    case 0xC206D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x006006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:626 ADC #$6006
    // Overlapping static entry reached from 0xC206D6.
    case 0xC206D8: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:627 LDX @VIRTUAL02
    case 0xC206D9: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:628 STA __BSS_START__,X
    case 0xC206DB: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:629 LDA @VIRTUAL02
    case 0xC206DE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:630 INC
    case 0xC206E0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:631 INC
    case 0xC206E1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:632 CLC
    case 0xC206E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:633 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC206E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:633 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC206E3.
    case 0xC206E5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:634 STA @VIRTUAL02
    case 0xC206E6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:635 LDX @LOCAL01
    case 0xC206E8: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:636 DEX
    case 0xC206EA: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:637 STX @LOCAL01
    case 0xC206EB: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:639 BNE @UNKNOWN20
    case 0xC206ED: {
        Instruction step(cpu, 0xD0, 0x00008Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:640 LDA @LOCAL06
    case 0xC206EF: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:641 STA @VIRTUAL04
    case 0xC206F1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:642 CLC
    case 0xC206F3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:643 ADC #$A004
    case 0xC206F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000004u : 0x00A004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:643 ADC #$A004
    // Overlapping static entry reached from 0xC206F4.
    case 0xC206F6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000A6u : 0x0002A6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:644 LDX @VIRTUAL02
    case 0xC206F7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:644 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC206F6.
    case 0xC206F8: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:645 STA __BSS_START__,X
    case 0xC206F9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:646 LDX @VIRTUAL02
    case 0xC206FC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:647 INX
    case 0xC206FE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:648 INX
    case 0xC206FF: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:649 LDY #HPPP_WINDOW_WIDTH - 2
    case 0xC20700: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:649 LDY #HPPP_WINDOW_WIDTH - 2
    // Overlapping static entry reached from 0xC20700.
    case 0xC20702: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:650 BRA @UNKNOWN27
    case 0xC20703: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:652 LDA @VIRTUAL04
    case 0xC20705: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:653 CLC
    case 0xC20707: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:654 ADC #$A005
    case 0xC20708: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000005u : 0x00A005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:654 ADC #$A005
    // Overlapping static entry reached from 0xC20708.
    case 0xC2070A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00009Du : 0x00009Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    case 0xC2070B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2070A.
    case 0xC2070C: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2070A.
    case 0xC2070D: {
        Instruction step(cpu, 0x00, 0x0000E8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:656 INX
    case 0xC2070E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:657 INX
    case 0xC2070F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:658 DEY
    case 0xC20710: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:660 BNE @UNKNOWN26
    case 0xC20711: {
        Instruction step(cpu, 0xD0, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:661 LDA @VIRTUAL04
    case 0xC20713: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:662 CLC
    case 0xC20715: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:663 ADC #$E004
    case 0xC20716: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000004u : 0x00E004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:663 ADC #$E004
    // Overlapping static entry reached from 0xC20716.
    case 0xC20718: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00009Du : 0x00009Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    case 0xC20719: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20718.
    case 0xC2071A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20718.
    case 0xC2071B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/draw.asm:665 END_C_FUNCTION
    case 0xC2071C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/draw.asm:665 END_C_FUNCTION
    case 0xC2071D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
