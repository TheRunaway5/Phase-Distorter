#pragma once

#include "eb/native/battle_combatants.hpp"
#include "eb/native/story/random.hpp"
#include <type_traits>
#include <utility>

namespace eb::native {
// A projection of the caller's authoritative enemy records, slots8..31.
// All other combat state stays in those records and travels with identity.
struct BattleFormationRecord {
  std::uint64_t identity{};
  unsigned enemy{}, sprite{};
  std::uint8_t label{}, row{}, resource{}, x{}, y{};
  bool conscious{}, enemy_side{};
  bool operator==(const BattleFormationRecord &) const = default;
};
using BattleFormationRecords = std::array<BattleFormationRecord, 24>;
enum class BattleFormationOutcome { Complete, RowsFull };
class BattleFormationPlan {
public:
  BattleFormationPlan(BattleFormationPlan &&) noexcept = default;
  BattleFormationPlan &operator=(BattleFormationPlan &&) noexcept = default;
  BattleFormationPlan(const BattleFormationPlan &) = delete;
  BattleFormationPlan &operator=(const BattleFormationPlan &) = delete;
  BattleFormationOutcome outcome() const { return outcome_; }
  const BattleFormationRecords &records() const { return after_; }
  const std::array<unsigned, 24> &record_order() const { return order_; }
  const std::array<std::uint16_t, 2> &row_widths() const { return row_widths_; }
  unsigned random_draws() const { return random_draws_; }
  bool applied() const { return !application_; }
  // Project returns the live fields above; patch updates only those fields.
  // Whole records are copied/permuted before committing. A default Record is
  // the owner's empty scratch value. Invalid/stale/repeated application leaves
  // the records and shared RNG untouched and never recomputes random choices.
  template <class Record, class Project, class Patch>
  void apply(std::span<Record, 24> records, unsigned enemy_count,
             unsigned battle, story::RandomState &random, Project project,
             Patch patch) {
    static_assert(std::is_nothrow_move_assignable_v<Record>);
    static_assert(std::is_nothrow_invocable_v<Patch, Record &,
                                              const BattleFormationRecord &>);
    BattleFormationRecords current;
    for (unsigned i = 0; i < 24; ++i)
      current[i] = project(records[i]);
    validate_application(current, enemy_count, battle, random);
    std::vector<Record> candidate;
    candidate.reserve(24);
    for (unsigned i = 0; i < 24; ++i)
      candidate.push_back(records[order_[i]]);
    for (unsigned i = 0; i < 24; ++i)
      patch(candidate[i], after_[i]);
    if (outcome_ == BattleFormationOutcome::Complete)
      candidate[23] = Record{};
    for (unsigned i = 0; i < 24; ++i)
      records[i] = std::move(candidate[i]);
    random = random_after_;
    application_.reset();
  }

private:
  BattleFormationPlan() = default;
  friend BattleFormationPlan prepare_battle_formation(
      GameVersion, unsigned, unsigned, const BattleFormationRecords &,
      const BattleCombatants &, std::span<const BattleCombatantResource>,
      const story::RandomState &);
  void validate_application(const BattleFormationRecords &, unsigned, unsigned,
                            const story::RandomState &) const;
  BattleFormationOutcome outcome_ = BattleFormationOutcome::Complete;
  unsigned enemy_count_{}, battle_{}, random_draws_{};
  BattleFormationRecords before_{}, after_{};
  std::array<unsigned, 24> order_{};
  std::array<std::uint16_t, 2> row_widths_{};
  story::RandomState random_before_{}, random_after_{};
  std::unique_ptr<unsigned char> application_ =
      std::make_unique<unsigned char>(0);
};
// The source calls this after enemy initialization:1..23 occupied enemy
// records followed by empty records, with slot31 reserved as scratch. At least
// one eligible enemy must occupy slot8's row; otherwise the source reads an
// uninitialized anchor. The source's capacity failure is an explicit completed
// prefix, not an exception or rollback of earlier row/resource assignments.
BattleFormationPlan prepare_battle_formation(
    GameVersion, unsigned battle, unsigned enemy_count,
    const BattleFormationRecords &, const BattleCombatants &,
    std::span<const BattleCombatantResource>, const story::RandomState &);
} // namespace eb::native
