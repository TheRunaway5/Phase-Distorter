#include "eb/native/enemy_sprite_catalog.hpp"
#include <algorithm>
#include <array>
#include <stdexcept>

namespace eb::native {
namespace {
constexpr unsigned columns = 128, rows = 160, sector_columns = 32,
                   sector_rows = 80;
struct Content {
  std::span<const std::uint8_t> bytes;
  std::span<const std::uint8_t> slice(std::size_t at, std::size_t count) const {
    if (at > bytes.size() || count > bytes.size() - at)
      throw std::runtime_error("Truncated enemy artwork content");
    return bytes.subspan(at, count);
  }
  unsigned word(std::size_t at) const {
    const auto b = slice(at, 2);
    return b[0] | unsigned(b[1]) << 8;
  }
  unsigned pointer(std::size_t at) const {
    const auto b = slice(at, 4);
    const unsigned value = b[0] | unsigned(b[1]) << 8 | unsigned(b[2]) << 16 |
                           unsigned(b[3]) << 24;
    if (value < 0xc00000 || value >= 0xf00000)
      throw std::runtime_error("Invalid enemy content pointer");
    return value - 0xc00000;
  }
};
void unique(std::vector<unsigned> &values) {
  std::sort(values.begin(), values.end());
  values.erase(std::unique(values.begin(), values.end()), values.end());
}
bool flag(std::span<const std::uint8_t> flags, unsigned id) {
  if (!id)
    return false;
  --id;
  if (id / 8 >= flags.size())
    throw std::invalid_argument("Missing enemy encounter flag state");
  return flags[id / 8] & (1u << (id & 7));
}
std::vector<unsigned> pointers(const Content &content, unsigned table,
                               unsigned count, unsigned begin, unsigned end) {
  if (!count || count > 65536 || begin >= end || end > content.bytes.size())
    throw std::runtime_error("Invalid enemy content table bounds");
  content.slice(table, std::size_t(count) * 4);
  std::vector<unsigned> result;
  for (unsigned i = 0; i < count; ++i) {
    const auto p = content.pointer(std::size_t(table) + i * 4);
    if (p < begin || p >= end)
      throw std::runtime_error(
          "Enemy content pointer escapes its declared table");
    result.push_back(p);
  }
  return result;
}
unsigned list_end(std::span<const unsigned> sorted, unsigned start,
                  unsigned end) {
  const auto next = std::upper_bound(sorted.begin(), sorted.end(), start);
  return next == sorted.end() ? end : *next;
}
} // namespace
EnemySpriteCatalogLayout enemy_sprite_catalog_layout(GameVersion version) {
  const bool jp = version == GameVersion::JP;
  return {0x101880,
          0x10b880,
          0x10bbac,
          0x10c60d,
          0x10c60d,
          0x10d52d,
          0x10dfb4,
          jp ? 0x15a440u : 0x159589u,
          0x17a800,
          0x17b200,
          203,
          484,
          231,
          jp ? 77u : 94u,
          jp ? 13u : 30u,
          481};
}
struct EnemySpriteCatalog::State {
  struct Encounter {
    unsigned event_flag{};
    std::array<std::vector<unsigned>, 2> groups;
  };
  struct Sector {
    unsigned tileset{};
    bool butterfly{};
  };
  std::array<unsigned, columns * rows> cells{};
  std::array<Sector, sector_columns * sector_rows> sectors{};
  std::vector<Encounter> encounters;
  std::vector<unsigned> butterfly;
};
EnemySpriteCatalog::EnemySpriteCatalog(std::span<const std::uint8_t> assets,
                                       EnemySpriteCatalogLayout layout) {
  const Content content{assets};
  if (!layout.enemy_count || layout.enemy_count > 65536 ||
      layout.enemy_stride < 2 ||
      layout.enemy_sprite_offset > layout.enemy_stride - 2 ||
      layout.butterfly_battle >= layout.battle_count)
    throw std::runtime_error("Invalid enemy definition layout");
  content.slice(layout.enemies,
                std::size_t(layout.enemy_count) * layout.enemy_stride);
  content.slice(layout.cells, columns * rows * 2);
  content.slice(layout.tilesets, sector_columns * sector_rows);
  content.slice(layout.sector_attributes, sector_columns * sector_rows * 2);
  // Battle pointers have authored eight-byte records; only their four-byte
  // content pointer participates in graphical preparation.
  if (!layout.battle_count || layout.battle_count > 65536 ||
      layout.battles >= layout.battles_end ||
      layout.battles_end > assets.size())
    throw std::runtime_error("Invalid battle content bounds");
  content.slice(layout.battle_pointers, std::size_t(layout.battle_count) * 8);
  std::vector<unsigned> battle_at;
  for (unsigned i = 0; i < layout.battle_count; ++i) {
    const auto p = content.pointer(std::size_t(layout.battle_pointers) + i * 8);
    if (p < layout.battles || p >= layout.battles_end)
      throw std::runtime_error("Battle list escaped content bounds");
    battle_at.push_back(p);
  }
  auto battle_ends = battle_at;
  unique(battle_ends);
  std::vector<std::vector<unsigned>> battles(layout.battle_count);
  for (unsigned i = 0; i < battles.size(); ++i) {
    unsigned at = battle_at[i];
    const auto end = list_end(battle_ends, at, layout.battles_end);
    bool terminated = false;
    while (at < end) {
      const auto count = content.slice(at, 1)[0];
      if (count == 255) {
        terminated = true;
        break;
      }
      if (end - at < 3)
        throw std::runtime_error("Truncated battle member");
      const auto enemy = content.word(at + 1);
      if (enemy >= layout.enemy_count)
        throw std::runtime_error("Unknown battle enemy");
      if (count)
        battles[i].push_back(content.word(std::size_t(layout.enemies) +
                                          enemy * layout.enemy_stride +
                                          layout.enemy_sprite_offset));
      at += 3;
    }
    if (!terminated)
      throw std::runtime_error("Unterminated battle member list");
    unique(battles[i]);
  }
  auto state = std::make_shared<State>();
  state->butterfly = battles[layout.butterfly_battle];
  const auto encounter_at =
      pointers(content, layout.encounter_pointers, layout.encounter_count,
               layout.encounters, layout.encounters_end);
  auto encounter_ends = encounter_at;
  unique(encounter_ends);
  for (const auto begin : encounter_at) {
    const auto end = list_end(encounter_ends, begin, layout.encounters_end);
    if (end - begin < 4)
      throw std::runtime_error("Truncated enemy encounter header");
    const auto header = content.slice(begin, 4);
    if (header[2] > 100 || header[3] > 100)
      throw std::runtime_error("Invalid enemy encounter chance");
    State::Encounter entry;
    entry.event_flag = content.word(begin);
    const unsigned required = (header[2] ? 8 : 0) + (header[3] ? 8 : 0);
    std::array<unsigned, 16> choices{};
    unsigned slots = 0;
    for (unsigned at = begin + 4; slots < required; at += 3) {
      if (at > end || end - at < 3)
        throw std::runtime_error("Truncated weighted encounter list");
      const unsigned count = content.slice(at, 1)[0],
                     battle = content.word(at + 1);
      // Authored zero-weight rows are skipped by the source selector.
      if (count > required - slots || battle >= battles.size())
        throw std::runtime_error("Invalid weighted encounter member");
      std::fill_n(choices.begin() + slots, count, battle);
      slots += count;
    }
    for (unsigned alternate = 0; alternate < 2; ++alternate) {
      if (!header[2 + alternate])
        continue;
      const unsigned start = alternate && header[2] ? 8 : 0;
      for (unsigned pick = 0; pick < 8; ++pick) {
        const auto &group = battles[choices[start + pick]];
        entry.groups[alternate].insert(entry.groups[alternate].end(),
                                       group.begin(), group.end());
      }
      unique(entry.groups[alternate]);
    }
    state->encounters.push_back(std::move(entry));
  }
  for (unsigned i = 0; i < state->cells.size(); ++i) {
    const auto id = content.word(layout.cells + i * 2);
    if (id >= state->encounters.size())
      throw std::runtime_error("Unknown map encounter identity");
    state->cells[i] = id;
  }
  for (unsigned i = 0; i < state->sectors.size(); ++i) {
    const auto mode = content.word(layout.sector_attributes + i * 2) & 7;
    if (mode >= 6)
      throw std::runtime_error("Undefined butterfly sector mode");
    state->sectors[i] = {
        unsigned(content.slice(layout.tilesets + i, 1)[0] >> 3),
        mode == 0 || mode == 2 || mode == 4 || mode == 5};
  }
  state_ = std::move(state);
}
unsigned EnemySpriteCatalog::encounter(unsigned x, unsigned y) const {
  if (x >= columns || y >= rows)
    throw std::out_of_range("Invalid enemy encounter cell");
  return state_->cells[y * columns + x];
}
std::vector<unsigned>
EnemySpriteCatalog::query(EnemySpriteRectangle box,
                          const EnemySpriteEligibility &eligibility) const {
  if (box.right < box.left || box.bottom < box.top || eligibility.tileset >= 32)
    throw std::invalid_argument("Invalid enemy readiness rectangle or area");
  std::vector<unsigned> result;
  if (!eligibility.spawns_enabled || eligibility.monsters_disabled ||
      eligibility.final_boss_defeated)
    return result;
  const int left = std::clamp(box.left, 0, 8192),
            right = std::clamp(box.right, 0, 8192);
  const int top = std::clamp(box.top, 0, 10240),
            bottom = std::clamp(box.bottom, 0, 10240);
  if (left >= right || top >= bottom)
    return result;
  bool butterfly = false;
  for (unsigned y = top / 64; y <= unsigned(bottom - 1) / 64; ++y)
    for (unsigned x = left / 64; x <= unsigned(right - 1) / 64; ++x) {
      const auto &sector = state_->sectors[(y / 2) * sector_columns + x / 4];
      butterfly |= sector.butterfly;
      const auto id = state_->cells[y * columns + x];
      if (!id || sector.tileset != eligibility.tileset)
        continue;
      const auto &entry = state_->encounters[id];
      const auto &groups =
          entry.groups[flag(eligibility.event_flags, entry.event_flag)];
      result.insert(result.end(), groups.begin(), groups.end());
    }
  if (butterfly)
    result.insert(result.end(), state_->butterfly.begin(),
                  state_->butterfly.end());
  unique(result);
  return result;
}
} // namespace eb::native
