#pragma once

#include "eb/game_version.hpp"
#include "eb/native/dialogue/program.hpp"
#include <array>
#include <cstdint>
#include <span>

namespace eb::native {
struct TeleportDestination {
    std::uint16_t tile_x{}, tile_y{};
    std::uint8_t direction{}, screen_transition{};
    std::uint16_t unknown6{};
    bool operator==(const TeleportDestination &) const = default;
};
struct ScreenTransitionConfig {
    std::uint8_t duration{}, animation{}, flags{}, fade{}, direction{};
    // C42631 consumes the complete little-endian word at offsets5..6.
    std::uint16_t speed{};
    std::uint8_t start_sound{}, secondary_duration{}, secondary_animation{}, secondary_flags{}, end_sound{};
    unsigned effective_duration() const noexcept { return duration==255?900:duration; }
    bool operator==(const ScreenTransitionConfig &) const = default;
};

// General TELEPORT destinations and SCREEN_TRANSITION's packed settings.
// These differ from the seventeen named PSI destinations. Imports retain all
// source bits; interpretation and live transition work belong to the caller.
class WorldTeleportResources {
public:
    static constexpr unsigned destination_count=234, transition_count=34;
    WorldTeleportResources(std::span<const std::uint8_t>,GameVersion);
    GameVersion version() const noexcept { return version_; }
    const TeleportDestination &destination(unsigned index) const { return destinations_.at(index); }
    const ScreenTransitionConfig &transition(unsigned index) const { return transitions_.at(index); }
    dialogue::ReferenceKey buzz_buzz_message() const noexcept { return buzz_buzz_; }
    // C42631's completed signed Mode7 products, in source 8.8 form. Direction
    // selects imported sine samples; no gameplay processor or bus is involved.
    std::array<std::uint16_t,2> motion(std::uint8_t direction,std::uint16_t speed) const noexcept;
private:
    GameVersion version_;
    std::array<TeleportDestination,destination_count> destinations_{};
    std::array<ScreenTransitionConfig,transition_count> transitions_{};
    dialogue::ReferenceKey buzz_buzz_{};
    std::array<std::uint8_t,256> sine_{};
};
} // namespace eb::native
