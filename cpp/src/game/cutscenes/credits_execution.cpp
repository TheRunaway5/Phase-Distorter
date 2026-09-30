#include "eb/game/runtime/native_execution.hpp"

#include "eb/game/cutscenes/credits_state.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <array>
#include <span>

namespace eb::game::runtime {
namespace {
class CreditsMemory final : public cutscenes::CreditsMemory {
  public:
    explicit CreditsMemory(std::span<std::uint8_t> bytes) : bytes_(bytes) {}
    std::uint8_t read_byte(std::uint32_t address) const override { return bytes_[address - 0x7e0000]; }
    void write_byte(std::uint32_t address, std::uint8_t value) override { bytes_[address - 0x7e0000] = value; }
    std::uint16_t word(unsigned offset) const {
        return bytes_[offset] | (std::uint16_t(bytes_[offset + 1]) << 8);
    }
    std::uint32_t long_word(unsigned offset) const {
        return word(offset) | (std::uint32_t(word(offset + 2)) << 16);
    }
    void word(unsigned offset, std::uint16_t value) {
        bytes_[offset] = value;
        bytes_[offset + 1] = value >> 8;
    }
    void long_word(unsigned offset, std::uint32_t value) {
        word(offset, value);
        word(offset + 2, value >> 16);
    }
  private:
    std::span<std::uint8_t> bytes_;
};

enum class Body { QueueSetup, Descriptor, PublishHead, Scroll, None };
Body body_at(std::uint32_t pc, bool japanese) {
    if (pc == (japanese ? 0xc4c008u : 0xc4efceu)) return Body::QueueSetup;
    if (pc == (japanese ? 0xc4c028u : 0xc4efeeu)) return Body::Descriptor;
    if (pc == (japanese ? 0xc4c048u : 0xc4f00eu)) return Body::PublishHead;
    if (pc == (japanese ? 0xc0ff3eu : 0xc0f89au)) return Body::Scroll;
    return Body::None;
}

// Timing metadata only. Preserve each original instruction's APU slice while
// ordinary C++ implements credits state changes. ENQUEUE_CREDITS_DMA's first
// two chunks temporarily select M8, but both begin/end M16. Their narrow stores
// and corresponding cycles are accounted for explicitly.
constexpr std::array<NativeTimingSlice, 18> setup_time{{
    {4,2,2,true}, {2,1,0,false}, {3,2,0,false}, {3,2,1,true}, {3,2,0,false},
    {4,2,2,true}, {4,2,2,true}, {4,2,2,true}, {4,2,2,true}, {5,3,2,false},
    {4,2,2,true}, {2,1,0,false}, {2,1,0,false}, {2,1,0,false}, {4,2,2,true},
    {2,1,0,false}, {3,3,0,false}, {2,1,0,false}
}};
constexpr std::array<NativeTimingSlice, 16> descriptor_time{{
    {3,2,0,false}, {3,2,1,true}, {5,3,1,false}, {3,2,0,false}, {2,1,0,false},
    {6,3,2,false}, {2,1,0,false}, {2,1,0,false}, {2,1,0,false}, {2,1,0,false},
    {4,2,2,true}, {6,3,2,false}, {4,2,2,true}, {6,3,2,false},
    {4,2,2,true}, {6,3,2,false}
}};
constexpr std::array<NativeTimingSlice, 5> head_time{{
    {5,3,2,false}, {2,1,0,false}, {5,3,2,false}, {3,3,0,false}, {5,3,2,false}
}};
std::span<const NativeTimingSlice> scroll_time(std::array<NativeTimingSlice, 15>& slices, bool carry) {
    slices = {{{5,3,2,false}, {4,2,2,true}, {5,3,2,false}, {4,2,2,true}, {2,1,0,false},
               {4,2,2,true}, {3,3,0,false}, {4,2,2,true}, {carry ? 2u : 3u,2,0,false}}};
    unsigned count = 9;
    if (carry) slices[count++] = {7,2,4,true};
    slices[count++] = {4,2,2,true};
    slices[count++] = {5,3,2,false};
    slices[count++] = {4,2,2,true};
    slices[count++] = {5,3,2,false};
    slices[count++] = {5,3,2,false};
    return {slices.data(), count};
}
} // namespace

unsigned NativeGameplay::try_credits_state(MainCpu65816& cpu, unsigned maximum_steps) {
    const auto start = cpu.program_counter;
    const bool japanese = cpu.game_version == GameVersion::JP;
    const auto body = body_at(start, japanese);
    if (body == Body::None || (cpu.status_register & MainCpu65816::Decimal)) return 0;

    const auto dp = cpu.direct_page;
    // The foreground compiler arena and the source's NMI callback frames are
    // separate from queue records, scroll globals and the main graphics queue
    // indices. irq_nmi.asm sets D=$0200 before invoking CREDITS_SCROLL_FRAME;
    // its regional locals reserve $25/$24 bytes, and ENQUEUE_CREDITS_DMA reserves
    // another $0f. Admit these exact low frames, not arbitrary low direct pages.
    // Head publication has no direct-page accesses or frame restriction.
    const auto last_local = body == Body::QueueSetup ? 0x20u : body == Body::Descriptor ? 0x0eu : 0x09u;
    const auto callback_frame = body == Body::Scroll ? (japanese ? 0x01dcu : 0x01dbu)
                                                   : (japanese ? 0x01cdu : 0x01ccu);
    const bool foreground_frame = dp >= 0x1c00 && dp <= 0x1eff - last_local;
    if (body != Body::PublishHead && !foreground_frame && dp != callback_frame) return 0;
    auto& hardware = *cpu.hardware_;
    CreditsMemory memory(hardware.work_ram);
    cutscenes::CreditsState credits(memory, cpu.game_version);
    const auto& layout = cutscenes::CreditsLayout::for_version(cpu.game_version);

    // A descriptor checkpoint uses the source's captured X. Do not resolve
    // the current head again: it may have changed since setup completed.
    if (body == Body::Descriptor &&
        (cpu.x_index < layout.descriptor_buffer ||
         (cpu.x_index - layout.descriptor_buffer) % 9 != 0 ||
         (cpu.x_index - layout.descriptor_buffer) / 9 >= 128)) return 0;
    const auto head = body == Body::QueueSetup || body == Body::PublishHead ? credits.queue_head() : 0;
    // OPTIMIZED_MULT's shifted carry is zero for the valid 128-slot queue.
    // Noncanonical indices retain exact source arithmetic and addressing.
    if (body == Body::QueueSetup && head >= 128) return 0;
    const auto previous_scroll = body == Body::Scroll ? credits.scroll_position() : 0;
    std::array<NativeTimingSlice, 15> scroll_slices{};
    std::span<const NativeTimingSlice> timing;
    switch (body) {
        case Body::QueueSetup: timing = setup_time; break;
        case Body::Descriptor: timing = descriptor_time; break;
        case Body::PublishHead: timing = head_time; break;
        case Body::Scroll: timing = scroll_time(scroll_slices, (previous_scroll & 0xffff) >= 0xc000); break;
        case Body::None: return 0;
    }
    if (!admit(cpu, timing, maximum_steps)) return 0;

    const auto add_flags = [&](std::uint16_t left, std::uint16_t right) {
        const auto sum = unsigned(left) + right;
        cpu.set_status_flag(MainCpu65816::Carry, sum > 0xffff);
        cpu.set_status_flag(MainCpu65816::Overflow, (~(left ^ right) & (left ^ sum) & 0x8000) != 0);
    };
    std::uint32_t last_access;
    if (body == Body::QueueSetup) {
        memory.word(dp + 2, cpu.y_index);
        memory.write_byte(0x7e0000 + dp + 0x0e, std::uint8_t(cpu.accumulator));
        memory.long_word(dp + 6, memory.long_word(dp + 0x1d));
        memory.word(dp + 4, head);
        cpu.accumulator = credits.descriptor_address(head);
        cpu.y_index = cpu.x_index;
        cpu.x_index = cpu.accumulator;
        add_flags(std::uint16_t(head * 9), layout.descriptor_buffer);
        cpu.program_counter = start + 0x20;
        last_access = start + 0x1f; // TAX opcode after the final address ADC.
    } else if (body == Body::Descriptor) {
        const cutscenes::CreditsTransfer transfer{
            memory.read_byte(0x7e0000 + dp + 0x0e), cpu.y_index,
            memory.long_word(dp + 6), memory.word(dp + 2)};
        credits.publish_descriptor(cpu.x_index, transfer);
        cpu.accumulator = transfer.destination_word;
        cpu.y_index = cpu.x_index + 3;
        cpu.program_counter = start + 0x20;
        last_access = 0x7e0000 + cpu.x_index + 8;
    } else if (body == Body::PublishHead) {
        cpu.accumulator = credits.advance_queue_head(head);
        cpu.program_counter = start + 0x0d;
        last_access = layout.queue_head + 1;
    } else {
        const auto next = credits.advance_scroll_from(previous_scroll);
        memory.long_word(dp + 6, next);
        cpu.accumulator = next >> 16;
        add_flags(std::uint16_t(previous_scroll), 0x4000);
        cpu.program_counter = start + 0x23;
        last_access = layout.background_three_y + 1;
    }
    cpu.update_negative_zero_flags(cpu.accumulator, false);
    hardware.read_byte(last_access);
    retire(cpu, timing, start);
    return unsigned(timing.size());
}
} // namespace eb::game::runtime
