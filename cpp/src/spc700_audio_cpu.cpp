#include "eb/spc700_audio_cpu.hpp"
#include "eb/snes_bus.hpp"

#include <iomanip>
#include <sstream>
#include <stdexcept>

namespace eb {
namespace {
// The IPL is the hardware's fixed boot ROM, also exposed to SPC data reads.
// Instruction execution at these addresses uses execute_boot_rom_instruction's explicit sites;
// these bytes are never decoded to choose a runtime instruction.
constexpr uint8_t boot_rom[64] = {0xcd, 0xef, 0xbd, 0xe8, 0x00, 0xc6, 0x1d, 0xd0, 0xfc, 0x8f, 0xaa, 0xf4, 0x8f,
                                  0xbb, 0xf5, 0x78, 0xcc, 0xf4, 0xd0, 0xfb, 0x2f, 0x19, 0xeb, 0xf4, 0xd0, 0xfc,
                                  0x7e, 0xf4, 0xd0, 0x0b, 0xe4, 0xf5, 0xcb, 0xf4, 0xd7, 0x00, 0xfc, 0xd0, 0xf3,
                                  0xab, 0x01, 0x10, 0xef, 0x7e, 0xf4, 0x10, 0xeb, 0xba, 0xf6, 0xda, 0x00, 0xba,
                                  0xf4, 0xc4, 0xf4, 0xdd, 0x5d, 0xd0, 0xdb, 0x1f, 0x00, 0x00, 0xc0, 0xff};
// Base SPC-cycle costs. Taken conditional branches add their two-cycle cost
// in execute_opcode_semantics; advance_audio_cycles clocks timers and DSP together.
constexpr uint8_t opcode_cycle_counts[256] = {
    2, 8, 4, 5, 3, 4, 3, 6, 2, 6, 5,  4, 5, 4, 6, 8, 2, 8, 4, 5, 4, 5, 5, 6, 5, 5, 6, 5, 2, 2, 4, 6, 2, 8, 4, 5, 3,
    4, 3, 6, 2, 6, 5, 4, 5, 4, 5, 4,  2, 8, 4, 5, 4, 5, 5, 6, 5, 5, 6, 5, 2, 2, 3, 8, 2, 8, 4, 5, 3, 4, 3, 6, 2, 6,
    4, 4, 5, 4, 6, 6, 2, 8, 4, 5, 4,  5, 5, 6, 5, 5, 4, 5, 2, 2, 4, 3, 2, 8, 4, 5, 3, 4, 3, 6, 2, 6, 4, 4, 5, 4, 5,
    5, 2, 8, 4, 5, 4, 5, 5, 6, 5, 5,  5, 5, 2, 2, 3, 6, 2, 8, 4, 5, 3, 4, 3, 6, 2, 6, 5, 4, 5, 2, 4, 5, 2, 8, 4, 5,
    4, 5, 5, 6, 5, 5, 5, 5, 2, 2, 12, 5, 3, 8, 4, 5, 3, 4, 3, 6, 2, 6, 4, 4, 5, 2, 4, 4, 2, 8, 4, 5, 4, 5, 5, 6, 5,
    5, 5, 5, 2, 2, 3, 4, 3, 8, 4, 5,  4, 5, 4, 7, 2, 5, 6, 4, 5, 2, 4, 9, 2, 8, 4, 5, 5, 6, 6, 7, 4, 5, 5, 5, 2, 2,
    6, 3, 2, 8, 4, 5, 3, 4, 3, 6, 2,  4, 5, 3, 4, 3, 4, 3, 2, 8, 4, 5, 4, 5, 5, 6, 3, 4, 5, 4, 2, 2, 4, 3};
} // namespace

Spc700AudioCpu::Spc700AudioCpu(SnesBus& system_bus) : system_bus_(&system_bus) {
    dsp_registers[0x6c] = 0xe0;
    system_bus_->advance_audio_master_clocks = [this](unsigned master_clocks) { advance_master_clocks(master_clocks); };
}
Spc700AudioCpu::Spc700AudioCpu(std::span<uint8_t> flat_memory) : instruction_test_memory_(flat_memory) {
    if (instruction_test_memory_.size() != 65536)
        throw std::invalid_argument("SPC flat memory must contain 65536 bytes");
}
Spc700AudioCpu::~Spc700AudioCpu() {
    if (system_bus_)
        system_bus_->advance_audio_master_clocks = {};
}
// The IPL overlay affects reads only while CONTROL.7 is set; underlying RAM
// remains available for writes. The F0..FF range selects hardware registers,
// so a read there may consume timer output rather than just inspect memory.
uint8_t Spc700AudioCpu::read_byte(uint16_t address) {
    if (!instruction_test_memory_.empty())
        return instruction_test_memory_[address];
    if (address >= 0xffc0 && (control_register_ & 0x80))
        return boot_rom[address - 0xffc0];
    if (address < 0xf0 || address > 0xff)
        return audio_ram[address];
    if (address >= 0xf4 && address <= 0xf7)
        return system_bus_->main_to_audio_ports[address - 0xf4];
    if (address >= 0xfd) {
        const auto timer_index = address - 0xfd;
        const auto value = timer_output_latches_[timer_index];
        timer_output_latches_[timer_index] = 0;
        return value;
    }
    switch (address) {
    case 0xf0:
    case 0xf1:
    case 0xfa:
    case 0xfb:
    case 0xfc:
        return 0;
    case 0xf2:
        return dsp_register_address_;
    case 0xf3:
        return read_dsp_register ? read_dsp_register(dsp_register_address_ & 127)
                                 : dsp_registers[dsp_register_address_ & 127];
    default:
        return audio_ram[address];
    }
}
// Keep port direction and RAM write gating separate: TEST can suppress the
// backing RAM write without suppressing a register's hardware side effects.
void Spc700AudioCpu::write_byte(uint16_t address, uint8_t value) {
    if (observe_memory_write)
        observe_memory_write(address, value);
    if (!instruction_test_memory_.empty()) {
        instruction_test_memory_[address] = value;
        return;
    }
    if (test_register_ & 2)
        audio_ram[address] = value;
    if (address < 0xf0 || address > 0xff)
        return;
    if (address >= 0xf4 && address <= 0xf7) {
        system_bus_->audio_to_main_ports[address - 0xf4] = value;
        return;
    }
    if (address >= 0xfa && address <= 0xfc) {
        timer_target_values_[address - 0xfa] = value;
        return;
    }
    switch (address) {
    case 0xf0:
        if (!(status_register & DirectPage))
            test_register_ = value;
        break;
    // Enabling a timer starts a fresh target count/output, but does not reset
    // its free-running prescaler. Port-clear bits affect CPU-to-APU latches.
    case 0xf1:
        for (unsigned timer_index = 0; timer_index < 3; ++timer_index)
            if ((value & (1 << timer_index)) && !(control_register_ & (1 << timer_index))) {
                timer_target_counters_[timer_index] = 0;
                timer_output_latches_[timer_index] = 0;
            }
        if (value & 0x10)
            system_bus_->main_to_audio_ports[0] = system_bus_->main_to_audio_ports[1] = 0;
        if (value & 0x20)
            system_bus_->main_to_audio_ports[2] = system_bus_->main_to_audio_ports[3] = 0;
        control_register_ = value;
        break;
    case 0xf2:
        dsp_register_address_ = value;
        break;
    case 0xf3:
        if (dsp_register_address_ < 128) {
            // ENDX acknowledges on any write. Other DSP behavior requires the DSP processor.
            dsp_registers[dsp_register_address_] = dsp_register_address_ == 0x7c ? 0 : value;
            if (write_dsp_register)
                write_dsp_register(dsp_register_address_, value);
        }
        break;
    default:
        break;
    }
}
uint16_t Spc700AudioCpu::read_memory_word(uint16_t address) {
    const auto low_byte = read_byte(address);
    return low_byte | (read_byte(uint16_t(address + 1)) << 8);
}
// Direct-page words wrap the low byte inside the selected page (P chooses
// page 0 or 1). Absolute words instead wrap only at the end of the 64 KiB RAM.
uint16_t Spc700AudioCpu::read_direct_page_word(uint8_t address) {
    const auto low_byte = read_byte(direct_page_address(address));
    return low_byte | (read_byte(direct_page_address(uint8_t(address + 1))) << 8);
}
void Spc700AudioCpu::push_stack_byte(uint8_t value) {
    write_byte(0x100 | stack_pointer, value);
    --stack_pointer;
}
uint8_t Spc700AudioCpu::pull_stack_byte() {
    ++stack_pointer;
    return read_byte(0x100 | stack_pointer);
}
void Spc700AudioCpu::push_stack_word(uint16_t value) {
    push_stack_byte(value >> 8);
    push_stack_byte(value);
}
uint16_t Spc700AudioCpu::pull_stack_word() {
    const auto low_byte = pull_stack_byte();
    return low_byte | (pull_stack_byte() << 8);
}

// Timers 0/1 divide by 128 and timer 2 by 16 before their target comparison.
// The uint8_t counter intentionally wraps: target zero denotes 256 pulses.
// Outputs wrap at four bits and are cleared only by their register reads.
void Spc700AudioCpu::advance_audio_cycles(unsigned elapsed_audio_cycles) {
    cycle_count += elapsed_audio_cycles;
    if (advance_dsp_clocks)
        advance_dsp_clocks(elapsed_audio_cycles);
    for (unsigned timer_index = 0; timer_index < 3; ++timer_index) {
        const unsigned divider_period = timer_index == 2 ? 16 : 128;
        timer_clock_dividers_[timer_index] += elapsed_audio_cycles;
        while (timer_clock_dividers_[timer_index] >= divider_period) {
            timer_clock_dividers_[timer_index] -= divider_period;
            if ((control_register_ & (1 << timer_index)) && (test_register_ & 8) && !(test_register_ & 1)) {
                if (++timer_target_counters_[timer_index] == timer_target_values_[timer_index]) {
                    timer_target_counters_[timer_index] = 0;
                    timer_output_latches_[timer_index] = (timer_output_latches_[timer_index] + 1) & 15;
                }
            }
        }
    }
}
void Spc700AudioCpu::advance_master_clocks(unsigned master_clocks) {
    // Preserve the fractional asynchronous 1.024 MHz clock without drift.
    master_to_audio_clock_balance_ += int64_t(master_clocks) * 1024000;
    while (master_to_audio_clock_balance_ > 0) {
        const auto previous_cycle_count = cycle_count;
        if (is_stopped || is_sleeping)
            advance_audio_cycles(2);
        else
            step_instruction();
        master_to_audio_clock_balance_ -= int64_t(cycle_count - previous_cycle_count) * 21477272;
    }
}
std::string Spc700AudioCpu::describe_registers() const {
    std::ostringstream register_dump;
    register_dump << std::hex << std::setfill('0') << "SPC PC=" << std::setw(4) << program_counter
                  << " A=" << std::setw(2) << unsigned(accumulator) << " X=" << std::setw(2) << unsigned(x_index)
                  << " Y=" << std::setw(2) << unsigned(y_index) << " SP=" << std::setw(2) << unsigned(stack_pointer)
                  << " P=" << std::setw(2) << unsigned(status_register);
    return register_dump.str();
}
// Source execution is deliberately closed: an unknown PC fails with the
// register state instead of interpreting RAM as a fallback. This makes missing
// translation coverage observable during gameplay and regression runs.
void Spc700AudioCpu::step_instruction() {
    if (is_stopped || is_sleeping) {
        advance_audio_cycles(2);
        return;
    }
    if (program_counter >= 0xffc0 && (control_register_ & 0x80)) {
        if (execute_boot_rom_instruction())
            return;
    } else if (execute_translated_audio_instruction(*this))
        return;
    throw std::runtime_error("untranslated SPC instruction: " + describe_registers());
}

// OR/AND/XOR/CMP/ADC/SBC share their flag rules across addressing families.
// CMP returns the subtraction result for N/Z but callers suppress its write;
// ADC/SBC additionally expose the nibble carry used by decimal adjustment.
uint8_t Spc700AudioCpu::apply_arithmetic_logic_operation(unsigned operation, uint8_t left, uint8_t right) {
    uint8_t value = left;
    switch (operation) {
    case 0:
        value = left | right;
        break;
    case 1:
        value = left & right;
        break;
    case 2:
        value = left ^ right;
        break;
    case 3:
        value = left - right;
        set_status_flag(Carry, left >= right);
        break;
    case 4: {
        const unsigned carry = (status_register & Carry) ? 1 : 0, result = unsigned(left) + right + carry;
        value = result;
        set_status_flag(Carry, result > 255);
        set_status_flag(HalfCarry, (left & 15) + (right & 15) + carry > 15);
        set_status_flag(Overflow, ~(left ^ right) & (left ^ value) & 0x80);
        break;
    }
    case 5: {
        const int borrow = (status_register & Carry) ? 0 : 1, result = int(left) - right - borrow;
        value = result;
        set_status_flag(Carry, result >= 0);
        set_status_flag(HalfCarry, int(left & 15) - int(right & 15) - borrow >= 0);
        set_status_flag(Overflow, (left ^ right) & (left ^ value) & 0x80);
        break;
    }
    default:
        throw std::logic_error("invalid SPC ALU operation");
    }
    update_negative_zero_flags(value);
    return value;
}

void Spc700AudioCpu::execute_opcode_semantics(uint8_t opcode, uint16_t operand, unsigned instruction_size) {
    program_counter = uint16_t(program_counter + instruction_size);
    ++instruction_count;
    unsigned elapsed_audio_cycles = opcode_cycle_counts[opcode];
    const uint8_t low_byte = operand, high_byte = operand >> 8;
    const auto branch = [&](bool condition, uint8_t displacement) {
        if (condition) {
            program_counter = uint16_t(program_counter + int8_t(displacement));
            elapsed_audio_cycles += 2;
        }
    };
    // SPC store forms perform a dummy destination read first. Do not elide it:
    // a destination in F0..FF can acknowledge a timer or read an I/O latch.
    const auto store = [&](uint16_t address, uint8_t value) {
        (void)read_byte(address);
        write_byte(address, value);
    };
    // The matrix groups repeated semantic families by opcode bits. This op
    // value comes from a generated call site, never from an instruction fetch;
    // lo/hi retain source operand order even for memory-to-memory operations.
    const unsigned opcode_family = opcode & 31;
    if ((opcode & 15) == 1) {
        push_stack_word(program_counter);
        program_counter = read_memory_word(0xffde - (opcode >> 4) * 2);
    } else if ((opcode & 15) == 2) {
        const auto address = direct_page_address(low_byte);
        const uint8_t value = read_byte(address), mask = 1 << (opcode >> 5);
        write_byte(address, (opcode & 16) ? value & ~mask : value | mask);
    } else if ((opcode & 15) == 3) {
        const bool bit = read_byte(direct_page_address(low_byte)) & (1 << (opcode >> 5));
        branch((opcode & 16) ? !bit : bit, high_byte);
    } else if (opcode_family == 16) {
        const StatusFlag branch_flags[] = {Negative, Overflow, Carry, Zero};
        const bool flag_is_set = status_register & branch_flags[opcode >> 6];
        branch((opcode & 0x20) ? flag_is_set : !flag_is_set, low_byte);
    } else if (opcode < 0xc0 &&
               (opcode_family == 4 || opcode_family == 5 || opcode_family == 6 || opcode_family == 7 ||
                opcode_family == 8 || opcode_family == 9 || opcode_family == 0x14 || opcode_family == 0x15 ||
                opcode_family == 0x16 || opcode_family == 0x17 || opcode_family == 0x18 || opcode_family == 0x19)) {
        const unsigned operation = opcode >> 5;
        uint16_t destination = 0;
        uint8_t left = accumulator, right = 0;
        bool write_to_memory = false;
        switch (opcode_family) {
        case 4:
            right = read_byte(direct_page_address(low_byte));
            break;
        case 5:
            right = read_byte(operand);
            break;
        case 6:
            right = read_byte(direct_page_address(x_index));
            break;
        case 7:
            right = read_byte(read_direct_page_word(uint8_t(low_byte + x_index)));
            break;
        case 8:
            right = low_byte;
            break;
        case 9:
            right = read_byte(direct_page_address(low_byte));
            destination = direct_page_address(high_byte);
            left = read_byte(destination);
            write_to_memory = true;
            break;
        case 0x14:
            right = read_byte(direct_page_address(uint8_t(low_byte + x_index)));
            break;
        case 0x15:
            right = read_byte(uint16_t(operand + x_index));
            break;
        case 0x16:
            right = read_byte(uint16_t(operand + y_index));
            break;
        case 0x17:
            right = read_byte(uint16_t(read_direct_page_word(low_byte) + y_index));
            break;
        case 0x18:
            right = low_byte;
            destination = direct_page_address(high_byte);
            left = read_byte(destination);
            write_to_memory = true;
            break;
        case 0x19:
            right = read_byte(direct_page_address(y_index));
            destination = direct_page_address(x_index);
            left = read_byte(destination);
            write_to_memory = true;
            break;
        }
        const auto value = apply_arithmetic_logic_operation(operation, left, right);
        if (operation != 3) {
            if (write_to_memory)
                write_byte(destination, value);
            else
                accumulator = value;
        }
    } else if (opcode < 0xc0 &&
               (opcode_family == 0x0b || opcode_family == 0x0c || opcode_family == 0x1b || opcode_family == 0x1c)) {
        const unsigned operation = opcode >> 5;
        const uint16_t address =
            opcode_family == 0x0c ? operand
                                  : direct_page_address(opcode_family == 0x1b ? uint8_t(low_byte + x_index) : low_byte);
        uint8_t value = opcode_family == 0x1c ? accumulator : read_byte(address);
        const bool carry = status_register & Carry;
        switch (operation) {
        case 0:
            set_status_flag(Carry, value & 0x80);
            value <<= 1;
            break;
        case 1:
            set_status_flag(Carry, value & 0x80);
            value = uint8_t((value << 1) | carry);
            break;
        case 2:
            set_status_flag(Carry, value & 1);
            value >>= 1;
            break;
        case 3:
            set_status_flag(Carry, value & 1);
            value = uint8_t((value >> 1) | (carry ? 0x80 : 0));
            break;
        case 4:
            --value;
            break;
        case 5:
            ++value;
            break;
        }
        update_negative_zero_flags(value);
        if (opcode_family == 0x1c)
            accumulator = value;
        else
            write_byte(address, value);
    } else
        switch (opcode) {
        case 0x00:
            break;
        case 0x0a:
        case 0x2a:
        case 0x4a:
        case 0x6a:
        case 0x8a:
        case 0xaa:
        case 0xca:
        case 0xea: {
            const uint16_t address = operand & 0x1fff;
            const uint8_t mask = 1 << (operand >> 13), value = read_byte(address);
            const bool bit = value & mask, carry = status_register & Carry;
            switch (opcode) {
            case 0x0a:
                set_status_flag(Carry, carry || bit);
                break;
            case 0x2a:
                set_status_flag(Carry, carry || !bit);
                break;
            case 0x4a:
                set_status_flag(Carry, carry && bit);
                break;
            case 0x6a:
                set_status_flag(Carry, carry && !bit);
                break;
            case 0x8a:
                set_status_flag(Carry, carry != bit);
                break;
            case 0xaa:
                set_status_flag(Carry, bit);
                break;
            case 0xca:
                write_byte(address, carry ? value | mask : value & ~mask);
                break;
            case 0xea:
                write_byte(address, value ^ mask);
                break;
            }
            break;
        }
        case 0x0d:
            push_stack_byte(status_register);
            break;
        case 0x2d:
            push_stack_byte(accumulator);
            break;
        case 0x4d:
            push_stack_byte(x_index);
            break;
        case 0x6d:
            push_stack_byte(y_index);
            break;
        case 0x8e:
            status_register = pull_stack_byte();
            break;
        case 0xae:
            accumulator = pull_stack_byte();
            break;
        case 0xce:
            x_index = pull_stack_byte();
            break;
        case 0xee:
            y_index = pull_stack_byte();
            break;
        case 0x0e:
        case 0x4e: {
            const auto value = read_byte(operand);
            update_negative_zero_flags(uint8_t(accumulator - value));
            write_byte(operand, opcode == 0x0e ? value | accumulator : value & ~accumulator);
            break;
        }
        case 0x0f:
            push_stack_word(program_counter);
            push_stack_byte(status_register);
            set_status_flag(Break, true);
            set_status_flag(InterruptEnable, false);
            program_counter = read_memory_word(0xffde);
            break;
        case 0x1a:
        case 0x3a: {
            const auto value = uint16_t(read_direct_page_word(low_byte) + (opcode == 0x1a ? -1 : 1));
            write_byte(direct_page_address(low_byte), value);
            write_byte(direct_page_address(uint8_t(low_byte + 1)), value >> 8);
            update_negative_zero_flags_word(value);
            break;
        }
        case 0x1d:
            --x_index;
            update_negative_zero_flags(x_index);
            break;
        case 0x3d:
            ++x_index;
            update_negative_zero_flags(x_index);
            break;
        case 0x1e:
            apply_arithmetic_logic_operation(3, x_index, read_byte(operand));
            break;
        case 0x3e:
            apply_arithmetic_logic_operation(3, x_index, read_byte(direct_page_address(low_byte)));
            break;
        case 0x5e:
            apply_arithmetic_logic_operation(3, y_index, read_byte(operand));
            break;
        case 0x7e:
            apply_arithmetic_logic_operation(3, y_index, read_byte(direct_page_address(low_byte)));
            break;
        case 0xc8:
            apply_arithmetic_logic_operation(3, x_index, low_byte);
            break;
        case 0xad:
            apply_arithmetic_logic_operation(3, y_index, low_byte);
            break;
        case 0x1f:
            program_counter = read_memory_word(uint16_t(operand + x_index));
            break;
        case 0x20:
            set_status_flag(DirectPage, false);
            break;
        case 0x40:
            set_status_flag(DirectPage, true);
            break;
        case 0x60:
            set_status_flag(Carry, false);
            break;
        case 0x80:
            set_status_flag(Carry, true);
            break;
        case 0xa0:
            set_status_flag(InterruptEnable, true);
            break;
        case 0xc0:
            set_status_flag(InterruptEnable, false);
            break;
        case 0xe0:
            set_status_flag(Overflow, false);
            set_status_flag(HalfCarry, false);
            break;
        case 0xed:
            set_status_flag(Carry, !(status_register & Carry));
            break;
        case 0x2e:
            branch(accumulator != read_byte(direct_page_address(low_byte)), high_byte);
            break;
        case 0xde:
            branch(accumulator != read_byte(direct_page_address(uint8_t(low_byte + x_index))), high_byte);
            break;
        case 0x2f:
            program_counter = uint16_t(program_counter + int8_t(low_byte));
            break;
        case 0x3f:
            push_stack_word(program_counter);
            program_counter = operand;
            break;
        case 0x4f:
            push_stack_word(program_counter);
            program_counter = 0xff00 | low_byte;
            break;
        case 0x5f:
            program_counter = operand;
            break;
        case 0x5a:
        case 0x7a:
        case 0x9a: {
            const uint16_t left = uint16_t(accumulator | (y_index << 8)), right = read_direct_page_word(low_byte);
            const bool is_addition = opcode == 0x7a;
            const int result = is_addition ? int(left) + right : int(left) - right;
            const uint16_t value = result;
            set_status_flag(Carry, is_addition ? result > 65535 : result >= 0);
            update_negative_zero_flags_word(value);
            if (opcode != 0x5a) {
                set_status_flag(HalfCarry, is_addition ? ((left & 0xfff) + (right & 0xfff) > 0xfff)
                                                       : ((left & 0xfff) >= (right & 0xfff)));
                set_status_flag(Overflow, (is_addition ? ~(left ^ right) : (left ^ right)) & (left ^ value) & 0x8000);
                accumulator = value;
                y_index = value >> 8;
            }
            break;
        }
        case 0x5d:
            x_index = accumulator;
            update_negative_zero_flags(x_index);
            break;
        case 0x7d:
            accumulator = x_index;
            update_negative_zero_flags(accumulator);
            break;
        case 0x9d:
            x_index = stack_pointer;
            update_negative_zero_flags(x_index);
            break;
        case 0xbd:
            stack_pointer = x_index;
            break;
        case 0xdd:
            accumulator = y_index;
            update_negative_zero_flags(accumulator);
            break;
        case 0xfd:
            y_index = accumulator;
            update_negative_zero_flags(y_index);
            break;
        case 0x6e: {
            const auto address = direct_page_address(low_byte);
            const auto value = uint8_t(read_byte(address) - 1);
            write_byte(address, value);
            branch(value != 0, high_byte);
            break;
        }
        case 0x6f:
            program_counter = pull_stack_word();
            break;
        case 0x7f:
            status_register = pull_stack_byte();
            program_counter = pull_stack_word();
            break;
        case 0x8d:
            y_index = low_byte;
            update_negative_zero_flags(y_index);
            break;
        case 0xcd:
            x_index = low_byte;
            update_negative_zero_flags(x_index);
            break;
        case 0xe8:
            accumulator = low_byte;
            update_negative_zero_flags(accumulator);
            break;
        case 0x8f:
            store(direct_page_address(high_byte), low_byte);
            break;
        // DIV YA,X has defined overflow behavior beyond ordinary integer division.
        // The alternate formula also handles X==0 without a host divide-by-zero.
        case 0x9e: {
            const unsigned accumulator_y_word = accumulator | (y_index << 8);
            set_status_flag(HalfCarry, (y_index & 15) >= (x_index & 15));
            set_status_flag(Overflow, y_index >= x_index);
            if (y_index < unsigned(x_index) * 2) {
                accumulator = accumulator_y_word / x_index;
                y_index = accumulator_y_word % x_index;
            } else {
                accumulator = 255 - (accumulator_y_word - unsigned(x_index) * 512) / (256 - x_index);
                y_index = x_index + (accumulator_y_word - unsigned(x_index) * 512) % (256 - x_index);
            }
            update_negative_zero_flags(accumulator);
            break;
        }
        case 0x9f:
            accumulator = uint8_t((accumulator << 4) | (accumulator >> 4));
            update_negative_zero_flags(accumulator);
            break;
        case 0xaf:
            write_byte(direct_page_address(x_index), accumulator);
            ++x_index;
            break;
        case 0xba: {
            const auto value = read_direct_page_word(low_byte);
            accumulator = value;
            y_index = value >> 8;
            update_negative_zero_flags_word(value);
            break;
        }
        // DAS/DAA adjust a previous BCD subtraction/addition using its H/C flags.
        // They do not reuse the 65816 decimal ALU: these are separate SPC opcodes.
        case 0xbe:
            if (!(status_register & Carry) || accumulator > 0x99) {
                accumulator -= 0x60;
                set_status_flag(Carry, false);
            }
            if (!(status_register & HalfCarry) || (accumulator & 15) > 9)
                accumulator -= 6;
            update_negative_zero_flags(accumulator);
            break;
        case 0xbf:
            accumulator = read_byte(direct_page_address(x_index));
            ++x_index;
            update_negative_zero_flags(accumulator);
            break;
        case 0xc4:
            store(direct_page_address(low_byte), accumulator);
            break;
        case 0xc5:
            store(operand, accumulator);
            break;
        case 0xc6:
            store(direct_page_address(x_index), accumulator);
            break;
        case 0xc7:
            store(read_direct_page_word(uint8_t(low_byte + x_index)), accumulator);
            break;
        case 0xc9:
            store(operand, x_index);
            break;
        case 0xcb:
            store(direct_page_address(low_byte), y_index);
            break;
        case 0xcc:
            store(operand, y_index);
            break;
        case 0xcf: {
            const auto result = unsigned(y_index) * accumulator;
            accumulator = result;
            y_index = result >> 8;
            update_negative_zero_flags(y_index);
            break;
        }
        case 0xd4:
            store(direct_page_address(uint8_t(low_byte + x_index)), accumulator);
            break;
        case 0xd5:
            store(uint16_t(operand + x_index), accumulator);
            break;
        case 0xd6:
            store(uint16_t(operand + y_index), accumulator);
            break;
        case 0xd7:
            store(uint16_t(read_direct_page_word(low_byte) + y_index), accumulator);
            break;
        case 0xd8:
            store(direct_page_address(low_byte), x_index);
            break;
        case 0xd9:
            store(direct_page_address(uint8_t(low_byte + y_index)), x_index);
            break;
        case 0xda:
            (void)read_byte(direct_page_address(low_byte));
            write_byte(direct_page_address(low_byte), accumulator);
            write_byte(direct_page_address(uint8_t(low_byte + 1)), y_index);
            break;
        case 0xdb:
            store(direct_page_address(uint8_t(low_byte + x_index)), y_index);
            break;
        case 0xdc:
            --y_index;
            update_negative_zero_flags(y_index);
            break;
        case 0xfc:
            ++y_index;
            update_negative_zero_flags(y_index);
            break;
        case 0xdf:
            if ((status_register & Carry) || accumulator > 0x99) {
                accumulator += 0x60;
                set_status_flag(Carry, true);
            }
            if ((status_register & HalfCarry) || (accumulator & 15) > 9)
                accumulator += 6;
            update_negative_zero_flags(accumulator);
            break;
        case 0xe4:
            accumulator = read_byte(direct_page_address(low_byte));
            update_negative_zero_flags(accumulator);
            break;
        case 0xe5:
            accumulator = read_byte(operand);
            update_negative_zero_flags(accumulator);
            break;
        case 0xe6:
            accumulator = read_byte(direct_page_address(x_index));
            update_negative_zero_flags(accumulator);
            break;
        case 0xe7:
            accumulator = read_byte(read_direct_page_word(uint8_t(low_byte + x_index)));
            update_negative_zero_flags(accumulator);
            break;
        case 0xe9:
            x_index = read_byte(operand);
            update_negative_zero_flags(x_index);
            break;
        case 0xeb:
            y_index = read_byte(direct_page_address(low_byte));
            update_negative_zero_flags(y_index);
            break;
        case 0xec:
            y_index = read_byte(operand);
            update_negative_zero_flags(y_index);
            break;
        case 0xef:
            is_sleeping = true;
            break;
        case 0xf4:
            accumulator = read_byte(direct_page_address(uint8_t(low_byte + x_index)));
            update_negative_zero_flags(accumulator);
            break;
        case 0xf5:
            accumulator = read_byte(uint16_t(operand + x_index));
            update_negative_zero_flags(accumulator);
            break;
        case 0xf6:
            accumulator = read_byte(uint16_t(operand + y_index));
            update_negative_zero_flags(accumulator);
            break;
        case 0xf7:
            accumulator = read_byte(uint16_t(read_direct_page_word(low_byte) + y_index));
            update_negative_zero_flags(accumulator);
            break;
        case 0xf8:
            x_index = read_byte(direct_page_address(low_byte));
            update_negative_zero_flags(x_index);
            break;
        case 0xf9:
            x_index = read_byte(direct_page_address(uint8_t(low_byte + y_index)));
            update_negative_zero_flags(x_index);
            break;
        case 0xfa: {
            const auto value = read_byte(direct_page_address(low_byte));
            write_byte(direct_page_address(high_byte), value);
            break;
        }
        case 0xfb:
            y_index = read_byte(direct_page_address(uint8_t(low_byte + x_index)));
            update_negative_zero_flags(y_index);
            break;
        case 0xfe:
            --y_index;
            branch(y_index != 0, low_byte);
            break;
        case 0xff:
            is_stopped = true;
            break;
        default:
            throw std::logic_error("SPC opcode semantic missing: " + std::to_string(opcode));
        }
    advance_audio_cycles(elapsed_audio_cycles);
}

bool Spc700AudioCpu::execute_boot_rom_instruction() {
    // Static translation of the original 64-byte S-SMP boot ROM (fullsnes IPL listing).
    // Its real load/store/branch instructions implement all upload handshakes.
    switch (program_counter) {
    case 0xffc0:
        execute_instruction<0xcd>(0xef, 2);
        break;
    case 0xffc2:
        execute_instruction<0xbd>(0, 1);
        break;
    case 0xffc3:
        execute_instruction<0xe8>(0, 2);
        break;
    case 0xffc5:
        execute_instruction<0xc6>(0, 1);
        break;
    case 0xffc6:
        execute_instruction<0x1d>(0, 1);
        break;
    case 0xffc7:
        execute_instruction<0xd0>(0xfc, 2);
        break;
    case 0xffc9:
        execute_instruction<0x8f>(0xf4aa, 3);
        break;
    case 0xffcc:
        execute_instruction<0x8f>(0xf5bb, 3);
        break;
    case 0xffcf:
        execute_instruction<0x78>(0xf4cc, 3);
        break;
    case 0xffd2:
        execute_instruction<0xd0>(0xfb, 2);
        break;
    case 0xffd4:
        execute_instruction<0x2f>(0x19, 2);
        break;
    case 0xffd6:
        execute_instruction<0xeb>(0xf4, 2);
        break;
    case 0xffd8:
        execute_instruction<0xd0>(0xfc, 2);
        break;
    case 0xffda:
        execute_instruction<0x7e>(0xf4, 2);
        break;
    case 0xffdc:
        execute_instruction<0xd0>(0x0b, 2);
        break;
    case 0xffde:
        execute_instruction<0xe4>(0xf5, 2);
        break;
    case 0xffe0:
        execute_instruction<0xcb>(0xf4, 2);
        break;
    case 0xffe2:
        execute_instruction<0xd7>(0, 2);
        break;
    case 0xffe4:
        execute_instruction<0xfc>(0, 1);
        break;
    case 0xffe5:
        execute_instruction<0xd0>(0xf3, 2);
        break;
    case 0xffe7:
        execute_instruction<0xab>(1, 2);
        break;
    case 0xffe9:
        execute_instruction<0x10>(0xef, 2);
        break;
    case 0xffeb:
        execute_instruction<0x7e>(0xf4, 2);
        break;
    case 0xffed:
        execute_instruction<0x10>(0xeb, 2);
        break;
    case 0xffef:
        execute_instruction<0xba>(0xf6, 2);
        break;
    case 0xfff1:
        execute_instruction<0xda>(0, 2);
        break;
    case 0xfff3:
        execute_instruction<0xba>(0xf4, 2);
        break;
    case 0xfff5:
        execute_instruction<0xc4>(0xf4, 2);
        break;
    case 0xfff7:
        execute_instruction<0xdd>(0, 1);
        break;
    case 0xfff8:
        execute_instruction<0x5d>(0, 1);
        break;
    case 0xfff9:
        execute_instruction<0xd0>(0xdb, 2);
        break;
    case 0xfffb:
        execute_instruction<0x1f>(0, 3);
        break;
    default:
        return false;
    }
    return true;
}
} // namespace eb
