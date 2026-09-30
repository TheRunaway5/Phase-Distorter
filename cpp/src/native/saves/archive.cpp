#include "eb/native/saves/archive.hpp"

#include <algorithm>
#include <stdexcept>
#include <string_view>
#include <type_traits>

namespace eb::native::saves {
namespace {
constexpr std::string_view signature = "HAL Laboratory, inc.";
constexpr unsigned version_offset = 0x1ffe;
std::uint16_t read16(const std::uint8_t *p) noexcept {
  return p[0] | std::uint16_t(p[1]) << 8;
}
void write16(std::uint8_t *p, std::uint16_t value) noexcept {
  p[0] = static_cast<std::uint8_t>(value);
  p[1] = static_cast<std::uint8_t>(value >> 8);
}
void check_slot(unsigned slot) {
  if (slot >= SaveArchive::slot_count)
    throw std::out_of_range("Native save slot must be 0..2");
}
struct Checksums {
  std::uint16_t add{}, xor_words{};
};
Checksums checksums(const std::uint8_t *block) noexcept {
  Checksums result;
  for (unsigned i = SaveArchive::header_size; i < SaveArchive::block_size; ++i)
    result.add = static_cast<std::uint16_t>(result.add + block[i]);
  for (unsigned i = SaveArchive::header_size; i < SaveArchive::block_size;
       i += 2)
    result.xor_words ^= read16(block + i);
  return result;
}
bool matches_signature(const std::uint8_t *block) noexcept {
  // The source STRCMP stops when its first (literal) argument reaches zero,
  // without comparing that terminator. All eight remaining header bytes are
  // therefore ignored, even when byte20 is nonzero.
  return std::equal(signature.begin(), signature.end(), block);
}
BlockValidation validate(const std::uint8_t *block) noexcept {
  const auto calculated = checksums(block);
  return {matches_signature(block), calculated.add == read16(block + 28),
          calculated.xor_words == read16(block + 30)};
}
struct Reader {
  const std::uint8_t *cursor;
  template <class T> void value(T &v) {
    static_assert(std::is_unsigned_v<T>);
    v = 0;
    for (unsigned i = 0; i < sizeof(T); ++i)
      v |= T(*cursor++) << (8 * i);
  }
  template <class T, std::size_t N> void values(std::array<T, N> &a) {
    for (auto &v : a)
      value(v);
  }
  template <std::size_t N>
  void prefix(std::array<std::uint8_t, N> &a, unsigned size) {
    std::copy_n(cursor, size, a.begin());
    cursor += size;
  }
};
struct Writer {
  std::uint8_t *cursor;
  template <class T> void value(const T &v) {
    static_assert(std::is_unsigned_v<T>);
    for (unsigned i = 0; i < sizeof(T); ++i)
      *cursor++ = static_cast<std::uint8_t>(v >> (8 * i));
  }
  template <class T, std::size_t N> void values(const std::array<T, N> &a) {
    for (const auto &v : a)
      value(v);
  }
  template <std::size_t N>
  void prefix(const std::array<std::uint8_t, N> &a, unsigned size) {
    cursor = std::copy_n(a.begin(), size, cursor);
  }
};
// Field sequence is include/structs.asm::game_state. Reserved names use source
// US offsets for stable documentation; JP has three fewer favourite-name bytes.
template <class IO, class State> void game_fields(IO &io, State &s, Layout l) {
  io.values(s.mother2_player_name);
  io.values(s.earthbound_player_name);
  io.values(s.pet_name);
  io.values(s.favourite_food);
  io.prefix(s.favourite_thing, l.favourite_thing_bytes);
  io.value(s.money_carried);
  io.value(s.bank_balance);
  io.value(s.party_psi);
  io.value(s.guest_1);
  io.value(s.guest_2);
  io.value(s.guest_1_hp);
  io.value(s.guest_2_hp);
  io.value(s.party_status);
  io.value(s.guest_1_backup);
  io.value(s.guest_2_backup);
  io.value(s.guest_1_hp_backup);
  io.value(s.guest_2_hp_backup);
  io.value(s.wallet_backup);
  io.values(s.stored_items);
  io.values(s.party_order);
  io.value(s.reserved_80);
  io.value(s.leader_x);
  io.value(s.reserved_84);
  io.value(s.leader_y);
  io.value(s.reserved_88);
  io.value(s.leader_direction);
  io.value(s.trodden_tile_type);
  io.value(s.walking_style);
  io.value(s.reserved_90);
  io.value(s.reserved_92);
  io.value(s.current_party_members);
  io.values(s.display_order);
  io.values(s.controlled_order);
  io.values(s.reserved_a2);
  io.value(s.party_count);
  io.value(s.controlled_count);
  io.value(s.reserved_b0);
  io.value(s.reserved_b2);
  io.values(s.reserved_b4);
  io.values(s.reserved_b6);
  io.values(s.reserved_b8);
  io.value(s.auto_fight);
  io.value(s.exit_mouse_x);
  io.value(s.exit_mouse_y);
  io.value(s.text_speed);
  io.value(s.sound_setting);
  io.value(s.reserved_c3);
  io.values(s.reserved_c4);
  io.values(s.hotspot_modes);
  io.values(s.hotspot_ids);
  io.values(s.hotspot_content_references);
  for (auto &photo : s.photos) {
    io.value(photo.flags);
    io.values(photo.party);
  }
  io.value(s.elapsed_timer);
  io.value(s.text_flavour);
}
template <class IO, class State>
void character_fields(IO &io, State &s, Layout l) {
  io.prefix(s.name, l.character_name_bytes);
  auto &v = s.values;
  io.value(v.level);
  io.value(v.experience);
  io.value(v.maximum_hp);
  io.value(v.maximum_pp);
  io.values(v.afflictions);
  io.value(v.offense);
  io.value(v.defense);
  io.value(v.speed);
  io.value(v.guts);
  io.value(v.luck);
  io.value(v.vitality);
  io.value(v.iq);
  io.value(v.base_offense);
  io.value(v.base_defense);
  io.value(v.base_speed);
  io.value(v.base_guts);
  io.value(v.base_luck);
  io.value(v.base_vitality);
  io.value(v.base_iq);
  io.values(v.items);
  io.values(v.equipment);
  io.values(s.reserved_53_59);
  io.value(s.position_index);
  io.value(s.reserved_63);
  io.value(s.reserved_65);
  io.value(v.hp_fraction);
  io.value(v.current_hp);
  io.value(v.target_hp);
  io.value(v.pp_fraction);
  io.value(v.current_pp);
  io.value(v.target_pp);
  io.value(v.hp_pp_window_options);
  io.value(s.miss_rate);
  io.value(v.fire_resistance);
  io.value(v.freeze_resistance);
  io.value(v.flash_resistance);
  io.value(v.paralysis_resistance);
  io.value(v.hypnosis_brainshock_resistance);
  io.value(s.boosted_speed);
  io.value(s.boosted_guts);
  io.value(s.boosted_vitality);
  io.value(s.boosted_iq);
  io.value(s.boosted_luck);
  io.values(s.reserved_92_94);
}
template <class IO, class State> void state_fields(IO &io, State &s, Layout l) {
  game_fields(io, s.game, l);
  for (auto &character : s.characters)
    character_fields(io, character, l);
  io.values(s.event_flags);
}
void check_regional_fields(const PersistedState &s, Layout l) {
  if (std::any_of(s.game.favourite_thing.begin() + l.favourite_thing_bytes,
                  s.game.favourite_thing.end(), [](auto v) { return v != 0; }))
    throw std::invalid_argument(
        "Native save contains out-of-region favourite-name bytes");
  for (const auto &c : s.characters)
    if (std::any_of(c.name.begin() + l.character_name_bytes, c.name.end(),
                    [](auto v) { return v != 0; }))
      throw std::invalid_argument(
          "Native save contains out-of-region character-name bytes");
}
} // namespace

Layout layout(GameVersion version) {
  switch (version) {
  case GameVersion::US:
    return {0x493, 473, 95, 12, 5};
  case GameVersion::JP:
    return {0x48a, 470, 94, 9, 4};
  }
  throw std::invalid_argument("Unsupported native save region");
}
SaveArchive::SaveArchive(GameVersion version,
                         std::span<const std::uint8_t> input)
    : version_(version) {
  (void)layout(version);
  if (input.size() != byte_size)
    throw std::invalid_argument(
        "Native ordinary SRAM must contain exactly 8192 bytes");
  std::copy(input.begin(), input.end(), bytes_.begin());
}
SaveArchive SaveArchive::empty(GameVersion version) {
  SaveArchive result(version, std::array<std::uint8_t, byte_size>{});
  result.repair_integrity();
  return result;
}
bool SaveArchive::version_matches() const noexcept {
  return read16(bytes_.data() + version_offset) ==
         (version_ == GameVersion::JP ? 0x48a : 0x493);
}
void SaveArchive::require_version() const {
  if (!version_matches())
    throw std::runtime_error("Native save region/version mismatch; explicit "
                             "integrity repair required");
}
BlockValidation SaveArchive::validate_block(unsigned block) const {
  if (block >= slot_count * copies_per_slot)
    throw std::out_of_range("Native save block must be 0..5");
  return validate(bytes_.data() + block * block_size);
}
void SaveArchive::erase_block(unsigned block) noexcept {
  auto *p = bytes_.data() + block * block_size;
  std::fill_n(p, block_size, 0);
  std::copy(signature.begin(), signature.end(), p);
}
void SaveArchive::copy_block(unsigned destination, unsigned source) noexcept {
  if (destination != source)
    std::copy_n(bytes_.data() + source * block_size, block_size,
                bytes_.data() + destination * block_size);
}
IntegrityReport SaveArchive::repair_integrity() noexcept {
  IntegrityReport report;
  report.version_reset = !version_matches();
  if (report.version_reset)
    bytes_.fill(0);
  for (unsigned block = 0; block < slot_count * copies_per_slot; ++block) {
    if (!matches_signature(bytes_.data() + block * block_size)) {
      report.signature_erased[block] = true;
      erase_block(block);
    }
  }
  for (unsigned slot = 0; slot < slot_count; ++slot) {
    const auto primary = slot * 2, backup = primary + 1;
    if (!validate(bytes_.data() + primary * block_size).valid()) {
      erase_block(primary);
      if (!validate(bytes_.data() + backup * block_size).valid()) {
        erase_block(backup);
        report.selected[slot] = SelectedCopy::Erased;
        report.lost_slots |= static_cast<std::uint8_t>(1u << slot);
        continue;
      }
      copy_block(primary, backup);
      report.selected[slot] = SelectedCopy::Backup;
    }
    if (!validate(bytes_.data() + backup * block_size).valid()) {
      erase_block(backup);
      copy_block(backup, primary);
      report.backup_repaired[slot] = true;
    }
  }
  write16(bytes_.data() + version_offset,
          version_ == GameVersion::JP ? 0x48a : 0x493);
  return report;
}
PersistedState SaveArchive::load(unsigned slot) const {
  check_slot(slot);
  require_version();
  if (!validate_block(slot * 2).valid())
    throw std::runtime_error(
        "Native save primary is damaged; explicit integrity repair required");
  PersistedState result;
  result.version = version_;
  Reader reader{bytes_.data() + slot * 2 * block_size + header_size};
  state_fields(reader, result, layout(version_));
  return result;
}
void SaveArchive::save(unsigned slot, const PersistedState &state,
                       std::uint32_t elapsed_timer) {
  check_slot(slot);
  require_version();
  if (state.version != version_)
    throw std::invalid_argument(
        "Native save state belongs to a different region");
  const auto l = layout(version_);
  check_regional_fields(state, l);
  for (unsigned copy = 0; copy < copies_per_slot; ++copy)
    if (!validate_block(slot * 2 + copy).signature)
      throw std::runtime_error(
          "Native save signature requires explicit integrity repair");
  auto saved = state;
  saved.game.elapsed_timer = elapsed_timer;
  // All rejecting checks precede the first write; these fixed-field writes
  // allocate nothing and cannot fail partway through the redundant update.
  for (unsigned copy = 0; copy < copies_per_slot; ++copy) {
    auto *block = bytes_.data() + (slot * 2 + copy) * block_size;
    Writer writer{block + header_size};
    state_fields(writer, saved, l);
    const auto sum = checksums(block);
    write16(block + 28, sum.add);
    write16(block + 30, sum.xor_words);
  }
}
void SaveArchive::copy_slot(unsigned destination, unsigned source) {
  check_slot(destination);
  check_slot(source);
  require_version();
  copy_block(destination * 2, source * 2);
  copy_block(destination * 2 + 1, source * 2 + 1);
}
void SaveArchive::erase_slot(unsigned slot) {
  check_slot(slot);
  require_version();
  erase_block(slot * 2);
  erase_block(slot * 2 + 1);
}
} // namespace eb::native::saves
