#include "eb/native/actor_creation.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
int signed_coordinate(std::uint16_t value) { return value < 0x8000 ? int(value) : int(value) - 65536; }
} // namespace

WorldActorSpec make_actor_spec(unsigned sprite, unsigned script, const PreparedActorState &prepared,
                               const SpriteResources &sprites, const ActionScriptData &scripts,
                               std::optional<NpcId> npc) {
    const auto &definition = sprites.definition(sprite);
    (void)scripts.entry(script);
    WorldActorSpec result;
    result.sprite = sprite;
    result.script = script;
    result.npc = npc;
    result.action.position = {std::uint32_t(prepared.x) << 16 | 0x8000,
                              std::uint32_t(prepared.y) << 16 | 0x8000,
                              std::uint32_t(prepared.height) << 16 | 0x8000};
    result.action.variables = prepared.variables;
    result.action.velocity = {};
    result.action.animation = 0xffff;
    result.action.priority = 1;
    result.action.alive = true;
    result.behavior.direction = prepared.direction;
    result.behavior.collision_object = -1;
    result.behavior.physics = ActorPhysics::Planar;
    result.behavior.projection = ActorProjection::World;
    result.behavior.tick = ActorTickCallback::None;
    result.behavior.draw_world = true;
    // INIT_ENTITY first stores absolute coordinates in the screen fields. The
    // world's later projection pass applies the current camera exactly once.
    result.behavior.projected_x = signed_coordinate(prepared.x);
    result.behavior.projected_y = signed_coordinate(prepared.y);
    result.appearance_context.shape = definition.shape;
    result.appearance_context.phase_id = prepared.phase_id;
    return result;
}

ActorCreationData import_actor_creation_data(std::span<const std::uint8_t> assets, GameVersion version) {
    const unsigned offset = version == GameVersion::JP ? 0x42a29 : 0x42aeb;
    ActorCreationData result;
    if (offset > assets.size() || result.collision_profiles.size() * 2 > assets.size() - offset)
        throw std::invalid_argument("Truncated actor creation metadata");
    for (unsigned i = 0; i < result.collision_profiles.size(); ++i)
        result.collision_profiles[i] = assets[offset + i * 2] | unsigned(assets[offset + i * 2 + 1]) << 8;
    return result;
}

ActorCreationMetadata actor_creation_metadata(SpriteResources &sprites, const ActorCreationData &data,
                                              unsigned sprite) {
    const auto &definition = sprites.definition(sprite);
    const auto profile = data.collision_profiles.at(definition.shape);
    const auto image = sprites.acquire(sprite, 0);
    return {definition, profile, unsigned(image->parts.size()) - definition.upper_parts};
}
} // namespace eb::native
