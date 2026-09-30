#pragma once

#include "eb/game_version.hpp"
#include <cstdint>

namespace eb::game::dialogue {

// Borrow authoritative WRAM directly. Addresses are full SNES addresses in
// banks $7e/$7f; implementations must not maintain a second register-bank copy.
// These byte operations describe domain reads/publications, not CPU bus cycles.
class RegisterMemory {
  public:
    virtual ~RegisterMemory() = default;
    virtual std::uint8_t read_byte(std::uint32_t address) const = 0;
    virtual void write_byte(std::uint32_t address, std::uint8_t value) = 0;
};

enum class RegisterField { Working, Argument, Secondary };
enum class StorageDirection { Store, Restore };

// A borrowed view of one window_stats record, including DUMMY_WINDOW. Capturing
// its address retains the original GET_ACTIVE_WINDOW_ADDRESS result if focus
// changes before a native adapter resumes. No register values are retained.
class WindowRegisters {
  public:
    // include/structs.asm: window_stats. Identical in the US and JP layouts;
    // the regional record-size difference occurs in the trailing title field.
    static constexpr std::uint16_t working_offset = 23;
    static constexpr std::uint16_t argument_offset = 27;
    static constexpr std::uint16_t secondary_offset = 31;
    static constexpr std::uint16_t working_storage_offset = 33;
    static constexpr std::uint16_t argument_storage_offset = 37;
    static constexpr std::uint16_t secondary_storage_offset = 41;

    WindowRegisters(RegisterMemory& memory, std::uint16_t window_address)
        : memory_(memory), window_address_(window_address) {}

    std::uint32_t working() const;
    std::uint32_t argument() const;
    std::uint16_t secondary() const;
    std::uint32_t set_working(std::uint32_t value);
    std::uint32_t set_argument(std::uint32_t value);
    std::uint16_t set_secondary(std::uint16_t value);
    std::uint16_t increment_secondary();

    // Transfer one complete field between its live and per-window storage
    // locations. Returns the copied value (secondary is zero-extended). Both
    // whole-bank operations and resumable native checkpoints use this same
    // publication, without retaining a second copy of the window's state.
    std::uint32_t transfer_storage(RegisterField field, StorageDirection direction);

    // CC_1B selectors 0/1: copy all three registers to/from this window's
    // storage fields. Copy order is working, argument, then secondary.
    void store_active();
    void restore_active();
    // CC_1B selector 4 exchanges the two complete 32-bit values only.
    void swap_working_argument();

  private:
    std::uint32_t address(std::uint16_t offset) const;
    RegisterMemory& memory_;
    std::uint16_t window_address_;
};

// Domain behavior of src/text/{get,set}_*_memory.asm,
// increment_secondary_memory.asm, transfer_{active_mem_storage,storage_mem_active}.asm,
// and src/text/ccs/tree_1B.asm selectors 0/1/4/5/6. Region-specific addresses
// come from the linked US/JP symbols, not an assumed regional displacement.
//
// This view assumes valid window metadata, WRAM data bank $7e, binary arithmetic,
// and stable memory during each synchronous operation. A supplied window base
// must identify a complete window_stats record inside bank $7e. It does not model
// CPU flags/scratch writes, MULT168 hardware effects, clocks, or interrupts;
// a native scheduler must preserve those at the original retirement boundaries.
// The memory object must outlive this view and every returned WindowRegisters.
class RegisterBank {
  public:
    RegisterBank(RegisterMemory& memory, GameVersion version)
        : memory_(memory), version_(version) {}

    // Low 16 bits of the WRAM address, matching GET_ACTIVE_WINDOW_ADDRESS's A.
    // WINDOW_HEAD == $ffff selects DUMMY_WINDOW; otherwise focus indexes the
    // OPEN_WINDOW_TABLE, whose entry selects a window_stats record.
    std::uint16_t active_window_address() const;
    WindowRegisters window_at(std::uint16_t window_address) const {
        return {memory_, window_address};
    }

    std::uint32_t working() const;
    std::uint32_t argument() const;
    std::uint16_t secondary() const;
    std::uint32_t set_working(std::uint32_t value);
    std::uint32_t set_argument(std::uint32_t value);
    std::uint16_t set_secondary(std::uint16_t value);
    std::uint16_t increment_secondary();
    void store_active();
    void restore_active();
    void swap_working_argument();

    // CC_1B selectors 5/6 use one GLOBAL backup, shared by every window.
    // Working and argument retain all 32 bits. Secondary/storage are 16-bit,
    // but this backup holds just the low byte; restore zero-extends that byte.
    // Repeated backup overwrites the previous values: it is not a stack.
    void backup();
    void restore_backup();

  private:
    RegisterMemory& memory_;
    GameVersion version_;
};

} // namespace eb::game::dialogue
