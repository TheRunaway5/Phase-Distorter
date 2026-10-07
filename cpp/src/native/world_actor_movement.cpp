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
CollisionPoint next_position(const WorldActor &actor) {
    return {std::uint16_t((actor.action().position[0]+actor.action().velocity[0])>>16),
            std::uint16_t((actor.action().position[1]+actor.action().velocity[1])>>16)};
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
    const auto at=next_position(moving);
    const auto x=at.x,y=at.y;
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
    prospective_=at;
    moving.behavior.collision_object=selected?int(*selected):-1;
    return selected?std::uint16_t(*selected):0xffff;
}
std::uint16_t WorldActorMovement::prospective_npc_collision(ActorWorld &world,ActorId id) const {
    auto &moving=world.actor(id);
    if(moving.behavior.collision_object==-32768)return 0x8000;
    const auto at=next_position(moving);
    std::optional<unsigned> selected;
    if(hitbox(moving).enabled) {
        const auto dimensions=extent(moving);
        const auto left=wrap(at.x-dimensions.half_width),top=wrap(at.y-dimensions.height);
        // C0613C scans every occupied role except the caller and controller.
        // Its strict far edges do not have C06323's extra decrement, and it
        // applies no NPC-id or party-intangibility filter.
        for(unsigned role=0;role<30;++role) {
            const auto candidate_id=world.actor_for_role(role);
            if(!candidate_id||*candidate_id==id||role==23)continue;
            const auto &candidate=world.actor(*candidate_id);
            if(candidate.behavior.collision_object==-32768||!hitbox(candidate).enabled)continue;
            if(overlap(left,top,dimensions,candidate,false)){selected=role;break;}
        }
    }
    prospective_=at;
    moving.behavior.collision_object=selected?int(*selected):-1;
    return selected?std::uint16_t(*selected):0xffff;
}
std::uint16_t WorldActorMovement::prospective_terrain(WorldActor &actor) const {
    const auto at=next_position(actor);
    // C09EFF publishes the prospective pair even if fractions changed without
    // crossing an integer coordinate. C05E3B's FF00 then becomes zero through
    // C05E76's low-byte mask and leaves this actor's previous obstacle word.
    if(at.x==std::uint16_t(actor.action().position[0]>>16)&&
       at.y==std::uint16_t(actor.action().position[1]>>16)) {
        prospective_=at;
        return 0;
    }
    // C05CD7's unmatched direction branch returns zero. Only the eight real
    // directions sample geometry; malformed shapes remain explicit frontiers.
    const auto direction=actor.behavior.direction<8?
        CollisionDirection(actor.behavior.direction):CollisionDirection::None;
    const auto flags=collision_.directional_surface(area_,at,
        actor.appearance_context.shape,direction)&0xd0u;
    prospective_=at;
    actor.behavior.obstacle_flags=std::uint16_t(flags);
    return std::uint16_t(flags);
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
    case NativeAction::CheckProspectiveNpcCollision:
        if(!actor.authored_role())return std::nullopt;
        return prospective_npc_collision(world,id);
    case NativeAction::CheckProspectiveTerrain:
        if(!actor.authored_role())return std::nullopt;
        return prospective_terrain(actor);
    default:return std::nullopt;
    }
}
} // namespace eb::native
