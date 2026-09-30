#include "eb/game/runtime/native_execution.hpp"

#include "eb/game/dialogue/control_flow.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <array>
#include <span>

namespace eb::game::runtime {
namespace {
class DialogueMemory final : public dialogue::RegisterMemory {
  public:
    explicit DialogueMemory(std::span<std::uint8_t> bytes) : bytes_(bytes) {}
    std::uint8_t read_byte(std::uint32_t address) const override { return bytes_[address - 0x7e0000]; }
    void write_byte(std::uint32_t address, std::uint8_t value) override { bytes_[address - 0x7e0000] = value; }
    std::uint16_t word(unsigned address) const {
        return bytes_[address] | (std::uint16_t(bytes_[address + 1]) << 8);
    }
    std::uint32_t long_word(unsigned address) const {
        return word(address) | (std::uint32_t(word(address + 2)) << 16);
    }
    void word(unsigned address, std::uint16_t value) {
        bytes_[address] = value;
        bytes_[address + 1] = value >> 8;
    }
    void long_word(unsigned address, std::uint32_t value) {
        word(address, value);
        word(address + 2, value >> 16);
    }
  private:
    std::span<std::uint8_t> bytes_;
};

enum class Body { GetWorking, GetArgument, SetWorking, SetArgument, GetSecondary,
                  SetSecondary, IncrementSecondary,
                  StoreWorking, StoreArgument, StoreSecondary,
                  RestoreWorking, RestoreArgument, RestoreSecondary,
                  BranchZero, BranchNonzero, SkipOperand, None };
Body body_at(std::uint32_t address, bool japanese) {
    const auto helper = address - (japanese ? 0x203u : 0u);
    switch (helper) {
        case 0xc10415: return Body::GetWorking;
        case 0xc103e7: return Body::GetArgument;
        case 0xc10470: return Body::SetWorking;
        case 0xc1049c: return Body::SetArgument;
        case 0xc10405: return Body::GetSecondary;
        case 0xc10453: return Body::SetSecondary;
        case 0xc10433: return Body::IncrementSecondary;
        case 0xc1032f: return Body::StoreWorking;
        case 0xc10351: return Body::StoreArgument;
        case 0xc10373: return Body::StoreSecondary;
        case 0xc1038b: return Body::RestoreWorking;
        case 0xc103ad: return Body::RestoreArgument;
        case 0xc103cf: return Body::RestoreSecondary;
    }
    if (address == (japanese ? 0xc17ef4u : 0xc17c7fu)) return Body::BranchZero;
    if (address == (japanese ? 0xc17f32u : 0xc17cbdu)) return Body::BranchNonzero;
    if (address == (japanese ? 0xc17f10u : 0xc17c9bu) ||
        address == (japanese ? 0xc17f4eu : 0xc17cd9u)) return Body::SkipOperand;
    return Body::None;
}

// Per-source-instruction clock slices preserve APU callback boundaries. These
// contain timing and access counts only; domain code supplies the behavior.
// Provenance: ebsrc src/text/{get,set}_*_memory.asm,
// increment_secondary_memory.asm and ccs/tree_1B.asm, US and JP linked images.
constexpr std::array<NativeTimingSlice, 11> get_long_time{{
    {2,1,0,false}, {3,3,0,false}, {2,1,0,false}, {6,3,2,false},
    {4,2,2,true}, {6,3,2,false}, {4,2,2,true}, {4,2,2,true},
    {4,2,2,true}, {4,2,2,true}, {4,2,2,true}
}};
constexpr std::array<NativeTimingSlice, 11> set_long_time{{
    {2,1,0,false}, {3,3,0,false}, {2,1,0,false}, {4,2,2,true},
    {6,3,2,false}, {4,2,2,true}, {6,3,2,false}, {4,2,2,true},
    {4,2,2,true}, {4,2,2,true}, {4,2,2,true}
}};
constexpr std::array<NativeTimingSlice, 2> get_secondary_time{{
    {2,1,0,false}, {6,3,2,false}
}};
constexpr std::array<NativeTimingSlice, 5> set_secondary_time{{
    {2,1,0,false}, {4,2,2,true}, {2,1,0,false}, {6,3,2,false}, {2,1,0,false}
}};
constexpr std::array<NativeTimingSlice, 7> increment_secondary_time{{
    {2,1,0,false}, {3,3,0,false}, {2,1,0,false}, {6,3,2,false},
    {6,3,2,false}, {2,1,0,false}, {6,3,2,false}
}};
// transfer_{active_mem_storage,storage_mem_active}.asm lines 8..17 and
// 18..27. Each complete 32-bit field is one domain transfer; the first begins
// with STA @LOCAL00, the second with LDA @LOCAL00 (same cycle/access cost).
// US starts $c1032f/$c10351/$c1038b/$c103ad; JP starts are each +$203.
constexpr std::array<NativeTimingSlice, 16> transfer_long_time{{
    {4,2,2,true}, {2,1,0,false}, {3,3,0,false}, {2,1,0,false},
    {6,3,2,false}, {4,2,2,true}, {6,3,2,false}, {4,2,2,true},
    {4,2,2,true}, {2,1,0,false}, {3,3,0,false}, {2,1,0,false},
    {4,2,2,true}, {6,3,2,false}, {4,2,2,true}, {6,3,2,false}
}};
// The secondary tails (source lines 28..33) keep PHA/PLX's stack writes.
// PLX supplies the final N/Z flags; they do not describe the copied word.
constexpr std::array<NativeTimingSlice, 6> transfer_secondary_time{{
    {4,2,2,true}, {4,1,2,false}, {2,1,0,false},
    {6,3,2,false}, {5,1,2,false}, {6,3,2,false}
}};
constexpr std::array<NativeTimingSlice, 13> skip_operand_time{{
    {4,2,2,true}, {6,3,2,false}, {4,2,2,true}, {6,3,2,false},
    {4,2,2,true}, {3,3,0,false}, {2,1,0,false}, {4,2,2,true},
    {4,2,2,true}, {6,3,2,false}, {4,2,2,true}, {6,3,2,false}, {3,3,0,false}
}};
std::span<const NativeTimingSlice> branch_time(std::array<NativeTimingSlice, 12>& slices,
                                             bool high_nonzero, bool jump) {
    slices = {{{3,3,0,false}, {4,2,2,true}, {3,3,0,false}, {4,2,2,true},
               {4,2,2,true}, {4,2,2,true}, {high_nonzero ? 3u : 2u,2,0,false}}};
    unsigned count = 7;
    if (!high_nonzero) {
        slices[count++] = {4,2,2,true};
        slices[count++] = {4,2,2,true};
    }
    slices[count++] = {jump ? 2u : 3u,2,0,false};
    if (jump) {
        slices[count++] = {3,3,0,false};
        slices[count++] = {3,3,0,false};
    }
    return {slices.data(), count};
}
} // namespace

unsigned NativeGameplay::try_dialogue_registers(MainCpu65816& cpu, unsigned maximum_steps) {
    const bool japanese = cpu.game_version == GameVersion::JP;
    const auto start = cpu.program_counter;
    const auto body = body_at(start, japanese);
    const bool transfer = body >= Body::StoreWorking && body <= Body::RestoreSecondary;
    const bool transfer_first = body == Body::StoreWorking || body == Body::RestoreWorking;
    const bool transfer_secondary = body == Body::StoreSecondary || body == Body::RestoreSecondary;
    if (body == Body::None || (cpu.status_register & MainCpu65816::Decimal) ||
        cpu.direct_page < 0x1c00 || cpu.direct_page > (transfer ? 0x1ef0 : 0x1ee8))
        return 0;
    // These tails temporarily push the captured window base. Keep both bytes
    // in ordinary low WRAM and above the C-frame arena, separate from every
    // admitted window. Other stack layouts use the original instructions.
    if (transfer_secondary && (cpu.stack_pointer < 0x1f01 || cpu.stack_pointer > 0x1fff))
        return 0;

    auto& hardware = *cpu.hardware_;
    DialogueMemory memory(hardware.work_ram);
    const auto dp = cpu.direct_page;
    // The compiler stack and DMA queue must not alias window or cursor storage.
    // Unusual layouts retain exact stepping. Helpers begin after the original
    // GET_ACTIVE_WINDOW_ADDRESS call, so A is its captured result; resolving
    // focus again here would change behavior if another window gained focus.
    const bool helper = body <= Body::IncrementSecondary;
    const auto window_address = transfer && !transfer_first ? memory.word(dp + 0x0e) : cpu.accumulator;
    if ((helper || transfer) && (window_address < 0x2000 || window_address > (japanese ? 0xffb4u : 0xffaeu)))
        return 0;
    const auto cursor = body == Body::SkipOperand ? memory.word(dp + 0x16) : 0;
    if (body == Body::SkipOperand && cursor < 0x2000)
        return 0;

    std::array<NativeTimingSlice, 12> branch_slices{};
    std::span<const NativeTimingSlice> timing;
    bool jump = false;
    std::uint32_t working = 0;
    switch (body) {
        case Body::GetWorking: case Body::GetArgument: timing = get_long_time; break;
        case Body::SetWorking: case Body::SetArgument: timing = set_long_time; break;
        case Body::GetSecondary: timing = get_secondary_time; break;
        case Body::SetSecondary: timing = set_secondary_time; break;
        case Body::IncrementSecondary: timing = increment_secondary_time; break;
        case Body::StoreWorking: case Body::StoreArgument:
        case Body::RestoreWorking: case Body::RestoreArgument: timing = transfer_long_time; break;
        case Body::StoreSecondary: case Body::RestoreSecondary: timing = transfer_secondary_time; break;
        case Body::SkipOperand: timing = skip_operand_time; break;
        case Body::BranchZero: case Body::BranchNonzero:
            working = memory.long_word(dp + 6);
            jump = dialogue::should_jump(body == Body::BranchZero ? dialogue::WorkingBranch::Zero
                                                                              : dialogue::WorkingBranch::Nonzero,
                                         working);
            timing = branch_time(branch_slices, (working >> 16) != 0, jump);
            break;
        case Body::None: return 0;
    }
    if (!admit(cpu, timing, maximum_steps))
        return 0;

    // Match the source's address-arithmetic flags independently of the value
    // flags. Subsequent loads/stores change N/Z but leave ADC's C/V intact.
    const auto address_flags = [&](std::uint16_t left, std::uint16_t right) {
        const auto sum = unsigned(left) + right;
        cpu.set_status_flag(MainCpu65816::Carry, sum > 0xffff);
        cpu.set_status_flag(MainCpu65816::Overflow, (~(left ^ right) & (left ^ sum) & 0x8000) != 0);
    };
    auto registers = dialogue::RegisterBank(memory, cpu.game_version).window_at(window_address);
    std::uint32_t last_access = 0;
    if (transfer) {
        const bool store = body <= Body::StoreSecondary;
        const auto field = transfer_secondary ? dialogue::RegisterField::Secondary
            : transfer_first ? dialogue::RegisterField::Working : dialogue::RegisterField::Argument;
        const auto active_offset = transfer_secondary ? dialogue::WindowRegisters::secondary_offset
            : transfer_first ? dialogue::WindowRegisters::working_offset : dialogue::WindowRegisters::argument_offset;
        const auto storage_offset = transfer_secondary ? dialogue::WindowRegisters::secondary_storage_offset
            : transfer_first ? dialogue::WindowRegisters::working_storage_offset
                             : dialogue::WindowRegisters::argument_storage_offset;
        const auto destination_offset = store ? storage_offset : active_offset;
        if (transfer_first) memory.word(dp + 0x0e, window_address);
        if (transfer_secondary) {
            // Native-mode PHA writes high then low before PLX restores X/S.
            memory.write_byte(0x7e0000 + cpu.stack_pointer, std::uint8_t(window_address >> 8));
            memory.write_byte(0x7e0000 + cpu.stack_pointer - 1, std::uint8_t(window_address));
        }
        const auto value = registers.transfer_storage(field,
            store ? dialogue::StorageDirection::Store : dialogue::StorageDirection::Restore);
        if (transfer_secondary) {
            cpu.accumulator = std::uint16_t(value);
            cpu.x_index = window_address;
            cpu.program_counter = start + 0x0b;
        } else {
            memory.long_word(dp + 6, value);
            cpu.accumulator = value >> 16;
            cpu.y_index = window_address + destination_offset;
            address_flags(window_address, destination_offset);
            cpu.program_counter = start + 0x22;
        }
        last_access = 0x7e0000 + window_address + destination_offset + (transfer_secondary ? 1 : 3);
    } else if (body == Body::BranchZero || body == Body::BranchNonzero) {
        memory.long_word(dp + 0x0a, 0);
        cpu.set_status_flag(MainCpu65816::Carry, true);
        cpu.accumulator = jump ? (japanese ? 0x4525 : 0x4103)
                               : std::uint16_t(working >> 16 ? working >> 16 : working);
        cpu.program_counter = jump ? (japanese ? 0xc17fffu : 0xc17d92u) : start + 0x1c;
        last_access = start + (jump ? 0x1b : 0x15);
    } else if (body == Body::SkipOperand) {
        const auto previous = memory.long_word(cursor);
        dialogue::skip_jump_operand(memory, cursor);
        const auto advanced = (previous & 0xffff0000) | std::uint16_t(previous + 4);
        memory.long_word(dp + 6, advanced);
        cpu.accumulator = previous >> 16;
        cpu.y_index = cursor;
        address_flags(std::uint16_t(previous), 4);
        cpu.program_counter = japanese ? 0xc17ffa : 0xc17d8d;
        last_access = start + 0x1e;
    } else if (body == Body::GetSecondary || body == Body::SetSecondary) {
        cpu.x_index = window_address;
        if (body == Body::GetSecondary) {
            cpu.accumulator = registers.secondary();
            cpu.program_counter = start + 4;
            last_access = 0x7e0000 + window_address + dialogue::WindowRegisters::secondary_offset + 1;
        } else {
            cpu.accumulator = registers.set_secondary(memory.word(dp + 0x0e));
            cpu.y_index = cpu.accumulator;
            cpu.program_counter = start + 8;
            last_access = start + 7;
        }
    } else if (body == Body::IncrementSecondary) {
        cpu.accumulator = registers.increment_secondary();
        cpu.x_index = window_address + dialogue::WindowRegisters::secondary_offset;
        address_flags(window_address, dialogue::WindowRegisters::secondary_offset);
        cpu.program_counter = start + 0x0f;
        last_access = 0x7e0000 + cpu.x_index + 1;
    } else {
        const bool argument = body == Body::GetArgument || body == Body::SetArgument;
        const bool get = body == Body::GetArgument || body == Body::GetWorking;
        const auto offset = argument ? dialogue::WindowRegisters::argument_offset : dialogue::WindowRegisters::working_offset;
        const auto value = get ? (argument ? registers.argument() : registers.working()) : memory.long_word(dp + 6);
        if (get) memory.long_word(dp + 6, value);
        else if (argument) registers.set_argument(value);
        else registers.set_working(value);
        memory.long_word(dp + 0x14, value);
        cpu.accumulator = value >> 16;
        cpu.y_index = window_address + offset;
        address_flags(window_address, offset);
        cpu.program_counter = start + 0x17;
        last_access = 0x7e0000 + dp + 0x17;
    }
    cpu.update_negative_zero_flags(transfer_secondary ? window_address : cpu.accumulator, false);
    hardware.read_byte(last_access);
    retire(cpu, timing, start);
    return unsigned(timing.size());
}
} // namespace eb::game::runtime
