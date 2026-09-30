// CPU-free Scene/Conversation integration with the actual mutable native owners.
// Teddy formation and failed-receipt photo scanning remain explicitly prepared
// external callback boundaries here; this unit does not implement those owners.
#include "native_interaction_test_assets.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "eb/native/party/inventory.hpp"

namespace {
using namespace interaction_test_assets;
struct ItemData {
    dialogue_substitution_test_assets::Input input;
    std::shared_ptr<const dialogue::SubstitutionResources> items;
    std::shared_ptr<const party::ItemTransformationResources> transforms;
    explicit ItemData(eb::GameVersion version):input(version) {
        input.image[input.items+4*input.item_stride+input.name_size]=4; // Synthetic Teddy classification.
        items=input.load();transforms=party::ItemTransformationResources::import(input.image,version);
    }
};
struct GiftFixture:Fixture {
    ItemData data;
    party::ItemTransformationState timers;
    party::Inventory inventory;
    ActorId box{};
    GiftFixture(eb::GameVersion region,std::vector<std::uint8_t> code,bool bind_items=true,bool bind_gift=true)
        :Fixture(region,[&](Content& c){c.first_text=std::move(code);c.npc(1,2,7,17);}),
         data(region),inventory(party,data.items,data.transforms,timers,random) {
        leader();box=add(1,0);talk.state().interacting_actor=box;
        talk.state().interacting_npc=1;talk.state().current_event_flag=17;
        start();window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
        if(bind_items)scene->bind_inventory(inventory);
        if(bind_gift)scene->bind_interactions(talk);
    }
    ~GiftFixture(){scene.reset();}
    struct Run {
        std::unique_ptr<dialogue::Conversation> text;
        std::unique_ptr<story::Scene::Operation> scene;
    };
    Run begin() {
        auto text=std::make_unique<dialogue::Conversation>(program,prompts);
        text->start(*program->resolve(Content::key(1)));
        auto operation=scene->begin(*text);return {std::move(text),std::move(operation)};
    }
};
dialogue::Progress reach(story::Scene::Operation& operation) {
    for(unsigned i=0;i<10000;++i) {
        const auto p=operation.advance(i&1?1:7);
        if(p!=dialogue::Progress::BudgetExhausted)return p;
    }
    throw std::runtime_error("Gift scene did not reach a bounded command boundary");
}
void receipt_and_scan(eb::GameVersion version) {
    for(bool last:{false,true}) {
        GiftFixture f(version,{0x1d,0x0e,0,0,2});
        auto& items=f.party.character(1).items;
        if(last){items.fill(9);items[13]=0;}else{items[0]=9;items[2]=8;}
        f.text.window().active={0xffff0001,0xabcd0007,0x1234};
        auto before=items;const auto seed=f.random;const auto frame=f.scene->frame();auto run=f.begin();
        check(run.scene->advance(0)==dialogue::Progress::BudgetExhausted && items==before,
              "Zero Scene budget performed inventory receipt");
        check(reach(*run.scene)==dialogue::Progress::Finished && run.text->advance(0)==dialogue::Progress::Finished,
              "Ordinary receipt escaped as an unowned service");
        before[last?13:1]=7;
        check(items==before && f.text.window().active.working==1 &&
              f.text.window().active.argument==(last?14u:3u) && f.text.window().active.secondary==0x1234,
              "Scene lost low-word operands, recipient, or post-receipt first-empty index");
        check(f.scene->completed_frames()==0 && f.actors.ticks()==0 && f.random==seed && f.scene->frame()==frame,
              "Synchronous item command invented a tick, random draw or frame");
    }
    GiftFixture f(version,{0x1d,3,0xff,2});f.party.controlled_count=2;
    f.party.party_order[0]=2;f.party.party_order[1]=1;f.party.character(2).items.fill(9);
    f.text.window().active.argument=0x12345678;auto run=f.begin();
    check(reach(*run.scene)==dialogue::Progress::Finished && f.text.window().active.working==1 &&
          f.text.window().active.argument==0x12345678 && f.party.character(1).items[0]==0,
          "FindSpace did not scan live party order without inserting an item");
}
void money(eb::GameVersion version) {
    struct Case{std::uint32_t before,amount,after;};
    for(const auto c:{Case{99990,20,99999},Case{0xffffffff,2,1},Case{0x7fffffff,1,0x80000000},
                      Case{0x80000010,0xfffffff0,0x80000000}}) {
        GiftFixture f(version,{0x1d,8,0,0,2});f.party.money_carried=c.before;
        f.text.window().active={0x4444,c.amount,0x5555};auto run=f.begin();
        check(reach(*run.scene)==dialogue::Progress::Finished && f.party.money_carried==c.after &&
              f.text.window().active.working==c.after && f.text.window().active.argument==c.amount &&
              f.text.window().active.secondary==0x5555,
              "Scene wallet response lost full unsigned argument or signed wrapped comparison");
    }
}
void gifts(eb::GameVersion version) {
    for(bool closing:{false,true}) {
        GiftFixture f(version,{0x1f,std::uint8_t(closing?0xa1:0xa0),0x1f,0xa2,2});
        f.text.set_flag(17,closing);f.text.window().active={0x11112222,0x33334444,0x5555};
        auto& actor=f.actors.actor(f.box);actor.action().animation=2;actor.behavior.surface_flags=8;
        actor.action().velocity={1,2,3};const auto position=actor.action().position;
        auto run=f.begin();
        check(reach(*run.scene)==dialogue::Progress::Finished && f.text.flag(17)==!closing &&
              f.text.window().active.working==unsigned(!closing) &&
              f.text.window().active.argument==0x33334444 && f.text.window().active.secondary==0x5555,
              "Scene did not execute gift flag command and A2 working publication");
        check(actor.behavior.direction==(closing?4:0) && actor.appearance.displayed()->pose==(closing?5:1) &&
              actor.appearance.displayed()->surface==SpriteSurface::Shallow && actor.action().animation==2 &&
              actor.action().velocity==std::array<std::uint32_t,3>{1,2,3} && actor.action().position==position &&
              f.scene->completed_frames()==0,
              "Gift dialogue bypassed actual live actor refresh or advanced motion/time");
    }
}
void teddy_callback(eb::GameVersion version) {
    GiftFixture f(version,{0x1d,0x0e,0xff,4,2});
    f.window({dialogue::WindowAction::Open,dialogue::WindowId{2},{},0});
    f.text.windows.at({2}).active={0xcccc,0xdddd,0xeeee};
    f.window({dialogue::WindowAction::Focus,dialogue::WindowId{1},{},0});
    f.text.window().active={0xaaaa,0xbbbb,0x1234};
    const auto original=f.text.window().active;f.party.character(2).items={5,6,7,8};
    auto run=f.begin();
    check(reach(*run.scene)==dialogue::Progress::Suspended &&
          run.scene->service()==story::SceneService::TeddyRefresh && f.party.character(1).items[0]==4 &&
          f.text.windows.at({1}).active==original,
          "Teddy boundary omitted prior insertion or prematurely published its return");
    const auto frame=f.scene->frame();const auto seed=f.random;
    for(unsigned i=0;i<4;++i)check(run.scene->advance(i)==dialogue::Progress::Suspended &&
                                  f.party.character(1).items[1]==0 && f.text.windows.at({1}).active==original &&
                                  f.scene->frame()==frame && f.random==seed,
                                  "Pending Teddy callback was auto-acknowledged or executed twice");
    rejects([&]{run.scene->respond_item_failure_scan(0);},"Teddy callback accepted a failed-receipt reply");
    rejects([&]{run.scene->complete_frame({0,0});},"Teddy callback accepted an invented frame completion");
    rejects([&]{f.scene->bind_inventory(f.inventory);},"Active Scene allowed service rebinding");
    // An explicitly prepared formation callback, not a native UPDATE_PARTY
    // implementation: its live party-order and focus changes must survive the
    // continuation. The original helper returns the current ordinal's ID.
    f.party.party_order[0]=2;f.text.focus=dialogue::WindowId{2};
    f.windows.prompt_state().pressed=0x8080;
    run.scene->respond_teddy_refresh();
    check(reach(*run.scene)==dialogue::Progress::Finished && f.party.character(1).items[0]==4 &&
          f.party.character(2).items[4]==0 && f.text.windows.at({2}).active.working==2 &&
          f.text.windows.at({2}).active.argument==4 && f.text.windows.at({2}).active.secondary==0xeeee &&
          f.text.windows.at({1}).active==original && f.windows.prompt_state().pressed==0x8080,
          "Teddy return captured recipient/focus early or lost the callback's live input");
    rejects([&]{run.scene->respond_teddy_refresh();},"Completed receipt accepted a repeated Teddy reply");
}
void external_boundaries(eb::GameVersion version) {
    for(bool gift:{false,true}) {
        GiftFixture f(version,gift?std::vector<std::uint8_t>{0x1f,0xa0,2}:
                                  std::vector<std::uint8_t>{0x1d,0x0e,1,7,2},false,false);
        auto run=f.begin();const auto flags=f.text.event_flags;const auto items=f.party.character(1).items;
        check(reach(*run.scene)==dialogue::Progress::Suspended && run.scene->service()==story::SceneService::Dialogue,
              "Unbound native gift/item service was silently completed");
        const auto& request=std::get<dialogue::Request>(*run.scene->dialogue_event());
        check(request.kind==(gift?dialogue::RequestKind::NpcGift:dialogue::RequestKind::ItemCommand) &&
              f.text.event_flags==flags && f.party.character(1).items==items,
              "Unbound service lost its typed request or mutated authoritative owners");
        check(run.scene->advance(0)==dialogue::Progress::Suspended && f.scene->completed_frames()==0,
              "Unbound service advanced through a zero-budget poll");
    }
    for(bool fail_receipt:{false,true}) {
        GiftFixture f(version,{0x1d,0x0e,1,std::uint8_t(fail_receipt?7:4),2});
        if(fail_receipt)f.party.character(1).items.fill(9);
        f.text.window().active={0x1111,0x2222,0x3333};auto run=f.begin();
        check(reach(*run.scene)==dialogue::Progress::Suspended &&
              run.scene->service()==(fail_receipt?story::SceneService::ItemFailureScan:story::SceneService::TeddyRefresh),
              "Receipt omitted its actual unowned service boundary");
        const auto frame=f.scene->frame();run.scene.reset();
        rejects([&]{f.scene->begin(story::TickKind::Window);},"Abandoned item callback left Scene execution usable");
        if(!fail_receipt)rejects([&]{f.inventory.begin_give(1,7);},"Abandoned pending Teddy did not poison its receipt owner");
        check(f.scene->frame()==frame,"Abandonment blocked immutable frame sampling");
    }
}
void failed_receipt_reply(eb::GameVersion version) {
    GiftFixture f(version,{0x1d,0x0e,1,7,2});f.party.character(1).items.fill(9);
    f.text.window().active={0x1111,0x2222,0x3333};const auto before=f.text.window().active;auto run=f.begin();
    check(reach(*run.scene)==dialogue::Progress::Suspended && run.scene->service()==story::SceneService::ItemFailureScan &&
          f.text.window().active==before,"Failed receipt invented character0 inventory or a scan result");
    rejects([&]{run.scene->respond_item_failure_scan(15);},"Photo-alias scan accepted a result beyond14");
    rejects([&]{run.scene->respond_teddy_refresh();},"Photo-alias scan accepted a Teddy reply");
    check(run.scene->service()==story::SceneService::ItemFailureScan && f.text.window().active==before,
          "Rejected alias result acknowledged or published the suspended command");
    // Prepared bytes belonging to the external photo owner, not character0.
    std::array<std::uint8_t,14> photo_alias{7,8,9,0,6};
    const auto first=std::uint16_t(std::find(photo_alias.begin(),photo_alias.end(),0)-photo_alias.begin());
    run.scene->respond_item_failure_scan(first);
    check(reach(*run.scene)==dialogue::Progress::Finished && f.text.window().active.working==0 &&
          f.text.window().active.argument==3 && f.text.window().active.secondary==0x3333 &&
          std::all_of(f.party.character(1).items.begin(),f.party.character(1).items.end(),[](auto x){return x==9;}),
          "Failure alias reply lost source working/argument order or changed the full inventory");
}
void bindings(eb::GameVersion version) {
    GiftFixture f(version,{2}),other(version,{2});
    rejects([&]{f.scene->bind_inventory(other.inventory);},"Scene accepted another authoritative party");
    rejects([&]{f.scene->bind_interactions(other.talk);},"Scene accepted another window/actor world");
    party::ItemTransformationState state;
    party::Inventory duplicate(f.party,f.data.items,f.data.transforms,state,f.random);
    rejects([&]{f.scene->bind_inventory(duplicate);},"Scene rebound the same party to a different transaction owner");
    f.scene->bind_inventory(f.inventory);f.scene->bind_interactions(f.talk);
    check(f.actors.scene().event_flags.data()==f.text.event_flags.data(),"Scene did not bind actual shared event flags");
    GiftFixture unbound(version,{2},false);
    story::RandomState independent_random=unbound.random;
    party::ItemTransformationState independent_timers;
    party::Inventory split_random(unbound.party,unbound.data.items,unbound.data.transforms,
                                  independent_timers,independent_random);
    check(split_random.bound_to(unbound.party) && !split_random.bound_to(unbound.party,unbound.random),
          "Inventory confused equal random values with shared random ownership");
    rejects([&]{unbound.scene->bind_inventory(split_random);},"Scene accepted an independent item random sequence");
    unbound.scene->bind_inventory(unbound.inventory);
    GiftFixture by_caller(version,{2},false,false);
    by_caller.text.event_flags.resize(8192);
    story::InteractionCalls calls(by_caller.program,by_caller.talk,by_caller.prompts,*by_caller.scene,[]{return false;});
    check(by_caller.actors.scene().event_flags.data()==by_caller.text.event_flags.data() &&
          by_caller.actors.scene().event_flags.size()==8192,"Caller bound flags before their final allocation");
}
}
int main() {
    try {
        for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
            receipt_and_scan(region);money(region);gifts(region);teddy_callback(region);
            external_boundaries(region);failed_receipt_reply(region);bindings(region);
        }
        std::cout<<"PASS native story gifts: "<<checks<<" checks\n";
    }catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}
}
