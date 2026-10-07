#pragma once

#include "eb/native/actor_creation.hpp"
#include <array>

namespace eb::native {
struct FloatingSpriteDefinition {
    std::uint16_t sprite{};
    std::uint8_t placement{};
    std::int8_t offset_x{}, offset_y{};
    bool operator==(const FloatingSpriteDefinition &) const = default;
};
struct WorldFloatingSpriteData {
    std::array<FloatingSpriteDefinition, 12> icons{};
    std::array<std::uint16_t, 17> half_widths{}, heights{};
    std::uint16_t event_script = 785;
};
WorldFloatingSpriteData import_world_floating_sprite_data(
    std::span<const std::uint8_t>, GameVersion);

// The source ACTIVE_MANPU words belong to this real producer. Actor pose,
// shape, prepared variables, scripts and raw attachment priorities remain
// authoritative in their existing owners.
struct WorldFloatingSpriteState {
    std::uint16_t x{}, y{};
    bool operator==(const WorldFloatingSpriteState &) const = default;
};
class WorldFloatingSprites {
public:
    WorldFloatingSprites(const WorldFloatingSpriteData &, ActorWorld &,
                         PreparedActorState &, WorldFloatingSpriteState &);
    WorldFloatingSprites(const WorldFloatingSprites &) = delete;
    WorldFloatingSprites &operator=(const WorldFloatingSprites &) = delete;
    bool uses(const ActorWorld &) const noexcept;
    // The first retained numeric NPC selector wins, even if that role has
    // retired. An absent/retired parent is the source's true no-op branch.
    std::optional<ActorId> create_at_npc(std::uint16_t npc, std::uint8_t icon);
    std::optional<ActorId> create_at_sprite(std::uint16_t sprite, std::uint8_t icon);
    std::optional<ActorId> create_at_role(std::uint16_t role, std::uint8_t icon);
    void remove_at_npc(std::uint16_t npc);
    void remove_at_sprite(std::uint16_t sprite);
    void remove_at_role(std::uint16_t role);
private:
    const WorldFloatingSpriteData &data_;
    ActorWorld &actors_;
    PreparedActorState &prepared_;
    WorldFloatingSpriteState &state_;
};
} // namespace eb::native
