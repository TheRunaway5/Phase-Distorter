#pragma once

#include "eb/native/action_bindings.hpp"
#include "eb/native/sprite_appearance.hpp"

namespace eb::native {

struct AppearanceData {
    struct Extent {
        std::uint16_t left{}, top{};
    };
    std::array<Extent, 17> shape_extents{};
    std::array<std::uint16_t, 10> footstep_sounds{};
};
AppearanceData import_appearance_data(std::span<const std::uint8_t> assets, GameVersion version);

struct AppearanceActorContext {
    unsigned shape{};
    std::uint16_t phase_id{}, walking_style{};
    // Standalone call predicate. ActorWorld always derives this from the
    // authoritative scene footstep_role and the actor's authored role.
    bool footstep_owner{};
    // Source nausea/mushroom overlay intent, independent of frame visibility.
    std::uint16_t overlay_flags{};
};
struct AppearanceSceneContext {
    std::uint16_t movement_counter{}, battle_swirl_ticks{}, teleport_destination{}, intangibility_ticks{};
    // Native material indices, independent of serialized table byte offsets.
    std::optional<unsigned> footstep_role;
    unsigned footstep_kind{};
    std::optional<unsigned> footstep_override;
    bool transitions_disabled{};
};
struct AppearanceServiceResult {
    bool handled{}, refreshed{};
    // Some source routines return incidental graphics-storage values. Native
    // rendering has no such storage. A missing value requires the compiler to
    // prove that the script discards it; callers must never invent a value.
    std::optional<std::uint16_t> script_value;
    // Intent only: the native audio service owns playback and its ordering.
    std::optional<std::uint16_t> sound;
};

// Authored visibility predicate, including its 16-bit coordinate wrapping.
// This gates frame refreshes only; presentation culling is separate.
bool appearance_refresh_visible(const AppearanceData &data, unsigned shape, int screen_x, int screen_y);

// Executes explicit appearance commands on actor-owned host state. Unsupported
// operations return handled=false without mutation. Invalid inputs throw before
// committing animation, artwork or intents. No graphics-memory model is used.
AppearanceServiceResult apply_appearance_action(const BoundAction &action, ActionActorState &actor,
                                                const ActorActionContext &action_context,
                                                const AppearanceActorContext &appearance_context,
                                                const AppearanceSceneContext &scene,
                                                const AppearanceData &data, SpriteAppearance &appearance);

} // namespace eb::native
