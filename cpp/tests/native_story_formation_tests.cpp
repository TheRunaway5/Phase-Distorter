// Actual native formation, actors, windows and Scene; synthetic imported data.
// Bicycle callback cases deliberately stop at the real unported lifecycle.
#include "native_interaction_test_assets.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "eb/native/story/party_formation.hpp"
#include "eb/native/party/dialogue_values.hpp"

namespace {
using namespace interaction_test_assets;
std::vector<std::uint8_t> formation_content(eb::GameVersion region) {
    std::vector<std::uint8_t> bytes(0x160000);
    const auto actors = region == eb::GameVersion::JP ? 0x3dffc : 0x3e012;
    for (unsigned i=0;i<17;++i) {
        put(bytes,actors+i*8,1); put(bytes,actors+i*8+2,1);
        put(bytes,actors+i*8+6,i<4?24+i:28);
    }
    return bytes;
}
struct FormationFixture : Fixture {
    dialogue_substitution_test_assets::Input strings;
    WorldPartyData data;
    WorldPartyState formation_state;
    party::MovementPolicyState movement{0xaaaa,0,0xbbbb};
    WorldParty updater;
    story::PartyFormation formation;
    FormationFixture(eb::GameVersion region,std::vector<std::uint8_t> code={0x1c,0x11,2},bool bind=true)
        : Fixture(region,[&](Content &c){c.first_text=std::move(code);}), strings(region),
          data(formation_content(region),region),updater(party,actors,data,formation_state),
          formation(updater,party,actors,data,formation_state,movement,talk,clock) {
        party.party_count=party.controlled_count=3;
        party.party_order={1,2,3}; party.display_order={3,1,2}; party.controlled_order={2,0,1};
        formation_state.roles={26,24,25}; formation_state.trail_cursors={10,20,30};
        for (unsigned i=0;i<3;++i) {
            WorldActorSpec spec; spec.sprite=0; spec.action.variables[1]=i;
            const auto id=actors.create_authored(spec,{24+i,25+i});
            check(id.has_value(),"Formation fixture failed to create a real party role");
            actors.actor(*id).appearance.select_eight(0,0);
            talk.attach(*id,i,metadata,0x8000);
            auto name=party.name_field(i+1); name[0]=std::uint8_t(0x61+i); name[1]=0x64; name[2]=0;
        }
        party.character(1).afflictions[0]=1;
        party.character(3).afflictions[0]=2;
        party.character(2).afflictions[1]=1;
        talk.state().leader=*actors.actor_for_role(26);
        windows.substitutions().configure(strings.load(),party::dialogue_values(party));
        start(); scene->bind_interactions(talk);
        if(bind) scene->bind_party_formation(formation);
        window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
        clock.last_controlled_status=0x1234;
    }
    ~FormationFixture() { scene.reset(); }
};
void native_update(eb::GameVersion region) {
    for (bool disabled:{false,true}) {
        FormationFixture f(region), expected(region);
        f.clock.disabled_transitions=disabled?0x8000:0;
        f.clock.flavor=2;
        expected.windows.publish_palette(2,true,disabled);
        const auto frames=f.scene->completed_frames(); const auto random=f.random;
        const auto actor_ticks=f.actors.ticks(); const auto before=f.party.display_order;
        auto op=f.formation.begin();
        check(op->advance(0)==dialogue::Progress::BudgetExhausted && f.party.display_order==before,
              "Zero formation budget sorted the party");
        check(op->advance(1)==dialogue::Progress::BudgetExhausted &&
              f.party.display_order==std::array<std::uint8_t,6>{2,1,3} &&
              f.party.controlled_order==std::array<std::uint8_t,6>{1,0,2},
              "Real WorldParty sort did not precede movement policy");
        check(f.talk.state().leader==*f.actors.actor_for_role(25) &&
              f.movement==party::MovementPolicyState{1,0x708,0},
              "Formation failed to publish actual leader or mapped mushroom policy");
        check(op->advance()==dialogue::Progress::Finished && op->complete(),
              "Non-bicycle formation left an invented service");
        check(f.windows.palette()==expected.windows.palette() && f.windows.palette()[0]==0 &&
              f.clock.last_controlled_status==0x1234,
              "Formation skipped disabled-transition palette publication or changed tick cache");
        check(f.scene->completed_frames()==frames && f.actors.ticks()==actor_ticks && f.random==random,
              "Synchronous formation invented frame, actor work or random consumption");
        for (unsigned i=0;i<3;++i)
            check(f.actors.actor(*f.actors.actor_for_role(f.formation_state.roles[i])).action().variables[5]==i*2,
                  "Formation spacing did not reach the actual actors");
    }
}
void lifetime(eb::GameVersion region) {
    FormationFixture f(region), other(region);
    rejects([&]{f.scene->bind_party_formation(other.formation);},"Scene accepted another formation world");
    story::TickState alternate_clock=f.clock;
    story::PartyFormation alternate(f.updater,f.party,f.actors,f.data,f.formation_state,f.movement,f.talk,alternate_clock);
    rejects([&]{f.scene->bind_party_formation(alternate);},"Scene accepted an independent formation clock");
    WorldPartyState different_state=f.formation_state;
    rejects([&]{story::PartyFormation wrong(f.updater,f.party,f.actors,f.data,different_state,f.movement,f.talk,f.clock);},
            "Formation accepted a copied formation mapping");
    auto op=f.formation.begin();
    rejects([&]{f.formation.begin();},"Formation admitted two simultaneous updates");
    rejects([&]{op->respond_bicycle_dismount();},"Formation accepted an unsolicited dismount reply");
    op.reset();
    rejects([&]{f.formation.begin();},"Abandoned formation remained usable");
}
void bicycle_frontier(eb::GameVersion region) {
    FormationFixture f(region);
    f.talk.state().walking_style=3;
    const auto palette=f.windows.palette(); const auto frames=f.scene->completed_frames();
    auto op=f.formation.begin();
    check(op->advance()==dialogue::Progress::Suspended &&
          op->service()==story::PartyFormationService::BicycleDismount &&
          f.movement==party::MovementPolicyState{1,0x708,0},
          "Formation omitted the real bicycle lifecycle frontier");
    f.movement.timer=0; f.movement.modifier=0xabcd;
    for(unsigned i=0;i<5;++i)
        check(op->advance(i)==dialogue::Progress::Suspended && f.movement.timer==0 &&
              f.movement.modifier==0xabcd && f.windows.palette()==palette &&
              f.scene->completed_frames()==frames,
              "Pending dismount replayed movement policy or advanced to palette/frame work");
    // Explicit prepared callback: actual dismount is not implemented by this
    // test. Verify only live post-callback palette sampling and no re-sort.
    f.talk.state().walking_style=0;
    f.party.character(3).afflictions[0]=0; f.clock.flavor=3; f.clock.disabled_transitions=1;
    FormationFixture expected(region);expected.windows.publish_palette(3,false,true);
    const auto order=f.party.display_order;
    op->respond_bicycle_dismount();
    check(op->advance()==dialogue::Progress::Finished && f.party.display_order==order &&
          f.windows.palette()==expected.windows.palette() && f.movement.modifier==0xabcd,
          "Formation resumed with stale palette inputs or replayed its pre-callback state");
}
void complete_dialogue(FormationFixture &f) {
    dialogue::Conversation text(f.program,f.prompts);text.start(*f.program->resolve(Content::key(1)));
    auto operation=f.scene->begin(text);
    for(unsigned i=0;i<20000;++i) {
        const auto result=operation->advance(7);
        if(result==dialogue::Progress::Finished) return;
        if(result==dialogue::Progress::Suspended) {
            check(operation->service()==story::SceneService::Frame,"Formation dialogue left unexpected service");
            operation->complete_frame({0,0});
        }
    }
    throw std::runtime_error("Formation dialogue failed to complete");
}
void japanese_scene() {
    for(bool plural:{false,true}) {
        FormationFixture actual(eb::GameVersion::JP);
        if(plural)actual.party.character(3).afflictions[0]=0;
        FormationFixture expected(eb::GameVersion::JP,plural?std::vector<std::uint8_t>{0x62,0x64,0x66,0x76,2}:
                                                              std::vector<std::uint8_t>{0x62,0x64,2});
        expected.party.character(3).afflictions[0]=plural?0:2;
        actual.text.window().active=expected.text.window().active={0x12345678,0x87654321,0xabcd};
        auto setup=expected.formation.begin();check(setup->advance()==dialogue::Progress::Finished,"Expected layout setup failed");
        complete_dialogue(actual);complete_dialogue(expected);
        const auto a=actual.output.frame({1}),b=expected.output.frame({1});
        check(a->pixels==b->pixels && a->priority==b->priority &&
              actual.output.window({1}).cursor==expected.output.window({1}).cursor,
              "JP formation name/suffix did not print through ordinary native glyph output");
        check(actual.text.window().active==expected.text.window().active &&
              actual.text.window().active.working==0x12345678 && actual.text.window().active.argument==0x87654321,
              "Internal formation queries published a dialogue register");
    }
    FormationFixture unbound(eb::GameVersion::JP,{0x1c,0x11,2},false);
    dialogue::Conversation text(unbound.program,unbound.prompts);text.start(*unbound.program->resolve(Content::key(1)));
    auto operation=unbound.scene->begin(text);const auto order=unbound.party.display_order;
    check(operation->advance()==dialogue::Progress::Suspended && operation->service()==story::SceneService::Dialogue &&
          std::get<dialogue::Request>(*operation->dialogue_event()).kind==dialogue::RequestKind::RefreshParty &&
          unbound.party.display_order==order,"Unbound Scene fabricated a successful formation refresh");
}
void scene_bicycle_frontier() {
    FormationFixture f(eb::GameVersion::JP);
    f.talk.state().walking_style=3;
    dialogue::Conversation text(f.program,f.prompts);text.start(*f.program->resolve(Content::key(1)));
    auto operation=f.scene->begin(text);
    const auto cursor=f.output.window({1}).cursor;
    const auto frames=f.scene->completed_frames();
    check(operation->advance()==dialogue::Progress::Suspended &&
          operation->service()==story::SceneService::BicycleDismount &&
          f.movement==party::MovementPolicyState{1,0x708,0} && f.output.window({1}).cursor==cursor,
          "Scene skipped actual dismount or printed the name before party refresh finished");
    rejects([&]{operation->complete_frame({0,0});},"Dismount accepted an invented frame completion");
    rejects([&]{operation->respond_dialogue({});},"Dismount accepted a generic dialogue acknowledgment");
    rejects([&]{operation->respond_teddy_refresh();},"Dismount accepted an unrelated item callback");
    for(unsigned i=0;i<5;++i)
        check(operation->advance(i)==dialogue::Progress::Suspended && f.scene->completed_frames()==frames &&
              f.output.window({1}).cursor==cursor,"Pending Scene dismount made hidden progress");
    operation.reset();
    rejects([&]{f.formation.begin();},"Abandoned Scene dismount left formation reusable");
    rejects([&]{f.scene->begin(story::TickKind::Window);},"Abandoned Scene dismount left Scene reusable");
}
void unconscious_name_alias() {
    FormationFixture f(eb::GameVersion::JP);
    for(unsigned id=1;id<=3;++id)f.party.character(id).afflictions[0]=1;
    dialogue::Conversation text(f.program,f.prompts);text.start(*f.program->resolve(Content::key(1)));
    auto operation=f.scene->begin(text);
    const auto cursor=f.output.window({1}).cursor;
    bool rejected=false;
    try { operation->advance(); }
    catch(const std::exception &error) {
        rejected=std::string(error.what())=="Character name selector leaves the source party/NPC domain";
    }
    check(rejected && f.output.window({1}).cursor==cursor,
          "All-unconscious formation fabricated an empty name or selected a default member");
    check(f.talk.state().leader==*f.updater.leader(),"Name alias rejection lost the prior real formation update");
}
} // namespace
int main() {
    try {
        for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
            native_update(region); lifetime(region); bicycle_frontier(region);
        }
        japanese_scene();
        scene_bicycle_frontier();
        unconscious_name_alias();
        std::cout << "Native story formation: " << checks << " checks passed\n";
    } catch(const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
