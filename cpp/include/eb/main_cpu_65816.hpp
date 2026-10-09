#pragma once
#include "eb/game_version.hpp"
#include "eb/entity_preload.hpp"
#include <cstdint>
#include <functional>
#include <span>
#include <string>

namespace eb {
class SnesBus;
class SnapshotArchive;
struct SourceProfile;
namespace native_reference { class OriginalObjectInstructions; class OriginalGlobalDrawInstructions; }
namespace game::runtime {
class Instruction;
class NativeGameplay;
}
// The generated translation remains available as a verification oracle. The
// ported runtime owns declared source sites and delegates only unported sites.
enum class MainCpuRuntime { Ported, Legacy };
struct MainCpuTimingSnapshot {
    bool extra_gameplay_budget_enabled, entity_update_active, instruction_uses_extra_budget, instruction_touches_io;
    std::uint16_t entity_update_entry_stack;
    unsigned interrupt_nesting_depth, extra_budget_clock_remainder, entity_update_master_clocks;
    unsigned memory_wait_master_clocks;
    bool operator==(const MainCpuTimingSnapshot&) const = default;
};
// Architectural state retained by the assembly-to-C++ translation. Program
// instructions are compiled call sites, never fetched/decoded from ROM here.
class MainCpu65816 {
  public:
    explicit MainCpu65816(SnesBus &hardware);
    explicit MainCpu65816(std::span<std::uint8_t> flat_memory,
                         GameVersion version = GameVersion::US); // independent vector tests
    // The generated dispatch chooses a compiled US or JP instruction site
    // using this immutable profile. Flat-memory semantic tests default to US.
    const GameVersion game_version = GameVersion::US;
    // A retains its hidden high byte in 8-bit accumulator mode. X/Y instead
    // lose their high bytes when the index-width flag becomes 8-bit. PC stores
    // the program bank and 16-bit offset together; DBR is the data bank.
    std::uint16_t accumulator{}, x_index{}, y_index{}, stack_pointer{0x1ff}, direct_page{};
    std::uint8_t status_register{0x34}, data_bank{};
    std::uint32_t program_counter{};
    // E selects emulation-mode stack/page rules independently of P. WAI can
    // resume on an interrupt request; STP remains stopped until reset.
    bool emulation_mode{true}, is_stopped{}, is_waiting{};
    std::uint64_t instruction_count{}, cycle_count{};
    // Optional audit hook sees ordered writes before mutation, including
    // repeated writes to the same address. It must not change machine state.
    std::function<void(std::uint32_t, std::uint8_t)> observe_memory_write;
    enum StatusFlag : std::uint8_t {
        Carry = 1,
        Zero = 2,
        InterruptDisable = 4,
        Decimal = 8,
        Index8Bit = 16,
        Accumulator8Bit = 32,
        Overflow = 64,
        Negative = 128
    };
    // Desktop policy: give the overworld entity pass extra compute capacity.
    // Hardware fixtures and original-timing comparisons retain native clocks.
    void set_gameplay_timing(bool enabled);
    // Unguarded compatibility fixture; 256 keeps the original source bounds.
    void set_entity_preload_width(unsigned width) { entity_preload_.set_width(width); }
    // Guarded desktop loading using viewport and imported artwork bounds.
    void set_world_preload_width(unsigned width);
    void set_runtime(MainCpuRuntime runtime) { runtime_ = runtime; }
    MainCpuRuntime runtime() const { return runtime_; }
    // Read-only verification of timing state that affects future source steps.
    MainCpuTimingSnapshot timing_snapshot() const;
    void reset_from_vector();
    void step_instruction();
    // Normal gameplay may retire a bounded native chunk between hardware
    // events. Debuggers and per-instruction observers keep step_instruction().
    // Returns source step calls consumed, including a serviced interrupt.
    unsigned advance_gameplay(unsigned maximum_steps);
    std::uint64_t native_gameplay_batches() const { return native_gameplay_batches_; }
    void service_interrupt(bool nmi);
    std::string describe_registers() const;
    void snapshot_io(SnapshotArchive &archive);
    // Generated sites supply fixed opcode/operand/length values. Sharing the
    // semantic helper keeps register and flag behavior consistent across both
    // game translations without interpreting instruction bytes at runtime.
    template <unsigned Opcode> void execute_instruction(std::uint32_t operand, unsigned length) {
        static_assert(Opcode < 256);
        execute_opcode_semantics(Opcode, operand, length);
    }
    void execute_opcode_semantics(std::uint8_t opcode, std::uint32_t operand, unsigned length);
    std::uint8_t read_byte(std::uint32_t address);
    void write_byte(std::uint32_t address, std::uint8_t value);

  private:
    friend class game::runtime::Instruction;
    friend class game::runtime::NativeGameplay;
    friend class native_reference::OriginalObjectInstructions;
    friend class native_reference::OriginalGlobalDrawInstructions;
    bool prepare_instruction();
    void execute_prepared_instruction();
    std::uint64_t native_gameplay_batches_ = 0;
    MainCpuRuntime runtime_ = MainCpuRuntime::Ported;
    SnesBus *hardware_{};
    EntityPreload entity_preload_;
    const SourceProfile *source_profile_{};
    bool extra_gameplay_budget_enabled_{}, entity_update_active_{}, instruction_uses_extra_budget_{},
        instruction_touches_io_{};
    std::uint16_t entity_update_entry_stack_{};
    unsigned interrupt_nesting_depth_{}, extra_budget_clock_remainder_{}, entity_update_master_clocks_{};
    std::span<std::uint8_t> flat_test_memory_;
    // Base instruction cycles assume six master clocks per cycle. Accesses
    // accumulate only the extra cost of slower memory regions here.
    unsigned memory_wait_master_clocks_{};
    bool accumulator_is_8_bit() const { return status_register & Accumulator8Bit; }
    bool index_is_8_bit() const { return status_register & Index8Bit; }
    void set_status_flag(StatusFlag f, bool value) {
        status_register = value ? status_register | f : status_register & ~f;
    }
    void update_negative_zero_flags(std::uint16_t value, bool byte_operand);
    void set_status_register(std::uint8_t value);
    void set_accumulator(std::uint16_t value);
    void push_byte(std::uint8_t value);
    std::uint8_t pull_byte();
    void push_word(std::uint16_t value);
    std::uint16_t pull_word();
    std::uint16_t read_word(std::uint32_t address, bool bank_wrap = false);
    void write_word(std::uint32_t address, std::uint16_t value, bool bank_wrap = false);
    std::uint16_t direct_page_address(std::uint8_t offset, std::uint16_t index = 0) const;
    std::uint32_t read_direct_page_pointer(std::uint8_t offset, bool long_pointer = false,
                                           std::uint16_t index = 0);
    std::uint16_t add_or_subtract(std::uint16_t value, bool subtract);
    void advance_instruction_cycles(unsigned instruction_cycles);
};
// Generated program entry: execute one source site at main_cpu.program_counter, or return false
// for an address absent from the static translation. There is no decoder fallback.
bool execute_translated_main_instruction(MainCpu65816 &main_cpu);
} // namespace eb
