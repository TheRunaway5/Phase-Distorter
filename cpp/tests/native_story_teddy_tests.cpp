// CPU-free actual actor/formation/Scene ownership tests. Synthetic imported
// resources contain no authored dialogue. Bicycle completion remains external.
#include "native_interaction_test_assets.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "eb/native/story/teddy_party.hpp"

namespace {
using namespace interaction_test_assets;
struct Data {
    dialogue_substitution_test_assets::Input input;
    std::shared_ptr<const dialogue::SubstitutionResources> items;
    std::shared_ptr<const party::ItemTransformationResources> transforms;
    explicit Data(eb::GameVersion region):input(region) {
        for(unsigned item=2;item<=3;++item) {
            const auto at=input.items+item*input.item_stride+input.name_size;
            input.image[at]=4;input.image[at+6]=std::uint8_t(14+item);
            input.image[at+8]=std::uint8_t(4-item);
        }
        items=input.load();transforms=party::ItemTransformationResources::import(input.image,region);
    }
};
std::vector<std::uint8_t> formation_bytes(eb::GameVersion region) {
    std::vector<std::uint8_t> bytes(0x160000);
    const auto actors=region==eb::GameVersion::JP?0x3dffc:0x3e012;
    for(unsigned i=0;i<17;++i)put(bytes,actors+i*8+6,i<4?24+i:28);
    const auto enemies=region==eb::GameVersion::JP?0x15a440:0x159589;
    put(bytes,enemies+(region==eb::GameVersion::JP?16:33),777);
    return bytes;
}
struct TeddyFixture:Fixture {
    Data items;
    party::ItemTransformationState timers;
    party::Inventory inventory;
    WorldPartyData data;
    WorldPartyState formation_state;
    WorldParty updater;
    party::MovementPolicyState movement{1,0x1234,0xabcd};
    PreparedActorState prepared;
    PartyTrail trail;
    std::uint16_t area_style{};
    ActorCreationData collision_data;
    story::PartyFormation formation;
    story::TeddyParty teddy;
    ActorId chosen{};
    TeddyFixture(eb::GameVersion region,bool bind=true)
      :Fixture(region,[](Content& c){c.first_text={0x1d,0x0e,0xff,2,2};}),items(region),
       inventory(party,items.items,items.transforms,timers,random),data(formation_bytes(region),region),
       updater(party,actors,data,formation_state),
       formation(updater,party,actors,data,formation_state,movement,talk,clock),
       teddy(party,actors,data,formation_state,updater,prepared,trail,area_style,formation,
             items.items,talk,*sprites,collision_data) {
        party.party_count=party.controlled_count=1;
        party.party_order={1};party.display_order={1};party.controlled_order={0};
        WorldActorSpec spec;spec.sprite=0;spec.action.variables[1]=0;
        chosen=*actors.create_authored(spec,{24,25});
        actors.actor(chosen).appearance.select_eight(0,0);
        talk.attach(chosen,24,metadata,0xffff);talk.state().leader=chosen;
        formation_state.roles[0]=24;formation_state.current_leader_role=24;formation_state.trail_cursors[0]=0;
        trail.points[255]={100,132,7,0,6,0x1234};
        prepared.direction=6;prepared.variables[3]=0x55;
        collision_data.collision_profiles.fill(1);
        start();scene->bind_inventory(inventory);scene->bind_interactions(talk);
        scene->bind_party_formation(formation);if(bind)scene->bind_teddy_party(teddy);
        window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
    }
    ~TeddyFixture(){scene.reset();}
    std::unique_ptr<story::TeddyParty::Operation> refresh() {
        auto operation=teddy.begin();
        for(unsigned i=0;i<100;++i) {
            const auto p=operation->advance(1);
            if(p==dialogue::Progress::Finished)return operation;
            check(p==dialogue::Progress::BudgetExhausted,"Non-bicycle Teddy escaped to an unowned service");
        }
        throw std::runtime_error("Teddy failed to finish bounded synchronous lifecycle");
    }
};
void insertion_and_removal(eb::GameVersion region) {
    for(bool fallback:{false,true}) {
        TeddyFixture f(region);
        std::optional<ActorId> occupied;
        if(fallback) {WorldActorSpec spec;spec.sprite=0;occupied=f.actors.create_authored(spec,{28,29});}
        f.party.character(1).items[0]=2;
        const auto seed=f.random;const auto ticks=f.actors.ticks();const auto frames=f.scene->completed_frames();
        const auto timers=f.timers;const auto trail=f.trail;
        auto operation=f.teddy.begin();
        check(operation->advance(0)==dialogue::Progress::BudgetExhausted&&f.party.party_count==1,
              "Zero Teddy budget inserted membership");
        check(operation->advance()==dialogue::Progress::Finished&&operation->complete(),"Actual Teddy insertion incomplete");
        const auto role=fallback?29u:28u;const auto id=f.actors.actor_for_role(role);
        check(id&&f.party.party_order==std::array<std::uint8_t,6>{1,16}&&f.party.display_order[1]==16&&
              f.formation_state.roles[1]==role&&f.party.controlled_order[1]==role-24&&
              f.party.party_count==2&&f.party.controlled_count==1,"Teddy membership/role/record owner diverged");
        auto& actor=f.actors.actor(*id);
        check(actor.action().variables[0]==15&&actor.action().variables[1]==role-24&&actor.action().variables[5]==2&&
              actor.action().variables[3]==0x55,"Creation or real formation omitted actor variables");
        check(actor.action().position[0]==((100u<<16)|0x8000)&&actor.action().position[1]==((132u<<16)|0x8000)&&
              f.formation_state.trail_cursors[role-24]==0&&f.trail==trail,"Trail cursor zero did not wrap to point255");
        check(!actor.tick_callback_enabled&&!actor.scripts_and_physics_enabled&&f.talk.body(*id).npc_id==0xffff,
              "New Teddy lacks final wrapper pause or actual interaction geometry");
        check(f.formation_state.first_guest.member==16&&f.formation_state.first_guest.hp==777&&
              f.talk.state().leader==f.chosen,"Teddy did not publish guest HP/actual chosen leader");
        check(f.movement==party::MovementPolicyState{0,0x1234,0xabcd}&&
              f.windows.palette()==assets(region).input.import()->palette(f.clock.flavor,false,false),
              "Teddy skipped actual movement/palette tail");
        check(f.random==seed&&f.timers==timers&&f.actors.ticks()==ticks&&f.scene->completed_frames()==frames,
              "Synchronous Teddy lifecycle invented RNG, timers, actor ticks or frames");
        check(operation->advance(0)==dialogue::Progress::Finished,"Completed Teddy replayed lifecycle");
        operation.reset();
        f.party.character(1).items[0]=0;f.refresh();
        check(!f.actors.actor_for_role(role)&&f.party.party_count==1&&f.party.party_order==std::array<std::uint8_t,6>{1}&&
              f.party.display_order==std::array<std::uint8_t,6>{1},"Teddy removal retained real actor or membership");
        rejects([&]{f.talk.body(*id);},"Deleted Teddy kept interaction geometry");
        check(f.prepared.x==100&&f.prepared.y==132&&f.prepared.direction==0,"Removal did not publish actual actor pose");
        if(occupied)check(f.actors.actor_for_role(28)==occupied,"Fallback removal erased unrelated role28");
    }
}
void replacement_and_early_return(eb::GameVersion region) {
    TeddyFixture f(region);f.party.character(1).items[0]=2;f.refresh();
    const auto old=*f.actors.actor_for_role(28);
    f.party.character(1).items[1]=3;f.refresh();
    const auto replacement=*f.actors.actor_for_role(28);
    check(replacement!=old&&f.party.party_order[1]==17&&f.party.display_order[1]==17&&f.actors.size()==2,
          "Super plush selection did not replace the actual Teddy actor");
    rejects([&]{f.talk.body(old);},"Replacement kept old interaction geometry");
    const auto prepared=f.prepared;const auto movement=f.movement;const auto palette=f.windows.palette();
    f.actors.actor(replacement).tick_callback_enabled=true;
    f.actors.actor(replacement).scripts_and_physics_enabled=true;
    f.refresh();
    check(f.actors.actor_for_role(28)==replacement&&f.actors.actor(replacement).tick_callback_enabled&&
          f.actors.actor(replacement).scripts_and_physics_enabled&&f.movement==movement&&f.windows.palette()==palette&&
          f.prepared.x==prepared.x&&f.prepared.y==prepared.y,"Already-present source early return performed lifecycle work");
    f.party.character(1).items[1]=0;f.refresh();
    check(f.party.party_order[1]==16&&f.actors.actor_for_role(28)!=replacement,"Removing super plush failed to downgrade");
}
void lifetime_and_failure(eb::GameVersion region) {
    TeddyFixture f(region),other(region);
    check(f.teddy.bound_to(f.party,f.actors,f.formation,f.inventory),"Teddy rejected its actual borrowed owners");
    Data duplicate(region);party::ItemTransformationState duplicate_timers;
    party::Inventory duplicate_inventory(f.party,duplicate.items,duplicate.transforms,duplicate_timers,f.random);
    check(!f.teddy.bound_to(f.party,f.actors,f.formation,duplicate_inventory),
          "Teddy accepted an independent immutable item catalog");
    rejects([&]{story::TeddyParty wrong(f.party,f.actors,f.data,f.formation_state,f.updater,
        f.prepared,f.trail,f.area_style,f.formation,f.items.items,other.talk,*f.sprites,f.collision_data);},
        "Teddy accepted another world's interaction owner");
    rejects([&]{f.scene->bind_teddy_party(other.teddy);},"Scene accepted another world's Teddy owner");
    auto operation=f.teddy.begin();
    rejects([&]{f.teddy.begin();},"Teddy admitted concurrent operations");
    rejects([&]{operation->respond_bicycle_dismount();},"Teddy accepted unsolicited dismount response");
    operation.reset();rejects([&]{f.teddy.begin();},"Abandoned Teddy owner remained reusable");
    TeddyFixture full(region);full.party.character(1).items[0]=2;
    for(unsigned role:{28u,29u}){WorldActorSpec spec;spec.sprite=0;full.actors.create_authored(spec,{role,role+1});}
    auto failed=full.teddy.begin();rejects([&]{failed->advance();},"Teddy searched beyond its two authored role candidates");
    check(full.party.party_order[1]==16&&full.party.party_count==1&&full.actors.size()==3,
          "Failed creation rolled back source membership or invented a third role");
    rejects([&]{failed->advance();},"Failed Teddy lifecycle retried partial mutation");
}
void both_guests_and_leader_removal(eb::GameVersion region) {
    TeddyFixture f(region);f.party.character(1).items[0]=2;f.refresh();
    const auto first=*f.actors.actor_for_role(28);
    WorldActorSpec spec;spec.sprite=0;spec.action.variables[0]=16;spec.action.variables[1]=5;
    const auto second=*f.actors.create_authored(spec,{29,30});f.talk.attach(second,29,f.metadata,0xffff);
    f.party.party_count=3;f.party.party_order[2]=17;f.party.display_order[2]=17;
    f.party.controlled_order[2]=5;f.formation_state.roles[2]=29;f.formation_state.trail_cursors[5]=40;
    const auto before=f.party.display_order;
    f.refresh();
    check(f.party.party_count==3&&f.actors.actor_for_role(28)==first&&f.actors.actor_for_role(29)==second&&
          f.party.display_order==before,"Already-present selection incorrectly removed the other Teddy");
    f.party.character(1).items[0]=0;f.refresh();
    check(f.party.party_count==1&&f.actors.size()==1&&!f.actors.actor_for_role(28)&&!f.actors.actor_for_role(29),
          "No eligible inventory failed to remove both actual guest actors");
    rejects([&]{f.talk.body(first);},"First removed Teddy retained geometry");
    rejects([&]{f.talk.body(second);},"Second removed Teddy retained geometry");
    TeddyFixture leader(region);leader.party.character(1).items[0]=2;leader.refresh();
    const auto guest=*leader.actors.actor_for_role(28);
    leader.party.character(1).items[0]=0;leader.party.display_order={16,1};
    leader.party.controlled_order={4,0};leader.formation_state.roles={28,24};leader.formation_state.current_leader_role=28;
    leader.formation_state.trail_cursors[4]=255;leader.formation_state.trail_cursors[0]=7;
    leader.talk.state().leader=guest;leader.refresh();
    check(leader.formation_state.trail_cursors[0]==255&&leader.talk.state().leader==leader.chosen&&
          leader.party.display_order[0]==1,"Removing formation leader lost its actual VAR1-selected trail distance");
}
void formation_tail_lifetime(eb::GameVersion region) {
    TeddyFixture f(region);
    rejects([&]{f.formation.begin_tail(WorldPartyService::RefreshMovementPolicy);},
            "Formation tail accepted an idle updater");
    auto update=f.updater.begin_update();
    check(!update->advance()&&update->service()==WorldPartyService::RefreshMovementPolicy,
          "Actual updater did not yield movement before palette");
    auto tail=f.formation.begin_tail(*update->service());
    rejects([&]{f.formation.begin_tail(*update->service());},"Formation admitted concurrent tails");
    rejects([&]{f.formation.begin();},"Formation admitted a full update during its tail");
    rejects([&]{tail->respond_bicycle_dismount();},"Non-suspended tail accepted a dismount response");
    check(tail->advance()==dialogue::Progress::Finished,"Actual non-bicycle movement tail remained pending");
    f.movement.mushroomized=0xeeee;
    check(tail->advance()==dialogue::Progress::Finished&&f.movement.mushroomized==0xeeee,
          "Completed formation tail replayed its state writes");
    tail.reset();update->respond();
    check(!update->advance()&&update->service()==WorldPartyService::RefreshWindowPalette,
          "Updater omitted its post-movement palette service");
    tail=f.formation.begin_tail(*update->service());tail.reset();
    rejects([&]{f.formation.begin_tail(*update->service());},"Abandoned partial tail left coordinator reusable");
}
void scene_receipt(eb::GameVersion region) {
    for(bool bound:{false,true}) {
        TeddyFixture f(region,bound);f.text.window().active={0xaaaa,0xbbbb,0xcccc};
        dialogue::Conversation text(f.program,f.prompts);text.start(*f.program->resolve(Content::key(1)));
        auto operation=f.scene->begin(text);const auto result=operation->advance();
        if(!bound) {
            check(result==dialogue::Progress::Suspended&&operation->service()==story::SceneService::TeddyRefresh&&
                  f.party.character(1).items[0]==2&&f.party.party_count==1&&f.text.window().active.working==0xaaaa,
                  "Unbound Scene fabricated Teddy lifecycle completion");continue;
        }
        if(result!=dialogue::Progress::Finished||f.party.party_count!=2||f.text.window().active.working!=1||
           f.text.window().active.argument!=1||f.text.window().active.secondary!=0xcccc)
            std::cerr<<"Receipt diagnostic: progress="<<unsigned(result)<<" service="
                     <<(operation->service()?int(*operation->service()):-1)<<" count="<<unsigned(f.party.party_count)
                     <<" working="<<f.text.window().active.working<<" argument="<<f.text.window().active.argument
                     <<" secondary="<<f.text.window().active.secondary<<'\n';
        check(result==dialogue::Progress::Finished&&f.party.party_count==2&&f.party.character(1).items[0]==2&&
              f.text.window().active.working==1&&f.text.window().active.argument==1&&
              f.text.window().active.secondary==0xcccc,"Scene receipt did not complete actual Teddy before publishing item result");
        check(f.scene->completed_frames()==0&&f.actors.ticks()==0,"Synchronous Scene receipt invented a frame");
        const auto id=*f.actors.actor_for_role(28);
        check(!f.actors.actor(id).tick_callback_enabled&&!f.actors.actor(id).scripts_and_physics_enabled,
              "Bare dialogue receipt prematurely resumed the new party actor");
    }
}
void bicycle_frontier(eb::GameVersion region) {
    TeddyFixture f(region);f.talk.state().walking_style=3;
    f.party.character(1).afflictions[1]=1;
    dialogue::Conversation text(f.program,f.prompts);text.start(*f.program->resolve(Content::key(1)));
    auto operation=f.scene->begin(text);const auto palette=f.windows.palette();
    const auto progress=operation->advance();
    if(progress!=dialogue::Progress::Suspended||operation->service()!=story::SceneService::BicycleDismount)
        std::cerr<<"Bicycle diagnostic: progress="<<unsigned(progress)<<" service="
                 <<(operation->service()?int(*operation->service()):-1)<<" style="<<f.talk.state().walking_style
                 <<" count="<<unsigned(f.party.party_count)<<'\n';
    check(progress==dialogue::Progress::Suspended&&operation->service()==story::SceneService::BicycleDismount,
          "Teddy receipt acknowledged missing actual dismount lifecycle");
    const auto actor=*f.actors.actor_for_role(28);
    check(f.party.character(1).items[0]==2&&f.actors.actor(actor).tick_callback_enabled&&
          f.actors.actor(actor).scripts_and_physics_enabled&&f.talk.body(actor).npc_id==0xffff,
          "Pre-dismount Teddy lacks metadata or received wrapper pause flags too early");
    f.movement.mushroomized=0xabcd;
    for(unsigned i=0;i<5;++i)check(operation->advance(i)==dialogue::Progress::Suspended&&
        f.actors.actor_for_role(28)==actor&&f.movement.mushroomized==0xabcd&&f.windows.palette()==palette&&
        f.scene->completed_frames()==0,"Pending Teddy dismount replayed lifecycle or advanced palette/frame work");
    rejects([&]{operation->respond_teddy_refresh();},"Teddy dismount accepted generic receipt acknowledgment");
    rejects([&]{operation->complete_frame({0,0});},"Teddy dismount accepted invented frame completion");
    operation.reset();rejects([&]{f.teddy.begin();},"Abandoned Scene left partial Teddy lifecycle reusable");
}
} // namespace
int main() {
    try {
        for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
            insertion_and_removal(region);replacement_and_early_return(region);
            lifetime_and_failure(region);both_guests_and_leader_removal(region);formation_tail_lifetime(region);
            scene_receipt(region);bicycle_frontier(region);
        }
        std::cout<<"Native story Teddy lifecycle: "<<checks<<" checks passed\n";
    } catch(const std::exception& error) {std::cerr<<error.what()<<'\n';return 1;}
}
