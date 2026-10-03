#pragma once

#include "eb/native/battle/enemy_resources.hpp"
#include "eb/native/dialogue/program.hpp"

namespace eb::native::battle {
enum class EncounterMessage { PartyFirst, Asleep, CannotConcentrate, Strange, Unconscious,
                              EnemiesFirst, Fled, FleeFailed };
struct EncounterEnemy {
    std::uint8_t music{}, drop_rate{}, item{};
    dialogue::ReferenceKey opening{};
};
struct EncounterNpc { std::uint8_t targeting{}, enemy{}; };
struct ConsolationItems { std::uint8_t enemy{}; std::array<std::uint8_t, 8> items{}; };
// Startup metadata is imported from the user's regional image. References
// identify the existing dialogue Program; this catalog contains no text copy.
class EncounterResources {
public:
    static std::shared_ptr<const EncounterResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const noexcept { return version_; }
    const EncounterEnemy& enemy(unsigned id) const { return enemies_.at(id); }
    const EncounterNpc& npc(unsigned id) const { return npcs_.at(id); }
    std::span<const ConsolationItems, 2> consolation() const noexcept { return consolation_; }
    const dialogue::ReferenceKey& message(EncounterMessage m) const { return messages_.at(static_cast<unsigned>(m)); }
private:
    explicit EncounterResources(GameVersion v) : version_(v) {}
    GameVersion version_;
    std::array<EncounterEnemy, EnemyResources::count> enemies_{};
    std::array<EncounterNpc, 19> npcs_{};
    std::array<ConsolationItems, 2> consolation_{};
    std::array<dialogue::ReferenceKey, 8> messages_{};
};
} // namespace eb::native::battle
