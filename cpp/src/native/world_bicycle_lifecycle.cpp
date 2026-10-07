#include "eb/native/world_bicycle_lifecycle.hpp"
#include <stdexcept>
namespace eb::native {
WorldBicycleLifecycle::WorldBicycleLifecycle(WorldBicycleLifecycleOwners owners):owners_(owners) {
    const auto &o=owners_.world;
    if(!o.runtime.uses(o.windows,o.party,o.actors,o.clock,o.spawn) ||
       !o.runtime.compatible_world_state(o.formation,o.trail,o.control,o.maintenance,o.queue,o.following) ||
       &o.interactions.actors()!=&o.actors || &o.area_character_style!=&o.interactions.state().area_character_style)
        throw std::invalid_argument("Bicycle lifecycle requires its actual world owners");
}
std::unique_ptr<WorldBicycleLifecycle::Operation> WorldBicycleLifecycle::begin(WorldRuntime::Operation *parent) {
    if(active_ || failed_) throw std::logic_error("Bicycle lifecycle is active or failed");
    if(parent) owners_.world.runtime.require_nested(*parent);
    else owners_.world.runtime.require_idle();
    auto operation=std::unique_ptr<Operation>(new Operation(*this,parent));
    active_=operation.get(); return operation;
}
WorldBicycleLifecycle::Operation::Operation(WorldBicycleLifecycle &o,WorldRuntime::Operation *parent):owner_(o),parent_(parent) {}
WorldBicycleLifecycle::Operation::~Operation() {
    if(owner_.active_==this) { if(!complete_) owner_.failed_=true; owner_.active_=nullptr; }
}
dialogue::Progress WorldBicycleLifecycle::Operation::advance(unsigned budget) {
    if(owner_.failed_) throw std::logic_error("Bicycle lifecycle is failed");
    if(complete_) return dialogue::Progress::Finished;
    auto &o=owner_.owners_.world;
    try {
        while(budget--) {
            if(runtime_) {
                const auto progress=runtime_->advance(1);
                if(progress==dialogue::Progress::Suspended) return progress;
                if(progress!=dialogue::Progress::Finished) continue;
                runtime_.reset();
            }
            auto wait=[&](story::TickKind kind) {
                runtime_=parent_?o.runtime.begin_nested(kind,*parent_):o.runtime.begin(kind);
            };
            switch(phase_++) {
            case 0:
                if(o.interactions.state().walking_style!=3) { complete_=true; owner_.active_=nullptr; return dialogue::Progress::Finished; }
                o.maintenance.auto_sector_music=1;
                if(!o.control.encounter.mode && !o.queue.pending()) owner_.owners_.music.restore_sector();
                if(const auto old=o.actors.actor_for_role(24)) { o.interactions.detach(*old); o.actors.erase(*old); }
                o.interactions.state().area_character_style=0;
                o.interactions.state().walking_style=0;
                o.formation.trail_cursors[0]=0;
                o.trail.next_write=0;
                if(!o.queue.pending()) wait(story::TickKind::ActorFrame);
                break;
            case 1: {
                o.spawn.prepared.variables[0]=o.spawn.prepared.variables[1]=0;
                const auto position=o.actors.authored_position(24);
                auto prepared=o.spawn.prepared;
                prepared.x=std::uint16_t(position[0]>>16); prepared.y=std::uint16_t(position[1]>>16);
                prepared.direction=0;
                constexpr unsigned sprite=1; // Authored OVERWORLD_SPRITE::NESS.
                const auto id=o.actors.create_authored(o.actors.prepare_actor(sprite,2,prepared),{24,25});
                if(!id) throw std::runtime_error("Bicycle dismount could not replace source role24");
                auto &actor=o.actors.actor(*id);
                actor.action().animation=0;
                o.actors.set_authored_direction(24,o.interactions.state().leader_direction);
                o.actors.set_authored_variable(24,7,o.actors.authored_variable(24,7)|0x9000);
                o.interactions.attach(*id,24,actor_creation_metadata(owner_.owners_.sprites,owner_.owners_.creation,sprite),0xffff);
                o.interactions.state().leader=*id;
                queued_branch_=bool(o.queue.pending());
                if(queued_branch_) {
                    o.actors.set_authored_pause(24,false,false);
                    if(o.party.version()==GameVersion::US) wait(story::TickKind::Frame);
                }
                break;
            }
            case 2:
                if(queued_branch_ && o.party.version()==GameVersion::US) wait(story::TickKind::Frame);
                break;
            case 3:
                if(queued_branch_) {
                    auto &actor=o.actors.actor(*o.actors.actor_for_role(24));
                    actor.appearance.select_eight(actor.behavior.direction,actor.action().animation,actor.behavior.surface_flags);
                }
                o.session.effect_in_progress=0;
                o.session.input_disable_frames=2;
                complete_=true; owner_.active_=nullptr; return dialogue::Progress::Finished;
            default: throw std::logic_error("Bicycle lifecycle lost its source phase");
            }
        }
        return dialogue::Progress::BudgetExhausted;
    } catch(...) { owner_.failed_=true; throw; }
}
} // namespace eb::native
