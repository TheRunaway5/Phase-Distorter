#pragma once

#include "eb/game_version.hpp"
#include "eb/native/party/state.hpp"
#include "eb/native/story/random.hpp"
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>

namespace eb::native {
// Borrow these values from their authoritative owner. Growth reads, but does
// not change, the five saved boosts or flag74 (FLG_WIN_OSCAR).
struct CharacterGrowthContext {
  std::uint8_t boosted_speed{}, boosted_guts{}, boosted_vitality{},
      boosted_iq{}, boosted_luck{};
  bool ness_nightmare_defeated{};
};
struct CharacterGrowthLayout {
  std::size_t coefficients{}, cadence{}, experience{}, items{}, initial_stats{};
  unsigned item_stride{}, item_parameters{};
};
CharacterGrowthLayout character_growth_layout(GameVersion);

// Stat gains are in source update order: offense, defense, speed, guts,
// vitality, IQ, luck. These are numerical results, not queued UI messages.
struct CharacterLevelGrowth {
  std::uint8_t level{};
  std::array<std::uint16_t, 7> stats{};
  std::uint16_t hp{}, pp{};
};

// Immutable authored growth/item data. No processor, bus, global RNG or second
// mutable party owner. The explicitly silent methods implement X=0 source
// calls only. VisibleCharacterGrowth shares the same private arithmetic while
// preserving presentation requests at their original yield points.
class CharacterGrowth {
public:
  CharacterGrowth(std::span<const std::uint8_t> assets, GameVersion);
  GameVersion version() const noexcept { return version_; }
  std::uint32_t experience_for_level(unsigned character, unsigned level) const;
  void recalculate_stats(party::Character &, unsigned character,
                         const CharacterGrowthContext & = {}) const;
  // CHANGE_EQUIPPED_* recalculates only the source slot's affected fields.
  // Positions are one-based inventory indices; zero unequips. No growth/RNG.
  std::uint16_t change_equipment(party::Character &, unsigned character,
      party::EquipmentSlot, std::uint16_t position,
      const CharacterGrowthContext & = {}) const;
  void recalculate_derived_stat(party::Character &, unsigned character, unsigned stat,
                               const CharacterGrowthContext &) const;
  CharacterLevelGrowth
  level_up_silent(party::Character &, unsigned character, story::RandomState &,
                  const CharacterGrowthContext & = {}) const;
  unsigned reset_to_level(party::Character &, unsigned character,
                          unsigned level, bool set_experience,
                          story::RandomState &,
                          const CharacterGrowthContext & = {}) const;
  unsigned gain_experience_silent(party::Character &, unsigned character,
                                  std::uint32_t amount, story::RandomState &,
                                  const CharacterGrowthContext & = {}) const;
  // Exact four-character FILE_MENU_LOOP growth/heal/inventory sequence and
  // initial wallet assignment. Existing names, flags, equipment and unrelated
  // fields survive. Caller supplies the source's initialized party/context;
  // this does not reset the rest of the game or create world actors.
  std::array<unsigned, 4> initialize_new_game_characters(
      party::State &, story::RandomState &,
      const std::array<CharacterGrowthContext, 4> & = {}) const;

private:
  friend class VisibleCharacterGrowth;
  struct ItemParameters {
    std::uint8_t strength{}, poo_strength{}, secondary{}, special{};
  };
  struct InitialCharacter {
    std::uint16_t level{}, experience{};
    std::array<std::uint8_t, 10> items{};
  };
  void validate(const party::Character &, unsigned character) const;
  void recalculate_stat(party::Character &, unsigned character, unsigned stat,
                        const CharacterGrowthContext &) const;
  CharacterLevelGrowth level_up(party::Character &, unsigned character,
                                story::RandomState &,
                                const CharacterGrowthContext &) const;
  std::uint16_t grow_stat(party::Character &, unsigned character,
                          unsigned old_level, unsigned stat,
                          story::RandomState &,
                          const CharacterGrowthContext &) const;
  std::uint16_t grow_hp(party::Character &, story::RandomState &) const;
  std::uint16_t grow_pp(party::Character &, unsigned character,
                        story::RandomState &,
                        const CharacterGrowthContext &) const;
  GameVersion version_;
  std::array<std::array<std::uint8_t, 7>, 4> coefficients_{};
  std::array<std::uint8_t, 4> cadence_{};
  std::array<std::array<std::uint32_t, 100>, 4> experience_{};
  std::array<ItemParameters, 256> items_{};
  std::array<InitialCharacter, 4> initial_{};
  std::uint16_t initial_money_{};
};
} // namespace eb::native
