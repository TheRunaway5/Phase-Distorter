#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>

namespace eb::native::battle {
enum class ShieldMessage { Reflected, Absorbed, WornOff };

// Imported action data and regional authored references used by the complete
// shield helpers. No action function pointers or instruction dispatch are kept.
class ActionResources {
public:
    static constexpr unsigned action_count = 318;
    static std::shared_ptr<const ActionResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    std::uint8_t type(unsigned action) const { return types_.at(action); }
    const std::array<std::uint8_t, 4>& message(ShieldMessage) const;
private:
    explicit ActionResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<std::uint8_t, action_count> types_{};
    std::array<std::array<std::uint8_t, 4>, 3> messages_{};
};
} // namespace eb::native::battle
