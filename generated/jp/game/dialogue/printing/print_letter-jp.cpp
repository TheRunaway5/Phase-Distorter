// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/print_letter-jp.asm
bool resume_text_print_letter_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_letter-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC111EC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111EE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111EF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111F0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC111F1.
    case 0xC111F3: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111F4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111F5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:9 TAX
    case 0xC111F6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:10 STX @LOCAL01
    case 0xC111F7: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:11 LDA CURRENT_FOCUS_WINDOW
    case 0xC111F9: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:12 ASL
    case 0xC111FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:13 TAX
    case 0xC111FD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:14 LDA OPEN_WINDOW_TABLE,X
    case 0xC111FE: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:15 LDY #.SIZEOF(window_stats)
    case 0xC11201: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:15 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11201.
    case 0xC11203: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:16 JSL MULT168
    case 0xC11204: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:17 TAX
    case 0xC11208: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:18 LDA WINDOW_STATS + window_stats::font,X
    case 0xC11209: {
        Instruction step(cpu, 0xBD, 0x0089D7u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:19 BEQ @UNKNOWN2
    case 0xC1120C: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:20 LDX @LOCAL01
    case 0xC1120E: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:21 TXA
    case 0xC11210: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:22 JSR UNKNOWN_C1C046
    case 0xC11211: {
        Instruction step(cpu, 0x20, 0x00BEACu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:23 LDX @LOCAL01
    case 0xC11214: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:24 CPX #$0060
    case 0xC11216: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:24 CPX #$0060
    // Overlapping static entry reached from 0xC11216.
    case 0xC11218: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:25 BCC @UNKNOWN3
    case 0xC11219: {
        Instruction step(cpu, 0x90, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:26 TXA
    case 0xC1121B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:27 AND #$000F
    case 0xC1121C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC1121C.
    case 0xC1121E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:28 CMP #3
    case 0xC1121F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:28 CMP #3
    // Overlapping static entry reached from 0xC1121F.
    case 0xC11221: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:29 BEQ @UNKNOWN0
    case 0xC11222: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:30 CMP #5
    case 0xC11224: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:30 CMP #5
    // Overlapping static entry reached from 0xC11224.
    case 0xC11226: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:31 BEQ @UNKNOWN0
    case 0xC11227: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:32 CMP #7
    case 0xC11229: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:32 CMP #7
    // Overlapping static entry reached from 0xC11229.
    case 0xC1122B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:33 BEQ @UNKNOWN0
    case 0xC1122C: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:34 CMP #10
    case 0xC1122E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:34 CMP #10
    // Overlapping static entry reached from 0xC1122E.
    case 0xC11230: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:35 BEQ @UNKNOWN0
    case 0xC11231: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:36 CMP #11
    case 0xC11233: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:36 CMP #11
    // Overlapping static entry reached from 0xC11233.
    case 0xC11235: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:37 BEQ @UNKNOWN1
    case 0xC11236: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:38 BRA @UNKNOWN3
    case 0xC11238: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:40 LDA #26
    case 0xC1123A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:40 LDA #26
    // Overlapping static entry reached from 0xC1123A.
    case 0xC1123C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:41 JSR UNKNOWN_C1C046
    case 0xC1123D: {
        Instruction step(cpu, 0x20, 0x00BEACu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:42 BRA @UNKNOWN3
    case 0xC11240: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:44 LDA #27
    case 0xC11242: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:44 LDA #27
    // Overlapping static entry reached from 0xC11242.
    case 0xC11244: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:45 JSR UNKNOWN_C1C046
    case 0xC11245: {
        Instruction step(cpu, 0x20, 0x00BEACu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:46 BRA @UNKNOWN3
    case 0xC11248: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:48 LDX @LOCAL01
    case 0xC1124A: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:49 TXA
    case 0xC1124C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:50 JSR UNKNOWN_C10BA1
    case 0xC1124D: {
        Instruction step(cpu, 0x20, 0x00110Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:52 LDA CURRENT_FOCUS_WINDOW
    case 0xC11250: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:53 ASL
    case 0xC11253: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:54 TAX
    case 0xC11254: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:55 LDA OPEN_WINDOW_TABLE + window_stats::prev,X
    case 0xC11255: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:56 CMP WINDOW_TAIL
    case 0xC11258: {
        Instruction step(cpu, 0xCD, 0x008C24u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:57 BEQ @UNKNOWN4
    case 0xC1125B: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC1125D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:59 LDA #1
    case 0xC1125F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:60 STA REDRAW_ALL_WINDOWS
    case 0xC11261: {
        Instruction step(cpu, 0x8D, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:60 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC1125F.
    case 0xC11262: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:60 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC11262.
    case 0xC11263: {
        Instruction step(cpu, 0x99, 0x0020C2u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC11264: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:63 LDA TEXT_SOUND_MODE
    case 0xC11266: {
        Instruction step(cpu, 0xAD, 0x009947u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:64 CMP #2
    case 0xC11269: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:64 CMP #2
    // Overlapping static entry reached from 0xC11269.
    case 0xC1126B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:65 BEQ @UNKNOWN5
    case 0xC1126C: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:66 LDA TEXT_SOUND_MODE
    case 0xC1126E: {
        Instruction step(cpu, 0xAD, 0x009947u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:67 CMP #3
    case 0xC11271: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:67 CMP #3
    // Overlapping static entry reached from 0xC11271.
    case 0xC11273: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:68 BEQ @UNKNOWN6
    case 0xC11274: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:69 LDA BLINKING_TRIANGLE_FLAG
    case 0xC11276: {
        Instruction step(cpu, 0xAD, 0x009945u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:70 BNE @UNKNOWN6
    case 0xC11279: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:72 LDA INSTANT_PRINTING
    case 0xC1127B: {
        Instruction step(cpu, 0xAD, 0x00991Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:73 AND #$00FF
    case 0xC1127E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC1127E.
    case 0xC11280: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:74 BNE @UNKNOWN6
    case 0xC11281: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:75 LDX @LOCAL01
    case 0xC11283: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:76 CPX #32
    case 0xC11285: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:76 CPX #32
    // Overlapping static entry reached from 0xC11285.
    case 0xC11287: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:77 BEQ @UNKNOWN6
    case 0xC11288: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:78 LDA #SFX::TEXT_PRINT
    case 0xC1128A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:78 LDA #SFX::TEXT_PRINT
    // Overlapping static entry reached from 0xC1128A.
    case 0xC1128C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:79 JSL PLAY_SOUND
    case 0xC1128D: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:81 LDA INSTANT_PRINTING
    case 0xC11291: {
        Instruction step(cpu, 0xAD, 0x00991Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:82 AND #$00FF
    case 0xC11294: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC11294.
    case 0xC11296: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:83 BNE @UNKNOWN9
    case 0xC11297: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:84 LDA SELECTED_TEXT_SPEED
    case 0xC11299: {
        Instruction step(cpu, 0xAD, 0x00991Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:85 INC
    case 0xC1129C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:86 STA @LOCAL00
    case 0xC1129D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:87 BRA @UNKNOWN8
    case 0xC1129F: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:89 JSL WINDOW_TICK
    case 0xC112A1: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:90 LDA @LOCAL00
    case 0xC112A5: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:91 DEC
    case 0xC112A7: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:92 STA @LOCAL00
    case 0xC112A8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_letter-jp.asm:94 BNE @UNKNOWN7
    case 0xC112AA: {
        Instruction step(cpu, 0xD0, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_letter-jp.asm:96 END_C_FUNCTION
    case 0xC112AC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_letter-jp.asm:96 END_C_FUNCTION
    case 0xC112AD: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
