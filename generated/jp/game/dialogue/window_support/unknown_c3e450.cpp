// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C3/C3E450.asm
bool resume_unresolved_c3_c3e450(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E450.asm:4 BEGIN_C_FUNCTION
    case 0xC1004A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC1004C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC1004D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC1004E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1004E.
    case 0xC10050: {
        Instruction step(cpu, 0xFF, 0x02AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC10051: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    case 0xC10052: {
        Instruction step(cpu, 0xAD, 0x000002u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    // Overlapping static entry reached from 0xC10050.
    case 0xC10054: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    case 0xC10055: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC10055.
    case 0xC10057: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    case 0xC10058: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    // Overlapping static entry reached from 0xC10058.
    case 0xC1005A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:14 BEQ @UNKNOWN0
    case 0xC1005B: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC1005D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x001F1Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1005D.
    case 0xC1005F: {
        Instruction step(cpu, 0x1F, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10060: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10062: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1005F.
    case 0xC10063: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10062.
    case 0xC10064: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10065: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10063.
    case 0xC10066: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:16 LDA GAME_STATE+game_state::text_flavour
    case 0xC10067: {
        Instruction step(cpu, 0xAD, 0x009C7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    case 0xC1006A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC1006A.
    case 0xC1006C: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:18 DEC
    case 0xC1006D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC1006E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10070: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10071: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:20 TAX
    case 0xC10073: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:21 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC10074: {
        Instruction step(cpu, 0xBF, 0xE01F0Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:22 CLC
    case 0xC10078: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:23 ADC #8
    case 0xC10079: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:23 ADC #8
    // Overlapping static entry reached from 0xC10079.
    case 0xC1007B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:24 CLC
    case 0xC1007C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:25 ADC @VIRTUAL06
    case 0xC1007D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:26 STA @VIRTUAL06
    case 0xC1007F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:27 BRA @UNKNOWN1
    case 0xC10081: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10083: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x001F1Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10083.
    case 0xC10085: {
        Instruction step(cpu, 0x1F, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10086: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10088: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10085.
    case 0xC10089: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10088.
    case 0xC1008A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC1008B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10089.
    case 0xC1008C: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:30 LDA GAME_STATE+game_state::text_flavour
    case 0xC1008D: {
        Instruction step(cpu, 0xAD, 0x009C7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    case 0xC10090: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC10090.
    case 0xC10092: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:32 DEC
    case 0xC10093: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10094: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10096: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10097: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:34 TAX
    case 0xC10099: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:35 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC1009A: {
        Instruction step(cpu, 0xBF, 0xE01F0Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:35 LDA f:TEXT_WINDOW_PROPERTIES,X
    // Overlapping static entry reached from 0xC10B64.
    case 0xC1009D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000018u : 0x006918u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:36 CLC
    case 0xC1009E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:37 ADC #40
    case 0xC1009F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:37 ADC #40
    // Overlapping static entry reached from 0xC1009D.
    case 0xC100A0: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:37 ADC #40
    // Overlapping static entry reached from 0xC1009F.
    case 0xC100A1: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:38 CLC
    case 0xC100A2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:39 ADC @VIRTUAL06
    case 0xC100A3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:40 STA @VIRTUAL06
    case 0xC100A5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC100A7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC100A9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC100AB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC100AD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    case 0xC100AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC100AF.
    case 0xC100B1: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    case 0xC100B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000228u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    // Overlapping static entry reached from 0xC100B2.
    case 0xC100B4: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:45 JSL MEMCPY16
    case 0xC100B5: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC100B9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:47 LDA #PALETTE_UPLOAD::FULL
    case 0xC100BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    case 0xC100BD: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC100BB.
    case 0xC100BE: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC100C0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E450.asm:50 END_C_FUNCTION
    case 0xC100C2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3E450.asm:50 END_C_FUNCTION
    case 0xC100C3: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
