#include "eb/native/story/interaction_calls.hpp"
#include <stdexcept>

namespace eb::native::story {
namespace {
void require(bool value,const char* message) { if(!value)throw std::logic_error(message); }
dialogue::PromptHost& prompts(dialogue::MenuHost& menus) {
    require(menus.prompts()!=nullptr,"Interaction caller requires the actual prompt owner");
    return *menus.prompts();
}
dialogue::ReferenceKey reference(std::uint32_t value) {
    return {std::uint8_t(value),std::uint8_t(value>>8),std::uint8_t(value>>16),std::uint8_t(value>>24)};
}
}
struct InteractionCalls::Execution {
    std::shared_ptr<const dialogue::Program> program;
    npcs::Interactions& interactions;
    dialogue::PromptHost& prompts;
    dialogue::MenuHost* menus{};
    Scene& scene;
    EntityFadePending fade_pending;
    bool active{},poisoned{};
    Execution(std::shared_ptr<const dialogue::Program> p,npcs::Interactions& i,
              dialogue::PromptHost& h,Scene& s,EntityFadePending fade)
        :program(std::move(p)),interactions(i),prompts(h),scene(s),fade_pending(std::move(fade)) {
        require(program && program.get()==&interactions.program(),"Interaction caller has a different dialogue Program");
        require(&prompts.windows()==&interactions.windows() &&
                scene.shares_world(interactions.windows(),interactions.actors()),
                "Interaction caller must share the actual scene, window and actor owners");
        require(bool(fade_pending),"Interaction caller requires the live actor-fade status owner");
        scene.bind_interactions(interactions);
    }
};
struct InteractionCalls::Operation::Execution {
    enum class Phase { Queue, Pause, Sound, Talk, Check, Display, ClearInstant, HideMeters,
                       CloseWindows, PostTick, Fade, Resume, Complete };
    InteractionCalls::Execution& owner;
    bool quick{},done{};
    Phase phase=Phase::Pause;
    dialogue::ReferenceKey key;
    std::unique_ptr<npcs::InteractionQueue::Operation> queue;
    std::unique_ptr<npcs::Interactions::Operation> selection;
    std::unique_ptr<dialogue::Conversation> conversation;
    std::unique_ptr<dialogue::WindowHost::Operation> window;
    std::unique_ptr<Scene::Operation> scene;
    std::optional<InteractionCallService> pending;
    Execution(InteractionCalls::Execution& o,bool q,dialogue::ReferenceKey k,npcs::InteractionQueue* pending_queue)
        :owner(o),quick(q),key(k) {
        if(pending_queue) {queue=pending_queue->begin();phase=Phase::Queue;}
    }
    void finish() { phase=Phase::Complete;done=true;owner.active=false; }
    // A completed Scene child acknowledges only its exact suspended window or
    // selector. The caller's own hide/wait/conversation stages have no such ack.
    void scene_finished() {
        scene.reset();
        if(selection && selection->effect()) selection->respond();
        else if(window && window->effect()) window->respond();
        else if(phase==Phase::Display) {conversation.reset();phase=quick?Phase::ClearInstant:Phase::PostTick;}
        else if(phase==Phase::HideMeters) phase=Phase::CloseWindows;
        else if(phase==Phase::PostTick) phase=Phase::Fade;
    }
    void step() {
        auto& o=owner;
        if(scene) {
            const auto progress=scene->advance(1);
            if(progress==dialogue::Progress::Finished) scene_finished();
            else if(progress==dialogue::Progress::Suspended) pending=InteractionCallService::Scene;
            return;
        }
        switch(phase) {
        case Phase::Queue: {
            const auto progress=queue->advance(1);
            if(progress==npcs::InteractionQueueProgress::Finished) {finish();return;}
            if(progress==npcs::InteractionQueueProgress::BudgetExhausted) return;
            require(queue->service().has_value(),"Interaction queue omitted its service");
            switch(queue->service()->kind) {
            case npcs::InteractionQueueServiceKind::ClearPartySpriteBlink:
                // The real helper returns without writes when this live word
                // is zero. Nonzero requires the actual appearance owner; no
                // timer/animation refresh can substitute for clearing flags.
                if(!o.interactions.actors().appearance_scene().intangibility_ticks) queue->respond();
                else pending=InteractionCallService::PartySpriteBlink;
                return;
            case npcs::InteractionQueueServiceKind::Text:
                key=queue->service()->key;phase=Phase::Pause;return;
            case npcs::InteractionQueueServiceKind::Door:
                pending=InteractionCallService::Door;return;
            }
            throw std::logic_error("Unknown queued interaction service");
        }
        case Phase::Pause:
            o.interactions.set_actors_paused(true);phase=quick?Phase::Sound:Phase::Display;return;
        case Phase::Sound: pending=InteractionCallService::Sound;return;
        case Phase::Talk:
        case Phase::Check: {
            if(!selection) selection=o.interactions.begin(phase==Phase::Talk?npcs::InteractionAction::Talk:npcs::InteractionAction::Check);
            const auto progress=selection->advance(1);
            if(progress==dialogue::Progress::Finished) {
                key=selection->selection().reference;selection.reset();
                if(key==dialogue::ReferenceKey{} && phase==Phase::Talk) phase=Phase::Check;
                else {
                    // Source MSG_SYS_NOPROBLEM content locations, not copied
                    // authored text. Resolve only if this fallback is selected.
                    if(key==dialogue::ReferenceKey{}) key=reference(o.program->version()==GameVersion::US?0xc7c59e:0xc925b8);
                    phase=Phase::Display;
                }
            } else if(progress==dialogue::Progress::Suspended) {
                require(selection->effect().has_value(),"Interaction selector omitted its window effect");
                scene=o.scene.begin(*selection->effect());
            }
            return;
        }
        case Phase::Display: {
            // DISPLAY_TEXT(NULL) returns before acquiring a text stream.
            if(key==dialogue::ReferenceKey{}) {phase=quick?Phase::ClearInstant:Phase::PostTick;return;}
            const auto at=o.program->resolve(key);
            require(at.has_value(),"Non-null interaction reference has no dialogue content");
            if(o.menus) conversation=std::make_unique<dialogue::Conversation>(o.program,*o.menus);
            else conversation=std::make_unique<dialogue::Conversation>(o.program,o.prompts);
            conversation->start(*at);scene=o.scene.begin(*conversation);return;
        }
        case Phase::ClearInstant:
            o.interactions.windows().output().policy().instant=false;phase=Phase::HideMeters;return;
        case Phase::HideMeters:
            scene=o.scene.begin(dialogue::WindowEffect{dialogue::WindowEffectKind::HideMeters});return;
        case Phase::CloseWindows:
            if(!window) window=o.interactions.windows().begin({dialogue::WindowAction::CloseAll,{},{},0});
            if(window->advance()==dialogue::OutputProgress::Complete) {window.reset();phase=Phase::PostTick;}
            else {
                require(window->effect().has_value(),"Interaction close-all omitted its window effect");
                scene=o.scene.begin(*window->effect());
            }
            return;
        case Phase::PostTick: scene=o.scene.begin(TickKind::Window);return;
        case Phase::Fade:
            phase=o.fade_pending()?Phase::PostTick:Phase::Resume;return;
        case Phase::Resume:
            o.interactions.set_actors_paused(false);
            if(queue) {queue->respond();phase=Phase::Queue;}
            else finish();
            return;
        case Phase::Complete:return;
        }
    }
};
InteractionCalls::InteractionCalls(std::shared_ptr<const dialogue::Program> p,npcs::Interactions& i,
                                   dialogue::PromptHost& h,Scene& s,EntityFadePending f)
    :execution_(std::make_unique<Execution>(std::move(p),i,h,s,std::move(f))) {}
InteractionCalls::InteractionCalls(std::shared_ptr<const dialogue::Program> p,npcs::Interactions& i,
                                   dialogue::MenuHost& h,Scene& s,EntityFadePending f)
    :InteractionCalls(std::move(p),i,prompts(h),s,std::move(f)) {
    require(&h.windows()==&i.windows(),"Interaction caller has a different menu window owner");
    execution_->menus=&h;
}
InteractionCalls::~InteractionCalls()=default;
std::unique_ptr<InteractionCalls::Operation> InteractionCalls::begin(bool quick,dialogue::ReferenceKey key,npcs::InteractionQueue* queue) {
    auto& e=*execution_;require(!e.active && !e.poisoned,"Interaction caller is active or abandoned");
    auto result=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(e,quick,key,queue)));
    e.active=true;return result;
}
std::unique_ptr<InteractionCalls::Operation> InteractionCalls::begin_check_talk() {return begin(true,{});}
std::unique_ptr<InteractionCalls::Operation> InteractionCalls::begin_queued_text(dialogue::ReferenceKey key) {return begin(false,key);}
std::unique_ptr<InteractionCalls::Operation> InteractionCalls::begin_process_queue(npcs::InteractionQueue& queue) {
    const auto& e=*execution_;
    require(queue.shares_world(e.program->version(),e.interactions.actors().appearance_scene().intangibility_ticks),
            "Interaction queue belongs to another region or appearance owner");
    return begin(false,{},&queue);
}
InteractionCalls::Operation::Operation(std::unique_ptr<Execution> e):execution_(std::move(e)) {}
InteractionCalls::Operation::~Operation() {if(!execution_->done)execution_->owner.poisoned=true;}
dialogue::Progress InteractionCalls::Operation::advance(unsigned budget) {
    auto& e=*execution_;
    if(e.done)return dialogue::Progress::Finished;
    require(!e.owner.poisoned,"Abandoned interaction caller invalidated its continuation");
    if(e.pending && e.pending!=InteractionCallService::Scene)return dialogue::Progress::Suspended;
    if(e.pending==InteractionCallService::Scene) {
        if(e.scene->service())return dialogue::Progress::Suspended;
        e.pending.reset();
    }
    while(budget--) {
        e.step();
        if(e.done)return dialogue::Progress::Finished;
        if(e.pending)return dialogue::Progress::Suspended;
    }
    return dialogue::Progress::BudgetExhausted;
}
const std::optional<InteractionCallService>& InteractionCalls::Operation::service() const {return execution_->pending;}
Scene::Operation& InteractionCalls::Operation::scene_operation() {
    require(execution_->pending==InteractionCallService::Scene && execution_->scene &&
            execution_->scene->service().has_value(),"Interaction caller has no pending Scene service");
    return *execution_->scene;
}
std::uint16_t InteractionCalls::Operation::sound() const {
    require(execution_->pending==InteractionCallService::Sound,"Interaction caller has no pending sound");return 1;
}
void InteractionCalls::Operation::respond_sound() {
    auto& e=*execution_;require(e.pending==InteractionCallService::Sound,"Interaction caller has no pending sound");
    e.pending.reset();e.phase=Execution::Phase::Talk;
}
void InteractionCalls::Operation::respond_party_sprite_blink() {
    auto& e=*execution_;require(e.pending==InteractionCallService::PartySpriteBlink && e.queue,
                               "Interaction caller has no pending party-sprite blink service");
    e.queue->respond();e.pending.reset();
}
dialogue::ReferenceKey InteractionCalls::Operation::door_reference() const {
    const auto& e=*execution_;require(e.pending==InteractionCallService::Door && e.queue,
                                     "Interaction caller has no pending door transition");
    return e.queue->service()->key;
}
void InteractionCalls::Operation::respond_door() {
    auto& e=*execution_;require(e.pending==InteractionCallService::Door && e.queue,
                               "Interaction caller has no pending door transition");
    e.queue->respond();e.pending.reset();
}
bool InteractionCalls::Operation::complete() const {return execution_->done;}
dialogue::ReferenceKey InteractionCalls::Operation::selected_reference() const {return execution_->key;}
} // namespace eb::native::story
