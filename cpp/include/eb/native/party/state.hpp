#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <span>

namespace eb::native::party {
enum class EquipmentSlot : std::uint8_t { Weapon, Body, Arms, Other };
enum class NameField { Mother2Player, EarthBoundPlayer, Pet, FavouriteFood, FavouriteThing };
enum class AfflictionGroup : unsigned {
    PersistentEasyHeal, PersistentHardHeal, Temporary, Strangeness,
    Concentration, Homesickness, Shield
};

// Source-width character values. Equipment contains one-based inventory
// positions, not item IDs; zero means no equipped position. Item zero is empty.
// This owner performs no item use, equipment transaction or combat simulation.
struct Character {
    std::uint8_t level{};
    std::uint32_t experience{};
    std::uint16_t maximum_hp{}, maximum_pp{};
    // Seven independent source groups, not a combined status bitmask. Keep
    // other byte values intact even when a service recognizes only one group.
    std::array<std::uint8_t, 7> afflictions{};
    std::uint8_t offense{}, defense{}, speed{}, guts{}, luck{}, vitality{}, iq{};
    std::uint8_t base_offense{}, base_defense{}, base_speed{}, base_guts{}, base_luck{}, base_vitality{}, base_iq{};
    std::array<std::uint8_t, 14> items{};
    std::array<std::uint8_t, 4> equipment{};
    std::uint16_t hp_fraction{}, current_hp{}, target_hp{};
    std::uint16_t pp_fraction{}, current_pp{}, target_pp{};
    std::uint16_t hp_pp_window_options{};
    // char_struct::unknown94, cleared by the round prefix and written by
    // battle selection. Saved character data restores it into this same live owner.
    std::uint8_t battle_selection{};
    // Raw equipment-derived levels, before battle's damage/status conversion.
    // Saved character data restores these into this same live party owner.
    std::uint8_t fire_resistance{}, freeze_resistance{}, flash_resistance{},
                 paralysis_resistance{}, hypnosis_brainshock_resistance{};
};

// The single mutable native party owner. Names are raw fixed fields (including
// embedded zeros or completely occupied fields), not translated host strings.
// Six list slots are distinct from six character records: four chosen players
// plus two guests. Inventory can inspect every record; dialogue stat descriptor
// data separately selects only the four chosen players.
// Callers explicitly initialize scene/save values; no original save format or
// authored initial state is implied by these zero-initialized native fields.
// Views/callbacks borrow this stable owner and must be destroyed before it.
class State {
  public:
    static constexpr unsigned character_count = 6, chosen_character_count = 4;
    explicit State(GameVersion);
    State(const State&) = delete;
    State& operator=(const State&) = delete;
    State(State&&) = delete;
    State& operator=(State&&) = delete;
    GameVersion version() const { return version_; }
    Character& character(unsigned one_based_character);
    const Character& character(unsigned one_based_character) const;
    std::span<std::uint8_t> name_field(unsigned one_based_character);
    std::span<const std::uint8_t> name_field(unsigned one_based_character) const;
    std::span<std::uint8_t> name_field(NameField);
    std::span<const std::uint8_t> name_field(NameField) const;

    // Source party IDs are one-based; controlled entries are zero-based record
    // indices into all six records (CHOSEN_FOUR_PTRS), not party-order slots.
    std::array<std::uint8_t, 6> party_order{}, controlled_order{};
    // GAME_STATE.unknown96 is the current overworld formation's authored IDs,
    // maintained alongside entity slots by party join/leave and UPDATE_PARTY.
    // It is not membership order or the zero-based record mapping above;
    // guest authored IDs can exceed the six owned character-record indices.
    std::array<std::uint8_t, 6> display_order{};
    // Preserve byte values separately from the list. In particular inventory
    // compares controlled_count with1; it does not normalize it to four.
    std::uint8_t party_count{}, controlled_count{};
    std::uint8_t party_status{};
    // GAME_STATE auto-fight byte; raw nonzero values are retained in saves.
    std::uint8_t auto_fight{};
    std::uint32_t money_carried{}, bank_balance{};

  private:
    GameVersion version_;
    std::array<Character, character_count> characters_{};
    std::array<std::array<std::uint8_t, 5>, character_count> character_names_{};
    std::array<std::uint8_t, 12> mother2_player_name_{}, favourite_thing_{};
    std::array<std::uint8_t, 24> earthbound_player_name_{};
    std::array<std::uint8_t, 6> pet_name_{}, favourite_food_{};
};
} // namespace eb::native::party
