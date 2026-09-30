#include "native_interaction_test_assets.hpp"

namespace {
using namespace interaction_test_assets;
using Call=story::InteractionCalls;
dialogue::ReferenceKey fallback(eb::GameVersion region) {
    return region==eb::GameVersion::US?dialogue::ReferenceKey{0x9e,0xc5,0xc7,0}:
                                     dialogue::ReferenceKey{0xb8,0x25,0xc9,0};
}
void drive(Call::Operation& operation,unsigned limit=100000) {
    for(unsigned i=0;i<limit;++i) {
        const auto result=operation.advance(7);
        if(result==dialogue::Progress::Finished)return;
        if(result!=dialogue::Progress::Suspended)continue;
        check(operation.service()==story::InteractionCallService::Scene,"Unexpected unacknowledged caller sound");
        auto& scene=operation.scene_operation();
        check(scene.service()==story::SceneService::Frame,"Synthetic caller requires a real unported service");
        scene.complete_frame({0,0});
    }
    throw std::runtime_error("Caller did not finish its bounded fixture");
}
void next_frame(Call::Operation& operation) {
    for(unsigned i=0;i<100000;++i) {
        const auto progress=operation.advance(1);
        check(progress!=dialogue::Progress::Finished,"Caller completed before the expected real frame");
        if(progress!=dialogue::Progress::Suspended)continue;
        check(operation.service()==story::InteractionCallService::Scene &&
              operation.scene_operation().service()==story::SceneService::Frame,
              "Caller reached a different service than the expected real frame");return;
    }
    throw std::runtime_error("Caller failed to yield its next frame");
}
void queued_null_fade_and_lifecycle(eb::GameVersion region) {
    Fixture f(region);const auto first=f.leader(),removed=f.add(1,0);f.start();
    f.output.policy().instant=false;f.meters.state().render=1;
    unsigned fade_reads{};bool fading=true;
    Call caller(f.program,f.talk,f.prompts,*f.scene,[&]{
        ++fade_reads;
        check(f.scene->completed_frames()==fade_reads,"Fade owner was read before exactly one mandatory tick per poll");
        check(!f.actors.actor(first).scripts_and_physics_enabled,"Caller resumed before source fade owner finished");
        return fading;
    });
    auto op=caller.begin_queued_text({});const auto old=f.scene->frame();const auto old_atlas=old->atlas;
    const auto seed=f.random;
    check(op->advance(0)==dialogue::Progress::BudgetExhausted &&
          f.actors.actor(first).scripts_and_physics_enabled && !op->service() && fade_reads==0,
          "Zero caller budget paused/ticked/read the fade owner");
    rejects([&]{caller.begin_check_talk();},"Two caller operations acquired one continuation");
    rejects([&]{op->respond_sound();},"Queued caller accepted a nonexistent sound");
    next_frame(*op);
    check(!f.actors.actor(first).scripts_and_physics_enabled && !f.actors.actor(removed).tick_callback_enabled &&
          fade_reads==0 && f.scene->completed_frames()==0 && f.actors.actor(first).action().variables[0]==0,
          "Queued null text omitted pause or completed fade before a real frame");
    auto* pending=&op->scene_operation();
    for(unsigned i=0;i<4;++i)check(op->advance(0)==dialogue::Progress::Suspended &&
                                  &op->scene_operation()==pending && fade_reads==0,
                                  "Caller repeated or implicitly completed a pending Scene service");
    op->scene_operation().complete_frame({0,0});next_frame(*op);
    check(fade_reads==1 && f.scene->completed_frames()==1 && !op->complete(),
          "A still-active fade was inferred complete from actor visibility or null text");
    f.actors.erase(removed);f.talk.detach(removed);const auto newcomer=f.add(2,0,180,180);
    f.actors.actor(newcomer).scripts_and_physics_enabled=false;
    f.actors.actor(newcomer).tick_callback_enabled=false;
    fading=false;op->scene_operation().complete_frame({0,0});drive(*op);
    check(fade_reads==2 && f.scene->completed_frames()==2 && f.random!=seed && f.actors.ticks()==2 &&
          f.actors.actor(first).action().variables[0]==0 && f.actors.actor(newcomer).action().variables[0]==0,
          "Queued fade loop skipped real world ticks or advanced paused actor scripts");
    for(auto id:f.actors.actors())check(f.actors.actor(id).scripts_and_physics_enabled &&
                                      f.actors.actor(id).tick_callback_enabled,"Caller resumed a saved actor list instead of current live owners");
    check(!f.output.policy().instant && f.meters.state().render==1 && op->selected_reference()==dialogue::ReferenceKey{} &&
          op->advance(0)==dialogue::Progress::Finished && old->atlas==old_atlas,
          "Queued null text borrowed quick-call cleanup or mutated an old frame");
}
void quick_order_and_fallback(eb::GameVersion region) {
    for(unsigned type:{1u,2u,0u}) {
        Fixture f(region,[&](Content& c){c.npc(1,type,42,87,type==2?2:1);});
        const auto leader=f.leader();if(type)f.add(1,0);f.start();
        f.output.policy().instant=true;f.meters.state().render=1;f.meters.state().drawn_mask=1;f.meters.state().selected_phase=0;
        unsigned fade_reads{};std::uint64_t fade_frame{};
        Call caller(f.program,f.talk,f.prompts,*f.scene,[&]{
            ++fade_reads;fade_frame=f.scene->completed_frames();
            check(fade_frame>0 && !f.output.policy().instant && !f.meters.state().render && f.text.windows.empty(),
                  "Quick caller read fade status before post-text cleanup/window tick");
            check(!f.actors.actor(leader).scripts_and_physics_enabled,"Quick caller resumed before its fade check");
            return false;
        });
        auto op=caller.begin_check_talk();
        check(op->advance(0)==dialogue::Progress::BudgetExhausted && f.actors.actor(leader).scripts_and_physics_enabled,
              "Quick call performed pause on creation/zero budget");
        check(op->advance()==dialogue::Progress::Suspended && op->service()==story::InteractionCallService::Sound &&
              op->sound()==1 && !f.actors.actor(leader).scripts_and_physics_enabled && !f.windows.slot_for({1}) &&
              f.scene->completed_frames()==0,"Quick caller reordered pause, sound1 and selector window");
        for(unsigned i=0;i<3;++i)check(op->advance()==dialogue::Progress::Suspended && op->sound()==1 &&
                                     !f.windows.slot_for({1}),"Unacknowledged caller audio advanced selector work");
        rejects([&]{op->scene_operation();},"Sound request exposed a nonexistent Scene operation");
        op->respond_sound();drive(*op);
        const auto expected=type?Content::key(type==2?2:1):fallback(region);
        check(op->selected_reference()==expected && fade_reads==1 && fade_frame==f.scene->completed_frames() &&
              f.actors.actor(leader).scripts_and_physics_enabled && f.actors.actor(leader).tick_callback_enabled,
              "Quick caller failed Talk→Check→fallback selection or post-cleanup resume");
        if(type==2)check(f.talk.state().current_event_flag==87,"Quick caller bypassed actual gift Check preparation");
    }
}
void queued_text_preserves_policy(eb::GameVersion region) {
    Fixture f(region);const auto leader=f.leader();f.start();
    f.window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
    f.output.policy().instant=false;f.meters.state().render=1;
    const auto old=f.scene->frame();const auto atlas=old->atlas;unsigned reads{};
    Call caller(f.program,f.talk,f.prompts,*f.scene,[&]{++reads;return false;});
    auto op=caller.begin_queued_text(Content::key(1));drive(*op);
    check(reads==1 && f.windows.slot_for({1}) && !f.output.policy().instant && f.meters.state().render==1 &&
          f.output.window({1}).cursor.column>0 && f.scene->frame()->atlas!=atlas && old->atlas==atlas &&
          f.actors.actor(leader).action().variables[0]==0,
          "Queued actual dialogue lost output, retained-window/instant contract, pause or immutable publication");
}
void instant_call_still_ticks(eb::GameVersion region) {
    Fixture f(region);const auto leader=f.leader();f.start();f.output.policy().instant=true;
    const auto seed=f.random;const auto frame=f.scene->frame();unsigned reads{};
    Call caller(f.program,f.talk,f.prompts,*f.scene,[&]{
        ++reads;check(f.random!=seed && f.scene->completed_frames()==0 && f.actors.ticks()==0,
                     "Instant queued caller skipped WINDOW_TICK RNG or invented a frame");return false;
    });
    auto op=caller.begin_queued_text({});drive(*op);
    check(reads==1 && f.output.policy().instant && f.scene->frame()==frame &&
          f.actors.actor(leader).scripts_and_physics_enabled,
          "Instant queued null text lost source tick, retained policy or resume");
}
void explicit_services_and_abandonment(eb::GameVersion region) {
    // A newcomer created after the initial pause is real live state. It must
    // expose its unsupported action on the next fade tick, never be fake-acked.
    Fixture f(region);f.leader();f.start();unsigned reads{};
    Call caller(f.program,f.talk,f.prompts,*f.scene,[&]{++reads;return true;});
    auto op=caller.begin_queued_text({});next_frame(*op);
    PreparedActorState prepared;prepared.x=200;prepared.y=180;
    auto spec=make_actor_spec(0,1,prepared,*f.sprites,*f.scripts,std::optional<NpcId>(2));
    const auto newcomer=f.actors.create(spec);f.talk.attach(newcomer,0,f.metadata,2);
    op->scene_operation().complete_frame({0,0});
    for(unsigned i=0;i<100000;++i) {
        const auto progress=op->advance(1);
        if(progress==dialogue::Progress::Suspended && op->service()==story::InteractionCallService::Scene &&
           op->scene_operation().service()==story::SceneService::ActorEngine)break;
    }
    check(op->service()==story::InteractionCallService::Scene &&
          op->scene_operation().service()==story::SceneService::ActorEngine && reads==1,
          "Caller concealed the actual newcomer's unsupported actor service");
    const auto frames=f.scene->completed_frames();const auto request=*op->scene_operation().actor_request();
    for(unsigned i=0;i<5;++i)check(op->advance()==dialogue::Progress::Suspended &&
                                  op->scene_operation().actor_request()->actor==request.actor &&
                                  f.scene->completed_frames()==frames && reads==1,
                                  "Pending actor work was acknowledged or ticked twice");
    rejects([&]{op->scene_operation().respond_actor();},"Unknown actor continuation accepted a fabricated result");
    const auto published=f.scene->frame();op.reset();
    rejects([&]{caller.begin_queued_text({});},"Abandoned caller resumed unsafe execution");
    check(f.scene->frame()==published,"Abandoned caller blocked safe immutable sampling");

    Fixture unsupported(region,[](Content& c){c.first_text={0x18,0xff,2};});unsupported.leader();unsupported.start();
    Call external(unsupported.program,unsupported.talk,unsupported.prompts,*unsupported.scene,[]{return false;});
    auto text=external.begin_queued_text(Content::key(1));
    for(unsigned i=0;i<100000 && text->advance(1)!=dialogue::Progress::Suspended;++i){}
    check(text->service()==story::InteractionCallService::Scene &&
          text->scene_operation().service()==story::SceneService::Dialogue,
          "Unsupported authored dialogue was silently consumed by interaction caller");
    const auto counter=unsupported.scene->completed_frames();
    check(text->advance()==dialogue::Progress::Suspended && unsupported.scene->completed_frames()==counter,
          "Unserved dialogue callback advanced the caller's fade/resume path");
}
void queue_text_and_callback_publication(eb::GameVersion region) {
    for(unsigned type:{0u,8u,9u,10u}) {
        Fixture f(region);const auto leader=f.leader();f.start();
        f.window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
        f.actors.appearance_scene().intangibility_ticks=1; // capture clears low bit, making blink a real no-op.
        npcs::InteractionQueueState state; npcs::DadPhoneState phone{77,1};
        npcs::InteractionQueue queue(region,state,f.actors.appearance_scene().intangibility_ticks,phone,Content::key(1));
        check(queue.enqueue(std::uint16_t(type),Content::key(1)),"Fixture queue could not enqueue its initial text");
        unsigned fade_reads{};
        Call caller(f.program,f.talk,f.prompts,*f.scene,[&]{++fade_reads;return false;});
        auto op=caller.begin_process_queue(queue);const auto before=state;
        check(op->advance(0)==dialogue::Progress::BudgetExhausted && state==before &&
              f.actors.appearance_scene().intangibility_ticks==1,
              "Zero caller queue budget captured or modified an interaction");
        next_frame(*op);
        check(state.current_type==type && state.current==1 && state.next==1 &&
              f.actors.appearance_scene().intangibility_ticks==0 &&
              !f.actors.actor(leader).scripts_and_physics_enabled && fade_reads==0,
              "Queue text did not preserve capture, source no-op blink, pause and real dialogue ordering");
        const auto pending=state;
        check(!queue.enqueue(std::uint16_t(type),Content::key(3)) && state==pending,
              "Live current-type suppression was lost during a text callback");
        check(queue.enqueue(2,Content::key(2)) && state.next==2 && state.pending==1,
              "Producer could not enqueue another interaction during an actual frame callback");
        op->scene_operation().complete_frame({0,0});drive(*op);
        check(state.current==1 && state.next==2 && state.pending==1 && state.current_type==0xffff &&
              fade_reads==1 && op->selected_reference()==Content::key(1) &&
              f.output.window({1}).cursor.column>0 && f.scene->completed_frames()>0 &&
              f.actors.actor(leader).scripts_and_physics_enabled,
              "Queue completion discarded callback publication or failed actual text/tick/resume");
        check(phone==(type==10?npcs::DadPhoneState{1687,0}:npcs::DadPhoneState{77,1}),
              "Caller queue failed to finalize the captured Dad text or changed another text type");
        auto door=caller.begin_process_queue(queue);
        check(door->advance()==dialogue::Progress::Suspended &&
              door->service()==story::InteractionCallService::Door && door->door_reference()==Content::key(2),
              "Newly produced door was consumed as text or fake-completed");
        const auto frame=f.scene->completed_frames();const auto stored=state;
        for(unsigned i=0;i<3;++i)check(door->advance()==dialogue::Progress::Suspended && state==stored &&
                                     f.scene->completed_frames()==frame && f.actors.actor(leader).scripts_and_physics_enabled,
                                     "Unowned door transition advanced or paused actual gameplay");
        rejects([&]{door->respond_party_sprite_blink();},"Pending door accepted the wrong service acknowledgment");
        door.reset();rejects([&]{queue.enqueue(1,{});},"Abandoned door allowed unsafe queue mutation");
    }
}
void queue_unowned_services_and_binding(eb::GameVersion region) {
    Fixture f(region);const auto leader=f.leader();f.start();
    f.meters.state().selected_phase=0;f.meters.state().drawn_mask=1;
    f.actors.appearance_scene().intangibility_ticks=3;
    npcs::InteractionQueueState state; npcs::DadPhoneState phone;
    npcs::InteractionQueue queue(region,state,f.actors.appearance_scene().intangibility_ticks,phone);
    queue.enqueue(0,Content::key(1));
    Call caller(f.program,f.talk,f.prompts,*f.scene,[]{return false;});
    auto blink=caller.begin_process_queue(queue);
    check(blink->advance()==dialogue::Progress::Suspended &&
          blink->service()==story::InteractionCallService::PartySpriteBlink &&
          f.actors.appearance_scene().intangibility_ticks==2 && f.meters.state().selected_phase==0 &&
          f.scene->completed_frames()==0 && f.actors.actor(leader).scripts_and_physics_enabled,
          "Party sprite blink was confused with meter selection clear or silently completed");
    const auto captured=state;
    for(unsigned i=0;i<4;++i)check(blink->advance()==dialogue::Progress::Suspended && state==captured &&
                                 f.meters.state().selected_phase==0 && f.scene->completed_frames()==0,
                                 "Unserved party sprite blink advanced text/queue/frame state");
    rejects([&]{blink->respond_door();},"Blink accepted a door acknowledgment");
    rejects([&]{blink->scene_operation();},"Blink manufactured a Scene frame service");
    blink.reset();rejects([&]{caller.begin_process_queue(queue);},"Abandoned sprite blink left caller reusable");

    Fixture inert(region);const auto actor=inert.leader();inert.start();
    npcs::InteractionQueueState unknown; npcs::DadPhoneState no_phone;
    npcs::InteractionQueue unknown_queue(region,unknown,inert.actors.appearance_scene().intangibility_ticks,no_phone);
    unknown_queue.enqueue(0xf123,Content::key(3));const auto seed=inert.random;
    Call no_op(inert.program,inert.talk,inert.prompts,*inert.scene,[]{throw std::runtime_error("Unknown queue type polled fade");return false;});
    auto item=no_op.begin_process_queue(unknown_queue);
    check(item->advance()==dialogue::Progress::Finished && !item->service() && unknown.current==1 &&
          unknown.next==1 && unknown.pending==0 && unknown.current_type==0xffff &&
          inert.actors.actor(actor).scripts_and_physics_enabled && inert.scene->completed_frames()==0 && inert.random==seed,
          "Unknown queued type was not consumed without pause/text/world work");
    npcs::InteractionQueueState wrong;std::uint16_t other_word{};
    npcs::InteractionQueue other_owner(region,wrong,other_word,no_phone);
    npcs::InteractionQueue other_region(region==eb::GameVersion::US?eb::GameVersion::JP:eb::GameVersion::US,
                                       wrong,inert.actors.appearance_scene().intangibility_ticks,no_phone);
    const auto original=wrong;
    rejects([&]{no_op.begin_process_queue(other_owner);},"Caller accepted an equal-valued but foreign appearance word");
    rejects([&]{no_op.begin_process_queue(other_region);},"Caller accepted a different regional queue");
    check(wrong==original && inert.actors.actor(actor).scripts_and_physics_enabled,
          "Rejected queue binding captured state or paused actors");
    auto again=no_op.begin_process_queue(unknown_queue);
    check(again->advance(0)==dialogue::Progress::BudgetExhausted,
          "Rejected foreign queue poisoned the correctly bound caller");
}
void window_party_sprite_blink(eb::GameVersion region) {
    // CREATE_WINDOW's C07C5B concerns party sprites, not HP/PP selection.
    // Its zero-intangibility branch is a complete no-op in either region.
    {
        Fixture f(region);f.leader();f.start();
        f.meters.state()={1,1,0,7,1};
        const auto seed=f.random;const auto image=f.scene->frame();
        auto window=f.windows.begin({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
        check(window->advance()==dialogue::OutputProgress::Suspended && window->effect() &&
              window->effect()->kind==dialogue::WindowEffectKind::ClearPartyBlink && f.windows.slot_for({1}),
              "Actual window creation did not yield its source party-sprite helper");
        auto effect=f.scene->begin(*window->effect());
        check(effect->advance(0)==dialogue::Progress::BudgetExhausted && !effect->service(),
              "Zero Scene budget serviced window party sprites");
        check(effect->advance()==dialogue::Progress::Finished && !effect->service() &&
              f.scene->completed_frames()==0 && f.actors.ticks()==0 && f.random==seed && f.scene->frame()==image &&
              f.meters.state().render==1 && f.meters.state().drawn_mask==1 &&
              f.meters.state().selected_phase==0 && f.meters.state().area_dirty==7 && f.meters.state().upload==1,
              "Zero-intangibility window creation changed meters or invented a frame/tick");
        window->respond();
        check(window->advance()==dialogue::OutputProgress::Complete && f.windows.slot_for({1}),
              "Source no-op party blink did not allow actual window creation to finish");
    }
    {
        Fixture f(region);const auto leader=f.leader();f.add(1,0);f.start();
        f.meters.state()={1,1,0,7,1};f.actors.appearance_scene().intangibility_ticks=2;
        const auto seed=f.random;const auto image=f.scene->frame();
        Call caller(f.program,f.talk,f.prompts,*f.scene,[]{
            throw std::runtime_error("Unserved window sprite blink reached fade polling");return false;
        });
        auto op=caller.begin_check_talk();
        check(op->advance()==dialogue::Progress::Suspended && op->service()==story::InteractionCallService::Sound,
              "Quick caller omitted source audio before opening its window");
        op->respond_sound();
        check(op->advance()==dialogue::Progress::Suspended && op->service()==story::InteractionCallService::Scene &&
              op->scene_operation().service()==story::SceneService::PartySpriteBlink && f.windows.slot_for({1}) &&
              !f.actors.actor(leader).scripts_and_physics_enabled && f.talk.state().interacting_npc==0xffff,
              "Actual selector window bypassed pending party sprites or searched before its callback");
        for(unsigned i=0;i<4;++i)
            check(op->advance(i)==dialogue::Progress::Suspended &&
                  op->scene_operation().service()==story::SceneService::PartySpriteBlink &&
                  f.actors.appearance_scene().intangibility_ticks==2 && f.scene->completed_frames()==0 &&
                  f.actors.ticks()==0 && f.random==seed && f.scene->frame()==image &&
                  f.meters.state().render==1 && f.meters.state().drawn_mask==1 &&
                  f.meters.state().selected_phase==0 && f.meters.state().area_dirty==7 && f.meters.state().upload==1,
                  "Pending window party sprites mutated meter selection or advanced a frame");
        rejects([&]{op->scene_operation().complete_frame({0,0});},
                "Window sprite operation accepted a fabricated frame acknowledgment");
        rejects([&]{op->respond_party_sprite_blink();},
                "Window sprite operation was confused with the queue's separate service");
        op.reset();
        rejects([&]{caller.begin_check_talk();},"Abandoned window sprite operation left caller reusable");
        check(f.scene->frame()==image,"Abandoned sprite operation changed immutable scene sampling");
    }
}
void bindings(eb::GameVersion region) {
    Fixture f(region),foreign(region);f.leader();foreign.leader();f.start();foreign.start();
    rejects([&]{Call c(f.program,f.talk,f.prompts,*f.scene,{});},"Caller invented a default entity-fade completion owner");
    rejects([&]{Call c(foreign.program,f.talk,f.prompts,*f.scene,[]{return false;});},"Caller accepted unrelated dialogue content");
    rejects([&]{Call c(f.program,f.talk,foreign.prompts,*f.scene,[]{return false;});},"Caller accepted another window/prompt owner");
    rejects([&]{Call c(f.program,f.talk,f.prompts,*foreign.scene,[]{return false;});},"Caller accepted another actual Scene world");
    check(f.actors.actor(f.talk.state().leader).scripts_and_physics_enabled && f.scene->completed_frames()==0,
          "Rejected caller binding mutated the actual actor world");
}
}
int main() {
    try {
        for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
            queued_null_fade_and_lifecycle(region);quick_order_and_fallback(region);
            queued_text_preserves_policy(region);instant_call_still_ticks(region);explicit_services_and_abandonment(region);bindings(region);
            queue_text_and_callback_publication(region);queue_unowned_services_and_binding(region);
            window_party_sprite_blink(region);
        }
        std::cout<<"PASS native interaction callers: "<<checks<<" checks\n";
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
