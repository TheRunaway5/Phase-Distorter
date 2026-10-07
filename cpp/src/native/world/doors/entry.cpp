#include "eb/native/world/doors/entry.hpp"
#include "eb/native/world_screen_transition.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
bool nonnull(dialogue::ReferenceKey key) {
    return std::any_of(key.begin(),key.end(),[](auto n){return n!=0;});
}
}
struct WorldDoorEntry::Operation::State {
    WorldDoorEntry &owner;
    WorldDoorEntryRecord record;
    CameraPosition destination;
    std::uint16_t direction{};
    unsigned phase{};
    bool done{},entered{},executing{};
    std::unique_ptr<WorldScreenTransition::Operation> transition;
    std::unique_ptr<WorldFadeOut::Operation> fade;
    std::unique_ptr<WorldMapLoad::Operation> map;
    std::unique_ptr<WorldPartyRelocation::Operation> relocation;
    std::unique_ptr<dialogue::Conversation> conversation;
    std::unique_ptr<story::InteractionCalls::Operation> text;
    std::unique_ptr<WorldRuntime::Operation> runtime;
    State(WorldDoorEntry &o,WorldDoorEntryRecord r):owner(o),record(r) {}
};
WorldDoorEntry::WorldDoorEntry(WorldDoorEntryOwners owners):owners_(std::move(owners)) {
    auto &o=owners_;auto &w=o.world;
    require(o.program && o.program->version()==w.windows.version() &&
            o.doors.version()==w.windows.version() && o.transitions.version()==w.windows.version() &&
            o.startup_data.version()==w.windows.version(),"Door entry requires actual matching regional content");
    require(&o.menus.windows()==&w.windows && o.transition.uses(w.runtime,w.actors,o.fade,w.clock) &&
            o.map_load.uses(w.runtime,w.actors,w.enemies,w.interactions,w.spawn,w.windows,w.scene_colors) &&
            w.runtime.uses(w.windows,w.party,w.actors,w.clock,w.spawn) &&
            o.relocation.uses(w.runtime,w.actors,w.party) && o.npc_commands.uses(w.actors) &&
            o.sprite_fade.uses(w.actors) && w.runtime.scene().uses(o.input),"Door entry must borrow the actual world and actor owners");
    require(bool(o.program->resolve(o.transitions.buzz_buzz_message())) && bool(o.play_sound),
            "Door entry requires imported BuzzBuzz text and actual sound playback");
    require(o.menus.prompts(),"Door text requires its actual prompt owner");
    text_=std::make_unique<story::InteractionCalls>(o.program,w.interactions,o.menus,
        w.runtime.coordinator_scene(),[this]{return owners_.sprite_fade.controller().has_value();});
}
std::unique_ptr<WorldDoorEntry::Operation> WorldDoorEntry::begin(dialogue::ReferenceKey key) {
    require(!failed_ && !active_,"Door entry is failed or already active");
    owners_.world.runtime.require_content_boundary();
    const auto record=owners_.doors.entry(key);
    if(nonnull(record.text))require(bool(owners_.program->resolve(record.text)),"Authored door text is absent from imported content");
    auto result=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::State>(*this,record)));
    active_=result.get();return result;
}
WorldDoorEntry::Operation::Operation(std::unique_ptr<State> state):state_(std::move(state)) {}
WorldDoorEntry::Operation::~Operation() {
    if(state_->owner.active_==this) {state_->owner.active_=nullptr;state_->owner.failed_=true;}
}
bool WorldDoorEntry::Operation::complete() const noexcept {return state_->done;}
bool WorldDoorEntry::Operation::entered() const noexcept {return state_->entered;}
WorldRuntime::Operation *WorldDoorEntry::Operation::runtime_operation() noexcept {
    auto &s=*state_;
    if(s.transition)return s.transition->runtime_operation();
    if(s.fade)return s.fade->runtime_operation();
    return s.runtime.get();
}
dialogue::Progress WorldDoorEntry::Operation::advance(unsigned budget) {
    auto &s=*state_;auto &o=s.owner.owners_;auto &w=o.world;
    require(!s.owner.failed_ && !s.executing,"Door entry is failed or reentrant");
    if(s.done)return dialogue::Progress::Finished;
    s.executing=true;
    try {while(budget--) {
        if(s.transition) {
            const auto p=s.transition->advance(1);
            if(p==dialogue::Progress::Suspended){s.executing=false;return p;}
            if(p!=dialogue::Progress::Finished)continue;
            s.transition.reset();
        }
        if(s.fade) {
            const auto p=s.fade->advance(1);
            if(p==dialogue::Progress::Suspended){s.executing=false;return p;}
            if(p!=dialogue::Progress::Finished)continue;
            s.fade.reset();
        }
        if(s.runtime) {
            const auto p=s.runtime->advance(1);
            if(p==dialogue::Progress::Suspended){s.executing=false;return p;}
            if(p!=dialogue::Progress::Finished)continue;
            s.runtime.reset();s.conversation.reset();
        }
        if(s.text) {
            const auto p=s.text->advance(1);
            if(p==dialogue::Progress::Suspended) {
                require(s.text->service()==story::InteractionCallService::Scene,
                        "Door C10004 text requires its actual scene continuation");
                s.runtime=w.runtime.service_child(s.text->scene_operation());continue;
            }
            if(p!=dialogue::Progress::Finished)continue;
            s.text.reset();
        }
        if(s.map) {
            // Disabled transitions call asynchronous FADE_OUT, then the real
            // LOAD_MAP_AT_POSITION spins on its step before activating actors.
            // That spin consumes physical NMI publications and no WAIT input.
            if(w.clock.disabled_transitions&&s.map->stage()==WorldMapLoadStage::PublishColors&&o.fade.state().step) {
                s.runtime=s.map->begin_palette_wait();continue;
            }
            if(!s.map->advance(1))continue;
            s.map.reset();
        }
        if(s.relocation){if(!s.relocation->advance(1))continue;s.relocation.reset();}
        w.runtime.require_content_boundary();
        switch(s.phase) {
        case 0:
            // The optional text runs before the event condition. Its commands
            // may change the same flags which decide whether this door opens.
            if(nonnull(s.record.text)) {
                s.text=s.owner.text_->begin_queued_text(s.record.text);
            }
            s.phase=1;break;
        case 1: {
            o.navigation.ladder_stairs={0,0};
            if(s.record.event_word) {
                const unsigned flag=s.record.event_word&0x7fff;
                require(flag>0 && (flag-1)/8<w.windows.state().event_flags.size(),
                        "Door event condition has no authoritative flag owner");
                const bool actual=(w.windows.state().event_flags[(flag-1)/8]&(1u<<((flag-1)&7)))!=0;
                if(actual!=(s.record.event_word>0x8000)) {o.navigation.using_door=0;s.phase=8;break;}
            }
            // Admit the actual dependencies after text and the real condition,
            // before clearing flags, touching the queue or beginning a fade.
            require(!o.map_load.busy()&&!o.map_load.failed()&&!o.relocation.busy()&&!o.relocation.failed(),
                    "Door map/party owners are unavailable");
            require(!o.sprite_fade.controller(),"Door entry during an active sprite fade requires its retained controller lifecycle");
            w.queue.preflight_retain_doors();
            const auto &config=o.transitions.transition(s.record.screen_transition);
            if(!w.clock.disabled_transitions) {
                o.transition.validate_begin(s.record.screen_transition,true);
                o.transition.validate_begin(s.record.screen_transition,false);
            }
            require(w.clock.effective_interrupt_mask()&0x80,"Door entry requires actual native NMI publication");
            s.direction=o.doors.entry_direction(s.record);
            s.destination={std::uint16_t((s.record.tile_x<<3)+(s.direction==2?0:8)),
                std::uint16_t((s.record.packed_y&0x3fff)<<3)};
            for(unsigned flag=1;flag<=10;++flag)w.windows.state().set_flag(flag,false);
            w.queue.retain_doors();clear_party_sprite_blink(w.actors);
            w.actors.appearance_scene().intangibility_ticks=0;
            o.play_sound(config.start_sound);
            if(w.clock.disabled_transitions)o.fade.begin_out(1,1);
            else s.transition=o.transition.begin(s.record.screen_transition,true);
            s.phase=2;break;
        }
        case 2:
            // Source selects and requests the old map's music fade before
            // LOAD_MAP_AT_POSITION changes active content or party actors.
            o.music.select(s.destination.x,s.destination.y);
            s.map=o.map_load.begin(s.destination);s.phase=3;break;
        case 3:
            o.counters.moved_since_map_load=0;
            w.interactions.state().walking_style=0;
            s.relocation=o.relocation.begin(s.destination,s.direction);s.phase=4;break;
        case 4:
            o.music.apply_sector();o.npc_commands.drain_created();
            w.runtime.refresh_world_capture();
            o.play_sound(o.transitions.transition(s.record.screen_transition).end_sound);
            if(w.clock.disabled_transitions)o.fade.begin_in(1,1);
            else s.transition=o.transition.begin(s.record.screen_transition,false);
            s.phase=5;break;
        case 5:
            o.navigation.stairs_direction=0xffff;
            o.input.player_activity=0;
            s.conversation=std::make_unique<dialogue::Conversation>(o.program,o.menus);
            s.conversation->start(*o.program->resolve(o.transitions.buzz_buzz_message()));
            s.runtime=w.runtime.begin(*s.conversation);s.phase=6;break;
        case 6:
            o.startup_data.restore_deliveries(w.actors,w.spawn.prepared,w.windows.state().event_flags,w.random);
            o.navigation.using_door=0;s.entered=true;s.phase=8;break;
        case 8:
            s.done=true;s.owner.active_=nullptr;s.executing=false;return dialogue::Progress::Finished;
        default:throw std::logic_error("Invalid queued door phase");
        }
    }s.executing=false;return dialogue::Progress::BudgetExhausted;}
    catch(...){s.executing=false;s.owner.failed_=true;throw;}
}
} // namespace eb::native
