#include "eb/native/battle_formation.hpp"
#include <algorithm>
#include <numeric>
#include <set>
#include <stdexcept>

namespace eb::native {
namespace {
bool eligible(const BattleFormationRecord &r) {
  return r.conscious && r.enemy_side;
}
std::uint16_t wrap(unsigned value) { return std::uint16_t(value); }
} // namespace
BattleFormationPlan
prepare_battle_formation(GameVersion version, unsigned battle, unsigned count,
                         const BattleFormationRecords &records,
                         const BattleCombatants &content,
                         std::span<const BattleCombatantResource> resources,
                         const story::RandomState &random) {
  if ((version != GameVersion::US && version != GameVersion::JP) ||
      battle >= content.size() || !count || count > 23 || resources.empty() ||
      resources.size() > 4)
    throw std::invalid_argument("Invalid battle formation domain");
  const auto prepared = content.prepare(battle);
  if (prepared.resources().size() != resources.size())
    throw std::invalid_argument(
        "Battle formation resources belong to another selection");
  for (unsigned i = 0; i < resources.size(); ++i)
    if (resources[i].enemy != prepared.resources()[i].enemy ||
        resources[i].sprite != prepared.resources()[i].sprite)
      throw std::invalid_argument(
          "Battle formation resources belong to another selection");
  std::set<std::uint64_t> identities;
  bool primary_row_present = false;
  std::array<unsigned, 24> widths{};
  for (unsigned i = 0; i < 24; ++i) {
    const auto &r = records[i];
    if (r.row > 1 ||
        (i < count && (!r.identity || !identities.insert(r.identity).second)) ||
        (i >= count && (r.identity || eligible(r))))
      throw std::invalid_argument("Invalid battle formation record ownership");
    if (eligible(r)) {
      if (std::none_of(
              resources.begin(), resources.end(),
              [&](const auto &resource) { return resource.enemy == r.enemy; }))
        throw std::invalid_argument(
            "Battle formation enemy has no prepared resource");
      widths[i] = r.sprite ? content.artwork(r.sprite)->width / 8 : 0;
      primary_row_present |= r.row == records[0].row;
    }
  }
  if (!primary_row_present)
    throw std::invalid_argument(
        "Battle formation has no authored primary anchor");
  BattleFormationPlan p;
  p.enemy_count_ = count;
  p.battle_ = battle;
  p.before_ = p.after_ = records;
  p.random_before_ = p.random_after_ = random;
  std::iota(p.order_.begin(), p.order_.end(), 0);
  const auto random_bit = [&] {
    ++p.random_draws_;
    return story::next_random(p.random_after_) & 1;
  };
  auto &out = p.after_;
  for (unsigned i = 0; i < 24; ++i) {
    auto &r = out[i];
    if (!eligible(r))
      continue;
    r.resource = std::uint8_t(std::find_if(resources.begin(), resources.end(),
                                           [&](const auto &resource) {
                                             return resource.enemy == r.enemy;
                                           }) -
                              resources.begin());
    unsigned width = widths[i] + unsigned(p.row_widths_[r.row] != 0);
    if (p.row_widths_[r.row] + width <= 30)
      p.row_widths_[r.row] += width;
    else {
      const unsigned other = 1 - r.row;
      width = widths[i] + unsigned(p.row_widths_[other] != 0);
      if (p.row_widths_[other] + width > 30) {
        p.outcome_ = BattleFormationOutcome::RowsFull;
        return p;
      }
      r.row = other;
      p.row_widths_[other] += width;
    }
  }
  const unsigned primary_row = out[0].row;
  if (std::none_of(out.begin(), out.end(), [&](const auto &record) {
        return eligible(record) && record.row == primary_row;
      }))
    throw std::invalid_argument(
        "Battle formation has no remaining primary anchor");
  std::uint16_t first_left = 32, first_right = 32, second_anchor = 0;
  for (unsigned i = 0; i < 24; ++i) {
    auto &r = out[i];
    if (!eligible(r) || r.row != primary_row)
      continue;
    const unsigned half = widths[i] / 2;
    if (first_left == first_right) {
      r.x = std::uint8_t(first_left);
      first_left = wrap(first_left - half);
      first_right = wrap(first_right + half);
      second_anchor = random_bit() ? first_left : first_right;
    } else {
      const unsigned left_extent = wrap(32 - first_left),
                     right_extent = wrap(first_right - 32);
      if (left_extent < right_extent ||
          (left_extent == right_extent && random_bit())) {
        r.x = std::uint8_t(first_left - half - 1);
        first_left = wrap(r.x - half);
      } else {
        r.x = std::uint8_t(first_right + half + 1);
        first_right = wrap(r.x + half);
      }
    }
  }
  std::uint16_t second_left = second_anchor, second_right = second_anchor;
  for (unsigned i = 0; i < 24; ++i) {
    auto &r = out[i];
    if (!eligible(r) || r.row == primary_row)
      continue;
    const unsigned half = widths[i] / 2;
    if (second_left == second_right) {
      r.x = std::uint8_t(second_left);
      second_left = wrap(second_left - half);
      second_right = wrap(second_right + half);
    } else {
      bool left = false;
      if (second_right > 32) {
        if (second_left > 32)
          left = true;
        else {
          const unsigned left_extent = wrap(32 - second_left),
                         right_extent = wrap(second_right - 32);
          left = left_extent < right_extent ||
                 (left_extent == right_extent && random_bit());
        }
      }
      if (left) {
        r.x = std::uint8_t(second_left - half - 1);
        second_left = wrap(r.x - half);
      } else {
        r.x = std::uint8_t(second_right + half + 1);
        second_right = wrap(r.x + half);
      }
    }
  }
  if (primary_row == 1 && second_left == second_right)
    for (auto &r : out)
      if (eligible(r))
        r.row = 0;
  first_left = std::min(first_left, second_left);
  first_right = std::max(first_right, second_right);
  const auto center = wrap(first_left + first_right) / 2;
  const auto shift = std::uint8_t(32 - center - 16);
  for (auto &r : out)
    if (eligible(r)) {
      r.x = std::uint8_t((r.x + shift) * 8);
      r.y = r.row ? 128 : 144;
    }
  if (battle == 475) {
    out[0].x = out[0].y = 128;
    out[1].x = 200;
    out[1].y = 144;
  }
  // The source repeatedly exchanges labels, sometimes followed by exchanging
  // the complete battler records. Keep identity/order with those full swaps.
  // A repeated pass with unchanged records is a real source nontermination
  // (notably malformed equal labels in JP), rejected before caller mutation.
  for (unsigned pass = 0;; ++pass) {
    const auto previous = out;
    bool changed = false;
    for (unsigned a = 0; a + 1 < count; ++a)
      for (unsigned b = a + 1; b < count; ++b) {
        auto &first = out[a];
        auto &second = out[b];
        if (first.enemy != second.enemy)
          continue;
        bool exchange = false;
        if (first.label < second.label &&
            (first.y < second.y || (first.y == second.y && first.x > second.x)))
          exchange = true;
        if (!exchange &&
            (version == GameVersion::JP ? first.label >= second.label
                                        : first.label > second.label) &&
            (first.y > second.y || (first.y == second.y && first.x < second.x)))
          exchange = true;
        if (!exchange)
          continue;
        changed = true;
        std::swap(first.label, second.label);
        if (first.label > second.label) {
          std::swap(first, second);
          std::swap(p.order_[a], p.order_[b]);
        }
      }
    if (!changed)
      break;
    if (previous == out || pass >= 1023)
      throw std::domain_error(
          "Battle formation label ordering does not converge");
  }
  out[23] = {};
  return p;
}
void BattleFormationPlan::validate_application(
    const BattleFormationRecords &records, unsigned count, unsigned battle,
    const story::RandomState &random) const {
  if (!application_ || count != enemy_count_ || battle != battle_ ||
      records != before_ || random != random_before_)
    throw std::logic_error("Stale or already applied battle formation plan");
}
} // namespace eb::native
