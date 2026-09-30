// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/get_active_window_address.asm
bool resume_text_get_active_window_address(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_active_window_address.asm:3 BEGIN_C_FUNCTION
    case 0xC10301: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:4 LDA WINDOW_HEAD
    case 0xC10303: {
        Instruction step(cpu, 0xAD, 0x0088E0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:5 CMP #$FFFF
    case 0xC10306: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:5 CMP #$FFFF
    // Overlapping static entry reached from 0xC10306.
    case 0xC10308: {
        Instruction step(cpu, 0xFF, 0xA905D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:6 BNE @UNKNOWN0
    case 0xC10309: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:7 LDA #.LOWORD(DUMMY_WINDOW)
    case 0xC1030B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FEu : 0x0085FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:7 LDA #.LOWORD(DUMMY_WINDOW)
    // Overlapping static entry reached from 0xC10308.
    case 0xC1030C: {
        Instruction step(cpu, 0xFE, 0x008085u, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:7 LDA #.LOWORD(DUMMY_WINDOW)
    // Overlapping static entry reached from 0xC1030B.
    case 0xC1030D: {
        Instruction step(cpu, 0x85, 0x000080u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:8 BRA @UNKNOWN1
    case 0xC1030E: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:8 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC1030D.
    case 0xC1030F: {
        Instruction step(cpu, 0x13, 0x0000ADu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC10310: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:10 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1030F.
    case 0xC10311: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:10 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10311.
    case 0xC10312: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x00000Au : 0x00AA0Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:11 ASL
    case 0xC10313: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:12 TAX
    case 0xC10314: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:13 LDA OPEN_WINDOW_TABLE,X
    case 0xC10315: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:14 LDY #.SIZEOF(window_stats)
    case 0xC10318: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:14 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10318.
    case 0xC1031A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:15 JSL MULT168
    case 0xC1031B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:16 CLC
    case 0xC1031F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:17 ADC #.LOWORD(WINDOW_STATS)
    case 0xC10320: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_active_window_address.asm:17 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC10320.
    case 0xC10322: {
        Instruction step(cpu, 0x86, 0x000060u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_active_window_address.asm:19 END_C_FUNCTION
    case 0xC10323: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
