// Compare independently named semantic operations with the frozen opcode oracle.
// No game assets or display are needed; every opcode and width combination runs.
#include "eb/game/runtime/instruction.hpp"
#include "eb/game/runtime/runtime.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "runtime_state_audit.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <tuple>
#include <vector>

namespace {
#include "../src/main_cpu_65816_opcodes.inc"
using Instruction = eb::game::runtime::Instruction;
using AddressMode = eb::game::runtime::AddressMode;
using Write = std::pair<std::uint32_t, std::uint8_t>;
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
auto state(const eb::MainCpu65816& cpu) {
    return std::tie(cpu.program_counter, cpu.accumulator, cpu.x_index, cpu.y_index, cpu.stack_pointer,
        cpu.direct_page, cpu.data_bank, cpu.status_register, cpu.emulation_mode, cpu.is_stopped,
        cpu.is_waiting, cpu.instruction_count, cpu.cycle_count);
}
AddressMode semantic_address_mode(MainCpuAddressMode mode) {
    switch (mode) {
    case MainCpuAddressMode::Absolute: return AddressMode::Absolute;
    case MainCpuAddressMode::AbsoluteIndexedX: return AddressMode::AbsoluteIndexedX;
    case MainCpuAddressMode::AbsoluteIndexedY: return AddressMode::AbsoluteIndexedY;
    case MainCpuAddressMode::Accumulator: return AddressMode::Accumulator;
    case MainCpuAddressMode::DirectPageIndirect: return AddressMode::DirectPageIndirect;
    case MainCpuAddressMode::DirectPageIndirectLong: return AddressMode::DirectPageIndirectLong;
    case MainCpuAddressMode::DirectPageIndirectLongIndexedY: return AddressMode::DirectPageIndirectLongIndexedY;
    case MainCpuAddressMode::DirectPageIndexedIndirectX: return AddressMode::DirectPageIndexedIndirectX;
    case MainCpuAddressMode::DirectPageIndirectIndexedY: return AddressMode::DirectPageIndirectIndexedY;
    case MainCpuAddressMode::DirectPage: return AddressMode::DirectPage;
    case MainCpuAddressMode::DirectPageIndexedX: return AddressMode::DirectPageIndexedX;
    case MainCpuAddressMode::DirectPageIndexedY: return AddressMode::DirectPageIndexedY;
    case MainCpuAddressMode::Immediate: return AddressMode::Immediate;
    case MainCpuAddressMode::Implied: return AddressMode::Implied;
    case MainCpuAddressMode::AbsoluteIndirect: return AddressMode::AbsoluteIndirect;
    case MainCpuAddressMode::AbsoluteIndirectLong: return AddressMode::AbsoluteIndirectLong;
    case MainCpuAddressMode::AbsoluteIndexedIndirectX: return AddressMode::AbsoluteIndexedIndirectX;
    case MainCpuAddressMode::Long: return AddressMode::Long;
    case MainCpuAddressMode::LongIndexedX: return AddressMode::LongIndexedX;
    case MainCpuAddressMode::BlockMove: return AddressMode::BlockMove;
    case MainCpuAddressMode::Relative8: return AddressMode::Relative8;
    case MainCpuAddressMode::Relative16: return AddressMode::Relative16;
    case MainCpuAddressMode::SignatureByte: return AddressMode::SignatureByte;
    case MainCpuAddressMode::StackRelativeIndirectIndexedY: return AddressMode::StackRelativeIndirectIndexedY;
    case MainCpuAddressMode::StackRelative: return AddressMode::StackRelative;
    }
    throw std::runtime_error("Missing semantic addressing mode");
}
void named_operation(Instruction& instruction, MainCpuOperation operation) {
    switch (operation) {
    case MainCpuOperation::ADC: instruction.add_with_carry(); return;
    case MainCpuOperation::AND: instruction.and_accumulator(); return;
    case MainCpuOperation::ASL: instruction.shift_left(); return;
    case MainCpuOperation::BCC: instruction.branch_if_carry_clear(); return;
    case MainCpuOperation::BCS: instruction.branch_if_carry_set(); return;
    case MainCpuOperation::BEQ: instruction.branch_if_zero(); return;
    case MainCpuOperation::BIT: instruction.test_bits(); return;
    case MainCpuOperation::BMI: instruction.branch_if_negative(); return;
    case MainCpuOperation::BNE: instruction.branch_if_not_zero(); return;
    case MainCpuOperation::BPL: instruction.branch_if_nonnegative(); return;
    case MainCpuOperation::BRA: instruction.branch_always(); return;
    case MainCpuOperation::BRK: instruction.software_break(); return;
    case MainCpuOperation::BRL: instruction.branch_long(); return;
    case MainCpuOperation::BVC: instruction.branch_if_overflow_clear(); return;
    case MainCpuOperation::BVS: instruction.branch_if_overflow_set(); return;
    case MainCpuOperation::CLC: instruction.clear_carry(); return;
    case MainCpuOperation::CLD: instruction.clear_decimal(); return;
    case MainCpuOperation::CLI: instruction.enable_interrupts(); return;
    case MainCpuOperation::CLV: instruction.clear_overflow(); return;
    case MainCpuOperation::CMP: instruction.compare_accumulator(); return;
    case MainCpuOperation::COP: instruction.coprocessor_interrupt(); return;
    case MainCpuOperation::CPX: instruction.compare_x(); return;
    case MainCpuOperation::CPY: instruction.compare_y(); return;
    case MainCpuOperation::DEC: instruction.decrement(); return;
    case MainCpuOperation::DEX: instruction.decrement_x(); return;
    case MainCpuOperation::DEY: instruction.decrement_y(); return;
    case MainCpuOperation::EOR: instruction.xor_accumulator(); return;
    case MainCpuOperation::INC: instruction.increment(); return;
    case MainCpuOperation::INX: instruction.increment_x(); return;
    case MainCpuOperation::INY: instruction.increment_y(); return;
    case MainCpuOperation::JML: instruction.jump_long(); return;
    case MainCpuOperation::JMP: instruction.jump(); return;
    case MainCpuOperation::JSL: instruction.call_long(); return;
    case MainCpuOperation::JSR: instruction.call(); return;
    case MainCpuOperation::LDA: instruction.load_accumulator(); return;
    case MainCpuOperation::LDX: instruction.load_x(); return;
    case MainCpuOperation::LDY: instruction.load_y(); return;
    case MainCpuOperation::LSR: instruction.shift_right(); return;
    case MainCpuOperation::MVN: instruction.move_byte_forward(); return;
    case MainCpuOperation::MVP: instruction.move_byte_backward(); return;
    case MainCpuOperation::NOP: instruction.no_operation(); return;
    case MainCpuOperation::ORA: instruction.or_accumulator(); return;
    case MainCpuOperation::PEA: instruction.push_effective_absolute(); return;
    case MainCpuOperation::PEI: instruction.push_effective_indirect(); return;
    case MainCpuOperation::PER: instruction.push_effective_relative(); return;
    case MainCpuOperation::PHA: instruction.push_accumulator(); return;
    case MainCpuOperation::PHB: instruction.push_data_bank(); return;
    case MainCpuOperation::PHD: instruction.push_direct_page(); return;
    case MainCpuOperation::PHK: instruction.push_program_bank(); return;
    case MainCpuOperation::PHP: instruction.push_status(); return;
    case MainCpuOperation::PHX: instruction.push_x(); return;
    case MainCpuOperation::PHY: instruction.push_y(); return;
    case MainCpuOperation::PLA: instruction.pull_accumulator(); return;
    case MainCpuOperation::PLB: instruction.pull_data_bank(); return;
    case MainCpuOperation::PLD: instruction.pull_direct_page(); return;
    case MainCpuOperation::PLP: instruction.pull_status(); return;
    case MainCpuOperation::PLX: instruction.pull_x(); return;
    case MainCpuOperation::PLY: instruction.pull_y(); return;
    case MainCpuOperation::REP: instruction.clear_status_bits(); return;
    case MainCpuOperation::ROL: instruction.rotate_left(); return;
    case MainCpuOperation::ROR: instruction.rotate_right(); return;
    case MainCpuOperation::RTI: instruction.return_from_interrupt(); return;
    case MainCpuOperation::RTL: instruction.return_long(); return;
    case MainCpuOperation::RTS: instruction.return_from_call(); return;
    case MainCpuOperation::SBC: instruction.subtract_with_borrow(); return;
    case MainCpuOperation::SEC: instruction.set_carry(); return;
    case MainCpuOperation::SED: instruction.set_decimal(); return;
    case MainCpuOperation::SEI: instruction.disable_interrupts(); return;
    case MainCpuOperation::SEP: instruction.set_status_bits(); return;
    case MainCpuOperation::STA: instruction.store_accumulator(); return;
    case MainCpuOperation::STP: instruction.stop(); return;
    case MainCpuOperation::STX: instruction.store_x(); return;
    case MainCpuOperation::STY: instruction.store_y(); return;
    case MainCpuOperation::STZ: instruction.store_zero(); return;
    case MainCpuOperation::TAX: instruction.transfer_accumulator_to_x(); return;
    case MainCpuOperation::TAY: instruction.transfer_accumulator_to_y(); return;
    case MainCpuOperation::TCD: instruction.transfer_accumulator_to_direct_page(); return;
    case MainCpuOperation::TCS: instruction.transfer_accumulator_to_stack(); return;
    case MainCpuOperation::TDC: instruction.transfer_direct_page_to_accumulator(); return;
    case MainCpuOperation::TRB: instruction.reset_tested_bits(); return;
    case MainCpuOperation::TSB: instruction.set_tested_bits(); return;
    case MainCpuOperation::TSC: instruction.transfer_stack_to_accumulator(); return;
    case MainCpuOperation::TSX: instruction.transfer_stack_to_x(); return;
    case MainCpuOperation::TXA: instruction.transfer_x_to_accumulator(); return;
    case MainCpuOperation::TXS: instruction.transfer_x_to_stack(); return;
    case MainCpuOperation::TXY: instruction.transfer_x_to_y(); return;
    case MainCpuOperation::TYA: instruction.transfer_y_to_accumulator(); return;
    case MainCpuOperation::TYX: instruction.transfer_y_to_x(); return;
    case MainCpuOperation::WAI: instruction.wait_for_interrupt(); return;
    case MainCpuOperation::WDM: instruction.reserved_no_operation(); return;
    case MainCpuOperation::XBA: instruction.exchange_accumulator_bytes(); return;
    case MainCpuOperation::XCE: instruction.exchange_carry_emulation(); return;
    }
    throw std::runtime_error("Missing named semantic operation");
}
unsigned instruction_length(unsigned opcode, const eb::MainCpu65816& cpu) {
    const auto mode = main_cpu_opcode_table[opcode].addressing_mode;
    switch (mode) {
    case MainCpuAddressMode::Implied:
    case MainCpuAddressMode::Accumulator: return 1;
    case MainCpuAddressMode::Long:
    case MainCpuAddressMode::LongIndexedX: return 4;
    case MainCpuAddressMode::Absolute:
    case MainCpuAddressMode::AbsoluteIndexedX:
    case MainCpuAddressMode::AbsoluteIndexedY:
    case MainCpuAddressMode::AbsoluteIndirect:
    case MainCpuAddressMode::AbsoluteIndirectLong:
    case MainCpuAddressMode::AbsoluteIndexedIndirectX:
    case MainCpuAddressMode::BlockMove:
    case MainCpuAddressMode::Relative16: return 3;
    case MainCpuAddressMode::Immediate: {
        if (opcode == 0xf4) return 3;
        const auto operation = main_cpu_opcode_table[opcode].operation;
        const bool index = operation == MainCpuOperation::LDX || operation == MainCpuOperation::LDY ||
                           operation == MainCpuOperation::CPX || operation == MainCpuOperation::CPY;
        return (cpu.status_register & (index ? 0x10 : 0x20)) ? 2 : 3;
    }
    default: return 2;
    }
}
void execute_named(eb::MainCpu65816& cpu, unsigned opcode, std::uint32_t operand, unsigned length) {
    const auto info = main_cpu_opcode_table[opcode];
    Instruction instruction(cpu, std::uint8_t(opcode), operand, length, semantic_address_mode(info.addressing_mode));
    named_operation(instruction, info.operation);
    require(instruction.finish(), "Named instruction did not finish");
}
std::uint8_t initial_byte(std::uint32_t address) {
    return std::uint8_t((address * 29) ^ (address >> 8) ^ (address >> 16) ^ 0xa5);
}
void initialize(eb::MainCpu65816& cpu, unsigned seed) {
    constexpr std::array<std::uint16_t, 12> values{0, 1, 0x7f, 0x80, 0xff, 0x7fff,
                                                0x8000, 0xffff, 0x9999, 0x1234, 0x00ff, 0xff00};
    cpu.emulation_mode = seed >= 24;
    cpu.status_register = std::uint8_t(((seed & 3) << 4) | (seed & 4 ? 1 : 0) |
                                     (seed & 8 ? 8 : 0) | (seed & 16 ? 0xc2 : 0));
    if (cpu.emulation_mode) cpu.status_register |= 0x30;
    cpu.accumulator = values[seed % values.size()];
    cpu.x_index = values[(seed + 3) % values.size()];
    cpu.y_index = values[(seed + 7) % values.size()];
    if (cpu.status_register & 0x10) { cpu.x_index &= 255; cpu.y_index &= 255; }
    cpu.stack_pointer = cpu.emulation_mode ? (seed & 1 ? 0x100 : 0x1ff) : (seed & 1 ? 0xffff : 0x1fff);
    cpu.direct_page = seed % 3 == 0 ? 0 : seed % 3 == 1 ? 0x1200 : 0x12ff;
    cpu.data_bank = seed & 1 ? 0x7e : 0xff;
    cpu.program_counter = seed & 2 ? 0xc0fffe : 0xc080fe;
}
void flat_memory_cases() {
    std::vector<std::uint8_t> legacy_memory(0x1000000), ported_memory(0x1000000);
    for (std::uint32_t i = 0; i < legacy_memory.size(); ++i) legacy_memory[i] = initial_byte(i);
    ported_memory = legacy_memory;
    std::uint64_t cases = 0;
    for (unsigned opcode = 0; opcode < 256; ++opcode) {
        for (unsigned seed = 0; seed < 32; ++seed) {
            eb::MainCpu65816 legacy(legacy_memory), ported(ported_memory);
            initialize(legacy, seed); initialize(ported, seed);
            std::vector<Write> expected_writes, actual_writes;
            legacy.observe_memory_write = [&](auto address, auto value) { expected_writes.emplace_back(address, value); };
            ported.observe_memory_write = [&](auto address, auto value) { actual_writes.emplace_back(address, value); };
            const auto length = instruction_length(opcode, legacy);
            constexpr std::array<std::uint32_t, 8> operands{0, 1, 0xff, 0xffff, 0x80, 0x7effff, 0xff00, 0x9999};
            auto operand = operands[(seed + opcode) % operands.size()];
            if (length == 2) operand &= 255;
            if (length == 3) operand &= 65535;
            try {
                legacy.execute_opcode_semantics(std::uint8_t(opcode), operand, length);
                execute_named(ported, opcode, operand, length);
                require(state(legacy) == state(ported), "Architectural registers/cycles differ");
                require(legacy.timing_snapshot() == ported.timing_snapshot(), "Hidden CPU timing state differs");
                require(expected_writes == actual_writes, "Ordered writes differ");
                require(legacy_memory == ported_memory, "Flat memory differs");
            } catch (const std::exception& error) {
                std::ostringstream failure;
                failure << "opcode=" << std::hex << opcode << " seed=" << std::dec << seed << ": " << error.what()
                        << " legacy " << legacy.describe_registers() << " ported " << ported.describe_registers();
                throw std::runtime_error(failure.str());
            }
            for (const auto& [address, value] : expected_writes) {
                (void)value;
                legacy_memory[address] = ported_memory[address] = initial_byte(address);
            }
            ++cases;
        }
    }
    std::cout << "flat semantic cases=" << cases << " all 256 opcodes/widths/emulation/decimal states matched\n";
}
void ported_site_cases() {
    std::vector<std::uint8_t> a(0x1000000), b(0x1000000);
    for (std::uint32_t i = 0; i < a.size(); ++i) a[i] = initial_byte(i);
    b = a;
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        const auto sites = eb::game::runtime::ported_sites(version);
        require(!sites.empty() && sites.size() == eb::game::runtime::ported_instruction_count(version),
                "Ported source-site inventory is absent/incomplete");
        std::size_t executions = 0;
        for (const auto& site : sites) {
            require(eb::game::runtime::owns_ported_instruction(version, site.address),
                    "Declared ported source site was classified as unowned");
            for (unsigned variant = 0; variant < (site.width_flag ? 2u : 1u); ++variant) {
                eb::MainCpu65816 legacy(a, version), ported(b, version);
                initialize(legacy, 7); initialize(ported, 7);
                for (auto* cpu : {&legacy, &ported}) {
                    cpu->program_counter = site.address;
                    cpu->status_register = variant ? site.width_flag : 0;
                }
                std::vector<Write> wa, wb;
                legacy.observe_memory_write = [&](auto address, auto value) { wa.emplace_back(address, value); };
                ported.observe_memory_write = [&](auto address, auto value) { wb.emplace_back(address, value); };
                try {
                    // The oracle is the untouched generated program, not the
                    // ported catalogue's operand/opcode fields. A generator bug
                    // copied into both its catalogue and dispatch must still fail.
                    require(eb::execute_translated_main_instruction(legacy), "Oracle does not own declared source site");
                    require(eb::game::runtime::execute_ported_instruction(ported), "Owned site silently fell back");
                    require(state(legacy) == state(ported) && legacy.timing_snapshot() == ported.timing_snapshot(),
                            "Ported source-site architectural/timing mismatch");
                    require(wa == wb, "Ported source-site ordered writes differ");
                    for (const auto& [address, value] : wa) {
                        (void)value;
                        require(a[address] == b[address], "Ported source-site memory differs");
                    }
                } catch (const std::exception& error) {
                    std::ostringstream message;
                    message << (version == eb::GameVersion::US ? "US" : "JP") << " site=" << std::hex
                            << site.address << " variant=" << variant << ": " << error.what()
                            << " legacy " << legacy.describe_registers() << " ported " << ported.describe_registers();
                    throw std::runtime_error(message.str());
                }
                for (const auto& [address, value] : wa) {
                    (void)value; a[address] = b[address] = initial_byte(address);
                }
                ++executions;
            }
        }
        require(a == b, "Ported dispatch wrote memory outside the observed write interface");
        std::cout << (version == eb::GameVersion::US ? "US" : "JP") << " ported sites=" << sites.size()
                  << " width variants=" << executions << " matched frozen dispatch\n";
    }
}
void hardware_cases() {
    std::vector<std::uint8_t> cartridge(0x300000);
    for (std::uint32_t i = 0; i < cartridge.size(); ++i) cartridge[i] = initial_byte(i);
    // Reads, writes, read/modify/write, math polling, PPU latches, controller,
    // stack pushes and DMA exercise bus side effects that flat memory cannot.
    constexpr std::array opcodes{0xadu, 0xbdu, 0x8du, 0x9du, 0xeeu, 0x0cu, 0xafu, 0x8fu, 0x20u, 0x22u};
    constexpr std::array addresses{0x2100u, 0x2118u, 0x2139u, 0x4210u, 0x4214u, 0x4218u, 0x420bu, 0x1fffu};
    unsigned cases = 0;
    for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        for (unsigned opcode : opcodes) for (unsigned address : addresses) for (bool narrow : {false, true}) {
            auto a = std::make_unique<eb::SnesBus>(cartridge, version);
            auto b = std::make_unique<eb::SnesBus>(cartridge, version);
            for (auto* bus : {a.get(), b.get()}) {
                bus->work_ram[0] = 0x31; bus->work_ram[1] = 0x72;
                bus->set_buttons(0x8090);
                bus->write_byte(0x4200, 1);
                bus->write_byte(0x4202, 7); bus->write_byte(0x4203, 9);
                bus->write_byte(0x4300, 0); bus->write_byte(0x4301, 0x18);
                bus->write_byte(0x4302, 0); bus->write_byte(0x4303, 0); bus->write_byte(0x4304, 0x7e);
                bus->write_byte(0x4305, 16); bus->write_byte(0x4306, 0);
                bus->advance_master_clocks_with_refresh(300000);
            }
            eb::MainCpu65816 legacy(*a), ported(*b);
            for (auto* cpu : {&legacy, &ported}) {
                cpu->emulation_mode = false; cpu->status_register = narrow ? 0x30 : 0;
                cpu->program_counter = 0xc08000; cpu->stack_pointer = 0x1fff;
                cpu->accumulator = 1; cpu->data_bank = 0; cpu->x_index = 0;
            }
            std::vector<Write> wa, wb;
#ifdef EB_GAMEPLAY_AUDIT
            using Access = std::tuple<bool, std::uint32_t, std::uint8_t, std::uint64_t>;
            std::vector<Access> aa, ab;
            a->observe_bus_access = [&](bool write, auto address, auto value) {
                aa.emplace_back(write, address, value, a->master_clocks());
            };
            b->observe_bus_access = [&](bool write, auto address, auto value) {
                ab.emplace_back(write, address, value, b->master_clocks());
            };
#endif
            legacy.observe_memory_write = [&](auto a, auto v) { wa.emplace_back(a, v); };
            ported.observe_memory_write = [&](auto a, auto v) { wb.emplace_back(a, v); };
            const auto length = instruction_length(opcode, legacy);
            legacy.execute_opcode_semantics(std::uint8_t(opcode), address, length);
            execute_named(ported, opcode, address, length);
            require(state(legacy) == state(ported) && legacy.timing_snapshot() == ported.timing_snapshot(),
                    "Hardware instruction CPU/timing mismatch");
            require(eb::RuntimeStateAudit::bus_controls(*a) == eb::RuntimeStateAudit::bus_controls(*b),
                    "Private hardware control state differs");
            #ifdef EB_GAMEPLAY_AUDIT
            require(aa == ab, "Ordered CPU/DMA bus accesses differ");
#endif
            require(wa == wb && a->master_clocks() == b->master_clocks() &&
                    a->scanline_index() == b->scanline_index() && a->scanline_clock() == b->scanline_clock(),
                    "Hardware instruction write/clock mismatch");
            require(a->work_ram == b->work_ram && a->video_ram == b->video_ram && a->palette_ram == b->palette_ram &&
                    a->object_attributes == b->object_attributes && a->save_ram == b->save_ram &&
                    a->native_framebuffer == b->native_framebuffer, "Hardware memory/frame mismatch");
            require(std::equal(a->ppu_registers().begin(), a->ppu_registers().end(), b->ppu_registers().begin()),
                    "Hardware PPU registers mismatch");
            // Probe future register-read behavior on independent bus copies:
            // the comparison itself must not consume a live interrupt/latch.
            auto ac = std::make_unique<eb::SnesBus>(*a), bc = std::make_unique<eb::SnesBus>(*b);
#ifdef EB_GAMEPLAY_AUDIT
            ac->observe_bus_access = {}; bc->observe_bus_access = {};
#endif
            for (auto reg : {0x2139u, 0x2139u, 0x213cu, 0x213cu, 0x4210u, 0x4214u, 0x4215u, 0x4218u, 0x4219u})
                require(ac->read_byte(reg) == bc->read_byte(reg), "Hardware read-latch state differs");
            ++cases;
        }
    }
    std::cout << "hardware semantic cases=" << cases << " matched\n";
}
void negative_controls() {
    std::vector<std::uint8_t> a(0x1000000), b(a);
    eb::MainCpu65816 legacy(a), ported(b);
    legacy.execute_opcode_semantics(0xa9, 0x42, 2);
    // Deliberately invoke the wrong named semantic operation with LDA's timing
    // descriptor: constructor/finish must not secretly dispatch by opcode.
    Instruction wrong(ported, 0xa9, 0x42, 2, AddressMode::Immediate);
    wrong.load_x(); wrong.finish();
    require(state(legacy) != state(ported), "Wrong named operation escaped the differential comparator");
    require(legacy.accumulator == 0x42 && ported.accumulator == 0 && ported.x_index == 0x42,
            "Timing opcode secretly chose the semantic operation");
    eb::MainCpu65816 one_store(a), repeated_store(b);
    one_store.accumulator = repeated_store.accumulator = 0x80;
    std::vector<Write> wa, wb;
    one_store.observe_memory_write = [&](auto address, auto value) { wa.emplace_back(address, value); };
    repeated_store.observe_memory_write = [&](auto address, auto value) { wb.emplace_back(address, value); };
    one_store.execute_opcode_semantics(0x8d, 0x2100, 3);
    Instruction duplicate(repeated_store, 0x8d, 0x2100, 3, AddressMode::Absolute);
    duplicate.store_accumulator(); duplicate.store_accumulator(); duplicate.finish();
    require(state(one_store) == state(repeated_store) && a == b && wa != wb && wb.size() == 2,
            "Repeated same-value store was not isolated by the ordered-write comparator");

    eb::MainCpu65816 correct_clock(a), wrong_clock(b);
    correct_clock.execute_opcode_semantics(0xa9, 0x42, 2);
    Instruction slow_load(wrong_clock, 0xaf, 0x42, 2, AddressMode::Immediate);
    slow_load.load_accumulator(); slow_load.finish();
    require(correct_clock.accumulator == wrong_clock.accumulator &&
                correct_clock.program_counter == wrong_clock.program_counter &&
                correct_clock.cycle_count != wrong_clock.cycle_count,
            "Wrong timing descriptor escaped cycle comparison");
}
void backend_selection_and_fail_closed() {
    std::vector<std::uint8_t> memory(0x1000000);
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        bool verified = false;
        for (const auto& routine : eb::game::runtime::ported_routines(version)) {
            for (auto address = routine.first_address + 1;
                 address < routine.last_address && address < routine.first_address + 32; ++address) {
                if (eb::game::runtime::owns_ported_instruction(version, address)) continue;
                eb::MainCpu65816 probe(memory, version);
                probe.program_counter = address;
                bool owned_gap = false;
                try { (void)eb::game::runtime::execute_ported_instruction(probe); }
                catch (const std::runtime_error& error) {
                    owned_gap = std::string(error.what()) == "Invalid game-runtime continuation";
                }
                if (!owned_gap) continue;
                eb::MainCpu65816 ported(memory, version), legacy(memory, version);
                ported.program_counter = legacy.program_counter = address;
                ported.set_runtime(eb::MainCpuRuntime::Ported);
                legacy.set_runtime(eb::MainCpuRuntime::Legacy);
                std::string ported_error, legacy_error;
                try { ported.step_instruction(); }
                catch (const std::runtime_error& error) { ported_error = error.what(); }
                try { legacy.step_instruction(); }
                catch (const std::runtime_error& error) { legacy_error = error.what(); }
                require(ported_error == "Invalid game-runtime continuation" && legacy_error != ported_error,
                        "Per-CPU backend selection ignored the ported fail-closed path");
                verified = true;
                break;
            }
            if (verified) break;
        }
        require(verified, "No owned invalid continuation exercised fail-closed backend selection");
    }
}
} // namespace
int main() {
    try {
        negative_controls();
        backend_selection_and_fail_closed();
        flat_memory_cases();
        hardware_cases();
        ported_site_cases();
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
