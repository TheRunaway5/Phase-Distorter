#include "eb/native/character_growth.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
std::span<const std::uint8_t> table(std::span<const std::uint8_t> data,
                                    std::size_t at, std::size_t size) {
  if (at > data.size() || size > data.size() - at)
    throw std::invalid_argument("Truncated native character growth content");
  return data.subspan(at, size);
}
unsigned word(const std::uint8_t *p) { return p[0] | unsigned(p[1]) << 8; }
int signed_word(unsigned value) {
  value &= 0xffff;
  return value >= 0x8000 ? int(value) - 0x10000 : int(value);
}
int signed_byte(std::uint8_t value) {
  return value < 128 ? value : int(value) - 256;
}
using Stat = std::uint8_t party::Character::*;
constexpr std::array<Stat, 7> base_stats{
    &party::Character::base_offense,  &party::Character::base_defense,
    &party::Character::base_speed,    &party::Character::base_guts,
    &party::Character::base_vitality, &party::Character::base_iq,
    &party::Character::base_luck};
constexpr std::array<Stat, 7> derived_stats{
    &party::Character::offense,  &party::Character::defense,
    &party::Character::speed,    &party::Character::guts,
    &party::Character::vitality, &party::Character::iq,
    &party::Character::luck};
unsigned random_inclusive(story::RandomState &state, unsigned maximum) {
  return story::next_random(state) % (maximum + 1);
}
void validate_character(unsigned character) {
  if (character < 1 || character > 4)
    throw std::out_of_range("Native growth requires a chosen character 1..4");
}
void validate_level(unsigned level) {
  if (level < 1 || level > 99)
    throw std::out_of_range("Native character level must be 1..99");
}
} // namespace

CharacterGrowthLayout character_growth_layout(GameVersion version) {
  switch (version) {
  case GameVersion::US:
    return {0x15ea5b, 0x3f2b1, 0x158f49, 0x155000, 0x15f5f5, 39, 31};
  case GameVersion::JP:
    return {0x15e9bb, 0x3edcb, 0x159e00, 0x157000, 0x15f555, 24, 16};
  }
  throw std::invalid_argument("Unsupported native character growth region");
}
CharacterGrowth::CharacterGrowth(std::span<const std::uint8_t> assets,
                                 GameVersion version)
    : version_(version) {
  const auto l = character_growth_layout(version);
  const auto coefficients = table(assets, l.coefficients, 28);
  const auto cadence = table(assets, l.cadence, 4);
  const auto experience = table(assets, l.experience, 1600);
  const auto items = table(assets, l.items, 256 * l.item_stride);
  const auto initial = table(assets, l.initial_stats, 80);
  std::copy(cadence.begin(), cadence.end(), cadence_.begin());
  for (unsigned c = 0; c < 4; ++c) {
    std::copy_n(coefficients.begin() + c * 7, 7, coefficients_[c].begin());
    for (unsigned level = 0; level < 100; ++level) {
      const auto *p = experience.data() + (c * 100 + level) * 4;
      experience_[c][level] = word(p) | std::uint32_t(word(p + 2)) << 16;
    }
    const auto *p = initial.data() + c * 20;
    initial_[c].level = word(p + 6);
    validate_level(initial_[c].level);
    initial_[c].experience = word(p + 8);
    std::copy_n(p + 10, 10, initial_[c].items.begin());
  }
  for (unsigned i = 0; i < 256; ++i) {
    const auto *p = items.data() + i * l.item_stride + l.item_parameters;
    items_[i] = {p[0], p[1], p[2]};
  }
  initial_money_ = word(initial.data() + 4);
}
std::uint32_t CharacterGrowth::experience_for_level(unsigned character,
                                                    unsigned level) const {
  validate_character(character);
  validate_level(level);
  return experience_[character - 1][level];
}
void CharacterGrowth::validate(const party::Character &c,
                               unsigned character) const {
  validate_character(character);
  for (const auto slot : c.equipment)
    if (slot > c.items.size())
      throw std::out_of_range("Equipped inventory position exceeds 14 items");
}
void CharacterGrowth::recalculate_stat(
    party::Character &c, unsigned character, unsigned stat,
    const CharacterGrowthContext &context) const {
  const auto item = [&](unsigned slot, bool secondary) {
    const auto position = c.equipment[slot];
    if (!position)
      return 0;
    const auto &p = items_[c.items[position - 1]];
    return signed_byte(secondary        ? p.secondary
                       : character == 4 ? p.poo_strength
                                        : p.strength);
  };
  int value = c.*base_stats[stat];
  switch (stat) {
  case 0:
    value += item(0, false);
    break;
  case 1:
    value += item(1, false) + item(2, false) + item(3, false);
    break;
  case 2:
    value += item(1, true) + context.boosted_speed;
    break;
  case 3:
    value += item(0, true) + context.boosted_guts;
    break;
  case 4:
    value += context.boosted_vitality;
    break;
  case 5:
    value += context.boosted_iq;
    break;
  case 6:
    value += item(2, true) + item(3, true) + context.boosted_luck;
    break;
  }
  // Only offense/defense saturate at 255. Other derived bytes wrap on positive
  // overflow; vitality/IQ are direct byte additions. Equipment can underflow.
  if (stat < 2)
    value = std::clamp(value, 0, 255);
  else if (stat != 4 && stat != 5)
    value = std::max(value, 0);
  c.*derived_stats[stat] = static_cast<std::uint8_t>(value);
}
void CharacterGrowth::recalculate_stats(
    party::Character &c, unsigned character,
    const CharacterGrowthContext &context) const {
  validate(c, character);
  for (const auto stat : {0u, 1u, 2u, 3u, 6u, 4u, 5u})
    recalculate_stat(c, character, stat, context);
}
std::uint16_t CharacterGrowth::grow_stat(
    party::Character &c, unsigned character, unsigned old_level, unsigned stat,
    story::RandomState &random, const CharacterGrowthContext &context) const {
  const int remaining =
      signed_word(old_level * coefficients_[character - 1][stat] -
                  (int(c.*base_stats[stat]) - 2) * 10);
  unsigned growth = 0;
  if ((stat == 4 || stat == 5) && old_level < 10) {
    // DIVISION16 applies signed division truncated toward zero.
    growth = static_cast<std::uint16_t>(remaining / 10);
  } else if (remaining > 0) {
    const int factor = int(cadence_[(old_level + 1) % 4]) +
                       int(random_inclusive(random, 3)) - 1;
    // The source multiplies to 16 bits and enters the unsigned division
    // helper directly, without its signed-argument conversion prologue.
    growth = static_cast<std::uint16_t>(remaining * factor) / 50;
  }
  if (signed_word(growth) <= 0)
    return 0;
  c.*base_stats[stat] = static_cast<std::uint8_t>(c.*base_stats[stat] + growth);
  recalculate_stat(c, character, stat, context);
  return static_cast<std::uint16_t>(growth);
}
std::uint16_t CharacterGrowth::grow_hp(party::Character &c,
                                       story::RandomState &random) const {
  const int delta = signed_word(unsigned(c.vitality) * 15 - c.maximum_hp);
  const auto growth = static_cast<std::uint16_t>(
      delta >= 2 ? delta : random_inclusive(random, 2) + 1);
  c.maximum_hp = static_cast<std::uint16_t>(c.maximum_hp + growth);
  c.target_hp = static_cast<std::uint16_t>(c.target_hp + growth);
  return growth;
}
std::uint16_t
CharacterGrowth::grow_pp(party::Character &c, unsigned character,
                         story::RandomState &random,
                         const CharacterGrowthContext &context) const {
  if (character == 3)
    return 0;
  const unsigned iq =
      unsigned(c.iq) *
      (character == 1 && context.ness_nightmare_defeated ? 2 : 1);
  const int delta = signed_word(iq * 5 - c.maximum_pp);
  const auto growth = static_cast<std::uint16_t>(
      delta >= 2 ? delta : random_inclusive(random, 2));
  c.maximum_pp = static_cast<std::uint16_t>(c.maximum_pp + growth);
  c.target_pp = static_cast<std::uint16_t>(c.target_pp + growth);
  return growth;
}
CharacterLevelGrowth
CharacterGrowth::level_up(party::Character &c, unsigned character,
                          story::RandomState &random,
                          const CharacterGrowthContext &context) const {
  const unsigned old_level = c.level;
  CharacterLevelGrowth result;
  result.level = ++c.level;
  for (unsigned stat = 0; stat < 7; ++stat)
    result.stats[stat] =
        grow_stat(c, character, old_level, stat, random, context);
  result.hp = grow_hp(c, random);
  result.pp = grow_pp(c, character, random, context);
  return result;
}
CharacterLevelGrowth
CharacterGrowth::level_up_silent(party::Character &c, unsigned character,
                                 story::RandomState &random,
                                 const CharacterGrowthContext &context) const {
  validate(c, character);
  validate_level(c.level);
  if (c.level == 99)
    throw std::out_of_range("Cannot level up a level 99 character");
  return level_up(c, character, random, context);
}
unsigned
CharacterGrowth::reset_to_level(party::Character &c, unsigned character,
                                unsigned level, bool set_experience,
                                story::RandomState &random,
                                const CharacterGrowthContext &context) const {
  validate(c, character);
  validate_level(level);
  c.level = 1;
  for (const auto stat : base_stats)
    c.*stat = 2;
  c.maximum_hp = c.current_hp = c.target_hp = 30;
  c.maximum_pp = c.current_pp = c.target_pp = character == 3 ? 0 : 10;
  recalculate_stats(c, character, context);
  while (c.level < level)
    level_up(c, character, random, context);
  if (set_experience)
    c.experience = experience_[character - 1][level];
  return level - 1;
}
unsigned CharacterGrowth::gain_experience_silent(
    party::Character &c, unsigned character, std::uint32_t amount,
    story::RandomState &random, const CharacterGrowthContext &context) const {
  validate(c, character);
  validate_level(c.level);
  c.experience += amount;
  unsigned count = 0;
  while (c.level < 99 &&
         c.experience >= experience_[character - 1][c.level + 1]) {
    level_up(c, character, random, context);
    ++count;
  }
  return count;
}
std::array<unsigned, 4> CharacterGrowth::initialize_new_game_characters(
    party::State &party, story::RandomState &random,
    const std::array<CharacterGrowthContext, 4> &contexts) const {
  if (party.version() != version_)
    throw std::invalid_argument("Native growth party/content region mismatch");
  for (unsigned i = 1; i <= 4; ++i)
    validate(party.character(i), i);
  std::array<unsigned, 4> levels{};
  for (unsigned i = 0; i < 4; ++i) {
    auto &c = party.character(i + 1);
    const auto &initial = initial_[i];
    levels[i] =
        reset_to_level(c, i + 1, initial.level, false, random, contexts[i]);
    if (initial.experience)
      levels[i] += gain_experience_silent(c, i + 1, initial.experience, random,
                                          contexts[i]);
    c.current_hp = c.target_hp = c.maximum_hp;
    c.current_pp = c.target_pp = c.maximum_pp;
    c.hp_fraction = c.pp_fraction = 0;
    c.items.fill(0);
    std::copy(initial.items.begin(), initial.items.end(), c.items.begin());
    c.hp_pp_window_options = 0x400;
  }
  party.money_carried = initial_money_;
  return levels;
}
} // namespace eb::native
