#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>

namespace eb::native::battle {
enum class ShieldMessage { Reflected, Absorbed, WornOff };
struct ActionMetadata {
    std::uint8_t direction{}, target{}, type{}, pp_cost{};
    std::uint32_t description{};
    bool operator==(const ActionMetadata&) const = default;
};

// Imported action data and regional authored references used by the complete
// shield helpers. No action function pointers or instruction dispatch are kept.
class ActionResources {
public:
    static constexpr unsigned action_count = 318;
    static std::shared_ptr<const ActionResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    std::uint8_t type(unsigned action) const { return actions_.at(action).type; }
    const ActionMetadata& action(unsigned id) const { return actions_.at(id); }
    const std::array<std::uint8_t, 4>& message(ShieldMessage) const;
private:
    explicit ActionResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<ActionMetadata, action_count> actions_{};
    std::array<std::array<std::uint8_t, 4>, 3> messages_{};
};
} // namespace eb::native::battle
