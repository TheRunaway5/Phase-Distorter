#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb::native::dialogue {
// Semantic live-value keys. The imported CC_1C_01 descriptors are translated
// to these fields once; no source memory address escapes the importer. Party
// indices are zero-based and meaningful only for CharacterName through BaseLuck.
enum class StatField {
    None, Mother2PlayerName, EarthBoundPlayerName, PetName, FavouriteFood,
    FavouriteThing, MoneyCarried, BankBalance, CharacterName, Level, Experience,
    CurrentHp, TargetHp, MaximumHp, CurrentPp, TargetPp, MaximumPp, Offense,
    Defense, Speed, Guts, Luck, Vitality, Iq, BaseIq, BaseOffense, BaseDefense,
    BaseSpeed, BaseGuts, BaseLuck
};
struct StatKey {
    StatField field{};
    std::uint8_t party_index{};
    bool operator==(const StatKey&) const = default;
};
enum class StatKind { String, Number };
struct StatDescriptor {
    StatKey key{};
    StatKind kind{};
    std::uint8_t size{}; // String maximum, or the source integer width1/2/4.
    bool operator==(const StatDescriptor&) const = default;
};
enum class CharacterNameKind { Party, Pet, Enemy };
struct CharacterNameSelection {
    CharacterNameKind kind{};
    std::uint16_t index{}; // Zero-based party index, or imported enemy index.
    std::uint16_t maximum{};
    bool operator==(const CharacterNameSelection&) const = default;
};
struct PsiNameSelection {
    std::uint8_t name_id{}, level{}; // Both one-based; name1 uses live favourite thing.
    bool operator==(const PsiNameSelection&) const = default;
};
struct ItemProperties {
    std::uint8_t type{}, flags{};
    std::array<std::uint8_t, 4> parameters{}; // strength, epi, ep, special; retain raw signed-byte encodings.
    bool operator==(const ItemProperties&) const = default;
};

// Immutable authored substitution catalogs and typed stat descriptors. Live
// names/numbers remain in the caller's owner and are queried using StatKey.
// A string provider must read each byte live after suspended glyph effects;
// do not snapshot mutable name fields into these immutable resources.
class SubstitutionResources {
  public:
    static std::shared_ptr<const SubstitutionResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    const StatDescriptor& stat(unsigned id) const;
    CharacterNameSelection character_name(unsigned id) const;
    std::span<const std::uint8_t> item_text(unsigned id) const;
    // Inventory copies the complete fixed name field, including bytes after
    // an embedded NUL. Shares the same owned imported table as item_text;
    // US unbounded substitution continuation remains a separate view.
    std::span<const std::uint8_t> raw_item_name(unsigned id) const;
    // Shares the imported item table with names; no mutable inventory lives here.
    ItemProperties item_properties(unsigned id) const;
    std::uint16_t item_cost(unsigned id) const;
    std::uint8_t npc_flags(unsigned id) const { return npc_flags_.at(id); }
    std::uint8_t npc_enemy(unsigned id) const { return npc_enemies_.at(id); }
    std::span<const std::uint8_t> teleport_name(unsigned id) const;
    std::span<const std::uint8_t> enemy_name(unsigned id) const;
    // US C3E75D uses the raw enemy table byte and four authored THETHE bytes.
    // JP has neither article content nor that metadata; both accessors reject it.
    std::uint8_t enemy_article(unsigned id) const;
    std::span<const std::uint8_t, 4> article_text(bool capital) const;
    // psi_name(1) is deliberately invalid: GET_PSI_NAME reads the live
    // favourite-thing field there. psi() rejects the table's null sentinels.
    std::span<const std::uint8_t> psi_name(unsigned name_id) const;
    std::span<const std::uint8_t> psi_suffix(unsigned level) const;
    PsiNameSelection psi(unsigned ability_id) const;
    unsigned stat_count() const { return unsigned(stats_.size()); }
    unsigned item_count() const { return unsigned(item_text_lengths_.size()); }
    unsigned teleport_count() const { return unsigned(teleports_.size()); }
    unsigned enemy_count() const { return unsigned(enemies_.size()); }
    unsigned character_selector_count() const { return unsigned(npc_enemies_.size()); }
    unsigned psi_count() const { return unsigned(abilities_.size()); }
    unsigned psi_name_count() const { return unsigned(psi_names_.size()); }
    unsigned psi_suffix_count() const { return unsigned(suffixes_.size()); }

  private:
    explicit SubstitutionResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<StatDescriptor, 96> stats_{};
    std::array<std::uint8_t, 19> npc_enemies_{}, npc_flags_{};
    std::array<PsiNameSelection, 54> abilities_{};
    std::vector<std::uint8_t> item_table_;
    std::array<unsigned, 254> item_text_lengths_{};
    unsigned item_stride_{}, item_name_size_{};
    std::array<std::vector<std::uint8_t>, 17> teleports_, psi_names_;
    std::array<std::vector<std::uint8_t>, 231> enemies_;
    std::array<std::uint8_t, 231> enemy_articles_{};
    std::array<std::uint8_t, 8> articles_{};
    std::array<std::array<std::uint8_t, 2>, 5> suffixes_{};
};
} // namespace eb::native::dialogue
