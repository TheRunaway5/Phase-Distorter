// Semantic integration using real ActorWorld and Scene. Original-routine
// parity belongs to the separate source oracle, not this synthetic fixture.
#include "native_interaction_test_assets.hpp"

namespace {
using namespace interaction_test_assets;
void gifts_and_objects(eb::GameVersion region) {
    for(unsigned gift:{0u,1u,255u,256u,257u,65535u}) {
        Fixture f(region,[&](Content& c){c.npc(1,2,gift,0x8123);});
        f.leader();const auto actor=f.add(1,0);f.start();
        f.window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
        f.text.window().active={0xdeadbeef,0x12345678,0x9876};
        f.talk.state().current_event_flag=0x9999;
        f.actors.actor(actor).action().velocity={7,11,13};
        const auto pose=f.actors.actor(actor).appearance.displayed();
        const auto inventory=f.party.character(1).items;
        auto op=f.talk.begin(npcs::InteractionAction::Check);f.finish(*op);
        check(op->selection().reference==Content::key(1) && op->selection().text==dialogue::Location{0,0},
              "Check gift lost its imported common text");
        const auto& registers=f.text.window().active;
        check(registers.working==(gift<256?gift:0) &&
              registers.argument==(gift<256?0x12345678:gift-256) && registers.secondary==0x9876,
              "Check did not preserve item argument or zero-extend its money result");
        check(f.talk.state().current_event_flag==0x8123 && f.talk.state().interacting_actor==actor &&
              f.actors.actor(actor).action().velocity==std::array<std::uint32_t,3>{7,11,13} &&
              f.actors.actor(actor).appearance.displayed()==pose && f.party.character(1).items==inventory,
              "Check changed inventory/target motion/pose or failed to publish the gift flag");
    }
    for(unsigned type:{0u,1u,3u,4u,255u}) {
        Fixture f(region,[&](Content& c){c.npc(1,type,333,777);});f.leader();f.add(1,0);f.start();
        f.window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
        f.text.window().active={0xfedcba98,0x76543210,0xabcd};const auto before=f.text.window().active;
        f.talk.state().current_event_flag=0x2468;
        auto op=f.talk.begin(npcs::InteractionAction::Check);f.finish(*op);
        check(bool(op->selection().text)==(type==3) && f.text.window().active==before &&
              f.talk.state().current_event_flag==0x2468,
              "Non-gift Check changed registers/flag or treated a person/unknown type as an object");
    }
}
void order_and_live_focus(eb::GameVersion region) {
    Fixture f(region,[](Content& c){c.npc(1,2,42,17);c.npc(2,3);});f.leader();
    f.add(2,20);const auto gift=f.add(1,10);f.start();
    // Fill all eight source slots without standard window1. CREATE fails and
    // Check must publish through the existing focus rather than inventing1.
    for(unsigned id=2;id<10;++id) f.window({dialogue::WindowAction::Open,dialogue::WindowId{id},{},0});
    const auto focus=f.text.focus;check(focus.has_value(),"Fixture lost full-pool focus");
    f.text.window().active={111,222,333};
    f.talk.state().interacting_npc=0x4444;
    auto op=f.talk.begin(npcs::InteractionAction::Check);
    check(op->advance(0)==dialogue::Progress::BudgetExhausted && !op->effect() &&
          f.talk.state().interacting_npc==0x4444 && f.text.window().active.working==111,
          "Zero Check budget modified source selection/register state");
    f.finish(*op);
    check(f.text.focus==focus && !f.windows.slot_for({1}) && f.text.window().active.working==42 &&
          f.text.window().active.argument==222 && f.talk.state().interacting_actor==gift,
          "Failed standard-window CREATE or collision precedence changed Check's live register destination");
    // Shared lifecycle means a removed higher-precedence gift cannot survive
    // in Check while Talk's real actor owner has already removed it.
    f.actors.erase(gift);f.talk.detach(gift);
    auto object=f.talk.begin(npcs::InteractionAction::Check);f.finish(*object);
    check(f.talk.state().interacting_npc==2 && f.talk.state().current_event_flag==17 &&
          f.text.window().active.working==42,"Object Check retained an erased gift or rewrote gift state");
}
void map_order_and_wrap(eb::GameVersion region) {
    struct MapCase {std::vector<std::array<unsigned,4>> records;unsigned key;unsigned type;};
    const std::array<MapCase,5> cases{{
        {{{12,12,5,1},{13,12,5,2},{11,12,5,3}},1,5},
        {{{13,12,5,2},{11,12,5,3}},2,5},
        {{{11,12,5,3}},3,5},
        {{{12,12,6,1},{13,12,5,2}},0,6},
        {{{12,12,255,1},{13,12,5,2}},2,5}
    }};
    for(const auto& example:cases) {
        Fixture f(region,[&](Content& c){
            pointer(c.bytes,0x100000,0xf0100);put(c.bytes,0xf0100,unsigned(example.records.size()));
            unsigned at=0xf0102;
            for(const auto& r:example.records) {
                c.bytes[at]=std::uint8_t(r[1]);c.bytes[at+1]=std::uint8_t(r[0]);c.bytes[at+2]=std::uint8_t(r[2]);
                put(c.bytes,at+3,0x0200+r[3]*4);const auto key=Content::key(r[3]);
                std::copy(key.begin(),key.end(),c.bytes.begin()+0xf0200+r[3]*4);at+=5;
            }
        });f.leader();f.start();f.talk.state().current_event_flag=0x9191;
        auto op=f.talk.begin(npcs::InteractionAction::Check);f.finish(*op);
        check(op->selection().reference==(example.key?Content::key(example.key):dialogue::ReferenceKey{}) &&
              f.talk.state().map_text.door_found_type==example.type && f.talk.state().current_event_flag==0x9191,
              "Check map center/right/left or non-text blocker precedence is wrong");
        if(example.key)check(f.talk.state().interacting_npc==0xfffe &&
                            f.talk.state().map_text.unread_type==5,"Map Check did not publish source type5 target");
    }
    Fixture south(region,[](Content& c){c.doors({{12,0,5,3}});});
    const auto leader=south.leader(4);south.actors.actor(leader).action().position[1]=0xffff8000;
    south.talk.state().leader_y=0xffff;south.start();
    auto op=south.talk.begin(npcs::InteractionAction::Check);south.finish(*op);
    check(op->selection().reference==Content::key(3) && south.talk.state().leader_direction==4 &&
          south.talk.state().map_text.door_found==0x20c,
          "South Check did not wrap the pixel increment before dividing into map cells");
}
void window_and_long_continuation(eb::GameVersion region) {
    Fixture f(region,[](Content& c){c.npc(1,2,255,123);});f.leader();f.add(1,0);f.start();
    f.talk.state().current_event_flag=0xaaaa;f.talk.state().interacting_npc=0x5555;
    auto op=f.talk.begin(npcs::InteractionAction::Check);
    check(op->advance()==dialogue::Progress::Suspended &&
          op->effect()->kind==dialogue::WindowEffectKind::ClearPartyBlink &&
          f.talk.state().interacting_npc==0x5555 && f.talk.state().current_event_flag==0xaaaa,
          "Check searched or published before its real window initialization effect");
    const auto effect=*op->effect();const auto frame=f.scene->frame();
    for(unsigned i=0;i<5;++i)check(op->advance(0)==dialogue::Progress::Suspended &&
                                  *op->effect()==effect && f.scene->frame()==frame,
                                  "Pending Check effect was implicitly acknowledged");
    f.drive(effect);op->respond();f.finish(*op);
    Fixture counter(region,{},0x82);counter.leader();counter.start();
    auto long_op=counter.talk.begin(npcs::InteractionAction::Check);
    check(long_op->advance()==dialogue::Progress::Suspended,"Counter Check omitted window setup");
    counter.drive(*long_op->effect());long_op->respond();
    const auto random=counter.random;const auto frames=counter.scene->completed_frames();
    check(long_op->advance(300)==dialogue::Progress::BudgetExhausted && !long_op->effect() && !long_op->complete(),
          "Long Check counter fabricated an exhausted search result");
    const auto position=counter.talk.state().checked_surface_origin;
    check(long_op->advance(0)==dialogue::Progress::BudgetExhausted &&
          counter.talk.state().checked_surface_origin==position,"Zero counter work moved its continuation");
    check(long_op->advance(300)==dialogue::Progress::BudgetExhausted &&
          counter.talk.state().checked_surface_origin!=position && counter.random==random &&
          counter.scene->completed_frames()==frames,"Counter Check repeated state or advanced world time");
    long_op.reset();rejects([&]{counter.talk.begin(npcs::InteractionAction::Check);},
                           "Abandoned Check allowed unsafe owner reuse");
}
}
int main() {
    try {
        for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
            gifts_and_objects(region);order_and_live_focus(region);map_order_and_wrap(region);
            window_and_long_continuation(region);
        }
        std::cout<<"PASS native Check integration: "<<checks<<" checks\n";
    } catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
}
