#include "eb/native/world_script_teleport.hpp"
#include "eb/native/world_screen_transition.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool value,const char *message) { if(!value) throw std::logic_error(message); }
}
struct WorldScriptTeleport::Operation::State {
    WorldScriptTeleport &owner;
    WorldRuntime::Operation &parent;
    TeleportDestination destination;
    CameraPosition position;
    std::uint16_t suppression{};
    unsigned phase{};
    bool done{},executing{};
    std::unique_ptr<WorldScreenTransition::Operation> transition;
    std::unique_ptr<WorldFadeOut::Operation> fade;
    std::unique_ptr<WorldMapLoad::Operation> map;
    std::unique_ptr<WorldPartyRelocation::Operation> relocation;
    std::unique_ptr<dialogue::Conversation> conversation;
    std::unique_ptr<WorldRuntime::Operation> runtime;
    State(WorldScriptTeleport &o,WorldRuntime::Operation &p,TeleportDestination d)
        :owner(o),parent(p),destination(d),position{std::uint16_t(d.tile_x<<3),std::uint16_t(d.tile_y<<3)} {}
};
WorldScriptTeleport::WorldScriptTeleport(WorldScriptTeleportOwners owners):owners_(std::move(owners)) {
    auto &o=owners_;auto &w=o.world;
    require(o.program && o.program->version()==w.windows.version() && o.content.version()==w.windows.version(),
            "Script teleport requires its imported regional content");
    require(&o.menus.windows()==&w.windows &&
            o.transition.uses(w.runtime,w.actors,o.fade,w.clock) &&
            o.map_load.uses(w.runtime,w.actors,w.enemies,w.interactions,w.spawn,w.windows,w.scene_colors) &&
            w.runtime.uses(w.windows,w.party,w.actors,w.clock,w.spawn) &&
            o.relocation.uses(w.runtime,w.actors,w.party) && o.npc_commands.uses(w.actors),
            "Script teleport must share the actual world and actor owners");
    require(bool(o.program->resolve(o.content.buzz_buzz_message())) && bool(o.play_sound),
            "Script teleport requires actual imported BuzzBuzz text and sound playback");
}
std::unique_ptr<WorldScriptTeleport::Operation> WorldScriptTeleport::begin(unsigned index,WorldRuntime::Operation &parent) {
    auto &o=owners_;auto &w=o.world;
    require(!failed_ && !active_,"Script teleport is failed or already active");
    w.runtime.require_content_boundary(&parent);
    const auto d=o.content.destination(index);
    require((d.direction&0x7f)>=1 && (d.direction&0x7f)<=8 && !(d.direction&0x80),
            "Special teleport trail placement requires its own source producer");
    require(!o.state.post_callback,"Teleport callback requires its actual flyover owner");
    require(!o.map_load.busy() && !o.map_load.failed() && !o.relocation.busy() && !o.relocation.failed(),
            "Teleport content owners are unavailable");
    w.queue.preflight_retain_doors();
    if(!w.clock.disabled_transitions) {
        o.transition.validate_begin(d.screen_transition,true,parent);
        o.transition.validate_begin(d.screen_transition,false,parent);
    }
    require((w.clock.effective_interrupt_mask()&0x80)!=0,"Script teleport requires its actual NMI publication owner");
    dialogue::Conversation child(o.program,o.menus);
    child.validate_start_nested(w.runtime.dialogue_owner(parent));
    auto result=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::State>(*this,parent,d)));
    active_=result.get();return result;
}
WorldScriptTeleport::Operation::Operation(std::unique_ptr<State> state):state_(std::move(state)) {}
WorldScriptTeleport::Operation::~Operation() {
    if(state_->owner.active_==this) {state_->owner.active_=nullptr;state_->owner.failed_=true;}
}
bool WorldScriptTeleport::Operation::complete() const noexcept { return state_->done; }
WorldRuntime::Operation *WorldScriptTeleport::Operation::runtime_operation() noexcept {
    auto &s=*state_;
    if(s.transition) return s.transition->runtime_operation();
    if(s.fade) return s.fade->runtime_operation();
    if(s.relocation)return s.relocation->runtime_operation();
    if(s.map)return s.map->runtime_operation();
    return s.runtime.get();
}
dialogue::Progress WorldScriptTeleport::Operation::advance(unsigned budget) {
    auto &s=*state_;auto &o=s.owner.owners_;auto &w=o.world;
    require(!s.owner.failed_ && !s.executing,"Script teleport is failed or reentrant");
    if(s.done) return dialogue::Progress::Finished;
    s.executing=true;
    try {
        while(budget--) {
            if(s.transition) {
                const auto p=s.transition->advance(1);
                if(p==dialogue::Progress::Suspended) {s.executing=false;return p;}
                if(p!=dialogue::Progress::Finished) continue;
                s.transition.reset();
            }
            if(s.fade) {
                const auto p=s.fade->advance(1);
                if(p==dialogue::Progress::Suspended) {s.executing=false;return p;}
                if(p!=dialogue::Progress::Finished) continue;
                s.fade.reset();
            }
            if(s.runtime) {
                const auto p=s.runtime->advance(1);
                if(p==dialogue::Progress::Suspended) {s.executing=false;return p;}
                if(p!=dialogue::Progress::Finished) continue;
                s.runtime.reset();s.conversation.reset();
            }
            if(s.map) {if(!s.map->advance(1)) {
                if(s.map->runtime_operation()){s.executing=false;return dialogue::Progress::Suspended;}
                continue;
            }s.map.reset();}
            if(s.relocation) {
                if(!s.relocation->advance(1)) {
                    if(s.relocation->runtime_operation()){s.executing=false;return dialogue::Progress::Suspended;}
                    continue;
                }
                s.relocation.reset();
            }
            w.runtime.require_content_boundary(&s.parent);
            switch(s.phase) {
            case 0:
                s.suppression=w.maintenance.overworld_status_suppression;
                w.maintenance.overworld_status_suppression=1;
                for(unsigned flag=1;flag<=10;++flag) w.windows.state().set_flag(flag,false);
                w.queue.retain_doors();
                o.play_sound(o.content.transition(s.destination.screen_transition).start_sound);
                if(w.clock.disabled_transitions) s.fade=o.fade_out.begin_nested(1,1,s.parent);
                else s.transition=o.transition.begin(s.destination.screen_transition,true,s.parent);
                s.phase=1;break;
            case 1:
                s.map=o.map_load.begin_nested(s.position,s.parent);s.phase=2;break;
            case 2:
                o.state.moved_since_map_load=0;
                s.relocation=o.relocation.begin_nested(s.position,std::uint16_t((s.destination.direction&0x7f)-1),s.parent);
                s.phase=3;break;
            case 3:
                o.music.select(s.position.x,s.position.y);
                o.music.apply_sector();
                s.phase=4;break;
            case 4:
                // No callback is acknowledged: unsupported nonzero callbacks
                // were rejected before changing any live teleport owner.
                o.npc_commands.drain_created();
                w.runtime.refresh_world_capture(&s.parent);
                o.play_sound(o.content.transition(s.destination.screen_transition).end_sound);
                if(w.clock.disabled_transitions) o.fade.begin_in(1,1);
                else s.transition=o.transition.begin(s.destination.screen_transition,false,s.parent);
                s.phase=5;break;
            case 5: {
                o.navigation.stairs_direction=0xffff;
                s.conversation=std::make_unique<dialogue::Conversation>(o.program,o.menus);
                s.conversation->start_nested(*o.program->resolve(o.content.buzz_buzz_message()),w.runtime.dialogue_owner(s.parent));
                s.runtime=w.runtime.begin_nested(*s.conversation,s.parent);
                s.phase=6;break;
            }
            case 6:
                // The same actual UNKNOWN_EF0EE8 producer is used by Continue
                // and teleport; it checks live flags and creates real actors.
                o.startup_data.restore_deliveries(w.actors,w.spawn.prepared,w.windows.state().event_flags,w.random);
                w.maintenance.overworld_status_suppression=s.suppression;
                s.done=true;s.owner.active_=nullptr;s.executing=false;
                return dialogue::Progress::Finished;
            default: throw std::logic_error("Invalid script teleport phase");
            }
        }
        s.executing=false;return dialogue::Progress::BudgetExhausted;
    } catch(...) {s.executing=false;s.owner.failed_=true;throw;}
}
} // namespace eb::native
