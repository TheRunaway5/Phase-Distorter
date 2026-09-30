#include "eb/native/character_growth.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <vector>

namespace {
using namespace eb::native;
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
auto fields(const party::Character &c) {
  return std::tie(c.level, c.experience, c.maximum_hp, c.maximum_pp,
                  c.afflictions, c.offense, c.defense, c.speed, c.guts, c.luck,
                  c.vitality, c.iq, c.base_offense, c.base_defense,
                  c.base_speed, c.base_guts, c.base_luck, c.base_vitality,
                  c.base_iq, c.items, c.equipment, c.hp_fraction, c.current_hp,
                  c.target_hp, c.pp_fraction, c.current_pp, c.target_pp,
                  c.hp_pp_window_options);
}
void put(std::vector<std::uint8_t> &v, std::size_t at, unsigned value) {
  v.at(at) = value;
  v.at(at + 1) = value >> 8;
}
std::vector<std::uint8_t> content(eb::GameVersion version) {
  const auto l = character_growth_layout(version);
  std::vector<std::uint8_t> bytes(l.initial_stats + 80);
  std::copy_n(std::array<std::uint8_t, 4>{8, 4, 4, 4}.begin(), 4,
              bytes.begin() + l.cadence);
  for (unsigned i = 0; i < 4; ++i) {
    for (unsigned level = 0; level < 100; ++level)
      put(bytes, l.experience + (i * 100 + level) * 4, level * 10);
    put(bytes, l.initial_stats + i * 20 + 6, i == 3 ? 15 : 1);
    for (unsigned j = 0; j < 10; ++j)
      bytes[l.initial_stats + i * 20 + 10 + j] = i * 10 + j;
  }
  put(bytes, l.initial_stats + 4, 20);
  auto p = l.items + l.item_stride + l.item_parameters;
  bytes[p] = 127;
  bytes[p + 1] = 128;
  bytes[p + 2] = 127;
  p += l.item_stride;
  bytes[p] = 128;
  bytes[p + 1] = 127;
  bytes[p + 2] = 128;
  return bytes;
}
template <class F> void rejects(F &&f) {
  bool failed = false;
  try {
    f();
  } catch (const std::invalid_argument &) {
    failed = true;
  } catch (const std::out_of_range &) {
    failed = true;
  }
  require(failed, "Invalid growth operation was accepted");
}
void run(eb::GameVersion version) {
  auto bytes = content(version);
  CharacterGrowth growth(bytes, version);
  // Content is imported by value; destroying/changing the input cannot change
  // future characters. Coefficients zero isolate HP/PP's inclusive RNG calls.
  std::fill(bytes.begin(), bytes.end(), 0);
  bool saw_three_hp = false, saw_two_pp = false;
  for (unsigned i = 0; i < 256; ++i) {
    party::Character c;
    story::RandomState random{std::uint16_t(i * 739), std::uint16_t(i * 503)};
    growth.reset_to_level(c, 1, 1, true, random);
    require(c.experience == 10 && c.maximum_hp == 30 && c.current_hp == 30 &&
                c.maximum_pp == 10 && c.current_pp == 10,
            "Level-one initialization");
    const auto before = c;
    auto expected_random = random;
    const auto hp = story::next_random(expected_random) % 3 + 1;
    const auto pp = story::next_random(expected_random) % 3;
    const auto result = growth.level_up_silent(c, 1, random);
    require(random == expected_random && result.hp == hp && result.pp == pp,
            "Inclusive HP/PP random bounds or consumption");
    require(c.maximum_hp == before.maximum_hp + hp &&
                c.target_hp == before.target_hp + hp &&
                c.current_hp == before.current_hp &&
                c.maximum_pp == before.maximum_pp + pp &&
                c.target_pp == before.target_pp + pp &&
                c.current_pp == before.current_pp,
            "Silent level-up incorrectly healed HP/PP");
    saw_three_hp |= hp == 3;
    saw_two_pp |= pp == 2;
    c.level = 99;
    c.experience = 0xfffffffe;
    auto rng_before = random;
    require(growth.gain_experience_silent(c, 1, 3, random) == 0 &&
                c.experience == 1 && random == rng_before,
            "Max-level experience wrap");
  }
  require(saw_three_hp && saw_two_pp, "Inclusive random endpoints unexercised");
  {
    party::Character boundary;
    story::RandomState rng{0x7788, 0x9944};
    growth.reset_to_level(boundary, 1, 1, false, rng);
    boundary.maximum_hp = 28;
    boundary.maximum_pp = 8;
    boundary.target_hp = boundary.target_pp = 0xffff;
    const auto before = rng;
    const auto result = growth.level_up_silent(boundary, 1, rng);
    require(
        result.hp == 2 && result.pp == 2 && rng == before &&
            boundary.target_hp == 1 && boundary.target_pp == 1,
        "Exact two-point growth must avoid random fallback and wrap targets");
    boundary.maximum_pp = 8;
    const auto nightmare = growth.level_up_silent(
        boundary, 1, rng, CharacterGrowthContext{0, 0, 0, 0, 0, true});
    require(nightmare.pp == 12, "Ness nightmare flag must double effective IQ");
  }
  party::Character c;
  story::RandomState random{0x1234, 0x5678};
  growth.reset_to_level(c, 3, 1, false, random);
  auto expected_random = random;
  story::next_random(expected_random);
  growth.level_up_silent(c, 3, random);
  require(c.maximum_pp == 0 && c.current_pp == 0 && c.target_pp == 0 &&
              random == expected_random,
          "Jeff must omit PP growth and its RNG call");
  c.base_offense = c.base_defense = c.base_speed = c.base_guts =
      c.base_vitality = c.base_iq = c.base_luck = 255;
  c.items[0] = 1;
  c.equipment = {1, 1, 1, 1};
  const CharacterGrowthContext boosts{255, 255, 255, 255, 255, false};
  growth.recalculate_stats(c, 1, boosts);
  require(c.offense == 255 && c.defense == 255 && c.speed == 125 &&
              c.guts == 125 && c.luck == 252 && c.vitality == 254 &&
              c.iq == 254,
          "Equipment/boost saturation versus byte wrapping");
  growth.recalculate_stats(c, 4, boosts);
  require(c.offense == 127 && c.defense == 0 && c.speed == 125,
          "Poo must select alternate equipment strength only");
  c.base_speed = c.base_guts = c.base_luck = 2;
  c.items[0] = 2;
  growth.recalculate_stats(c, 1);
  require(c.speed == 0 && c.guts == 0 && c.luck == 0,
          "Signed equipment underflow");
  // Validate every argument before changing either the borrowed actor or RNG.
  const auto prior = c;
  const auto prior_random = random;
  rejects([&] { growth.reset_to_level(c, 1, 0, false, random); });
  rejects([&] { growth.reset_to_level(c, 5, 1, false, random); });
  rejects([&] { growth.reset_to_level(c, 1, 100, false, random); });
  require(fields(c) == fields(prior) && random == prior_random,
          "Invalid reset mutated owners");
  c.equipment[3] = 15;
  const auto malformed = c;
  rejects([&] { growth.gain_experience_silent(c, 1, 100, random); });
  rejects([&] { growth.recalculate_stats(c, 1); });
  require(fields(c) == fields(malformed) && random == prior_random,
          "Invalid equipment mutated owners");
  c.equipment = {};
  c.level = 99;
  const auto maximum = c;
  rejects([&] { growth.level_up_silent(c, 1, random); });
  require(fields(c) == fields(maximum) && random == prior_random,
          "Rejected level-up mutated owners");
  auto authored = content(version);
  rejects([&] {
    CharacterGrowth bad{
        std::span<const std::uint8_t>(authored).first(authored.size() - 1),
        version};
  });
  put(authored, character_growth_layout(version).initial_stats + 6, 0);
  rejects([&] { CharacterGrowth bad(authored, version); });
  rejects(
      [&] { CharacterGrowth bad(authored, static_cast<eb::GameVersion>(99)); });

  party::State live(version);
  for (unsigned i = 1; i <= 6; ++i) {
    live.character(i).experience = 3;
    live.name_field(i).front() = i + 10;
  }
  live.bank_balance = 777;
  live.party_order = {6, 4, 0, 0, 0, 0};
  const auto guest = live.character(5);
  auto result = growth.initialize_new_game_characters(live, random);
  require(result == std::array<unsigned, 4>{0, 0, 0, 14} &&
              live.money_carried == 20 && live.bank_balance == 777 &&
              live.party_order[0] == 6 &&
              fields(guest) == fields(live.character(5)),
          "New-game changed unrelated live state");
  for (unsigned i = 1; i <= 4; ++i) {
    const auto &ch = live.character(i);
    require(ch.experience == 3 && ch.current_hp == ch.maximum_hp &&
                ch.target_hp == ch.maximum_hp &&
                ch.current_pp == ch.maximum_pp &&
                ch.target_pp == ch.maximum_pp && ch.hp_fraction == 0 &&
                ch.pp_fraction == 0 && ch.hp_pp_window_options == 0x400 &&
                ch.items[9] == (i - 1) * 10 + 9 && ch.items[10] == 0 &&
                ch.items[13] == 0 && live.name_field(i).front() == i + 10,
            "New-game character sequence");
  }
  live.character(4).equipment[0] = 15;
  const auto first_before = live.character(1);
  const auto random_before = random;
  rejects([&] { growth.initialize_new_game_characters(live, random); });
  require(fields(first_before) == fields(live.character(1)) &&
              random == random_before,
          "Late invalid character caused partial new-game initialization");
  party::State wrong(version == eb::GameVersion::US ? eb::GameVersion::JP
                                                    : eb::GameVersion::US);
  rejects([&] { growth.initialize_new_game_characters(wrong, random); });
  std::cout << (version == eb::GameVersion::JP ? "JP" : "US")
            << " character growth unit PASS\n";
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
