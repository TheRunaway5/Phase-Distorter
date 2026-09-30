// Actual ActorWorld + WindowHost owners, with imported synthetic content.
// Complete original helper/command comparisons live in the separate oracle.
#include "native_interaction_test_assets.hpp"

namespace {
using namespace interaction_test_assets;
using npcs::GiftAction;
void select(Fixture& f,ActorId actor,std::uint16_t current_flag=1) {
    f.talk.state().interacting_actor=actor;
    f.talk.state().current_event_flag=current_flag;
}
void shared_flags(eb::GameVersion region) {
    Fixture f(region,[](Content& c){c.npc(1,2,42,17);});const auto actor=f.add(1,0);
    select(f,actor);const auto initial=f.text.event_flags;
    rejects([&]{f.talk.apply_gift(GiftAction::Open);},"Unbound gift command silently invented an actor flag owner");
    check(f.text.event_flags==initial,"Unbound gift command mutated flags before its binding check");
    // Final allocation can happen after Interactions construction.
    f.text.event_flags.resize(8192);f.talk.bind_event_flags();f.talk.bind_event_flags();
    check(f.actors.scene().event_flags.data()==f.text.event_flags.data() &&
          f.actors.scene().event_flags.size()==f.text.event_flags.size(),"Actors received a copied flag table");
    f.actors.scene().event_flags[2]=1;f.talk.state().current_event_flag=17;
    check(f.talk.apply_gift(GiftAction::IsOpen)==1,"Gift query ignored a write through the shared actor flag span");
    f.text.set_flag(17,false);
    check(f.actors.scene().event_flags[2]==0,"Dialogue flag write did not reach the actual actor owner");
    f.talk.state().interacting_actor.reset();f.text.set_flag(17,true);
    check(f.talk.apply_gift(GiftAction::IsOpen)==1,"Gift query unnecessarily required a selected actor");
    const auto flags=f.text.event_flags;
    rejects([&]{f.talk.apply_gift(static_cast<GiftAction>(99));},"Unknown gift selector was accepted");
    check(f.text.event_flags==flags,"Invalid gift action changed flags");
    f.text.event_flags.resize(8193);const auto resized=f.text.event_flags;
    rejects([&]{f.talk.bind_event_flags();},"Resized flag storage was silently rebound while actor consumers borrowed it");
    rejects([&]{f.talk.apply_gift(GiftAction::Close);},"Gift command dereferenced a stale flag binding");
    check(f.text.event_flags==resized,"Stale flag identity changed current flags before rejection");

    Fixture foreign(region);std::vector<std::uint8_t> other(foreign.text.event_flags.size());
    foreign.actors.scene().event_flags=other;
    rejects([&]{foreign.talk.bind_event_flags();},"Gift binding replaced another actor world's authoritative flag owner");
    check(foreign.actors.scene().event_flags.data()==other.data(),"Rejected flag binding changed its existing owner");
}
void flag_byte_and_live_pose(eb::GameVersion region) {
    Fixture f(region,[](Content& c){c.npc(1,2,42,17);c.npc(2,2,43,25);});
    const auto first=f.add(1,0),second=f.add(2,1);f.talk.bind_event_flags();select(f,first);
    // The selected global NPC ID is not C0C30C's ENTITY_NPC_IDS lookup.
    f.talk.state().interacting_npc=2;
    auto& actor=f.actors.actor(first);
    actor.action().velocity={1,0xffff0000,0x12345};actor.behavior.moving_direction=6;
    actor.appearance.step_four_walk({6,12,3,2,0});
    const auto fingerprint=actor.appearance.fingerprint();const auto position=actor.action().position;
    const auto velocity=actor.action().velocity;
    for(const auto flag:{1u,8u,9u,1024u})
        for(const auto byte:{0u,1u,0x55u,0xaau,0xffu})
            for(bool actor_flag:{false,true})
                for(const auto animation:{0u,2u,0xffffu})
                    for(const auto surface:{0u,8u,12u}) {
                        f.text.event_flags[(flag-1)/8]=std::uint8_t(byte);
                        f.text.set_flag(17,actor_flag);f.text.set_flag(25,!actor_flag);
                        f.talk.state().current_event_flag=std::uint16_t(flag);
                        actor.action().animation=std::uint16_t(animation);
                        actor.behavior.surface_flags=std::uint16_t(surface);
                        auto expected=f.text.event_flags;const unsigned bit=1u<<((flag-1)&7);
                        expected[(flag-1)/8]|=std::uint8_t(bit);
                        check(f.talk.apply_gift(GiftAction::Open)==expected[(flag-1)/8] && f.text.event_flags==expected,
                              "Gift opening lost whole-byte return, source bit position or neighboring flags");
                        const unsigned direction=actor_flag?0:4;
                        const auto display=*actor.appearance.displayed();
                        check(actor.behavior.direction==direction && display.pose==(actor_flag?0u:4u)+(animation!=0) &&
                              display.format==SpriteFrameFormat::FourDirection &&
                              display.surface==(surface==12?SpriteSurface::Deep:surface==8?SpriteSurface::Shallow:SpriteSurface::Normal),
                              "Gift pose used the interaction flag/global NPC instead of actual actor flag and raw animation");
                        expected[(flag-1)/8]&=std::uint8_t(~bit);
                        check(f.talk.apply_gift(GiftAction::Close)==expected[(flag-1)/8] && f.text.event_flags==expected &&
                              actor.behavior.direction==direction,
                              "Gift close forced a down pose or returned a predicate instead of the updated byte");
                        check(actor.action().animation==animation && actor.action().position==position &&
                              actor.action().velocity==velocity && actor.behavior.moving_direction==6 &&
                              actor.appearance.fingerprint()==fingerprint,
                              "Gift refresh advanced animation, moved the actor or changed the walking fingerprint");
                    }
    select(f,second);f.text.set_flag(25,true);f.text.set_flag(17,false);
    const auto first_display=actor.appearance.displayed();
    const auto returned=f.talk.apply_gift(GiftAction::Open);
    check(returned==f.text.event_flags[0] &&
          f.actors.actor(second).behavior.direction==0 && actor.appearance.displayed()==first_display,
          "Gift command captured a previous selected actor instead of resolving the live ID");
    // If the current and actor flags are identical, the just-published bit
    // itself changes the pose; both cases use the same production operation.
    select(f,second,25);
    f.talk.apply_gift(GiftAction::Close);check(f.actors.actor(second).behavior.direction==4,"Same-flag close did not refresh down");
    f.talk.apply_gift(GiftAction::Open);check(f.actors.actor(second).behavior.direction==0,"Same-flag open did not refresh up");
}
void invalid_target_order(eb::GameVersion region) {
    for(unsigned failure=0;failure<5;++failure) {
        Fixture f(region,[](Content& c){c.npc(1,2,42,17);});const auto actor=f.add(1,0);
        f.talk.bind_event_flags();select(f,actor);
        if(failure==0)f.talk.state().interacting_actor.reset();
        if(failure==1)f.actors.erase(actor);
        if(failure==2)f.talk.detach(actor);
        if(failure==3)f.actors.release_appearance(actor);
        if(failure==4)f.talk.body(actor).npc_id=2;
        rejects([&]{f.talk.apply_gift(GiftAction::Open);},"Invalid selected gift actor fabricated a successful pose refresh");
        check(f.text.flag(1),"Invalid actor was checked before the source-ordered interaction flag write");
        rejects([&]{f.talk.apply_gift(GiftAction::Close);},"Invalid selected gift actor accepted close");
        check(!f.text.flag(1),"Failed close rolled back or omitted its earlier source flag write");
        check(f.talk.apply_gift(GiftAction::IsOpen)==0,"Failed actor refresh incorrectly disabled independent flag queries");
    }
    Fixture f(region,[](Content& c){c.npc(1,2,42,0);});const auto actor=f.add(1,0);
    f.talk.bind_event_flags();select(f,actor);const auto pose=f.actors.actor(actor).appearance.displayed();
    rejects([&]{f.talk.apply_gift(GiftAction::Open);},"Unowned actor flag0 was fabricated as false");
    check(f.text.flag(1) && f.actors.actor(actor).appearance.displayed()==pose,
          "Invalid actor flag changed pose or erased the preceding interaction flag write");
    f.talk.state().current_event_flag=0;const auto flags=f.text.event_flags;
    rejects([&]{f.talk.apply_gift(GiftAction::Open);},"Flag0 wrote outside the declared flag owner");
    check(f.text.event_flags==flags,"Unowned current flag changed the declared table");
}
}
int main() {
    try {
        for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
            shared_flags(region);flag_byte_and_live_pose(region);invalid_target_order(region);
        }
        std::cout<<"PASS native NPC gift state: "<<checks<<" checks\n";
    }catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}
}
