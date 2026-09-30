#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/game/runtime/native_execution.hpp"
#include "generated_profile.hpp"
#include <iomanip>
#include <sstream>
#include <stdexcept>

namespace eb::game::runtime {
// False means this source site is explicitly outside the ported ownership set.
// An owned site that cannot execute must throw instead of silently falling back.
bool execute_ported_instruction(MainCpu65816&);
}

namespace eb {
namespace {
#include "main_cpu_65816_opcodes.inc"
// Minimum architectural cycle totals indexed by the compile-time opcode.
// execute_opcode_semantics adds width, direct-page, branch, and indexing penalties;
// advance_instruction_cycles converts them to master clocks and adds bus-speed stalls.
constexpr unsigned minimum_instruction_cycles[256] = {
    8, 6, 8, 4, 5, 3, 5, 6, 3, 2, 2, 4, 6, 4, 6, 5, 2, 5, 5, 7, 5, 4, 6, 6, 2, 4, 2, 2, 6, 4, 7, 5,
    6, 6, 8, 4, 3, 3, 5, 6, 4, 2, 2, 5, 4, 4, 6, 5, 2, 5, 5, 7, 4, 4, 6, 6, 2, 4, 2, 2, 4, 4, 7, 5,
    7, 6, 2, 4, 7, 3, 5, 6, 3, 2, 2, 3, 3, 4, 6, 5, 2, 5, 5, 7, 7, 4, 6, 6, 2, 4, 3, 2, 4, 4, 7, 5,
    6, 6, 6, 4, 3, 3, 5, 6, 4, 2, 2, 6, 5, 4, 6, 5, 2, 5, 5, 7, 4, 4, 6, 6, 2, 4, 4, 2, 6, 4, 7, 5,
    3, 6, 4, 4, 3, 3, 3, 6, 2, 2, 2, 3, 4, 4, 4, 5, 2, 6, 5, 7, 4, 4, 4, 6, 2, 5, 2, 2, 4, 5, 5, 5,
    2, 6, 2, 4, 3, 3, 3, 6, 2, 2, 2, 4, 4, 4, 4, 5, 2, 5, 5, 7, 4, 4, 4, 6, 2, 4, 2, 2, 4, 4, 4, 5,
    2, 6, 3, 4, 3, 3, 5, 6, 2, 2, 2, 3, 4, 4, 6, 5, 2, 5, 5, 7, 6, 4, 6, 6, 2, 4, 3, 3, 6, 4, 7, 5,
    2, 6, 3, 4, 3, 3, 5, 6, 2, 2, 2, 3, 4, 4, 6, 5, 2, 5, 5, 7, 5, 4, 6, 6, 2, 4, 4, 2, 8, 4, 7, 5};
} // namespace
MainCpu65816::MainCpu65816(SnesBus &hardware)
    : game_version(hardware.game_version()), hardware_(&hardware),
      source_profile_(&source_profile(game_version)) {}
MainCpu65816::MainCpu65816(std::span<std::uint8_t> memory, GameVersion version)
    : game_version(version), flat_test_memory_(memory) {
    if (memory.size() != 0x1000000)
        throw std::invalid_argument("CPU vector memory must have 24-bit address space");
}
// Data operations and discarded instruction fetches use the same bus path so
// open-bus values and register side effects remain visible to subsequent code.
std::uint8_t MainCpu65816::read_byte(std::uint32_t address) {
    address &= 0xffffff;
    if (hardware_) {
        memory_wait_master_clocks_ += hardware_->access_clocks(address) - 6;
        // Hardware polling/handshakes retain native instruction time, even
        // inside an accelerated entity callback. Include both low-bank mirrors.
        const auto offset = address & 0xffff;
        if (!(address & 0x400000) && offset >= 0x2000 && offset < 0x6000)
            instruction_touches_io_ = true;
    }
    return hardware_ ? hardware_->read_byte(address) : flat_test_memory_[address];
}
void MainCpu65816::write_byte(std::uint32_t address, std::uint8_t value) {
    address &= 0xffffff;
    if (hardware_) {
        memory_wait_master_clocks_ += hardware_->access_clocks(address) - 6;
        // Hardware polling/handshakes retain native instruction time, even
        // inside an accelerated entity callback. Include both low-bank mirrors.
        const auto offset = address & 0xffff;
        if (!(address & 0x400000) && offset >= 0x2000 && offset < 0x6000)
            instruction_touches_io_ = true;
    }
    if (observe_memory_write)
        observe_memory_write(address, value);
    if (hardware_)
        hardware_->write_byte(address, value);
    else
        flat_test_memory_[address] = value;
}
// Some addressing modes wrap the second byte within the current 64 KiB bank;
// long addressing carries into the next bank. Keep byte order explicit because
// an operand can straddle two I/O registers with different side effects.
std::uint16_t MainCpu65816::read_word(std::uint32_t address, bool wrap) {
    auto next = wrap ? (address & 0xff0000) | std::uint16_t(address + 1) : (address + 1) & 0xffffff;
    const auto low = read_byte(address);
    return low | (read_byte(next) << 8);
}
void MainCpu65816::write_word(std::uint32_t address, std::uint16_t value, bool wrap) {
    auto next = wrap ? (address & 0xff0000) | std::uint16_t(address + 1) : (address + 1) & 0xffffff;
    write_byte(address, value);
    write_byte(next, value >> 8);
}
// Hardware time advances once the instruction's architectural effects finish.
// This preserves cycle totals but does not claim a microcycle-accurate schedule
// for every access inside that instruction (see docs/cpu.md).
void MainCpu65816::advance_instruction_cycles(unsigned instruction_cycles) {
    cycle_count += instruction_cycles;
    if (hardware_) {
        auto clocks = instruction_cycles * 6 + memory_wait_master_clocks_;
        // Keep normal updates cycle-for-cycle identical. Extra capacity starts
        // only after this entity pass has spent roughly 40% of a video frame.
        // The remaining time is reserved for uploads, interrupts and waits.
        // Pending graphics uploads and hardware math keep their native wait
        // time. Faster producer code must not overrun the transfer queue or
        // shorten the fixed instruction delays in MULT8/DIVISION helpers.
        const bool extra_budget = instruction_uses_extra_budget_ && entity_update_master_clocks_ >= 140000 &&
                                  hardware_->work_ram[source_profile_->dma_queue.write_index] ==
                                      hardware_->work_ram[source_profile_->dma_queue.last_completed_index] &&
                                  !hardware_->math_pending();
        if (instruction_uses_extra_budget_ && entity_update_master_clocks_ < 140000)
            entity_update_master_clocks_ += clocks;
        if (extra_budget && !instruction_touches_io_) {
            // Integer carry avoids per-instruction rounding drift. Only CPU
            // computation is scaled; DMA below still consumes full bus clocks.
            const auto budget = clocks + extra_budget_clock_remainder_;
            clocks = budget / 8;
            extra_budget_clock_remainder_ = budget % 8;
        }
        memory_wait_master_clocks_ = 0;
        hardware_->advance_master_clocks_with_refresh(clocks);
        // Advancing a transfer can start another scanline's HDMA. Drain that
        // debt too; retaining master clocks avoids per-channel rounding loss.
        while (const auto dma = hardware_->take_dma_clocks())
            hardware_->advance_master_clocks_with_refresh(dma);
    }
}
void MainCpu65816::set_gameplay_timing(bool enabled) {
    extra_gameplay_budget_enabled_ = enabled;
    entity_update_active_ = instruction_uses_extra_budget_ = false;
    extra_budget_clock_remainder_ = entity_update_master_clocks_ = 0;
}
MainCpuTimingSnapshot MainCpu65816::timing_snapshot() const {
    return {extra_gameplay_budget_enabled_, entity_update_active_, instruction_uses_extra_budget_,
            instruction_touches_io_, entity_update_entry_stack_, interrupt_nesting_depth_,
            extra_budget_clock_remainder_, entity_update_master_clocks_, memory_wait_master_clocks_};
}
void MainCpu65816::reset_from_vector() {
    native_gameplay_batches_ = 0;
    entity_update_active_ = instruction_uses_extra_budget_ = instruction_touches_io_ = false;
    interrupt_nesting_depth_ = extra_budget_clock_remainder_ = entity_update_master_clocks_ = 0;
    accumulator = x_index = y_index = direct_page = data_bank = 0;
    stack_pointer = 0x1ff;
    status_register = 0x34;
    emulation_mode = true;
    is_stopped = is_waiting = false;
    instruction_count = cycle_count = 0;
    program_counter = read_word(0xfffc);
    memory_wait_master_clocks_ = 0;
}
void MainCpu65816::update_negative_zero_flags(std::uint16_t value, bool byte_operand) {
    set_status_flag(Zero, (value & (byte_operand ? 0xff : 0xffff)) == 0);
    set_status_flag(Negative, value & (byte_operand ? 0x80 : 0x8000));
}
// Centralize mode transitions: emulation forces M/X, and entering 8-bit index
// mode clears X/Y high bytes immediately, including after a pulled status word.
void MainCpu65816::set_status_register(std::uint8_t value) {
    status_register = value | (emulation_mode ? Accumulator8Bit | Index8Bit : 0);
    if (index_is_8_bit()) {
        x_index &= 0xff;
        y_index &= 0xff;
    }
}
// Unlike index registers, the accumulator's high byte survives 8-bit writes.
// Z/N still describe only the currently selected accumulator width.
void MainCpu65816::set_accumulator(std::uint16_t value) {
    accumulator = accumulator_is_8_bit() ? (accumulator & 0xff00) | (value & 0xff) : value;
    update_negative_zero_flags(accumulator, accumulator_is_8_bit());
}
void MainCpu65816::push_byte(std::uint8_t value) {
    write_byte(stack_pointer, value);
    stack_pointer = emulation_mode ? 0x100 | ((stack_pointer - 1) & 0xff) : std::uint16_t(stack_pointer - 1);
}
std::uint8_t MainCpu65816::pull_byte() {
    stack_pointer = emulation_mode ? 0x100 | ((stack_pointer + 1) & 0xff) : std::uint16_t(stack_pointer + 1);
    return read_byte(stack_pointer);
}
void MainCpu65816::push_word(std::uint16_t value) {
    push_byte(value >> 8);
    push_byte(value);
}
std::uint16_t MainCpu65816::pull_word() {
    const auto low = pull_byte();
    return low | (pull_byte() << 8);
}
// Emulation mode wraps an aligned direct page at 256 bytes. A nonzero low
// byte in D uses the full 16-bit addition instead, including indexed forms.
std::uint16_t MainCpu65816::direct_page_address(std::uint8_t offset, std::uint16_t index) const {
    return emulation_mode && !(direct_page & 0xff) ? (direct_page & 0xff00) | ((offset + index) & 0xff)
                                                   : std::uint16_t(direct_page + offset + index);
}
// Short pointers borrow DBR for their bank; long pointers read a third byte.
// The short emulation-mode pointer has its own page-wrap rule, which must not
// be replaced with a generic consecutive read16/read24 helper.
std::uint32_t MainCpu65816::read_direct_page_pointer(std::uint8_t offset, bool long_pointer,
                                                     std::uint16_t index) {
    const std::uint16_t address = direct_page_address(offset, index);
    auto next = [&](unsigned n) {
        return (!long_pointer && emulation_mode && !(direct_page & 0xff))
                   ? (address & 0xff00) | ((address + n) & 0xff)
                   : std::uint16_t(address + n);
    };
    const auto low_byte = read_byte(address);
    const auto high_byte = read_byte(next(1));
    return low_byte | (high_byte << 8) | (long_pointer ? read_byte(next(2)) << 16 : data_bank << 16);
}
// Hardware interrupts push the interrupted PC, unlike JSR's return-minus-one.
// The stack frame and vector bank depend on E; both entry paths clear decimal
// mode and mask further IRQs before dispatching the translated handler.
void MainCpu65816::service_interrupt(bool nmi) {
    ++interrupt_nesting_depth_;
    instruction_uses_extra_budget_ = false;
    instruction_touches_io_ = false;
    memory_wait_master_clocks_ = 0;
    if (hardware_)
        read_byte(program_counter); // discarded opcode fetch at interrupt entry
    is_waiting = false;
    if (!emulation_mode)
        push_byte(program_counter >> 16);
    push_word(program_counter);
    push_byte(emulation_mode ? status_register & ~0x10 : status_register);
    set_status_flag(InterruptDisable, true);
    set_status_flag(Decimal, false);
    program_counter = read_word(emulation_mode ? (nmi ? 0xfffa : 0xfffe) : (nmi ? 0xffea : 0xffee));
    advance_instruction_cycles(emulation_mode ? 7 : 8);
}
// Interrupt arbitration happens before source-site dispatch. An asserted IRQ
// wakes WAI even when P.I prevents entering its handler; NMI takes precedence.
bool MainCpu65816::prepare_instruction() {
    if (is_stopped)
        return false;
    if (hardware_ && hardware_->take_nmi()) {
        service_interrupt(true);
        return false;
    }
    if (hardware_ && hardware_->irq_pending()) {
        is_waiting = false;
        if (!(status_register & InterruptDisable)) {
            service_interrupt(false);
            return false;
        }
    }
    instruction_uses_extra_budget_ = false;
    instruction_touches_io_ = false;
    if (is_waiting) {
        advance_instruction_cycles(6);
        return false;
    }
    if (hardware_ && hardware_->wait_for_native_actor_tick(program_counter))
        return false;
    if (extra_gameplay_budget_enabled_ && source_profile_) {
        // The stack boundary also ends acceleration after a nonlocal return.
        // A callback that waits for another frame relinquishes its extra budget.
        if (entity_update_active_ &&
            (stack_pointer >= entity_update_entry_stack_ ||
             program_counter == source_profile_->gameplay_timing.wait_for_next_frame))
            entity_update_active_ = false;
        if (!interrupt_nesting_depth_ && !emulation_mode &&
            program_counter == source_profile_->gameplay_timing.entity_update_call) {
            entity_update_active_ = true;
            entity_update_entry_stack_ = stack_pointer;
            entity_update_master_clocks_ = extra_budget_clock_remainder_ = 0;
        }
        instruction_uses_extra_budget_ = entity_update_active_ && !interrupt_nesting_depth_;
    }
    if (hardware_ && hardware_->try_execute_clock_operation(*this))
        return false;
    if (hardware_ && hardware_->native_sprite_runtime() &&
        hardware_->try_execute_native_sprite_operation(*this))
        return false;
    if (hardware_)
        hardware_->capture_game_sprite_instruction(program_counter, accumulator, x_index, y_index,
                                                   stack_pointer, direct_page);
    return true;
}
void MainCpu65816::execute_prepared_instruction() {
    if (runtime_ == MainCpuRuntime::Ported && game::runtime::execute_ported_instruction(*this))
        return;
    if (!execute_translated_main_instruction(*this))
        throw std::runtime_error("No translated assembly instruction at " + describe_registers());
}
void MainCpu65816::step_instruction() {
    if (prepare_instruction())
        execute_prepared_instruction();
}
unsigned MainCpu65816::advance_gameplay(unsigned maximum_steps) {
    if (!maximum_steps)
        return 0;
    if (!prepare_instruction())
        return 1;
    if (runtime_ == MainCpuRuntime::Ported)
        if (const unsigned retired = game::runtime::NativeGameplay::try_advance(*this, maximum_steps)) {
            ++native_gameplay_batches_;
            return retired;
        }
    execute_prepared_instruction();
    return 1;
}
std::string MainCpu65816::describe_registers() const {
    std::ostringstream out;
    out << std::hex << std::setfill('0') << "PC=" << std::setw(6) << program_counter << " A=" << std::setw(4)
        << accumulator << " X=" << std::setw(4) << x_index << " Y=" << std::setw(4) << y_index
        << " S=" << std::setw(4) << stack_pointer << " D=" << std::setw(4) << direct_page
        << " DB=" << std::setw(2) << unsigned(data_bank) << " P=" << std::setw(2) << unsigned(status_register)
        << " E=" << emulation_mode;
    return out.str();
}
// Decimal arithmetic is performed nibble by nibble so carry/borrow propagation
// matches packed BCD at both widths. Carry means "no borrow" for subtraction;
// overflow still describes the signed binary operation, not decimal range.
std::uint16_t MainCpu65816::add_or_subtract(std::uint16_t value, bool subtract) {
    const unsigned operand_mask = accumulator_is_8_bit() ? 0xff : 0xffff,
                   sign_bit = accumulator_is_8_bit() ? 0x80 : 0x8000;
    const unsigned left_operand = accumulator & operand_mask, right_operand = value & operand_mask,
                   carry = bool(status_register & Carry);
    unsigned result;
    if (subtract) {
        result = left_operand + (right_operand ^ operand_mask) + carry;
        set_status_flag(Overflow, ((left_operand ^ right_operand) & (left_operand ^ result) & sign_bit) != 0);
        if (status_register & Decimal) {
            int borrow = 1 - int(carry);
            result = 0;
            for (unsigned shift = 0; shift < (accumulator_is_8_bit() ? 8u : 16u); shift += 4) {
                int digit = int((left_operand >> shift) & 15) - int((right_operand >> shift) & 15) - borrow;
                borrow = digit < 0;
                if (borrow)
                    digit -= 6;
                result |= (unsigned(digit) & 15) << shift;
            }
            set_status_flag(Carry, !borrow);
        } else
            set_status_flag(Carry, result > operand_mask);
    } else {
        result = left_operand + right_operand + carry;
        if (status_register & Decimal) {
            // Overflow observes the last binary nibble addition before its
            // decimal correction; lower corrected nibbles carry into it.
            unsigned carry_bit = carry;
            result = 0;
            for (unsigned shift = 0; shift < (accumulator_is_8_bit() ? 8u : 16u); shift += 4) {
                unsigned digit = ((left_operand >> shift) & 15) + ((right_operand >> shift) & 15) + carry_bit;
                if (shift == (accumulator_is_8_bit() ? 4u : 12u))
                    set_status_flag(Overflow, (~(left_operand ^ right_operand) &
                                               (left_operand ^ (digit << shift)) & sign_bit) != 0);
                if (digit > 9)
                    digit += 6;
                carry_bit = digit > 15;
                result |= (digit & 15) << shift;
            }
            set_status_flag(Carry, carry_bit);
        } else {
            set_status_flag(Overflow,
                            (~(left_operand ^ right_operand) & (left_operand ^ result) & sign_bit) != 0);
            set_status_flag(Carry, result > operand_mask);
        }
    }
    return result & operand_mask;
}
void MainCpu65816::execute_opcode_semantics(std::uint8_t opcode, std::uint32_t operand, unsigned length) {
    memory_wait_master_clocks_ = 0;
    const auto [operation, addressing_mode] = main_cpu_opcode_table[opcode];
    const auto instruction_address = program_counter;
    if (entity_preload_.enabled() && (status_register & 0x30) == 0 &&
        (instruction_address & 0xff0000) == 0xc00000)
        entity_preload_.adapt(game_version, instruction_address, opcode, length, operand, accumulator);
    // Preserve instruction-fetch bus reads/open-bus state. These bytes do not
    // select the operation: the generated source site fixes opcode/operand.
    if (hardware_)
        for (unsigned i = 0; i < length; ++i)
            read_byte((instruction_address & 0xff0000) | std::uint16_t(instruction_address + i));
    program_counter = (program_counter & 0xff0000) | std::uint16_t(program_counter + length);
    ++instruction_count;
    unsigned instruction_cycles = minimum_instruction_cycles[opcode];
    // M controls most operand widths, but the load/store/compare index family
    // uses X. Register-transfer exceptions handle their own destination width.
    const bool index_op = operation == MainCpuOperation::LDX || operation == MainCpuOperation::LDY ||
                          operation == MainCpuOperation::STX || operation == MainCpuOperation::STY ||
                          operation == MainCpuOperation::CPX || operation == MainCpuOperation::CPY;
    const bool byte_operand = index_op ? index_is_8_bit() : accumulator_is_8_bit();
    const unsigned operand_mask = byte_operand ? 0xff : 0xffff;
    std::uint32_t address = 0, unindexed_address = 0;
    bool wrap = false;
    // Resolve addressing once, without reading the operand yet. The value()
    // closure below delays reads until the semantic operation needs them,
    // avoiding accidental I/O reads for store-only instructions.
    switch (addressing_mode) {
    case MainCpuAddressMode::DirectPage:
        address = direct_page_address(operand);
        wrap = true;
        break;
    case MainCpuAddressMode::DirectPageIndexedX:
        address = direct_page_address(operand, x_index);
        wrap = true;
        break;
    case MainCpuAddressMode::DirectPageIndexedY:
        address = direct_page_address(operand, y_index);
        wrap = true;
        break;
    case MainCpuAddressMode::Absolute:
        address = (data_bank << 16) | (operand & 0xffff);
        break;
    case MainCpuAddressMode::AbsoluteIndexedX:
        unindexed_address = (data_bank << 16) | (operand & 0xffff);
        address = (unindexed_address + x_index) & 0xffffff;
        break;
    case MainCpuAddressMode::AbsoluteIndexedY:
        unindexed_address = (data_bank << 16) | (operand & 0xffff);
        address = (unindexed_address + y_index) & 0xffffff;
        break;
    case MainCpuAddressMode::Long:
        address = operand;
        break;
    case MainCpuAddressMode::LongIndexedX:
        address = (operand + x_index) & 0xffffff;
        break;
    case MainCpuAddressMode::DirectPageIndexedIndirectX:
        address = read_direct_page_pointer(operand, false, x_index);
        break;
    case MainCpuAddressMode::DirectPageIndirect:
        address = read_direct_page_pointer(operand);
        break;
    case MainCpuAddressMode::DirectPageIndirectIndexedY:
        unindexed_address = read_direct_page_pointer(operand);
        address = (unindexed_address + y_index) & 0xffffff;
        break;
    case MainCpuAddressMode::DirectPageIndirectLong:
        address = read_direct_page_pointer(operand, true);
        break;
    case MainCpuAddressMode::DirectPageIndirectLongIndexedY:
        address = (read_direct_page_pointer(operand, true) + y_index) & 0xffffff;
        break;
    case MainCpuAddressMode::StackRelative:
        address = std::uint16_t(stack_pointer + operand);
        wrap = true;
        break;
    case MainCpuAddressMode::StackRelativeIndirectIndexedY:
        address = ((data_bank << 16) + read_word(std::uint16_t(stack_pointer + operand), true) + y_index) &
                  0xffffff;
        break;
    default:
        break;
    }
    const auto value = [&]() -> std::uint16_t {
        if (addressing_mode == MainCpuAddressMode::Immediate)
            return operand & operand_mask;
        if (addressing_mode == MainCpuAddressMode::Accumulator)
            return accumulator & operand_mask;
        return byte_operand ? read_byte(address) : read_word(address, wrap);
    };
    const auto store = [&](std::uint16_t operand_value) {
        if (addressing_mode == MainCpuAddressMode::Accumulator)
            set_accumulator(operand_value);
        else if (byte_operand)
            write_byte(address, operand_value);
        else
            write_word(address, operand_value, wrap);
    };
    const auto compare = [&](std::uint16_t left_operand) {
        unsigned right_operand = value();
        set_status_flag(Carry, (left_operand & operand_mask) >= right_operand);
        update_negative_zero_flags((left_operand & operand_mask) - right_operand, byte_operand);
    };
    // Relative targets retain the program bank. Only emulation mode adds the
    // short-branch page-crossing penalty; BRA already includes its taken cost.
    const auto branch = [&](bool condition) {
        if (condition) {
            auto before = program_counter;
            program_counter =
                (program_counter & 0xff0000) | std::uint16_t(program_counter + std::int8_t(operand));
            if (operation != MainCpuOperation::BRA)
                ++instruction_cycles;
            if (emulation_mode && ((before ^ program_counter) & 0xff00))
                ++instruction_cycles;
        }
    };
    // These instructions use a linear stack sequence even in emulation mode,
    // then restore page 1 after the sequence. Ordinary push/pull wraps each
    // byte in page 1 instead; merging the helpers would change boundary cases.
    const auto push_linear = [&](std::uint8_t operand_value) {
        write_byte(stack_pointer, operand_value);
        --stack_pointer;
    };
    const auto pull_linear = [&]() {
        ++stack_pointer;
        return read_byte(stack_pointer);
    };
    const auto push16_linear = [&](std::uint16_t operand_value) {
        push_linear(operand_value >> 8);
        push_linear(operand_value);
    };
    const auto pull16_linear = [&]() {
        auto low = pull_linear();
        return std::uint16_t(low | (pull_linear() << 8));
    };
    const auto restore_stack_page = [&]() {
        if (emulation_mode)
            stack_pointer = 0x100 | (stack_pointer & 0xff);
    };
    switch (operation) {
    case MainCpuOperation::ORA:
        set_accumulator(accumulator | value());
        break;
    case MainCpuOperation::AND:
        set_accumulator(accumulator & value());
        break;
    case MainCpuOperation::EOR:
        set_accumulator(accumulator ^ value());
        break;
    case MainCpuOperation::ADC:
        set_accumulator(add_or_subtract(value(), false));
        break;
    case MainCpuOperation::SBC:
        set_accumulator(add_or_subtract(value(), true));
        break;
    case MainCpuOperation::CMP:
        compare(accumulator);
        break;
    case MainCpuOperation::CPX:
        compare(x_index);
        break;
    case MainCpuOperation::CPY:
        compare(y_index);
        break;
    case MainCpuOperation::LDA:
        set_accumulator(value());
        break;
    case MainCpuOperation::LDX:
        x_index = value();
        update_negative_zero_flags(x_index, byte_operand);
        break;
    case MainCpuOperation::LDY:
        y_index = value();
        update_negative_zero_flags(y_index, byte_operand);
        break;
    case MainCpuOperation::STA:
        store(accumulator);
        break;
    case MainCpuOperation::STX:
        store(x_index);
        break;
    case MainCpuOperation::STY:
        store(y_index);
        break;
    case MainCpuOperation::STZ:
        store(0);
        break;
    case MainCpuOperation::BIT: {
        auto operand_value = value();
        set_status_flag(Zero, (accumulator & operand_value & operand_mask) == 0);
        if (addressing_mode != MainCpuAddressMode::Immediate) {
            set_status_flag(Negative, operand_value & (byte_operand ? 0x80 : 0x8000));
            set_status_flag(Overflow, operand_value & (byte_operand ? 0x40 : 0x4000));
        }
        break;
    }
    case MainCpuOperation::TSB: {
        auto operand_value = value();
        set_status_flag(Zero, (operand_value & accumulator & operand_mask) == 0);
        store(operand_value | accumulator);
        break;
    }
    case MainCpuOperation::TRB: {
        auto operand_value = value();
        set_status_flag(Zero, (operand_value & accumulator & operand_mask) == 0);
        store(operand_value & ~accumulator);
        break;
    }
    case MainCpuOperation::ASL: {
        auto operand_value = value();
        set_status_flag(Carry, operand_value & (byte_operand ? 0x80 : 0x8000));
        operand_value = (operand_value << 1) & operand_mask;
        store(operand_value);
        update_negative_zero_flags(operand_value, byte_operand);
        break;
    }
    case MainCpuOperation::LSR: {
        auto operand_value = value();
        set_status_flag(Carry, operand_value & 1);
        operand_value >>= 1;
        store(operand_value);
        update_negative_zero_flags(operand_value, byte_operand);
        break;
    }
    case MainCpuOperation::ROL: {
        auto operand_value = value();
        bool carry_bit = status_register & Carry;
        set_status_flag(Carry, operand_value & (byte_operand ? 0x80 : 0x8000));
        operand_value = ((operand_value << 1) | carry_bit) & operand_mask;
        store(operand_value);
        update_negative_zero_flags(operand_value, byte_operand);
        break;
    }
    case MainCpuOperation::ROR: {
        auto operand_value = value();
        bool carry_bit = status_register & Carry;
        set_status_flag(Carry, operand_value & 1);
        operand_value = (operand_value >> 1) | (carry_bit ? (byte_operand ? 0x80 : 0x8000) : 0);
        store(operand_value);
        update_negative_zero_flags(operand_value, byte_operand);
        break;
    }
    case MainCpuOperation::INC: {
        auto operand_value = (value() + 1) & operand_mask;
        store(operand_value);
        update_negative_zero_flags(operand_value, byte_operand);
        break;
    }
    case MainCpuOperation::DEC: {
        auto operand_value = (value() - 1) & operand_mask;
        store(operand_value);
        update_negative_zero_flags(operand_value, byte_operand);
        break;
    }
    case MainCpuOperation::INX:
        x_index = (x_index + 1) & (index_is_8_bit() ? 0xff : 0xffff);
        update_negative_zero_flags(x_index, index_is_8_bit());
        break;
    case MainCpuOperation::DEX:
        x_index = (x_index - 1) & (index_is_8_bit() ? 0xff : 0xffff);
        update_negative_zero_flags(x_index, index_is_8_bit());
        break;
    case MainCpuOperation::INY:
        y_index = (y_index + 1) & (index_is_8_bit() ? 0xff : 0xffff);
        update_negative_zero_flags(y_index, index_is_8_bit());
        break;
    case MainCpuOperation::DEY:
        y_index = (y_index - 1) & (index_is_8_bit() ? 0xff : 0xffff);
        update_negative_zero_flags(y_index, index_is_8_bit());
        break;
    case MainCpuOperation::BCC:
        branch(!(status_register & Carry));
        break;
    case MainCpuOperation::BCS:
        branch(status_register & Carry);
        break;
    case MainCpuOperation::BEQ:
        branch(status_register & Zero);
        break;
    case MainCpuOperation::BNE:
        branch(!(status_register & Zero));
        break;
    case MainCpuOperation::BMI:
        branch(status_register & Negative);
        break;
    case MainCpuOperation::BPL:
        branch(!(status_register & Negative));
        break;
    case MainCpuOperation::BVC:
        branch(!(status_register & Overflow));
        break;
    case MainCpuOperation::BVS:
        branch(status_register & Overflow);
        break;
    case MainCpuOperation::BRA:
        branch(true);
        break;
    case MainCpuOperation::BRL:
        program_counter =
            (program_counter & 0xff0000) | std::uint16_t(program_counter + std::int16_t(operand));
        break;
    case MainCpuOperation::CLC:
        set_status_flag(Carry, false);
        break;
    case MainCpuOperation::SEC:
        set_status_flag(Carry, true);
        break;
    case MainCpuOperation::CLD:
        set_status_flag(Decimal, false);
        break;
    case MainCpuOperation::SED:
        set_status_flag(Decimal, true);
        break;
    case MainCpuOperation::CLI:
        set_status_flag(InterruptDisable, false);
        break;
    case MainCpuOperation::SEI:
        set_status_flag(InterruptDisable, true);
        break;
    case MainCpuOperation::CLV:
        set_status_flag(Overflow, false);
        break;
    case MainCpuOperation::REP:
        set_status_register(status_register & ~operand);
        break;
    case MainCpuOperation::SEP:
        set_status_register(status_register | operand);
        break;
    case MainCpuOperation::XCE: {
        bool carry = status_register & Carry;
        set_status_flag(Carry, emulation_mode);
        emulation_mode = carry;
        set_status_register(status_register);
        if (emulation_mode)
            stack_pointer = 0x100 | (stack_pointer & 0xff);
        break;
    }
    case MainCpuOperation::TAX:
        x_index = accumulator & (index_is_8_bit() ? 0xff : 0xffff);
        update_negative_zero_flags(x_index, index_is_8_bit());
        break;
    case MainCpuOperation::TAY:
        y_index = accumulator & (index_is_8_bit() ? 0xff : 0xffff);
        update_negative_zero_flags(y_index, index_is_8_bit());
        break;
    case MainCpuOperation::TXA:
        set_accumulator(x_index);
        break;
    case MainCpuOperation::TYA:
        set_accumulator(y_index);
        break;
    case MainCpuOperation::TXY:
        y_index = x_index & (index_is_8_bit() ? 0xff : 0xffff);
        update_negative_zero_flags(y_index, index_is_8_bit());
        break;
    case MainCpuOperation::TYX:
        x_index = y_index & (index_is_8_bit() ? 0xff : 0xffff);
        update_negative_zero_flags(x_index, index_is_8_bit());
        break;
    case MainCpuOperation::TSX:
        x_index = stack_pointer & (index_is_8_bit() ? 0xff : 0xffff);
        update_negative_zero_flags(x_index, index_is_8_bit());
        break;
    case MainCpuOperation::TXS:
        stack_pointer = emulation_mode ? 0x100 | (x_index & 0xff) : x_index;
        break;
    case MainCpuOperation::TCS:
        stack_pointer = emulation_mode ? 0x100 | (accumulator & 0xff) : accumulator;
        break;
    case MainCpuOperation::TSC:
        accumulator = stack_pointer;
        update_negative_zero_flags(accumulator, false);
        break;
    case MainCpuOperation::TCD:
        direct_page = accumulator;
        update_negative_zero_flags(direct_page, false);
        break;
    case MainCpuOperation::TDC:
        accumulator = direct_page;
        update_negative_zero_flags(accumulator, false);
        break;
    case MainCpuOperation::XBA:
        accumulator = (accumulator << 8) | (accumulator >> 8);
        update_negative_zero_flags(accumulator, true);
        break;
    case MainCpuOperation::PHA:
        if (accumulator_is_8_bit())
            push_byte(accumulator);
        else {
            push_word(accumulator);
            ++instruction_cycles;
        }
        break;
    case MainCpuOperation::PLA:
        set_accumulator(accumulator_is_8_bit() ? pull_byte() : pull_word());
        if (!accumulator_is_8_bit())
            ++instruction_cycles;
        break;
    case MainCpuOperation::PHX:
        if (index_is_8_bit())
            push_byte(x_index);
        else {
            push_word(x_index);
            ++instruction_cycles;
        }
        break;
    case MainCpuOperation::PLX:
        x_index = index_is_8_bit() ? pull_byte() : pull_word();
        update_negative_zero_flags(x_index, index_is_8_bit());
        if (!index_is_8_bit())
            ++instruction_cycles;
        break;
    case MainCpuOperation::PHY:
        if (index_is_8_bit())
            push_byte(y_index);
        else {
            push_word(y_index);
            ++instruction_cycles;
        }
        break;
    case MainCpuOperation::PLY:
        y_index = index_is_8_bit() ? pull_byte() : pull_word();
        update_negative_zero_flags(y_index, index_is_8_bit());
        if (!index_is_8_bit())
            ++instruction_cycles;
        break;
    case MainCpuOperation::PHP:
        push_byte(status_register);
        break;
    case MainCpuOperation::PLP:
        set_status_register(pull_byte());
        break;
    case MainCpuOperation::PHB:
        push_byte(data_bank);
        break;
    case MainCpuOperation::PLB:
        data_bank = pull_linear();
        restore_stack_page();
        update_negative_zero_flags(data_bank, true);
        break;
    case MainCpuOperation::PHK:
        push_byte(program_counter >> 16);
        break;
    case MainCpuOperation::PHD:
        push16_linear(direct_page);
        restore_stack_page();
        break;
    case MainCpuOperation::PLD:
        direct_page = pull16_linear();
        restore_stack_page();
        update_negative_zero_flags(direct_page, false);
        break;
    case MainCpuOperation::PEA:
        push16_linear(operand);
        restore_stack_page();
        break;
    case MainCpuOperation::PEI:
        push16_linear(read_word(std::uint16_t(direct_page + std::uint8_t(operand)), true));
        restore_stack_page();
        break;
    case MainCpuOperation::PER:
        push16_linear(std::uint16_t(program_counter + std::int16_t(operand)));
        restore_stack_page();
        break;
    case MainCpuOperation::JMP: {
        std::uint16_t destination_address = operand;
        if (addressing_mode == MainCpuAddressMode::AbsoluteIndirect)
            destination_address = read_word(operand & 0xffff, true);
        else if (addressing_mode == MainCpuAddressMode::AbsoluteIndexedIndirectX)
            destination_address =
                read_word((program_counter & 0xff0000) | std::uint16_t(operand + x_index), true);
        program_counter = (program_counter & 0xff0000) | destination_address;
        break;
    }
    case MainCpuOperation::JML: {
        if (addressing_mode == MainCpuAddressMode::Long)
            program_counter = operand;
        else {
            auto destination_address = read_word(operand & 0xffff, true);
            program_counter = destination_address | (read_byte(std::uint16_t(operand + 2)) << 16);
        }
        break;
    }
    case MainCpuOperation::JSR: {
        std::uint16_t destination_address = operand;
        if (addressing_mode == MainCpuAddressMode::AbsoluteIndexedIndirectX)
            destination_address =
                read_word((program_counter & 0xff0000) | std::uint16_t(operand + x_index), true);
        if (addressing_mode == MainCpuAddressMode::AbsoluteIndexedIndirectX) {
            push16_linear(std::uint16_t(program_counter - 1));
            restore_stack_page();
        } else
            push_word(std::uint16_t(program_counter - 1));
        program_counter = (program_counter & 0xff0000) | destination_address;
        break;
    }
    case MainCpuOperation::JSL:
        push_linear(program_counter >> 16);
        push16_linear(std::uint16_t(program_counter - 1));
        restore_stack_page();
        program_counter = operand;
        break;
    case MainCpuOperation::RTS: {
        auto return_address = pull_word();
        program_counter = (program_counter & 0xff0000) | std::uint16_t(return_address + 1);
        break;
    }
    case MainCpuOperation::RTL: {
        auto return_address = pull16_linear();
        program_counter = (pull_linear() << 16) | std::uint16_t(return_address + 1);
        restore_stack_page();
        break;
    }
    case MainCpuOperation::RTI: {
        set_status_register(pull_byte());
        auto return_address = pull_word();
        program_counter = emulation_mode ? (instruction_address & 0xff0000) | return_address
                                         : return_address | (pull_byte() << 16);
        if (emulation_mode)
            --instruction_cycles;
        break;
    }
    case MainCpuOperation::BRK:
    case MainCpuOperation::COP: {
        ++interrupt_nesting_depth_;
        instruction_uses_extra_budget_ = false;
        if (!emulation_mode)
            push_byte(instruction_address >> 16);
        push_word(program_counter);
        push_byte(status_register);
        set_status_flag(InterruptDisable, true);
        set_status_flag(Decimal, false);
        program_counter = read_word(emulation_mode ? (operation == MainCpuOperation::COP ? 0xfff4 : 0xfffe)
                                                   : (operation == MainCpuOperation::COP ? 0xffe4 : 0xffe6));
        if (emulation_mode)
            --instruction_cycles;
        break;
    }
    // Move one byte per dispatch and revisit the same source site until A
    // underflows. Keeping the loop interruptible preserves instruction timing
    // and externally visible reads/writes rather than using a host memcpy.
    case MainCpuOperation::MVN:
    case MainCpuOperation::MVP: {
        data_bank = operand & 0xff;
        write_byte((data_bank << 16) | y_index, read_byte(((operand >> 8) << 16) | x_index));
        const int direction = operation == MainCpuOperation::MVN ? 1 : -1;
        x_index = (x_index + direction) & (index_is_8_bit() ? 0xff : 0xffff);
        y_index = (y_index + direction) & (index_is_8_bit() ? 0xff : 0xffff);
        if (accumulator-- != 0)
            program_counter = instruction_address;
        break;
    }
    case MainCpuOperation::WAI:
        is_waiting = true;
        break;
    case MainCpuOperation::STP:
        is_stopped = true;
        break;
    case MainCpuOperation::NOP:
    case MainCpuOperation::WDM:
        break;
    }
    // Architectural cycle totals, with width/direct-page/index penalties.
    // Explicit fetch/data accesses also accumulate SNES memory-speed waits;
    // bus access ordering within an instruction remains a separate fidelity gate.
    switch (addressing_mode) {
    case MainCpuAddressMode::DirectPage:
    case MainCpuAddressMode::DirectPageIndexedX:
    case MainCpuAddressMode::DirectPageIndexedY:
    case MainCpuAddressMode::DirectPageIndirect:
    case MainCpuAddressMode::DirectPageIndexedIndirectX:
    case MainCpuAddressMode::DirectPageIndirectIndexedY:
    case MainCpuAddressMode::DirectPageIndirectLong:
    case MainCpuAddressMode::DirectPageIndirectLongIndexedY:
        if (direct_page & 0xff)
            ++instruction_cycles;
        break;
    default:
        break;
    }
    const bool memory_mode = addressing_mode != MainCpuAddressMode::Implied &&
                             addressing_mode != MainCpuAddressMode::Accumulator &&
                             addressing_mode != MainCpuAddressMode::SignatureByte &&
                             addressing_mode != MainCpuAddressMode::Relative8 &&
                             addressing_mode != MainCpuAddressMode::Relative16 &&
                             addressing_mode != MainCpuAddressMode::BlockMove;
    if (memory_mode && !byte_operand && operation != MainCpuOperation::JMP &&
        operation != MainCpuOperation::JML && operation != MainCpuOperation::JSR &&
        operation != MainCpuOperation::JSL && operation != MainCpuOperation::PEA &&
        operation != MainCpuOperation::PEI && operation != MainCpuOperation::PER) {
        ++instruction_cycles;
        if (operation == MainCpuOperation::ASL || operation == MainCpuOperation::LSR ||
            operation == MainCpuOperation::ROL || operation == MainCpuOperation::ROR ||
            operation == MainCpuOperation::INC || operation == MainCpuOperation::DEC ||
            operation == MainCpuOperation::TSB || operation == MainCpuOperation::TRB)
            ++instruction_cycles;
    }
    const bool indexed_read = operation == MainCpuOperation::ORA || operation == MainCpuOperation::AND ||
                              operation == MainCpuOperation::EOR || operation == MainCpuOperation::ADC ||
                              operation == MainCpuOperation::SBC || operation == MainCpuOperation::CMP ||
                              operation == MainCpuOperation::LDA || operation == MainCpuOperation::LDX ||
                              operation == MainCpuOperation::LDY || operation == MainCpuOperation::BIT;
    if (indexed_read &&
        (addressing_mode == MainCpuAddressMode::AbsoluteIndexedX ||
         addressing_mode == MainCpuAddressMode::AbsoluteIndexedY ||
         addressing_mode == MainCpuAddressMode::DirectPageIndirectIndexedY) &&
        (!index_is_8_bit() || ((address ^ unindexed_address) & 0xffff00)))
        ++instruction_cycles;
    // The RTI itself still belongs to the interrupt, not the resumed game.
    advance_instruction_cycles(instruction_cycles);
    if (operation == MainCpuOperation::RTI && interrupt_nesting_depth_)
        --interrupt_nesting_depth_;
    instruction_uses_extra_budget_ = false;
    instruction_touches_io_ = false;
}
} // namespace eb
