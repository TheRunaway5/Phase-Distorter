#include "eb/native/npcs/interaction.hpp"
#include <algorithm>
#include <map>
#include <stdexcept>

namespace eb::native::npcs {
namespace {
void require(bool ok, const char* message) { if (!ok) throw std::logic_error(message); }
std::uint16_t word(unsigned value) { return std::uint16_t(value); }
entities::CollisionShape shape(const InteractionBody& body, const WorldActor& actor) {
    return {body.hitbox_enabled,actor.behavior.direction,body.lateral,body.vertical};
}
}
struct Interactions::Execution {
    struct Participant { std::uint64_t precedence; InteractionBody body; };
    std::shared_ptr<const InteractionResources> resources;
    std::shared_ptr<const MapTextResources> maps;
    std::shared_ptr<const dialogue::Program> program;
    dialogue::WindowHost& windows;
    ActorWorld& actors;
    const WorldCollision& collision;
    const WorldMapArea& area;
    InteractionState state;
    std::map<ActorId,Participant> participants;
    bool active{}, poisoned{};
    Execution(std::shared_ptr<const InteractionResources> r, std::shared_ptr<const MapTextResources> m,
              std::shared_ptr<const dialogue::Program> p, dialogue::WindowHost& w, ActorWorld& a,
              const WorldCollision& c, const WorldMapArea& map)
        : resources(std::move(r)), maps(std::move(m)), program(std::move(p)),
          windows(w), actors(a), collision(c), area(map) {
        require(resources && maps && program,"Talk requires imported interaction, map and dialogue content");
        require(resources->version()==windows.version() && maps->version()==windows.version() &&
                program->version()==windows.version(),"Talk content and window regions differ");
    }
    InteractionBody& body(ActorId id) {
        (void)actors.actor(id); // A stale handle never returns surviving metadata.
        return participants.at(id).body;
    }
    void collide(CollisionPoint proposed) {
        const auto& leader=actors.actor(state.leader);
        const entities::CollisionQuery query{proposed.x,proposed.y,shape(body(state.leader),leader),
            state.movement_flags,state.walking_style,state.demo_frames,actors.appearance_scene().intangibility_ticks};
        // These are synchronous observations, not another mutable actor owner.
        // The source helper contains no callbacks between candidate reads.
        auto live=actors.actors();
        for(auto id:live) require(participants.contains(id),"Live Talk actor lacks creation collision metadata");
        std::sort(live.begin(),live.end(),[&](auto a,auto b){
            return participants.at(a).precedence < participants.at(b).precedence;
        });
        std::vector<entities::CollisionBody> observations;
        observations.reserve(live.size());
        for(auto id:live) {
            const auto& a=actors.actor(id);const auto& b=participants.at(id).body;
            observations.push_back({word(a.action().position[0]>>16),word(a.action().position[1]>>16),
                std::uint16_t(a.action().alive?0:0xffff),
                std::uint16_t(a.behavior.collision_object==-32768?0x8000:0xffff),b.npc_id,shape(b,a)});
        }
        const auto hit=entities::check_npc_collision(query,observations).selected_index;
        state.collision_actor=hit?std::optional(live.at(*hit)):std::nullopt;
        if(hit) {
            state.interacting_actor=*state.collision_actor;
            state.interacting_npc=participants.at(*state.collision_actor).body.npc_id;
        }
    }
};
struct Interactions::Operation::Execution {
    enum class Phase { Window, BeginSearch, BeginProbe, Collision, Surface, EndProbe, Map,
                       ProbeResult, LeaderFacing, NpcFacing, Resolve, Complete };
    Interactions::Execution& owner;
    std::unique_ptr<dialogue::WindowHost::Operation> window;
    std::optional<dialogue::WindowEffect> pending;
    Phase phase=Phase::Window;
    InteractionAction action;
    std::uint16_t base{}, direction{}, saved_intangibility{};
    unsigned attempt{};
    TalkProbeOffset offset;
    CollisionPoint proposed;
    InteractionSelection result;
    bool done{};
    bool finder_only{};
    explicit Execution(Interactions::Execution& e,InteractionAction a,bool finder=false):owner(e),action(a),finder_only(finder) {
        // Source TALK_TO creates/reopens standard window1 before FIND clears
        // interaction globals or reads the live party/actor state.
        if(finder)phase=Phase::BeginSearch;
        else window=e.windows.begin({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
    }
    void finish() { done=true;phase=Phase::Complete;owner.active=false; }
    void step() {
        auto& o=owner;auto& s=o.state;
        switch(phase) {
        case Phase::Window:
            if(window->advance()==dialogue::OutputProgress::Suspended) pending=window->effect();
            else { window.reset();phase=Phase::BeginSearch; }
            return;
        case Phase::BeginSearch:
            s.interacting_npc=0xffff;s.interacting_actor.reset();
            base=s.leader_direction&0xfffe;direction=base;
            phase=Phase::BeginProbe;return;
        case Phase::BeginProbe:
            offset=o.resources->probe_offset(direction);
            proposed={word(unsigned(s.leader_x)+offset.x),word(unsigned(s.leader_y)+offset.y)};
            saved_intangibility=o.actors.appearance_scene().intangibility_ticks;
            o.actors.appearance_scene().intangibility_ticks=1;
            phase=Phase::Collision;return;
        case Phase::Collision:
            o.collide(proposed);
            phase=s.collision_actor?Phase::EndProbe:Phase::Surface;return;
        case Phase::Surface: {
            const auto map_shape=o.actors.actor(s.leader).appearance_context.shape;
            s.checked_surface_origin=o.collision.origin(proposed,map_shape);
            s.surface_flags=o.collision.directional_surface(o.area,proposed,map_shape,CollisionDirection(direction));
            if((s.surface_flags&0x82)!=0x82) { phase=Phase::EndProbe;return; }
            if(offset.x) proposed.x=word(unsigned(proposed.x)+(offset.x<0?-8:8));
            if(offset.y) proposed.y=word(unsigned(proposed.y)+(offset.y<0?-8:8));
            // A long or cyclic counter chain remains resumable. No arbitrary
            // search-distance limit or fabricated no-target result is added.
            phase=Phase::Collision;return;
        }
        case Phase::EndProbe:
            o.actors.appearance_scene().intangibility_ticks=saved_intangibility;
            phase=(s.interacting_npc==0 || s.interacting_npc==0xffff)?Phase::Map:Phase::ProbeResult;
            return;
        case Phase::Map: {
            bool found{};
            if(action==InteractionAction::Talk) found=o.maps->find_talk(s.leader_x,s.leader_y,direction,s.map_text);
            else {
                // C4334A differs from Talk's C065C2: south rounds wrapped
                // leader_y+1, then one counter adjustment and center/right/left.
                const auto delta=o.maps->offset(direction);
                auto x=word(unsigned(s.leader_x>>3)+delta.x);
                auto y=word(unsigned((direction==4?word(unsigned(s.leader_y)+1):s.leader_y)>>3)+delta.y);
                const CollisionPoint probe{word(unsigned(x)*8),word(unsigned(y)*8)};
                const auto map_shape=o.actors.actor(s.leader).appearance_context.shape;
                s.checked_surface_origin=o.collision.origin(probe,map_shape);
                s.surface_flags=o.collision.directional_surface(o.area,probe,map_shape,CollisionDirection(direction));
                if((s.surface_flags&0x82)==0x82) {x=word(unsigned(x)+delta.x);y=word(unsigned(y)+delta.y);}
                auto type=o.maps->lookup(x,y,s.map_text);
                if(type==0xff) type=o.maps->lookup(word(unsigned(x)+1),y,s.map_text);
                if(type==0xff) type=o.maps->lookup(word(unsigned(x)-1),y,s.map_text);
                found=o.maps->select_text(type,MapTextKind::Check,s.map_text);
            }
            if(found) s.interacting_npc=0xfffe;
            phase=Phase::ProbeResult;return;
        }
        case Phase::ProbeResult:
            if(s.interacting_npc!=0 && s.interacting_npc!=0xffff) { phase=Phase::LeaderFacing;return; }
            if(++attempt==4) { s.leader_direction=base;finish();return; }
            direction=word((base+(attempt==1?2:attempt==2?6:4))&7);
            s.leader_direction=direction;phase=Phase::BeginProbe;return;
        case Phase::LeaderFacing: {
            auto& leader=o.actors.actor(s.leader);
            if(direction!=leader.behavior.direction) {
                s.leader_direction=direction;leader.behavior.direction=direction;
                leader.appearance.select_eight(direction,leader.action().animation,leader.behavior.surface_flags);
            }
            if(finder_only){finish();return;}
            // The first probe did not publish its masked base. If the actor
            // already faces it, the global direction can still be odd here.
            if(s.interacting_npc==0xfffe) { result.reference=s.map_text.text;phase=Phase::Resolve; }
            else {
                const auto& record=o.resources->npc(s.interacting_npc);
                if(action==InteractionAction::Talk) {
                    if(record.raw_type==1) phase=Phase::NpcFacing;
                    else finish();
                } else if(record.raw_type==2 || record.raw_type==3) {
                    if(record.raw_type==2) {
                        auto& registers=o.windows.state().window().active;
                        registers.working=record.gift_value<0x100?record.gift_value:0;
                        if(record.gift_value>=0x100) registers.argument=record.gift_value-0x100;
                        s.current_event_flag=record.event_flag;
                    }
                    result.reference=record.talk_reference;phase=Phase::Resolve;
                } else finish();
            }
            return;
        }
        case Phase::NpcFacing: {
            require(s.interacting_actor.has_value(),"Person Talk target lost its actor identity");
            auto& actor=o.actors.actor(*s.interacting_actor);
            actor.behavior.direction=o.resources->opposite_direction(s.leader_direction);
            actor.action().velocity={};
            actor.appearance.select_four(actor.behavior.direction,actor.action().animation,actor.behavior.surface_flags);
            result.reference=o.resources->npc(s.interacting_npc).talk_reference;
            phase=Phase::Resolve;return;
        }
        case Phase::Resolve:
            result.text=o.program->resolve(result.reference);
            finish();return;
        case Phase::Complete: return;
        }
    }
};
Interactions::Interactions(std::shared_ptr<const InteractionResources> r,std::shared_ptr<const MapTextResources> m,
           std::shared_ptr<const dialogue::Program> p,dialogue::WindowHost& w,ActorWorld& a,
           const WorldCollision& c,const WorldMapArea& map)
    :execution_(std::make_unique<Execution>(std::move(r),std::move(m),std::move(p),w,a,c,map)) {}
Interactions::~Interactions()=default;
void Interactions::attach(ActorId id,std::uint64_t precedence,const ActorCreationMetadata& metadata,std::uint16_t npc) {
    auto& e=*execution_;require(!e.active && !e.poisoned,"Talk lifecycle is not idle");
    const auto& actor=e.actors.actor(id);
    require(metadata.sprite.shape==actor.appearance_context.shape,"Talk metadata differs from actor creation shape");
    require(!e.participants.contains(id),"Talk actor already has collision metadata");
    for(const auto& [other,p]:e.participants) {
        (void)other;require(p.precedence!=precedence,"Talk precedence must be unique");
    }
    for(auto named:e.actors.active_npcs())
        if(e.actors.actor_for_npc(named)==id) require(named==npc,"Talk NPC identity differs from its actual world owner");
    const auto& box=metadata.sprite.hitbox;
    e.participants.emplace(id,Execution::Participant{precedence,{npc,metadata.collision_profile,
                                                               {box[2],box[3]},{box[0],box[1]}}});
}
void Interactions::detach(ActorId id) {
    require(!execution_->active && !execution_->poisoned,"Talk lifecycle is not idle");
    execution_->participants.erase(id);
}
InteractionBody& Interactions::body(ActorId id) { return execution_->body(id); }
InteractionState& Interactions::state() { return execution_->state; }
const InteractionState& Interactions::state() const { return execution_->state; }
const dialogue::Program& Interactions::program() const { return *execution_->program; }
void Interactions::set_actors_paused(bool paused) {
    for(auto id:execution_->actors.actors()) {
        auto& actor=execution_->actors.actor(id);
        actor.scripts_and_physics_enabled=!paused;
        actor.tick_callback_enabled=!paused;
    }
}
void Interactions::bind_event_flags() {
    auto& e=*execution_;
    require(!e.poisoned,"Abandoned interaction invalidated event flag binding");
    auto& bound=e.actors.scene().event_flags;
    const auto flags=std::span<std::uint8_t>(e.windows.state().event_flags);
    require((!bound.data() && bound.empty()) ||
            (bound.data()==flags.data() && bound.size()==flags.size()),
            "Interactions and actors must share the same event flag storage");
    bound=flags;
}
std::uint16_t Interactions::apply_gift(GiftAction action) {
    auto& e=*execution_;
    require(!e.poisoned,"Abandoned interaction invalidated gift state");
    require(action==GiftAction::Open || action==GiftAction::Close || action==GiftAction::IsOpen,
            "Unknown gift action");
    auto& text=e.windows.state();
    const auto bound=e.actors.scene().event_flags;
    require(bound.data()==text.event_flags.data() && bound.size()==text.event_flags.size(),
            "Gift command lost its shared event flag storage");
    if(action==GiftAction::IsOpen) return text.flag(e.state.current_event_flag);

    // C226C5 publishes this write before C0C30C reads the live actor's flag.
    text.set_flag(e.state.current_event_flag,action==GiftAction::Open);
    const auto result=text.event_flags[(e.state.current_event_flag-1)/8];
    require(e.state.interacting_actor.has_value(),"Gift command has no selected actor");
    auto& actor=e.actors.actor(*e.state.interacting_actor);
    const auto& attached=e.body(*e.state.interacting_actor);
    require(actor.has_appearance() && actor.appearance.available() && actor.npc().has_value(),
            "Gift command requires the selected actor's live NPC appearance");
    require(*actor.npc()==attached.npc_id,"Gift actor identity differs from its attached NPC metadata");
    refresh_gift(*e.state.interacting_actor);
    return result;
}
void Interactions::refresh_gift(ActorId id) {
    auto& e=*execution_;
    require(!e.poisoned,"Abandoned interaction invalidated gift state");
    const auto bound=e.actors.scene().event_flags;
    const auto& text=e.windows.state();
    require(bound.data()==text.event_flags.data() && bound.size()==text.event_flags.size(),
            "Gift refresh lost its shared event flag storage");
    auto& actor=e.actors.actor(id);
    require(actor.has_appearance() && actor.appearance.available(),
            "Gift refresh requires its live actor appearance");
    const auto selector=actor.authored_role() ? e.actors.authored_npc_selector(*actor.authored_role())
                                             : actor.npc().value_or(0xffff);
    const auto& npc=e.resources->npc(selector);
    actor.behavior.direction=text.flag(npc.event_flag)?0:4;
    // C0A443_ENTRY2 refreshes from the existing animation word. It neither
    // advances the animation nor changes its walking fingerprint or motion.
    actor.appearance.select_four(actor.behavior.direction,actor.action().animation,actor.behavior.surface_flags);
}
dialogue::WindowHost& Interactions::windows() const { return execution_->windows; }
ActorWorld& Interactions::actors() const { return execution_->actors; }
std::unique_ptr<Interactions::Operation> Interactions::begin(InteractionAction action) {
    require(action==InteractionAction::Talk || action==InteractionAction::Check,"Unknown interaction action");
    auto& e=*execution_;require(!e.active && !e.poisoned,"Interaction already active or abandoned");
    auto op=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(e,action)));
    e.active=true;return op;
}
std::unique_ptr<Interactions::Operation> Interactions::begin_find_checkable() {
    auto &e=*execution_;require(!e.active && !e.poisoned,"Interaction already active or abandoned");
    auto op=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(e,InteractionAction::Check,true)));e.active=true;return op;
}
const InteractionRecord *Interactions::selected_npc() const {
    const auto &e=*execution_;require(!e.active && !e.poisoned,"Interaction finder has not completed");
    const auto id=e.state.interacting_npc;if(id==0 || id==0xffff || id==0xfffe)return nullptr;return &e.resources->npc(id);
}
bool Interactions::bicycle_blocked() {
    auto &e=*execution_;require(!e.active && !e.poisoned,"Interaction collision query is unavailable");
    const CollisionPoint point{e.state.leader_x,e.state.leader_y};e.state.checked_surface_origin=e.collision.origin(point,12);
    e.state.surface_flags=e.collision.perimeter(e.area,point,12);return (e.state.surface_flags&0xc0)!=0;
}
Interactions::Operation::Operation(std::unique_ptr<Execution> e):execution_(std::move(e)) {}
Interactions::Operation::~Operation() { if(!execution_->done) execution_->owner.poisoned=true; }
dialogue::Progress Interactions::Operation::advance(unsigned budget) {
    auto& e=*execution_;
    if(e.done) return dialogue::Progress::Finished;
    require(!e.owner.poisoned,"Abandoned Talk operation invalidated its owner");
    if(e.pending) return dialogue::Progress::Suspended;
    while(budget--) {
        e.step();
        if(e.done) return dialogue::Progress::Finished;
        if(e.pending) return dialogue::Progress::Suspended;
    }
    return dialogue::Progress::BudgetExhausted;
}
const std::optional<dialogue::WindowEffect>& Interactions::Operation::effect() const { return execution_->pending; }
void Interactions::Operation::respond() {
    auto& e=*execution_;
    require(e.pending.has_value() && e.window && !e.owner.poisoned,"Talk has no pending window effect");
    e.window->respond();e.pending.reset();
}
bool Interactions::Operation::complete() const { return execution_->done; }
const InteractionSelection& Interactions::Operation::selection() const {
    require(execution_->done,"Talk selection is not complete");return execution_->result;
}
} // namespace eb::native::npcs
