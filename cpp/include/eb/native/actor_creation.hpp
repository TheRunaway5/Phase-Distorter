#pragma once

#include "eb/native/actor_world.hpp"

namespace eb::native {

// Explicit input to native actor creation, replacing ambient prepared globals.
// Coordinates/variables retain the authored 16-bit domain; phase_id is only an
// animation phase offset, never an allocation slot or actor identity.
struct PreparedActorState {
    std::uint16_t x{}, y{}, height{}, direction{};
    std::array<std::uint16_t, 8> variables{};
    std::uint16_t phase_id{};
    // INIT_ENTITY input. Graphical CREATE_ENTITY sets priority to one itself.
    std::uint16_t priority{};
};

// Builds the CREATE_ENTITY + prepared-facing contract. The world supplies a
// fresh logical identity and schedules the actor; this factory runs no script,
// projection or animation and imposes no legacy actor/graphics slot limit.
// Undefined leftovers from reused source task/actor slots are not creation
// inputs. Fresh native objects retain deterministic typed defaults for them.
WorldActorSpec make_actor_spec(unsigned sprite, unsigned script, const PreparedActorState &prepared,
                               const SpriteResources &sprites, const ActionScriptData &scripts,
                               std::optional<NpcId> npc = std::nullopt);

struct ActorCreationData {
    // Authored per-shape collision selector, preserved as a full word. Values
    // are not booleans; the future collision service consumes this metadata.
    std::array<std::uint16_t, 17> collision_profiles{};
};
ActorCreationData import_actor_creation_data(std::span<const std::uint8_t> assets, GameVersion version);

struct ActorCreationMetadata {
    SpriteDefinition sprite;
    std::uint16_t collision_profile{};
    unsigned lower_parts{};
};
// Resource/collision facts initialized by CREATE_ENTITY but not yet owned by
// ActorWorld's movement solver. Returning them explicitly avoids a hidden
// compatibility allocation or pretending collision has been implemented.
ActorCreationMetadata actor_creation_metadata(SpriteResources &sprites, const ActorCreationData &data,
                                              unsigned sprite);

} // namespace eb::native
