// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/refresh_map_at_position.asm
bool resume_overworld_refresh_map_at_position(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/refresh_map_at_position.asm:3 BEGIN_C_FUNCTION
    case 0xC0156E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01570: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01571: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01572: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01573: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC01573.
    case 0xC01575: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01576: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01577: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:12 STX @LOCAL03
    case 0xC01578: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:12 STX @LOCAL03
    // Overlapping static entry reached from 0xC01575.
    case 0xC01579: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:13 STA @LOCAL02
    case 0xC0157A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:13 STA @LOCAL02
    // Overlapping static entry reached from 0xC01579.
    case 0xC0157B: {
        Instruction step(cpu, 0x12, 0x00008Du, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:14 STA BG2_X_POS
    case 0xC0157C: {
        Instruction step(cpu, 0x8D, 0x000035u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:14 STA BG2_X_POS
    // Overlapping static entry reached from 0xC0157B.
    case 0xC0157D: {
        Instruction step(cpu, 0x35, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:15 LDA @LOCAL02
    case 0xC0157F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:16 STA BG1_X_POS
    case 0xC01581: {
        Instruction step(cpu, 0x8D, 0x000031u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:17 LDA @LOCAL03
    case 0xC01584: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:18 STA BG2_Y_POS
    case 0xC01586: {
        Instruction step(cpu, 0x8D, 0x000037u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:19 LDA @LOCAL03
    case 0xC01589: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:20 STA BG1_Y_POS
    case 0xC0158B: {
        Instruction step(cpu, 0x8D, 0x000033u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:21 LDA @LOCAL02
    case 0xC0158E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:22 AND #$8000
    case 0xC01590: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:22 AND #$8000
    // Overlapping static entry reached from 0xC01590.
    case 0xC01592: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:23 BEQ @UNKNOWN0
    case 0xC01593: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:24 LDA @LOCAL02
    case 0xC01595: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:25 LSR
    case 0xC01597: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:26 LSR
    case 0xC01598: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:27 LSR
    case 0xC01599: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:28 ORA #$E000
    case 0xC0159A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00E000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:28 ORA #$E000
    // Overlapping static entry reached from 0xC0159A.
    case 0xC0159C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x000485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:29 STA @VIRTUAL04
    case 0xC0159D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:29 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0159C.
    case 0xC0159E: {
        Instruction step(cpu, 0x04, 0x000080u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:30 BRA @UNKNOWN1
    case 0xC0159F: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:30 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC0159E.
    case 0xC015A0: {
        Instruction step(cpu, 0x07, 0x0000A5u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:32 LDA @LOCAL02
    case 0xC015A1: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:32 LDA @LOCAL02
    // Overlapping static entry reached from 0xC015A0.
    case 0xC015A2: {
        Instruction step(cpu, 0x12, 0x00004Au, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:33 LSR
    case 0xC015A3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:34 LSR
    case 0xC015A4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:35 LSR
    case 0xC015A5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:36 STA @VIRTUAL04
    case 0xC015A6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:38 LDA @LOCAL03
    case 0xC015A8: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:39 AND #$8000
    case 0xC015AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:39 AND #$8000
    // Overlapping static entry reached from 0xC015AA.
    case 0xC015AC: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:40 BEQ @UNKNOWN2
    case 0xC015AD: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:41 LDA @LOCAL03
    case 0xC015AF: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:42 LSR
    case 0xC015B1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:43 LSR
    case 0xC015B2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:44 LSR
    case 0xC015B3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:45 ORA #$E000
    case 0xC015B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00E000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:45 ORA #$E000
    // Overlapping static entry reached from 0xC015B4.
    case 0xC015B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:46 STA @VIRTUAL02
    case 0xC015B7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:46 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC015B6.
    case 0xC015B8: {
        Instruction step(cpu, 0x02, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:47 JMP @UNKNOWN5
    case 0xC015B9: {
        Instruction step(cpu, 0x4C, 0x001673u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:47 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC015C8.
    case 0xC015BA: {
        Instruction step(cpu, 0x73, 0x000016u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:49 LDA @LOCAL03
    case 0xC015BC: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:50 LSR
    case 0xC015BE: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:51 LSR
    case 0xC015BF: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:52 LSR
    case 0xC015C0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:53 STA @VIRTUAL02
    case 0xC015C1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:54 JMP @UNKNOWN5
    case 0xC015C3: {
        Instruction step(cpu, 0x4C, 0x001673u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:56 AND #$8000
    case 0xC015C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:56 AND #$8000
    // Overlapping static entry reached from 0xC015C6.
    case 0xC015C8: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:57 BEQ @UNKNOWN4
    case 0xC015C9: {
        Instruction step(cpu, 0xF0, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:58 LDA SCREEN_LEFT_X
    case 0xC015CB: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:59 INC
    case 0xC015CE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:60 STA @LOCAL01
    case 0xC015CF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:61 STA SCREEN_LEFT_X
    case 0xC015D1: {
        Instruction step(cpu, 0x8D, 0x0046FAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:62 LDA @VIRTUAL02
    case 0xC015D4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:63 SEC
    case 0xC015D6: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:64 SBC #16
    case 0xC015D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:64 SBC #16
    // Overlapping static entry reached from 0xC015D7.
    case 0xC015D9: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:65 TAY
    case 0xC015DA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:66 STY @LOCAL00
    case 0xC015DB: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:67 TYX
    case 0xC015DD: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:68 LDA @LOCAL01
    case 0xC015DE: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:69 CLC
    case 0xC015E0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:70 ADC #41
    case 0xC015E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000029u : 0x000029u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:70 ADC #41
    // Overlapping static entry reached from 0xC015E1.
    case 0xC015E3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:71 JSR LOAD_MAP_COLUMN
    case 0xC015E4: {
        Instruction step(cpu, 0x20, 0x000BEEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:72 LDY @LOCAL00
    case 0xC015E7: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:73 TYX
    case 0xC015E9: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:74 LDA SCREEN_LEFT_X
    case 0xC015EA: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:75 CLC
    case 0xC015ED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:76 ADC #41
    case 0xC015EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000029u : 0x000029u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:76 ADC #41
    // Overlapping static entry reached from 0xC015EE.
    case 0xC015F0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:77 JSR LOAD_COLLISION_COLUMN
    case 0xC015F1: {
        Instruction step(cpu, 0x20, 0x000D90u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:78 LDX @VIRTUAL02
    case 0xC015F4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:79 LDA SCREEN_LEFT_X
    case 0xC015F6: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:80 CLC
    case 0xC015F9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:81 ADC #32
    case 0xC015FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:81 ADC #32
    // Overlapping static entry reached from 0xC015FA.
    case 0xC015FC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:82 JSR UNKNOWN_C00FCB
    case 0xC015FD: {
        Instruction step(cpu, 0x20, 0x000FDDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:83 LDX @VIRTUAL02
    case 0xC01600: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:84 DEX
    case 0xC01602: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:85 LDA SCREEN_LEFT_X
    case 0xC01603: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:86 CLC
    case 0xC01606: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:87 ADC #34
    case 0xC01607: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:87 ADC #34
    // Overlapping static entry reached from 0xC01607.
    case 0xC01609: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:88 JSL UNKNOWN_C025CF
    case 0xC0160A: {
        Instruction step(cpu, 0x22, 0xC025DDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:89 LDA @VIRTUAL02
    case 0xC0160E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:90 SEC
    case 0xC01610: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:91 SBC #8
    case 0xC01611: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:91 SBC #8
    // Overlapping static entry reached from 0xC01611.
    case 0xC01613: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:92 TAX
    case 0xC01614: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:93 LDA SCREEN_LEFT_X
    case 0xC01615: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:94 CLC
    case 0xC01618: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:95 ADC #40
    case 0xC01619: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:95 ADC #40
    // Overlapping static entry reached from 0xC01619.
    case 0xC0161B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:96 JSL SPAWN_VERTICAL
    case 0xC0161C: {
        Instruction step(cpu, 0x22, 0xC02B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:97 BRA @UNKNOWN5
    case 0xC01620: {
        Instruction step(cpu, 0x80, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:99 LDA SCREEN_LEFT_X
    case 0xC01622: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:100 DEC
    case 0xC01625: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:101 STA @LOCAL00
    case 0xC01626: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:102 STA SCREEN_LEFT_X
    case 0xC01628: {
        Instruction step(cpu, 0x8D, 0x0046FAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:103 LDA @VIRTUAL02
    case 0xC0162B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:104 SEC
    case 0xC0162D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:105 SBC #16
    case 0xC0162E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:105 SBC #16
    // Overlapping static entry reached from 0xC0162E.
    case 0xC01630: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:106 TAY
    case 0xC01631: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:107 STY @LOCAL01
    case 0xC01632: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:108 TYX
    case 0xC01634: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:109 LDA @LOCAL00
    case 0xC01635: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:110 SEC
    case 0xC01637: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:111 SBC #16
    case 0xC01638: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:111 SBC #16
    // Overlapping static entry reached from 0xC01638.
    case 0xC0163A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:112 JSR LOAD_MAP_COLUMN
    case 0xC0163B: {
        Instruction step(cpu, 0x20, 0x000BEEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:113 LDY @LOCAL01
    case 0xC0163E: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:114 TYX
    case 0xC01640: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:115 LDA SCREEN_LEFT_X
    case 0xC01641: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:116 SEC
    case 0xC01644: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:117 SBC #16
    case 0xC01645: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:117 SBC #16
    // Overlapping static entry reached from 0xC01645.
    case 0xC01647: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:118 JSR LOAD_COLLISION_COLUMN
    case 0xC01648: {
        Instruction step(cpu, 0x20, 0x000D90u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:119 LDX @VIRTUAL02
    case 0xC0164B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:120 LDA SCREEN_LEFT_X
    case 0xC0164D: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:121 DEC
    case 0xC01650: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:122 JSR UNKNOWN_C00FCB
    case 0xC01651: {
        Instruction step(cpu, 0x20, 0x000FDDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:123 LDX @VIRTUAL02
    case 0xC01654: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:124 DEX
    case 0xC01656: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:125 LDA SCREEN_LEFT_X
    case 0xC01657: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:126 DEC
    case 0xC0165A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:127 DEC
    case 0xC0165B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:128 DEC
    case 0xC0165C: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:129 JSL UNKNOWN_C025CF
    case 0xC0165D: {
        Instruction step(cpu, 0x22, 0xC025DDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:130 LDA @VIRTUAL02
    case 0xC01661: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:131 SEC
    case 0xC01663: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:132 SBC #8
    case 0xC01664: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:132 SBC #8
    // Overlapping static entry reached from 0xC01664.
    case 0xC01666: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:133 TAX
    case 0xC01667: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:134 LDA SCREEN_LEFT_X
    case 0xC01668: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:135 SEC
    case 0xC0166B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:136 SBC #8
    case 0xC0166C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:136 SBC #8
    // Overlapping static entry reached from 0xC0166C.
    case 0xC0166E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:137 JSL SPAWN_VERTICAL
    case 0xC0166F: {
        Instruction step(cpu, 0x22, 0xC02B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:139 LDA SCREEN_LEFT_X
    case 0xC01673: {
        Instruction step(cpu, 0xAD, 0x0046FAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:139 LDA SCREEN_LEFT_X
    // Overlapping static entry reached from 0xC01683.
    case 0xC01675: {
        Instruction step(cpu, 0x46, 0x000038u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:140 SEC
    case 0xC01676: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:141 SBC @VIRTUAL04
    case 0xC01677: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/refresh_map_at_position.asm:142 BNEL @UNKNOWN3
    case 0xC01679: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/refresh_map_at_position.asm:142 BNEL @UNKNOWN3
    case 0xC0167B: {
        Instruction step(cpu, 0x4C, 0x0015C6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:143 JMP @UNKNOWN9
    case 0xC0167E: {
        Instruction step(cpu, 0x4C, 0x001730u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:145 AND #$8000
    case 0xC01681: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:145 AND #$8000
    // Overlapping static entry reached from 0xC01681.
    case 0xC01683: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:146 BEQ @UNKNOWN8
    case 0xC01684: {
        Instruction step(cpu, 0xF0, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:147 LDA SCREEN_TOP_Y
    case 0xC01686: {
        Instruction step(cpu, 0xAD, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:148 INC
    case 0xC01689: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:149 STA @LOCAL01
    case 0xC0168A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:150 STA SCREEN_TOP_Y
    case 0xC0168C: {
        Instruction step(cpu, 0x8D, 0x0046FCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:151 LDA @VIRTUAL04
    case 0xC0168F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:152 SEC
    case 0xC01691: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:153 SBC #16
    case 0xC01692: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:153 SBC #16
    // Overlapping static entry reached from 0xC01692.
    case 0xC01694: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:154 TAY
    case 0xC01695: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:155 STY @LOCAL00
    case 0xC01696: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:156 LDA @LOCAL01
    case 0xC01698: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:157 CLC
    case 0xC0169A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:158 ADC #41
    case 0xC0169B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000029u : 0x000029u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:158 ADC #41
    // Overlapping static entry reached from 0xC0169B.
    case 0xC0169D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:159 TAX
    case 0xC0169E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:160 TYA
    case 0xC0169F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:161 JSR LOAD_MAP_ROW
    case 0xC016A0: {
        Instruction step(cpu, 0x20, 0x000AD7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:162 LDA SCREEN_TOP_Y
    case 0xC016A3: {
        Instruction step(cpu, 0xAD, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:163 CLC
    case 0xC016A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:164 ADC #41
    case 0xC016A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000029u : 0x000029u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:164 ADC #41
    // Overlapping static entry reached from 0xC016A7.
    case 0xC016A9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:165 TAX
    case 0xC016AA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:166 LDY @LOCAL00
    case 0xC016AB: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:167 TYA
    case 0xC016AD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:168 JSR LOAD_COLLISION_ROW
    case 0xC016AE: {
        Instruction step(cpu, 0x20, 0x000D05u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:169 LDA SCREEN_TOP_Y
    case 0xC016B1: {
        Instruction step(cpu, 0xAD, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:170 CLC
    case 0xC016B4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:171 ADC #28
    case 0xC016B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:171 ADC #28
    // Overlapping static entry reached from 0xC016B5.
    case 0xC016B7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:172 TAX
    case 0xC016B8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:173 LDA @VIRTUAL04
    case 0xC016B9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:174 JSR UNKNOWN_C00E16
    case 0xC016BB: {
        Instruction step(cpu, 0x20, 0x000E28u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:175 LDA SCREEN_TOP_Y
    case 0xC016BE: {
        Instruction step(cpu, 0xAD, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:176 CLC
    case 0xC016C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:177 ADC #29
    case 0xC016C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:177 ADC #29
    // Overlapping static entry reached from 0xC016C2.
    case 0xC016C4: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:178 TAX
    case 0xC016C5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:179 LDA @VIRTUAL04
    case 0xC016C6: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:180 JSL UNKNOWN_C0255C
    case 0xC016C8: {
        Instruction step(cpu, 0x22, 0xC0256Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:181 LDA SCREEN_TOP_Y
    case 0xC016CC: {
        Instruction step(cpu, 0xAD, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:182 CLC
    case 0xC016CF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:183 ADC #36
    case 0xC016D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:183 ADC #36
    // Overlapping static entry reached from 0xC016D0.
    case 0xC016D2: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:184 TAX
    case 0xC016D3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:185 LDA @VIRTUAL04
    case 0xC016D4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:186 SEC
    case 0xC016D6: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:187 SBC #8
    case 0xC016D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:187 SBC #8
    // Overlapping static entry reached from 0xC016D7.
    case 0xC016D9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:188 JSL SPAWN_HORIZONTAL
    case 0xC016DA: {
        Instruction step(cpu, 0x22, 0xC02A7Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:189 BRA @UNKNOWN9
    case 0xC016DE: {
        Instruction step(cpu, 0x80, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:191 LDA SCREEN_TOP_Y
    case 0xC016E0: {
        Instruction step(cpu, 0xAD, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:192 DEC
    case 0xC016E3: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:193 STA @LOCAL01
    case 0xC016E4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:194 STA SCREEN_TOP_Y
    case 0xC016E6: {
        Instruction step(cpu, 0x8D, 0x0046FCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:195 LDA @VIRTUAL04
    case 0xC016E9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:196 SEC
    case 0xC016EB: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:197 SBC #16
    case 0xC016EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:197 SBC #16
    // Overlapping static entry reached from 0xC016EC.
    case 0xC016EE: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:198 TAY
    case 0xC016EF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:199 STY @LOCAL00
    case 0xC016F0: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:200 LDA @LOCAL01
    case 0xC016F2: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:201 SEC
    case 0xC016F4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:202 SBC #16
    case 0xC016F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:202 SBC #16
    // Overlapping static entry reached from 0xC016F5.
    case 0xC016F7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:203 TAX
    case 0xC016F8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:204 TYA
    case 0xC016F9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:205 JSR LOAD_MAP_ROW
    case 0xC016FA: {
        Instruction step(cpu, 0x20, 0x000AD7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:206 LDA SCREEN_TOP_Y
    case 0xC016FD: {
        Instruction step(cpu, 0xAD, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:207 SEC
    case 0xC01700: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:208 SBC #16
    case 0xC01701: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:208 SBC #16
    // Overlapping static entry reached from 0xC01701.
    case 0xC01703: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:209 TAX
    case 0xC01704: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:210 LDY @LOCAL00
    case 0xC01705: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:211 TYA
    case 0xC01707: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:212 JSR LOAD_COLLISION_ROW
    case 0xC01708: {
        Instruction step(cpu, 0x20, 0x000D05u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:213 LDX SCREEN_TOP_Y
    case 0xC0170B: {
        Instruction step(cpu, 0xAE, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:214 DEX
    case 0xC0170E: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:215 LDA @VIRTUAL04
    case 0xC0170F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:216 JSR UNKNOWN_C00E16
    case 0xC01711: {
        Instruction step(cpu, 0x20, 0x000E28u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:217 LDX SCREEN_TOP_Y
    case 0xC01714: {
        Instruction step(cpu, 0xAE, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:218 DEX
    case 0xC01717: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:219 LDA @VIRTUAL04
    case 0xC01718: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:220 JSL UNKNOWN_C0255C
    case 0xC0171A: {
        Instruction step(cpu, 0x22, 0xC0256Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:221 LDA SCREEN_TOP_Y
    case 0xC0171E: {
        Instruction step(cpu, 0xAD, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:222 SEC
    case 0xC01721: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:223 SBC #8
    case 0xC01722: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:223 SBC #8
    // Overlapping static entry reached from 0xC01722.
    case 0xC01724: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:224 TAX
    case 0xC01725: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:225 LDA @VIRTUAL04
    case 0xC01726: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:226 SEC
    case 0xC01728: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:227 SBC #8
    case 0xC01729: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:227 SBC #8
    // Overlapping static entry reached from 0xC01729.
    case 0xC0172B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:228 JSL SPAWN_HORIZONTAL
    case 0xC0172C: {
        Instruction step(cpu, 0x22, 0xC02A7Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:230 LDA SCREEN_TOP_Y
    case 0xC01730: {
        Instruction step(cpu, 0xAD, 0x0046FCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:231 SEC
    case 0xC01733: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:232 SBC @VIRTUAL02
    case 0xC01734: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/refresh_map_at_position.asm:233 BNEL @UNKNOWN7
    case 0xC01736: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/refresh_map_at_position.asm:233 BNEL @UNKNOWN7
    case 0xC01738: {
        Instruction step(cpu, 0x4C, 0x001681u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:234 LDA @LOCAL02
    case 0xC0173B: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:235 STA BG12_POSITION_X_COPY
    case 0xC0173D: {
        Instruction step(cpu, 0x8D, 0x00470Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:236 LDA @LOCAL03
    case 0xC01740: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/refresh_map_at_position.asm:237 STA BG12_POSITION_Y_COPY
    case 0xC01742: {
        Instruction step(cpu, 0x8D, 0x00470Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/refresh_map_at_position.asm:238 END_C_FUNCTION
    case 0xC01745: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/refresh_map_at_position.asm:238 END_C_FUNCTION
    case 0xC01746: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
