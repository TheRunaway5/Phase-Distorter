#include "eb/game/runtime/instruction.hpp"

#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"

namespace eb::game::runtime {
namespace {
// Base W65C816 cycle totals only. Named methods below supply every semantic
// operation and dynamic penalty; this table never chooses what gets executed.
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

Instruction::Instruction(MainCpu65816 &cpu, std::uint8_t timing_opcode, std::uint32_t operand,
                         unsigned length, AddressMode mode)
    : cpu_(cpu), mode_(mode), operand_(operand), instruction_address_(cpu.program_counter),
      cycles_(minimum_instruction_cycles[timing_opcode]), operand_mask_(0),
      byte_operand_(cpu.accumulator_is_8_bit()) {
    cpu_.memory_wait_master_clocks_ = 0;
    if (timing_opcode == 0x22 && cpu_.entity_preload_.enabled())
        cpu_.entity_preload_.begin_column(cpu_, timing_opcode, length, operand_, cpu_.hardware_);
    if (cpu_.entity_preload_.enabled() && (cpu_.status_register & 0x30) == 0 &&
        (instruction_address_ & 0xff0000) == 0xc00000)
        cpu_.entity_preload_.adapt(cpu_.game_version, instruction_address_, timing_opcode, length, operand_,
                                   cpu_.accumulator, cpu_.hardware_, cpu_.direct_page);
    // Fetches are observable even though they never decode the operation. Keep
    // their order and bank wrapping before any addressing or operand reads.
    if (cpu_.hardware_)
        for (unsigned i = 0; i < length; ++i)
            cpu_.read_byte((instruction_address_ & 0xff0000) | std::uint16_t(instruction_address_ + i));
    cpu_.program_counter = (cpu_.program_counter & 0xff0000) | std::uint16_t(cpu_.program_counter + length);
    ++cpu_.instruction_count;
    operand_mask_ = byte_operand_ ? 0xff : 0xffff;
    resolve_address();
}

void Instruction::resolve_address() {
    // Indirect pointer reads happen here, before the operation. The final
    // operand stays unread until value(), so stores never gain a spurious read.
    switch (mode_) {
    case AddressMode::DirectPage:
        address_ = cpu_.direct_page_address(operand_);
        bank_wrap_ = true;
        break;
    case AddressMode::DirectPageIndexedX:
        address_ = cpu_.direct_page_address(operand_, cpu_.x_index);
        bank_wrap_ = true;
        break;
    case AddressMode::DirectPageIndexedY:
        address_ = cpu_.direct_page_address(operand_, cpu_.y_index);
        bank_wrap_ = true;
        break;
    case AddressMode::Absolute:
        address_ = (cpu_.data_bank << 16) | (operand_ & 0xffff);
        break;
    case AddressMode::AbsoluteIndexedX:
        unindexed_address_ = (cpu_.data_bank << 16) | (operand_ & 0xffff);
        address_ = (unindexed_address_ + cpu_.x_index) & 0xffffff;
        break;
    case AddressMode::AbsoluteIndexedY:
        unindexed_address_ = (cpu_.data_bank << 16) | (operand_ & 0xffff);
        address_ = (unindexed_address_ + cpu_.y_index) & 0xffffff;
        break;
    case AddressMode::Long:
        address_ = operand_;
        break;
    case AddressMode::LongIndexedX:
        address_ = (operand_ + cpu_.x_index) & 0xffffff;
        break;
    case AddressMode::DirectPageIndexedIndirectX:
        address_ = cpu_.read_direct_page_pointer(operand_, false, cpu_.x_index);
        break;
    case AddressMode::DirectPageIndirect:
        address_ = cpu_.read_direct_page_pointer(operand_);
        break;
    case AddressMode::DirectPageIndirectIndexedY:
        unindexed_address_ = cpu_.read_direct_page_pointer(operand_);
        address_ = (unindexed_address_ + cpu_.y_index) & 0xffffff;
        break;
    case AddressMode::DirectPageIndirectLong:
        address_ = cpu_.read_direct_page_pointer(operand_, true);
        break;
    case AddressMode::DirectPageIndirectLongIndexedY:
        address_ = (cpu_.read_direct_page_pointer(operand_, true) + cpu_.y_index) & 0xffffff;
        break;
    case AddressMode::StackRelative:
        address_ = std::uint16_t(cpu_.stack_pointer + operand_);
        bank_wrap_ = true;
        break;
    case AddressMode::StackRelativeIndirectIndexedY:
        address_ = ((cpu_.data_bank << 16) +
                    cpu_.read_word(std::uint16_t(cpu_.stack_pointer + operand_), true) + cpu_.y_index) &
                   0xffffff;
        break;
    default:
        break;
    }
}

void Instruction::use_index_width() {
    byte_operand_ = cpu_.index_is_8_bit();
    operand_mask_ = byte_operand_ ? 0xff : 0xffff;
}

std::uint16_t Instruction::value() {
    if (mode_ == AddressMode::Immediate)
        return operand_ & operand_mask_;
    if (mode_ == AddressMode::Accumulator)
        return cpu_.accumulator & operand_mask_;
    return byte_operand_ ? cpu_.read_byte(address_) : cpu_.read_word(address_, bank_wrap_);
}

void Instruction::store(std::uint16_t operand_value) {
    if (mode_ == AddressMode::Accumulator)
        cpu_.set_accumulator(operand_value);
    else if (byte_operand_)
        cpu_.write_byte(address_, operand_value);
    else
        cpu_.write_word(address_, operand_value, bank_wrap_);
}

void Instruction::compare(std::uint16_t left) {
    const unsigned right = value();
    cpu_.set_status_flag(MainCpu65816::Carry, (left & operand_mask_) >= right);
    cpu_.update_negative_zero_flags((left & operand_mask_) - right, byte_operand_);
}

void Instruction::branch(bool condition, bool taken_cost_in_base) {
    if (!condition)
        return;
    const auto before = cpu_.program_counter;
    cpu_.program_counter =
        (cpu_.program_counter & 0xff0000) | std::uint16_t(cpu_.program_counter + std::int8_t(operand_));
    if (!taken_cost_in_base)
        ++cycles_;
    // Only emulation mode charges for crossing a short branch's page.
    if (cpu_.emulation_mode && ((before ^ cpu_.program_counter) & 0xff00))
        ++cycles_;
}

// These stack sequences are linear even in emulation mode; page 1 is restored
// only after the sequence. Ordinary CPU push/pull wraps each individual byte.
void Instruction::push_linear(std::uint8_t value) {
    cpu_.write_byte(cpu_.stack_pointer, value);
    --cpu_.stack_pointer;
}
std::uint8_t Instruction::pull_linear() {
    ++cpu_.stack_pointer;
    return cpu_.read_byte(cpu_.stack_pointer);
}
void Instruction::push_word_linear(std::uint16_t value) {
    push_linear(value >> 8);
    push_linear(value);
}
std::uint16_t Instruction::pull_word_linear() {
    const auto low = pull_linear();
    return std::uint16_t(low | (pull_linear() << 8));
}
void Instruction::restore_stack_page() {
    if (cpu_.emulation_mode)
        cpu_.stack_pointer = 0x100 | (cpu_.stack_pointer & 0xff);
}

// Address modes contribute timing after the architectural effects, matching
// the established core's instruction-granular clock and DMA schedule.
bool Instruction::finish() {
    switch (mode_) {
    case AddressMode::DirectPage:
    case AddressMode::DirectPageIndexedX:
    case AddressMode::DirectPageIndexedY:
    case AddressMode::DirectPageIndirect:
    case AddressMode::DirectPageIndexedIndirectX:
    case AddressMode::DirectPageIndirectIndexedY:
    case AddressMode::DirectPageIndirectLong:
    case AddressMode::DirectPageIndirectLongIndexedY:
        if (cpu_.direct_page & 0xff)
            ++cycles_;
        break;
    default:
        break;
    }
    const bool memory_mode = mode_ != AddressMode::Implied && mode_ != AddressMode::Accumulator &&
                             mode_ != AddressMode::SignatureByte && mode_ != AddressMode::Relative8 &&
                             mode_ != AddressMode::Relative16 && mode_ != AddressMode::BlockMove;
    if (memory_mode && !byte_operand_)
        cycles_ += wide_memory_cycles_;
    if (indexed_read_ &&
        (mode_ == AddressMode::AbsoluteIndexedX || mode_ == AddressMode::AbsoluteIndexedY ||
         mode_ == AddressMode::DirectPageIndirectIndexedY) &&
        (!cpu_.index_is_8_bit() || ((address_ ^ unindexed_address_) & 0xffff00)))
        ++cycles_;
    // The RTI's own time belongs to its interrupt, not the resumed game pass.
    cpu_.advance_instruction_cycles(cycles_);
    if (returning_from_interrupt_ && cpu_.interrupt_nesting_depth_)
        --cpu_.interrupt_nesting_depth_;
    cpu_.instruction_uses_extra_budget_ = false;
    cpu_.instruction_touches_io_ = false;
    return true;
}

void Instruction::add_with_carry() {
    indexed_read_ = true;
    cpu_.set_accumulator(cpu_.add_or_subtract(value(), false));
}

void Instruction::and_accumulator() {
    indexed_read_ = true;
    cpu_.set_accumulator(cpu_.accumulator & value());
}

void Instruction::shift_left() {
    wide_memory_cycles_ = 2;
    auto operand_value = value();
    cpu_.set_status_flag(MainCpu65816::Carry, operand_value & (byte_operand_ ? 0x80 : 0x8000));
    operand_value = (operand_value << 1) & operand_mask_;
    store(operand_value);
    cpu_.update_negative_zero_flags(operand_value, byte_operand_);
}

void Instruction::branch_if_carry_clear() { branch(!(cpu_.status_register & MainCpu65816::Carry)); }

void Instruction::branch_if_carry_set() { branch(cpu_.status_register & MainCpu65816::Carry); }

void Instruction::branch_if_zero() { branch(cpu_.status_register & MainCpu65816::Zero); }

void Instruction::test_bits() {
    indexed_read_ = true;
    auto operand_value = value();
    cpu_.set_status_flag(MainCpu65816::Zero, (cpu_.accumulator & operand_value & operand_mask_) == 0);
    if (mode_ != AddressMode::Immediate) {
        cpu_.set_status_flag(MainCpu65816::Negative, operand_value & (byte_operand_ ? 0x80 : 0x8000));
        cpu_.set_status_flag(MainCpu65816::Overflow, operand_value & (byte_operand_ ? 0x40 : 0x4000));
    }
}

void Instruction::branch_if_negative() { branch(cpu_.status_register & MainCpu65816::Negative); }

void Instruction::branch_if_not_zero() { branch(!(cpu_.status_register & MainCpu65816::Zero)); }

void Instruction::branch_if_nonnegative() { branch(!(cpu_.status_register & MainCpu65816::Negative)); }

void Instruction::branch_always() { branch(true, true); }

void Instruction::software_break() { software_interrupt(false); }

void Instruction::branch_long() {
    cpu_.program_counter =
        (cpu_.program_counter & 0xff0000) | std::uint16_t(cpu_.program_counter + std::int16_t(operand_));
}

void Instruction::branch_if_overflow_clear() { branch(!(cpu_.status_register & MainCpu65816::Overflow)); }

void Instruction::branch_if_overflow_set() { branch(cpu_.status_register & MainCpu65816::Overflow); }

void Instruction::clear_carry() { cpu_.set_status_flag(MainCpu65816::Carry, false); }

void Instruction::clear_decimal() { cpu_.set_status_flag(MainCpu65816::Decimal, false); }

void Instruction::enable_interrupts() { cpu_.set_status_flag(MainCpu65816::InterruptDisable, false); }

void Instruction::clear_overflow() { cpu_.set_status_flag(MainCpu65816::Overflow, false); }

void Instruction::compare_accumulator() {
    indexed_read_ = true;
    compare(cpu_.accumulator);
}

void Instruction::coprocessor_interrupt() { software_interrupt(true); }

void Instruction::compare_x() {
    use_index_width();
    compare(cpu_.x_index);
}

void Instruction::compare_y() {
    use_index_width();
    compare(cpu_.y_index);
}

void Instruction::decrement() {
    wide_memory_cycles_ = 2;
    auto operand_value = (value() - 1) & operand_mask_;
    store(operand_value);
    cpu_.update_negative_zero_flags(operand_value, byte_operand_);
}

void Instruction::decrement_x() {
    cpu_.x_index = (cpu_.x_index - 1) & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.update_negative_zero_flags(cpu_.x_index, cpu_.index_is_8_bit());
}

void Instruction::decrement_y() {
    cpu_.y_index = (cpu_.y_index - 1) & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.update_negative_zero_flags(cpu_.y_index, cpu_.index_is_8_bit());
}

void Instruction::xor_accumulator() {
    indexed_read_ = true;
    cpu_.set_accumulator(cpu_.accumulator ^ value());
}

void Instruction::increment() {
    wide_memory_cycles_ = 2;
    auto operand_value = (value() + 1) & operand_mask_;
    store(operand_value);
    cpu_.update_negative_zero_flags(operand_value, byte_operand_);
}

void Instruction::increment_x() {
    cpu_.x_index = (cpu_.x_index + 1) & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.update_negative_zero_flags(cpu_.x_index, cpu_.index_is_8_bit());
}

void Instruction::increment_y() {
    cpu_.y_index = (cpu_.y_index + 1) & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.update_negative_zero_flags(cpu_.y_index, cpu_.index_is_8_bit());
}

void Instruction::jump_long() {
    wide_memory_cycles_ = 0;
    if (mode_ == AddressMode::Long)
        cpu_.program_counter = operand_;
    else {
        auto destination_address = cpu_.read_word(operand_ & 0xffff, true);
        cpu_.program_counter = destination_address | (cpu_.read_byte(std::uint16_t(operand_ + 2)) << 16);
    }
}

void Instruction::jump() {
    wide_memory_cycles_ = 0;
    std::uint16_t destination_address = operand_;
    if (mode_ == AddressMode::AbsoluteIndirect)
        destination_address = cpu_.read_word(operand_ & 0xffff, true);
    else if (mode_ == AddressMode::AbsoluteIndexedIndirectX)
        destination_address =
            cpu_.read_word((cpu_.program_counter & 0xff0000) | std::uint16_t(operand_ + cpu_.x_index), true);
    cpu_.program_counter = (cpu_.program_counter & 0xff0000) | destination_address;
}

void Instruction::call_long() {
    wide_memory_cycles_ = 0;
    push_linear(cpu_.program_counter >> 16);
    push_word_linear(std::uint16_t(cpu_.program_counter - 1));
    restore_stack_page();
    cpu_.program_counter = operand_;
}

void Instruction::call() {
    wide_memory_cycles_ = 0;
    std::uint16_t destination_address = operand_;
    if (mode_ == AddressMode::AbsoluteIndexedIndirectX)
        destination_address =
            cpu_.read_word((cpu_.program_counter & 0xff0000) | std::uint16_t(operand_ + cpu_.x_index), true);
    if (mode_ == AddressMode::AbsoluteIndexedIndirectX) {
        push_word_linear(std::uint16_t(cpu_.program_counter - 1));
        restore_stack_page();
    } else
        cpu_.push_word(std::uint16_t(cpu_.program_counter - 1));
    cpu_.program_counter = (cpu_.program_counter & 0xff0000) | destination_address;
}

void Instruction::load_accumulator() {
    indexed_read_ = true;
    cpu_.set_accumulator(value());
}

void Instruction::load_x() {
    use_index_width();
    indexed_read_ = true;
    cpu_.x_index = value();
    cpu_.update_negative_zero_flags(cpu_.x_index, byte_operand_);
}

void Instruction::load_y() {
    use_index_width();
    indexed_read_ = true;
    cpu_.y_index = value();
    cpu_.update_negative_zero_flags(cpu_.y_index, byte_operand_);
}

void Instruction::shift_right() {
    wide_memory_cycles_ = 2;
    auto operand_value = value();
    cpu_.set_status_flag(MainCpu65816::Carry, operand_value & 1);
    operand_value >>= 1;
    store(operand_value);
    cpu_.update_negative_zero_flags(operand_value, byte_operand_);
}

void Instruction::move_byte_forward() { move_byte(1); }

void Instruction::move_byte_backward() { move_byte(-1); }

void Instruction::no_operation() {
    // The source site still contributes its fetches and timing.
}

void Instruction::or_accumulator() {
    indexed_read_ = true;
    cpu_.set_accumulator(cpu_.accumulator | value());
}

void Instruction::push_effective_absolute() {
    wide_memory_cycles_ = 0;
    push_word_linear(operand_);
    restore_stack_page();
}

void Instruction::push_effective_indirect() {
    wide_memory_cycles_ = 0;
    push_word_linear(cpu_.read_word(std::uint16_t(cpu_.direct_page + std::uint8_t(operand_)), true));
    restore_stack_page();
}

void Instruction::push_effective_relative() {
    wide_memory_cycles_ = 0;
    push_word_linear(std::uint16_t(cpu_.program_counter + std::int16_t(operand_)));
    restore_stack_page();
}

void Instruction::push_accumulator() {
    if (cpu_.accumulator_is_8_bit())
        cpu_.push_byte(cpu_.accumulator);
    else {
        cpu_.push_word(cpu_.accumulator);
        ++cycles_;
    }
}

void Instruction::push_data_bank() { cpu_.push_byte(cpu_.data_bank); }

void Instruction::push_direct_page() {
    push_word_linear(cpu_.direct_page);
    restore_stack_page();
}

void Instruction::push_program_bank() { cpu_.push_byte(cpu_.program_counter >> 16); }

void Instruction::push_status() { cpu_.push_byte(cpu_.status_register); }

void Instruction::push_x() {
    if (cpu_.index_is_8_bit())
        cpu_.push_byte(cpu_.x_index);
    else {
        cpu_.push_word(cpu_.x_index);
        ++cycles_;
    }
}

void Instruction::push_y() {
    if (cpu_.index_is_8_bit())
        cpu_.push_byte(cpu_.y_index);
    else {
        cpu_.push_word(cpu_.y_index);
        ++cycles_;
    }
}

void Instruction::pull_accumulator() {
    cpu_.set_accumulator(cpu_.accumulator_is_8_bit() ? cpu_.pull_byte() : cpu_.pull_word());
    if (!cpu_.accumulator_is_8_bit())
        ++cycles_;
}

void Instruction::pull_data_bank() {
    cpu_.data_bank = pull_linear();
    restore_stack_page();
    cpu_.update_negative_zero_flags(cpu_.data_bank, true);
}

void Instruction::pull_direct_page() {
    cpu_.direct_page = pull_word_linear();
    restore_stack_page();
    cpu_.update_negative_zero_flags(cpu_.direct_page, false);
}

void Instruction::pull_status() { cpu_.set_status_register(cpu_.pull_byte()); }

void Instruction::pull_x() {
    cpu_.x_index = cpu_.index_is_8_bit() ? cpu_.pull_byte() : cpu_.pull_word();
    cpu_.update_negative_zero_flags(cpu_.x_index, cpu_.index_is_8_bit());
    if (!cpu_.index_is_8_bit())
        ++cycles_;
}

void Instruction::pull_y() {
    cpu_.y_index = cpu_.index_is_8_bit() ? cpu_.pull_byte() : cpu_.pull_word();
    cpu_.update_negative_zero_flags(cpu_.y_index, cpu_.index_is_8_bit());
    if (!cpu_.index_is_8_bit())
        ++cycles_;
}

void Instruction::clear_status_bits() { cpu_.set_status_register(cpu_.status_register & ~operand_); }

void Instruction::rotate_left() {
    wide_memory_cycles_ = 2;
    auto operand_value = value();
    bool carry_bit = cpu_.status_register & MainCpu65816::Carry;
    cpu_.set_status_flag(MainCpu65816::Carry, operand_value & (byte_operand_ ? 0x80 : 0x8000));
    operand_value = ((operand_value << 1) | carry_bit) & operand_mask_;
    store(operand_value);
    cpu_.update_negative_zero_flags(operand_value, byte_operand_);
}

void Instruction::rotate_right() {
    wide_memory_cycles_ = 2;
    auto operand_value = value();
    bool carry_bit = cpu_.status_register & MainCpu65816::Carry;
    cpu_.set_status_flag(MainCpu65816::Carry, operand_value & 1);
    operand_value = (operand_value >> 1) | (carry_bit ? (byte_operand_ ? 0x80 : 0x8000) : 0);
    store(operand_value);
    cpu_.update_negative_zero_flags(operand_value, byte_operand_);
}

void Instruction::return_from_interrupt() {
    returning_from_interrupt_ = true;
    cpu_.set_status_register(cpu_.pull_byte());
    auto return_address = cpu_.pull_word();
    cpu_.program_counter = cpu_.emulation_mode ? (instruction_address_ & 0xff0000) | return_address
                                               : return_address | (cpu_.pull_byte() << 16);
    if (cpu_.emulation_mode)
        --cycles_;
}

void Instruction::return_long() {
    auto return_address = pull_word_linear();
    cpu_.program_counter = (pull_linear() << 16) | std::uint16_t(return_address + 1);
    restore_stack_page();
}

void Instruction::return_from_call() {
    auto return_address = cpu_.pull_word();
    cpu_.program_counter = (cpu_.program_counter & 0xff0000) | std::uint16_t(return_address + 1);
}

void Instruction::subtract_with_borrow() {
    indexed_read_ = true;
    cpu_.set_accumulator(cpu_.add_or_subtract(value(), true));
}

void Instruction::set_carry() { cpu_.set_status_flag(MainCpu65816::Carry, true); }

void Instruction::set_decimal() { cpu_.set_status_flag(MainCpu65816::Decimal, true); }

void Instruction::disable_interrupts() { cpu_.set_status_flag(MainCpu65816::InterruptDisable, true); }

void Instruction::set_status_bits() { cpu_.set_status_register(cpu_.status_register | operand_); }

void Instruction::store_accumulator() { store(cpu_.accumulator); }

void Instruction::stop() { cpu_.is_stopped = true; }

void Instruction::store_x() {
    use_index_width();
    store(cpu_.x_index);
}

void Instruction::store_y() {
    use_index_width();
    store(cpu_.y_index);
}

void Instruction::store_zero() { store(0); }

void Instruction::transfer_accumulator_to_x() {
    cpu_.x_index = cpu_.accumulator & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.update_negative_zero_flags(cpu_.x_index, cpu_.index_is_8_bit());
}

void Instruction::transfer_accumulator_to_y() {
    cpu_.y_index = cpu_.accumulator & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.update_negative_zero_flags(cpu_.y_index, cpu_.index_is_8_bit());
}

void Instruction::transfer_accumulator_to_direct_page() {
    cpu_.direct_page = cpu_.accumulator;
    cpu_.update_negative_zero_flags(cpu_.direct_page, false);
}

void Instruction::transfer_accumulator_to_stack() {
    cpu_.stack_pointer = cpu_.emulation_mode ? 0x100 | (cpu_.accumulator & 0xff) : cpu_.accumulator;
}

void Instruction::transfer_direct_page_to_accumulator() {
    cpu_.accumulator = cpu_.direct_page;
    cpu_.update_negative_zero_flags(cpu_.accumulator, false);
}

void Instruction::reset_tested_bits() {
    wide_memory_cycles_ = 2;
    auto operand_value = value();
    cpu_.set_status_flag(MainCpu65816::Zero, (operand_value & cpu_.accumulator & operand_mask_) == 0);
    store(operand_value & ~cpu_.accumulator);
}

void Instruction::set_tested_bits() {
    wide_memory_cycles_ = 2;
    auto operand_value = value();
    cpu_.set_status_flag(MainCpu65816::Zero, (operand_value & cpu_.accumulator & operand_mask_) == 0);
    store(operand_value | cpu_.accumulator);
}

void Instruction::transfer_stack_to_accumulator() {
    cpu_.accumulator = cpu_.stack_pointer;
    cpu_.update_negative_zero_flags(cpu_.accumulator, false);
}

void Instruction::transfer_stack_to_x() {
    cpu_.x_index = cpu_.stack_pointer & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.update_negative_zero_flags(cpu_.x_index, cpu_.index_is_8_bit());
}

void Instruction::transfer_x_to_accumulator() { cpu_.set_accumulator(cpu_.x_index); }

void Instruction::transfer_x_to_stack() {
    cpu_.stack_pointer = cpu_.emulation_mode ? 0x100 | (cpu_.x_index & 0xff) : cpu_.x_index;
}

void Instruction::transfer_x_to_y() {
    cpu_.y_index = cpu_.x_index & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.update_negative_zero_flags(cpu_.y_index, cpu_.index_is_8_bit());
}

void Instruction::transfer_y_to_accumulator() { cpu_.set_accumulator(cpu_.y_index); }

void Instruction::transfer_y_to_x() {
    cpu_.x_index = cpu_.y_index & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.update_negative_zero_flags(cpu_.x_index, cpu_.index_is_8_bit());
}

void Instruction::wait_for_interrupt() { cpu_.is_waiting = true; }

void Instruction::reserved_no_operation() {
    // Reserved signature byte has no additional architectural effect.
}

void Instruction::exchange_accumulator_bytes() {
    cpu_.accumulator = (cpu_.accumulator << 8) | (cpu_.accumulator >> 8);
    cpu_.update_negative_zero_flags(cpu_.accumulator, true);
}

void Instruction::exchange_carry_emulation() {
    bool carry = cpu_.status_register & MainCpu65816::Carry;
    cpu_.set_status_flag(MainCpu65816::Carry, cpu_.emulation_mode);
    cpu_.emulation_mode = carry;
    cpu_.set_status_register(cpu_.status_register);
    if (cpu_.emulation_mode)
        cpu_.stack_pointer = 0x100 | (cpu_.stack_pointer & 0xff);
}

void Instruction::software_interrupt(bool coprocessor) {
    ++cpu_.interrupt_nesting_depth_;
    cpu_.instruction_uses_extra_budget_ = false;
    if (!cpu_.emulation_mode)
        cpu_.push_byte(instruction_address_ >> 16);
    cpu_.push_word(cpu_.program_counter);
    cpu_.push_byte(cpu_.status_register);
    cpu_.set_status_flag(MainCpu65816::InterruptDisable, true);
    cpu_.set_status_flag(MainCpu65816::Decimal, false);
    cpu_.program_counter = cpu_.read_word(cpu_.emulation_mode ? (coprocessor ? 0xfff4 : 0xfffe)
                                                              : (coprocessor ? 0xffe4 : 0xffe6));
    if (cpu_.emulation_mode)
        --cycles_;
}

void Instruction::move_byte(int direction) {
    // Revisit this source site after each byte so interrupts, clocks, and bus
    // observers see the same interruptible transfer as the original routine.
    cpu_.data_bank = operand_ & 0xff;
    cpu_.write_byte((cpu_.data_bank << 16) | cpu_.y_index,
                    cpu_.read_byte(((operand_ >> 8) << 16) | cpu_.x_index));
    cpu_.x_index = (cpu_.x_index + direction) & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    cpu_.y_index = (cpu_.y_index + direction) & (cpu_.index_is_8_bit() ? 0xff : 0xffff);
    if (cpu_.accumulator-- != 0)
        cpu_.program_counter = instruction_address_;
}
} // namespace eb::game::runtime
