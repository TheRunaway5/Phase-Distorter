#include "eb/native/actor_creation.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool value, const char *message) {
    if (!value)
        throw std::runtime_error(message);
}
template <class F> void rejects(F &&operation) {
    try {
        operation();
    } catch (const std::exception &) {
        return;
    }
    throw std::runtime_error("Invalid actor creation content was accepted");
}
} // namespace

int main() {
    try {
        native_sprite_test::Fixture fixture;
        SpriteResources sprites(fixture.bytes, fixture.layout);
        const std::array<std::uint8_t, 1> bytes{0x09};
        ActionScriptData scripts(bytes, 0, {0, 0});
        PreparedActorState prepared{0xffff, 0x8000, 23, 7, {1, 2, 3, 0xffff, 5, 6, 7, 8}, 65535};
        const auto spec = make_actor_spec(1, 1, prepared, sprites, scripts, NpcId{123});
        require(spec.script == 1 && spec.sprite == 1 && spec.npc == NpcId{123},
                "Creation lost authored script/resource/NPC identity");
        require(spec.action.position == std::array<std::uint32_t, 3>{0xffff8000, 0x80008000, 0x00178000} &&
                    spec.action.variables == prepared.variables &&
                    spec.action.velocity == std::array<std::uint32_t, 3>{},
                "Creation coordinates, fractions, prepared variables or velocity differ");
        require(spec.action.alive && spec.action.priority == 1 && spec.action.animation == 0xffff,
                "Creation invented a displayed frame or changed authored lifetime/priority");
        require(spec.behavior.projected_x == -1 && spec.behavior.projected_y == -32768 &&
                    spec.behavior.direction == 7 && spec.behavior.movement_speed == 0 &&
                    spec.behavior.surface_flags == 0 && spec.behavior.collision_object == -1 &&
                    spec.behavior.path_state == 0 && spec.behavior.obstacle_flags == 0,
                "Creation projected before its first world pass or retained movement state");
        require(spec.behavior.physics == ActorPhysics::Planar &&
                    spec.behavior.projection == ActorProjection::World &&
                    spec.behavior.tick == ActorTickCallback::None && spec.behavior.draw_world &&
                    spec.appearance_context.shape == 0 && spec.appearance_context.phase_id == 65535 &&
                    !spec.appearance_context.footstep_owner,
                "Creation callback/resource/phase defaults differ");
        ActionSceneContext scene{100, 200};
        auto behavior = spec.behavior;
        run_actor_projection(spec.action, behavior, scene);
        require(behavior.projected_x == -101 && behavior.projected_y == 32568,
                "First projection did not apply the camera once");
        ActorCreationData metadata;
        metadata.collision_profiles[0] = 0x41;
        const auto body = actor_creation_metadata(sprites, metadata, 1);
        require(body.collision_profile == 0x41 && body.sprite.palette == 5 && body.sprite.width == 16 &&
                    body.sprite.height == 24 && body.sprite.upper_parts == 1 && body.lower_parts == 1,
                "Creation lost collision/body partition content");
        rejects([&] { make_actor_spec(2, 1, prepared, sprites, scripts); });
        rejects([&] { make_actor_spec(1, 2, prepared, sprites, scripts); });
        rejects([&] { import_actor_creation_data({}, eb::GameVersion::US); });
        std::cout << "PASS native actor creation, prepared state, initial projection and resource metadata\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
