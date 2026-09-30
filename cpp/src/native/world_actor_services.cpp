#include "eb/native/world_actor_services.hpp"
#include "eb/native/world_activation.hpp"
#include <utility>

namespace eb::native {
bool fulfill_actor_lifecycle(ActorWorld &world,WorldEnemies &enemies,const ActorRetentionArea *area,
                             const PreparedActorState *prepared) {
    if(!world.request())return false;
    const auto request=*world.request();
    if(request.origin!=WorldActionOrigin::Script)return false;
    auto &actor=world.actor(request.actor);
    using A=NativeAction;
    switch(request.binding.operation){
    case A::CreateActor:
        if(!prepared)return false;
        {const auto &operands=std::get<CreateActorOperands>(request.binding.payload);
         auto creation=*prepared;
         creation.x=std::uint16_t(actor.action().position[0]>>16);
         creation.y=std::uint16_t(actor.action().position[1]>>16);
         creation.direction=0;
         const auto specification=world.prepare_actor(operands.sprite,operands.script,creation);
         const auto id=world.create_authored(specification);
         if(!id)return false;
         world.respond(std::uint16_t(*world.actor(*id).authored_role()),4);}
        return true;
    case A::ReleaseAppearance:
        if(enemies.busy())return false;
        enemies.release_appearance(world,request.actor);
        world.respond(0xffff);
        return true;
    case A::StaggerTaskByRole:
        if(!actor.authored_role())return false;
        {const auto sleep=std::uint16_t(*actor.authored_role()&15);
         world.respond(sleep,0,sleep);}
        return true;
    case A::WithinLoadingArea:
    case A::RefreshFirstAndWithinArea:
        if(!area)return false;
        if(request.binding.operation==A::RefreshFirstAndWithinArea){
            if(!actor.has_appearance())return false;
            auto appearance=actor.appearance;
            // C40015 invokes ENTRY3 in the nonzero authored action workspace;
            // that wrapper unconditionally refreshes phase0, then replaces its
            // incidental graphics return with the retention predicate.
            appearance.select_four(actor.behavior.direction,0,actor.behavior.surface_flags);
            actor.action().animation=0;
            actor.appearance=std::move(appearance);
        }
        world.respond(npc_within_retention_area(actor.action().position[0]>>16,
            actor.action().position[1]>>16,area->leader_x,area->leader_y,area->teleport_speed)?0xffff:0);
        return true;
    default:return false;
    }
}
} // namespace eb::native
