#include "eb/native/world_actor_movement.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
std::uint16_t wrap(unsigned value) { return std::uint16_t(value); }
const ActorHitbox &hitbox(const WorldActor &actor) {
    if (!actor.hitbox) throw std::logic_error("Native actor has no bound collision geometry");
    return *actor.hitbox;
}
ActorHitbox::Extent extent(const WorldActor &actor) {
    const auto &box=hitbox(actor);
    return actor.behavior.direction==2||actor.behavior.direction==6?box.lateral:box.vertical;
}
bool overlap(std::uint16_t left,std::uint16_t top,ActorHitbox::Extent moving,
             const WorldActor &candidate,bool ordinary) {
    const auto other=extent(candidate);
    const auto x=wrap((candidate.action().position[0]>>16)-other.half_width);
    const auto y=wrap((candidate.action().position[1]>>16)-other.height);
    // Source uses strict unsigned comparisons of wrapped endpoints. The NPC
    // pass subtracts one from its far edges; the preceding party pass does not.
    return top>wrap(y-moving.height) && top<wrap(y+other.height-unsigned(ordinary)) &&
           left>wrap(x-unsigned(moving.half_width)*2) &&
           left<wrap(x+unsigned(other.half_width)*2-unsigned(ordinary));
}
}
WorldActorMovement::WorldActorMovement(const WorldCollision &collision,const WorldMapArea &area)
    :collision_(collision),area_(area) {}
ActorHitbox WorldActorMovement::prepare_hitbox(const SpriteDefinition &sprite) const {
    return {collision_.shape(sprite.shape).surface_offset_y,
            {sprite.hitbox[0],sprite.hitbox[1]},{sprite.hitbox[2],sprite.hitbox[3]}};
}
bool WorldActorMovement::required(ActorPhysics mode) {
    return mode == ActorPhysics::PlanarSurface || mode == ActorPhysics::SpatialSurface ||
           mode == ActorPhysics::CollisionSurface || mode == ActorPhysics::Collision;
}
std::uint16_t WorldActorMovement::surface(const WorldActor &actor,const ActionActorState &state) const {
    return collision_.vertical_surfaces([&](CollisionCell cell){return area_.collision(cell.x,cell.y);},
        {std::uint16_t(state.position[0]>>16),std::uint16_t(state.position[1]>>16)},actor.appearance_context.shape);
}
void WorldActorMovement::advance(WorldActor &actor) const {
    const auto mode=actor.behavior.physics;
    if(!required(mode)) {run_actor_physics(actor.action(),actor.behavior);return;}
    const bool gated=mode==ActorPhysics::Collision||mode==ActorPhysics::CollisionSurface;
    if(gated&&!(actor.behavior.path_state&0x8000)) {
        if(actor.behavior.obstacle_flags&0xd0) {actor.action().velocity={};return;}
        if(actor.behavior.collision_object>=0)return;
    }
    if(mode!=ActorPhysics::Collision&&mode!=ActorPhysics::CollisionSurface&&
       mode!=ActorPhysics::PlanarSurface&&mode!=ActorPhysics::SpatialSurface)
        throw std::invalid_argument("Unknown native world physics callback");
    auto candidate=actor.action();integrate_action_motion(candidate,mode==ActorPhysics::SpatialSurface);
    // Prepare all fallible terrain work before committing either motion or the
    // refreshed surface. Skipped/blocked callbacks retain their old surface.
    const auto flags=mode==ActorPhysics::Collision?actor.behavior.surface_flags:surface(actor,candidate);
    actor.action()=candidate;actor.behavior.surface_flags=flags;
}
std::uint16_t WorldActorMovement::prospective_collision(ActorWorld &world,ActorId id) const {
    auto &moving=world.actor(id);
    if(moving.behavior.collision_object==-32768)return 0x8000;
    const auto dimensions=extent(moving);
    const auto x=std::uint16_t((moving.action().position[0]+moving.action().velocity[0])>>16);
    const auto y=std::uint16_t((moving.action().position[1]+moving.action().velocity[1])>>16);
    const auto left=wrap(x-dimensions.half_width),top=wrap(y-dimensions.height);
    std::optional<unsigned> selected;
    if(hitbox(moving).enabled) {
        const auto search=[&](unsigned first,unsigned end,bool ordinary) {
            for(unsigned role=first;role<end;++role) {
                const auto candidate_id=world.actor_for_role(role);
                if(!candidate_id||(ordinary&&*candidate_id==id))continue;
                const auto &candidate=world.actor(*candidate_id);
                if(ordinary&&candidate.npc().value_or(0xffff)>=0x1000)continue;
                if(candidate.behavior.collision_object==-32768||!hitbox(candidate).enabled)continue;
                if(overlap(left,top,dimensions,candidate,ordinary)){selected=role;return;}
            }
        };
        if(!world.appearance_scene().intangibility_ticks)search(24,30,false);
        if(!selected)search(0,23,true);
    }
    moving.behavior.collision_object=selected?int(*selected):-1;
    return selected?std::uint16_t(*selected):0xffff;
}
std::optional<std::uint16_t> WorldActorMovement::execute(const BoundAction &binding,ActorWorld &world,ActorId id) const {
    auto &actor=world.actor(id);
    switch(binding.operation) {
    case NativeAction::SurfaceAtCurrentPosition: {
        const auto flags=surface(actor,actor.action());actor.behavior.surface_flags=flags;return flags;
    }
    case NativeAction::CheckProspectiveActorCollision:
        if(!actor.authored_role())return std::nullopt;
        return prospective_collision(world,id);
    default:return std::nullopt;
    }
}
} // namespace eb::native
