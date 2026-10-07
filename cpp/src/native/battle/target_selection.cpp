// Sources: C2F917, CHOOSE_TARGET, C24434, C4A228, CHECK_IF_VALID_TARGET,
// COUNT_CHARS, FIND_TARGETTABLE_NPC, FIND_STEALABLE_ITEMS and
// SELECT_STEALABLE_ITEM.
#include "eb/native/battle/target_selection.hpp"
#include <algorithm>
#include <optional>
#include <stdexcept>
#include <unordered_set>

namespace eb::native::battle {
namespace {
void require(bool value, const char *message) {
  if (!value)
    throw std::invalid_argument(message);
}
std::uint32_t random_key(const story::RandomState &state) {
  return state.primary_word | std::uint32_t(state.secondary_word) << 16;
}
} // namespace
std::uint16_t random_limit(story::RandomState &random, std::uint16_t limit) {
  return std::uint16_t((unsigned(story::next_random(random)) * limit) >> 8);
}
std::uint16_t fifty_percent_variance(story::RandomState &random,
                                     std::uint16_t value) {
  const auto first = story::next_random(random),
             second = story::next_random(random);
  const auto distance = [](unsigned byte) {
    return byte < 128 ? 128 - byte : byte - 128;
  };
  const auto selected = distance(first) <= distance(second) ? first : second;
  const auto change = (distance(selected) * value) >> 8;
  return std::uint16_t(selected < 128 ? value - change : value + change);
}
TargetSelection::TargetSelection(
    Roster &roster, party::State &party, story::RandomState &random,
    RowState &rows, StealState &steals, const ActionResources &actions,
    const dialogue::SubstitutionResources &resources,
    const BattleCombatants &artwork)
    : roster_(roster), party_(party), random_(random), rows_(rows),
      steals_(steals), actions_(actions), resources_(resources),
      artwork_(artwork) {
  require(roster.version() == party.version() &&
              roster.version() == actions.version() &&
              roster.version() == resources.version(),
          "Target selection owners have different regions");
}
bool TargetSelection::uses(const Roster &roster, const party::State &party,
                           const story::RandomState &random,
                           const ActionResources &actions) const noexcept {
  return &roster_ == &roster && &party_ == &party && &random_ == &random &&
         &actions_ == &actions;
}
bool TargetSelection::valid(unsigned slot) const {
  const auto &actor = roster_.at(slot);
  return actor.consciousness && !actor.npc && actor.afflictions[0] != 1 &&
         actor.afflictions[0] != 2;
}
unsigned TargetSelection::count(unsigned side) const {
  unsigned result{};
  for (unsigned slot = 0; slot < Roster::size; ++slot)
    if (roster_.at(slot).side == side && valid(slot))
      ++result;
  return result;
}
bool TargetSelection::has_stealable_item(std::uint16_t item) {
  const auto count = find_stealable_items();
  return std::find(steals_.candidates.begin(), steals_.candidates.begin() + count, item) !=
      steals_.candidates.begin() + count;
}
void TargetSelection::validate_rows() const {
  require(rows_.front_count <= rows_.front.size() &&
              rows_.back_count <= rows_.back.size(),
          "Target row count leaves its owned source arrays");
  for (unsigned i = 0; i < rows_.front_count; ++i)
    (void)roster_.at(rows_.front[i]);
  for (unsigned i = 0; i < rows_.back_count; ++i)
    (void)roster_.at(rows_.back[i]);
}
void TargetSelection::rebuild_rows() {
  auto result = rows_;
  result.front_count = result.back_count = 0;
  const auto eligible = [&](unsigned slot, bool back) {
    const auto &actor = roster_.at(slot);
    return actor.consciousness && actor.afflictions[0] != 1 &&
           actor.side == 1 && bool(actor.row) == back;
  };
  for (unsigned slot = 8; slot < Roster::size; ++slot) {
    if (eligible(slot, false))
      ++result.front_count;
    if (eligible(slot, true))
      ++result.back_count;
  }
  require(result.front_count <= 8 && result.back_count <= 8,
          "Battle rows would overwrite neighboring source state");
  // LOCAL00 is retained between selections and across the two rows. A first
  // selection with no positive X would read uninitialized caller stack.
  std::optional<unsigned> selected;
  for (unsigned row = 0; row < 2; ++row) {
    unsigned previous_x{};
    const unsigned count = row ? result.back_count : result.front_count;
    auto &slots = row ? result.back : result.front;
    auto &xs = row ? result.back_x : result.front_x;
    auto &ys = row ? result.back_y : result.front_y;
    for (unsigned index = 0; index < count; ++index) {
      unsigned next_x = 0xffff;
      for (unsigned slot = 8; slot < Roster::size; ++slot) {
        const auto x = roster_.at(slot).x;
        if (eligible(slot, row != 0) && x > previous_x && x <= next_x) {
          selected = slot;
          next_x = x;
        }
      }
      require(selected.has_value(),
              "Battle row selection requires an unowned incoming stack value");
      slots[index] = std::uint8_t(*selected);
      xs[index] = std::uint8_t(next_x >> 3);
      ys[index] = std::uint8_t((row ? 16 : 18) -
                               artwork_.height(roster_.at(*selected).sprite));
      previous_x = next_x;
    }
  }
  rows_ = result;
}
void TargetSelection::set_row_target(Battler &actor, unsigned slot) {
  for (unsigned i = 0; i < rows_.front_count; ++i)
    if (rows_.front[i] == slot) {
      actor.target = std::uint8_t(i + 1);
      return;
    }
  for (unsigned i = 0; i < rows_.back_count; ++i)
    if (rows_.back[i] == slot) {
      actor.target = std::uint8_t(rows_.front_count + i + 1);
      return;
    }
}
unsigned TargetSelection::random_row_target(Battler &actor) {
  const unsigned index = random_limit(
      random_, std::uint16_t(rows_.front_count + rows_.back_count));
  actor.target = std::uint8_t(index + 1);
  return index < rows_.front_count ? rows_.front.at(index)
                                   : rows_.back.at(index - rows_.front_count);
}
std::uint8_t TargetSelection::find_npc() {
  if (!(story::next_random(random_) & 3))
    return 0;
  for (unsigned index = 0; index < party_.party_order.size(); ++index) {
    const auto id = party_.party_order[index];
    if (id < 5 || !(resources_.npc_flags(id) & 2))
      continue;
    for (unsigned slot = 0; slot < 6; ++slot) {
      const auto &actor = roster_.at(slot);
      if (actor.consciousness && actor.npc == id)
        return std::uint8_t(slot + 1);
    }
    // The source reuses the outer LOCAL01 for the physical-slot search.
    return 0;
  }
  return 0;
}
void TargetSelection::choose(unsigned slot) {
  auto &actor = roster_.at(slot);
  const auto metadata = actions_.action(actor.action);
  validate_rows();
  bool any{};
  for (unsigned i = 0; i < rows_.front_count; ++i)
    any = any || valid(rows_.front[i]);
  for (unsigned i = 0; i < rows_.back_count; ++i)
    any = any || valid(rows_.back[i]);
  if (!any)
    rebuild_rows();
  const bool enemy = actor.side == 1;
  actor.targeting =
      std::uint8_t((enemy == bool(metadata.direction)) ? 0x10 : 0);
  switch (metadata.target) {
  case 0:
    actor.targeting |= 1;
    if (enemy)
      set_row_target(actor, slot);
    else
      actor.target = std::uint8_t(slot + 1);
    return;
  case 1:
  case 2: {
    actor.targeting |= 1;
    const bool select_rows = enemy == bool(metadata.direction);
    if (enemy && !metadata.direction) {
      actor.target = find_npc();
      if (actor.target)
        return;
    }
    bool has_valid{};
    if (select_rows) {
      for (unsigned i = 0; i < rows_.front_count; ++i)
        has_valid = has_valid || valid(rows_.front[i]);
      for (unsigned i = 0; i < rows_.back_count; ++i)
        has_valid = has_valid || valid(rows_.back[i]);
    } else {
      for (unsigned i = 0; i < 8; ++i)
        has_valid = has_valid || valid(i);
    }
    require(has_valid, "Target choice has no reachable valid target");
    std::unordered_set<std::uint32_t> visited;
    for (;;) {
      require(visited.insert(random_key(random_)).second,
              "Target choice repeats a nonterminating RNG state");
      unsigned target;
      if (select_rows)
        target = random_row_target(actor);
      else {
        actor.target = std::uint8_t((story::next_random(random_) & 7) + 1);
        target = actor.target - 1;
      }
      if (valid(target))
        return;
    }
  }
  case 3:
    actor.targeting |= 2;
    if (enemy)
      actor.target = 1;
    else if (!rows_.front_count)
      actor.target = 2;
    else if (!rows_.back_count)
      actor.target = 1;
    else
      actor.target = std::uint8_t((story::next_random(random_) & 1) + 1);
    return;
  case 4:
    actor.targeting |= 4;
    actor.target = 1;
    return;
  default:
    return; // Unknown shapes change only the source direction byte.
  }
}
unsigned TargetSelection::find_stealable_items() {
  auto result = steals_.candidates;
  unsigned count{};
  std::optional<unsigned> action_item;
  for (const auto id : party_.party_order) {
    if (id < 1 || id > 4)
      continue;
    for (unsigned slot = 0; slot < 6; ++slot) {
      const auto &actor = roster_.at(slot);
      if (actor.consciousness && actor.id == id && !actor.npc)
        action_item = actor.action_item_slot;
    }
    require(action_item.has_value(),
            "Steal candidates require an unowned incoming item-slot local");
    const auto &character = party_.character(id);
    for (unsigned item_slot = 1; item_slot <= character.items.size();
         ++item_slot) {
      const auto item = character.items[item_slot - 1];
      if (!item || item_slot == *action_item)
        continue;
      const auto cost = resources_.item_cost(item);
      if (!cost || cost >= 290 ||
          (resources_.item_properties(item).type & 0x30) != 0x20)
        continue;
      if (std::find(character.equipment.begin(), character.equipment.end(),
                    item_slot) != character.equipment.end())
        continue;
      require(count < result.size(),
              "Steal candidates would overwrite neighboring source state");
      result[count++] = item;
    }
  }
  steals_.candidates = result;
  return count;
}
std::uint8_t TargetSelection::select_stealable_item() {
  const auto count = find_stealable_items();
  if (!count || (story::next_random(random_) & 0x80))
    return 0;
  return steals_.candidates[random_limit(random_, std::uint16_t(count))];
}
} // namespace eb::native::battle
