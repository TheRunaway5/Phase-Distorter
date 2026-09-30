#pragma once
#include "eb/native/saves/archive.hpp"
#include <algorithm>
#include <array>
#include <numeric>
#include <stdexcept>
#include <string_view>

namespace save_test {
using Bytes = std::array<std::uint8_t, 8192>;
inline void require(bool okay, const char *message) {
  if (!okay)
    throw std::runtime_error(message);
}
inline unsigned word(const std::uint8_t *p) {
  return p[0] | unsigned(p[1]) << 8;
}
inline std::uint32_t dword(const std::uint8_t *p) {
  return word(p) | std::uint32_t(word(p + 2)) << 16;
}
inline void put(std::uint8_t *p, unsigned value) {
  p[0] = value;
  p[1] = value >> 8;
}
inline void seal(std::uint8_t *block) {
  // Independent fixture builder, also checked against the source routines.
  const unsigned sum = std::accumulate(block + 32, block + 1280, 0u);
  unsigned even = 0, odd = 0;
  for (unsigned i = 32; i < 1280; ++i)
    (i % 2 ? odd : even) ^= block[i];
  put(block + 28, sum);
  put(block + 30, even | odd << 8);
}
inline Bytes fixture(eb::GameVersion version, unsigned seed = 1) {
  Bytes bytes;
  for (auto &b : bytes) {
    seed = seed * 1664525u + 1013904223u;
    b = seed >> 24;
  }
  for (unsigned i = 0; i < 6; ++i) {
    auto *b = bytes.data() + i * 1280;
    constexpr std::string_view signature = "HAL Laboratory, inc.";
    std::copy(signature.begin(), signature.end(), b);
    b[signature.size()] = 0;
    seal(b);
  }
  put(bytes.data() + 8190, version == eb::GameVersion::JP ? 0x48a : 0x493);
  return bytes;
}
inline Bytes copy(std::span<const std::uint8_t> bytes) {
  Bytes result{};
  std::copy(bytes.begin(), bytes.end(), result.begin());
  return result;
}
inline void check_named_values(const eb::native::saves::PersistedState &s,
                               const std::uint8_t *p) {
  const bool jp = s.version == eb::GameVersion::JP;
  const unsigned delta = jp ? 3 : 0;
  const auto &g = s.game;
  require(g.money_carried == dword(p + 60 - delta) &&
              g.bank_balance == dword(p + 64 - delta),
          "Money field mapping");
  require(g.leader_x == word(p + 130 - delta) &&
              g.leader_y == word(p + 134 - delta) &&
              g.leader_direction == word(p + 138 - delta),
          "Saved leader coordinate mapping");
  require(g.elapsed_timer == dword(p + 468 - delta) &&
              g.text_flavour == p[472 - delta],
          "Timer/flavour mapping");
  require(g.exit_mouse_x == word(p + 189 - delta) &&
              g.exit_mouse_y == word(p + 191 - delta),
          "Exit mouse mapping");
  require(g.hotspot_content_references[1] == dword(p + 208 - delta) &&
              g.photos[31].flags == word(p + 460 - delta) &&
              g.photos[31].party[5] == p[467 - delta],
          "Hotspot/photo mapping");
  require(g.controlled_order[0] == p[156 - delta] &&
              g.controlled_order[5] == p[161 - delta] &&
              g.party_count == p[174 - delta] &&
              g.controlled_count == p[175 - delta],
          "Party order mapping");
  const unsigned game_size = jp ? 470 : 473, character_size = jp ? 94 : 95,
                 cd = jp ? 1 : 0;
  for (unsigned i = 0; i < 6; ++i) {
    const auto *c = p + game_size + i * character_size;
    const auto &schar = s.characters[i];
    const auto &v = schar.values;
    require(v.level == c[5 - cd] && v.experience == dword(c + 6 - cd) &&
                v.maximum_hp == word(c + 10 - cd) &&
                v.maximum_pp == word(c + 12 - cd),
            "Character level/experience mapping");
    require(v.afflictions[6] == c[20 - cd] && v.iq == c[27 - cd] &&
                v.base_iq == c[34 - cd],
            "Character stats mapping");
    require(v.items[13] == c[48 - cd] && v.equipment[3] == c[52 - cd] &&
                schar.position_index == word(c + 61 - cd),
            "Character inventory/path mapping");
    require(v.hp_fraction == word(c + 67 - cd) &&
                v.current_hp == word(c + 69 - cd) &&
                v.target_hp == word(c + 71 - cd) &&
                v.pp_fraction == word(c + 73 - cd) &&
                v.current_pp == word(c + 75 - cd) &&
                v.target_pp == word(c + 77 - cd),
            "Character HP/PP mapping");
    require(v.hp_pp_window_options == word(c + 79 - cd) &&
                schar.miss_rate == c[81 - cd] &&
                v.fire_resistance == c[82 - cd] &&
                v.freeze_resistance == c[83 - cd] &&
                v.flash_resistance == c[84 - cd] &&
                v.paralysis_resistance == c[85 - cd] &&
                v.hypnosis_brainshock_resistance == c[86 - cd] &&
                schar.boosted_luck == c[91 - cd] &&
                schar.reserved_92_94[2] == c[94 - cd],
            "Character resistance/archival mapping");
  }
  require(std::equal(s.event_flags.begin(), s.event_flags.end(),
                     p + game_size + 6 * character_size),
          "Event flag mapping");
}
} // namespace save_test
