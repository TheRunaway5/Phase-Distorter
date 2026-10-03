#pragma once

#include "eb/native/battle/action_resources.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle_combatants.hpp"
#include "eb/native/dialogue/substitution_resources.hpp"
#include "eb/native/story/random.hpp"

namespace eb::native::battle {
// The six source row arrays have eight entries each. Rebuilding writes only
// their active prefixes; menu/targeting consumers share the retained tails.
struct RowState {
  std::uint16_t front_count{}, back_count{};
  std::array<std::uint8_t, 8> front{}, back{}, front_x{}, front_y{}, back_x{},
      back_y{};
  bool operator==(const RowState &) const = default;
};
struct StealState {
  std::array<std::uint8_t, 56> candidates{};
  bool operator==(const StealState &) const = default;
};

// Complete C2F917, CHOOSE_TARGET and its immediate targeting/steal helpers.
// All mutable values belong to the supplied live owners. There is no copied
// battler catalog or target list hidden behind this interface.
class TargetSelection {
public:
  TargetSelection(Roster &, party::State &, story::RandomState &, RowState &,
                  StealState &, const ActionResources &,
                  const dialogue::SubstitutionResources &,
                  const BattleCombatants &);
  void rebuild_rows();
  bool valid(unsigned slot) const;
  unsigned count(unsigned side) const;
  void choose(unsigned attacker);
  std::uint8_t find_npc();
  unsigned find_stealable_items();
  std::uint8_t select_stealable_item();
  bool uses(const Roster &, const party::State &, const story::RandomState &,
            const ActionResources &) const noexcept;
  const RowState &rows() const { return rows_; }

private:
  unsigned random_row_target(Battler &);
  void set_row_target(Battler &, unsigned slot);
  void validate_rows() const;
  Roster &roster_;
  party::State &party_;
  story::RandomState &random_;
  RowState &rows_;
  StealState &steals_;
  const ActionResources &actions_;
  const dialogue::SubstitutionResources &resources_;
  const BattleCombatants &artwork_;
};
std::uint16_t random_limit(story::RandomState &, std::uint16_t limit);
std::uint16_t fifty_percent_variance(story::RandomState &, std::uint16_t value);
} // namespace eb::native::battle
