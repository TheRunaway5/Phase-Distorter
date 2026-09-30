#pragma once

#include "eb/game_version.hpp"
#include <cstdint>

namespace eb::game::enemies::battle {

// Borrow the live battle records and imported cartridge tables. These accesses
// express domain reads/publications; the CPU adapter owns bus cycles, compiler
// scratch, interrupts and hardware-multiply/RNG calls. No combatant is cached.
class TargetingMemory {
  public:
    virtual ~TargetingMemory() = default;
    virtual std::uint8_t read_byte(std::uint32_t address) const = 0;
    virtual void write_byte(std::uint32_t address, std::uint8_t value) = 0;
};

struct TargetingLayout {
    std::uint32_t battlers, target_flags, current_attacker;
    std::uint32_t front_count, back_count, front_row, back_row;
    std::uint32_t powers_of_two, dead_targettable_actions;
    static const TargetingLayout& for_version(GameVersion version);
};

enum class TargetGroup { All, Allies, Enemies, Row };

// Native rules from src/battle/target_*.asm, remove_*target*.asm,
// check_if_valid_target.asm, random_targetting.asm and unknown/C2/C24703.asm.
// Both regional battler records have32 entries of78 bytes. Operations assume
// binary arithmetic, WRAM data bank$7e and stable borrowed memory throughout a
// synchronous call. A scheduler must yield before observable hardware events.
class Targeting {
  public:
    static constexpr unsigned battler_count = 32;
    static constexpr unsigned battler_size = 78;
    Targeting(TargetingMemory& memory, GameVersion version)
        : memory_(memory), layout_(TargetingLayout::for_version(version)) {}

    std::uint32_t mask() const;
    void set_mask(std::uint32_t value);
    static constexpr std::uint32_t include_mask(std::uint32_t captured_mask, std::uint32_t captured_bits) {
        return captured_mask | captured_bits;
    }
    // Removal checkpoints capture the complemented bit before this operation.
    static constexpr std::uint32_t intersect_mask(std::uint32_t captured_mask, std::uint32_t captured_bits) {
        return captured_mask & captured_bits;
    }
    static constexpr bool contains_mask(std::uint32_t captured_mask, std::uint32_t captured_bits) {
        return intersect_mask(captured_mask, captured_bits) != 0;
    }
    // Preserve source table lookup, including16-bit offset wrapping. Public
    // adapters may restrict indices to canonical battlers before batching.
    std::uint32_t target_bit(std::uint16_t index) const;
    void add_target(std::uint16_t index);
    void remove_target(std::uint16_t index);
    bool is_targeted(std::uint16_t index) const;
    bool valid_target(std::uint16_t index) const;
    bool valid_battler(std::uint16_t captured_address) const;

    // Candidate primitives share the rules/publications of the whole passes.
    // Row0 means the player side; rows1/2 mean enemy rows0/1 respectively.
    bool candidate_matches(std::uint16_t index, TargetGroup group, std::uint16_t row = 0) const;
    bool candidate_matches_at(std::uint16_t captured_address, TargetGroup group, std::uint16_t row = 0) const;
    bool npc_candidate_at(std::uint16_t captured_address) const;
    bool append_candidate(std::uint16_t index, TargetGroup group, std::uint16_t row = 0);
    bool remove_npc_candidate(std::uint16_t index);
    bool remove_dead_candidate(std::uint16_t index);
    bool remove_unavailable_candidate(std::uint16_t index);
    bool action_allows_unavailable_targets() const;

    void target_all();
    void target_allies();
    void target_enemies();
    void target_row(std::uint16_t row);
    void remove_npcs();
    void remove_dead();
    void remove_unavailable();

    // Complete C24703 behavior. The passed attacker is captured for selector,
    // side and action reads; the status filter deliberately resolves the live
    // CURRENT_ATTACKER independently, as the original helper does.
    void resolve_action_targets(std::uint16_t captured_attacker);
    static bool shield_targets_npcs(std::uint16_t action);

    // RAND_LONG remains an external source call. Zero masks require no draw.
    // With a nonzero mask, select(draw&31)+1 eligible hits while walking slots
    //1..31,0 cyclically. This retains the original nonuniform distribution.
    std::uint32_t random_target(std::uint32_t candidates, std::uint8_t draw) const;

  private:
    // Index-based source helpers can carry into WRAM bank $7f. Captured-X
    // entry points instead provide an absolute word address in data bank $7e.
    bool valid_record(std::uint32_t address) const;
    bool candidate_matches_record(std::uint32_t address, TargetGroup group, std::uint16_t row) const;
    bool npc_record(std::uint32_t address) const;
    std::uint16_t word(std::uint32_t address) const;
    std::uint32_t battler(std::uint16_t index) const;
    std::uint8_t field(std::uint32_t record, unsigned offset) const;
    void construct(TargetGroup group, std::uint16_t row = 0);
    TargetingMemory& memory_;
    const TargetingLayout& layout_;
};

} // namespace eb::game::enemies::battle
