#pragma once

#include "eb/game_version.hpp"
#include "eb/native/party/state.hpp"
#include <array>
#include <cstdint>

namespace eb::native::saves {
// Persisted values, not a live WRAM image. Unknown source fields are retained
// explicitly so a native save does not destroy state whose owner is not ported.
struct PhotoState {
  std::uint16_t flags{};
  std::array<std::uint8_t, 6> party{};
};
struct GameState {
  std::array<std::uint8_t, 12> mother2_player_name{};
  std::array<std::uint8_t, 24> earthbound_player_name{};
  std::array<std::uint8_t, 6> pet_name{}, favourite_food{};
  // JP uses the first nine bytes; the remaining three must be zero.
  std::array<std::uint8_t, 12> favourite_thing{};
  std::uint32_t money_carried{}, bank_balance{};
  std::uint8_t party_psi{}, guest_1{}, guest_2{};
  std::uint16_t guest_1_hp{}, guest_2_hp{};
  std::uint8_t party_status{}, guest_1_backup{}, guest_2_backup{};
  std::uint16_t guest_1_hp_backup{}, guest_2_hp_backup{};
  std::uint32_t wallet_backup{};
  std::array<std::uint8_t, 36> stored_items{};
  std::array<std::uint8_t, 6> party_order{};
  std::uint16_t reserved_80{}, leader_x{}, reserved_84{}, leader_y{},
      reserved_88{};
  std::uint16_t leader_direction{}, trodden_tile_type{}, walking_style{};
  std::uint16_t reserved_90{}, reserved_92{}, current_party_members{};
  std::array<std::uint8_t, 6> display_order{}, controlled_order{};
  std::array<std::uint8_t, 12> reserved_a2{};
  std::uint8_t party_count{}, controlled_count{};
  std::uint16_t reserved_b0{}, reserved_b2{};
  std::array<std::uint8_t, 2> reserved_b4{};
  std::array<std::uint8_t, 3> reserved_b6{}, reserved_b8{};
  std::uint8_t auto_fight{};
  std::uint16_t exit_mouse_x{}, exit_mouse_y{};
  std::uint8_t text_speed{}, sound_setting{}, reserved_c3{};
  std::array<std::uint8_t, 4> reserved_c4{};
  std::array<std::uint8_t, 2> hotspot_modes{}, hotspot_ids{};
  // Authored content references persisted by the source, not host pointers.
  std::array<std::uint32_t, 2> hotspot_content_references{};
  std::array<PhotoState, 32> photos{};
  std::uint32_t elapsed_timer{};
  std::uint8_t text_flavour{};
};
struct Character {
  // JP uses four bytes; the fifth must be zero.
  std::array<std::uint8_t, 5> name{};
  party::Character values{};
  std::array<std::uint16_t, 4> reserved_53_59{};
  std::uint16_t position_index{}, reserved_63{}, reserved_65{};
  std::uint8_t miss_rate{};
  std::uint8_t boosted_speed{}, boosted_guts{}, boosted_vitality{},
      boosted_iq{}, boosted_luck{};
  std::array<std::uint8_t, 3> reserved_92_94{};
};
struct PersistedState {
  GameVersion version = GameVersion::US;
  GameState game{};
  std::array<Character, 6> characters{};
  std::array<std::uint8_t, 128> event_flags{};
  // This is the exact file-select occupancy test, not a checksum predicate.
  bool occupied() const noexcept { return game.favourite_thing[1] != 0; }
};
} // namespace eb::native::saves
