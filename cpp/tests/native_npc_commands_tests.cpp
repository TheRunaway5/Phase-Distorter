#include "eb/native/world_sprite_fade.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include "eb/native/world_npc_commands.hpp"
#include "eb/native/dialogue/runtime.hpp"

namespace {
using namespace eb::native;
unsigned checks;
void check(bool value,const char *message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F f) {
    bool rejected=false;
    try { f(); } catch(const std::exception&) { rejected=true; }
    check(rejected,"Invalid fade ownership/domain was accepted");
}
struct Graphics : native_sprite_test::Fixture {
    Graphics() {
        bytes.resize(16384);
        layout.shapes=256;
        pointer(256,128);
        word(256-170,16);
        for(unsigned pose=0;pose<16;++pose) {
            const unsigned at=512+pose*256;
            word(41+pose*2,at | (pose&1));
            for(unsigned i=0;i<194;++i) bytes[at+i]=std::uint8_t(i*17+pose*29+3);
        }
    }
};
struct Fixture {
    Graphics graphics;
    std::shared_ptr<SpriteResources> sprites=std::make_shared<SpriteResources>(graphics.bytes,graphics.layout);
    SpriteEffectContent content{graphics.bytes,graphics.layout,sprites};
    std::shared_ptr<const ActionScriptData> scripts=std::make_shared<ActionScriptData>(
        std::vector<std::uint8_t>{6,1,9},0,std::vector<std::uint32_t>(860,0));
    ActorWorld actors;
    story::RandomState random{0x1234,0x5678};
    PreparedActorState prepared;
    battle::PsiScratch scratch;
    WorldSpriteFade fade;
    Fixture(eb::GameVersion version):actors(sprites,scripts,version),fade(content,actors,random,prepared,scratch) {
        scratch.bytes.fill(0xa5);
        prepared.x=12;prepared.y=34;prepared.height=56;prepared.direction=7;
        prepared.variables.fill(0x1234);prepared.priority=3;prepared.phase_id=29;
    }
    ActorId actor(unsigned role=4,unsigned direction=2) {
        WorldActorSpec spec;
        spec.action.animation=0;
        spec.action.priority=1;
        spec.behavior.direction=std::uint16_t(direction);
        spec.behavior.projected_x=100;spec.behavior.projected_y=100;
        const auto result=actors.create_authored(spec,{role,role+1});
        check(bool(result),"Fixture could not admit graphical actor");
        actors.actor(*result).appearance.select_four(direction,0);
        return *result;
    }
    std::uint16_t word(unsigned at) const { return scratch.bytes.at(at)|std::uint16_t(scratch.bytes.at(at+1))<<8; }
    std::shared_ptr<const eb::DirectSceneFrame> draw() {
        SpritePalettes colors{};
        for(auto &palette:colors) for(unsigned i=1;i<16;++i) palette[i]=0xff000000|i*0x111111;
        return actors.draw(256,colors,1);
    }
    auto call(WorldSpriteFadeTask task) { return fade.step(task,*fade.controller()); }
};

namespace d=eb::native::dialogue;
std::shared_ptr<const NpcCatalog> npc_catalog() {
    std::vector<std::uint8_t> bytes(0x3000);
    NpcCatalogLayout layout{0,0x1000,0x1100,0x1100,0x2000,8,799};
    for(unsigned i=0;i<8;++i) {bytes[layout.definitions+i*17]=1;bytes[layout.definitions+i*17+3]=6;}
    return std::make_shared<NpcCatalog>(bytes,layout);
}
std::shared_ptr<const d::Program> program(eb::GameVersion v,std::vector<std::uint8_t> bytes) {
    return std::make_shared<d::Program>(v,std::vector<d::ContentBlock>{{0,0,std::move(bytes)}},
                                      std::vector<d::Location>{{0,0}});
}
void parser_commands(eb::GameVersion v) {
    using K=WorldControlCommandKind;
    struct Case {std::vector<std::uint8_t> code;WorldControlCommand expected;};
    const std::array<Case,12> cases{{
        {{0x1f,0x15,0x34,0x12,0x78,0x56,0xff,2},{K::CreateSprite,0x1234,0xff,0x5678}},
        {{0x1f,0x17,0,0,0,0,4,2},{K::CreateNpc,0,4,0}},
        {{0x1f,0x16,0,0,0,2},{K::SetNpcDirection,0x2345,0,0x3455}},
        {{0x1f,0x16,2,0,1,2},{K::SetNpcDirection,2,0,0}},
        {{0x1f,0x16,2,0,0,2},{K::SetNpcDirection,2,0,0x3455}},
        {{0x1f,0xe4,0,0,0,2},{K::SetSpriteDirection,0x2345,0,0x3455}},
        {{0x1f,0xe4,2,0,1,2},{K::SetSpriteDirection,2,0,0}},
        {{0x1f,0xe4,2,0,0,2},{K::SetSpriteDirection,2,0,0x3455}},
        {{0x1f,0xf1,0,0,0xff,0xff,2},{K::SetNpcScript,0,0,0xffff}},
        {{0x1f,0xf2,0,0,0xff,0xff,2},{K::SetSpriteScript,0,0,0xffff}},
        {{0x1f,0xf2,0x34,0x12,0x78,0x56,2},{K::SetSpriteScript,0x1234,0,0x5678}},
        {{0x1f,0xf2,0xff,0xff,0,0,2},{K::SetSpriteScript,0xffff,0,0}}
    }};
    for(const auto &c:cases) {
        d::State state;state.dummy.active={0xaabb2345,0xccdd3456,0x7788};
        const auto initial=state.dummy;
        d::Runtime runtime(program(v,c.code),state);runtime.start(d::EntryId{0});
        check(runtime.advance(0)==d::Progress::BudgetExhausted,"Zero budget consumed NPC operands");
        while(runtime.advance(1)==d::Progress::BudgetExhausted) {}
        check(runtime.request() && runtime.request()->kind==d::RequestKind::WorldControl &&
              runtime.request()->world_control==c.expected,"NPC operands/fallback/order differ");
        const auto snapshot=runtime.snapshot();
        check(runtime.advance()==d::Progress::Suspended && runtime.snapshot().consumed_bytes==snapshot.consumed_bytes,
              "Pending NPC command consumed the next stream byte");
        runtime.respond();while(runtime.advance(1)!=d::Progress::Finished){}
        check(runtime.returned_cursor()==d::Location{0,std::uint16_t(c.code.size())} &&
              state.dummy.active==initial.active && state.dummy.saved==initial.saved,
              "NPC command changed registers or alignment");
        for(unsigned size=2;size<c.code.size()-1;++size) {
            d::State short_state;
            d::Runtime short_runtime(program(v,{c.code.begin(),c.code.begin()+size}),short_state);
            short_runtime.start(d::EntryId{0});
            rejects([&]{while(short_runtime.advance(1)!=d::Progress::Finished){}});
        }
    }
    for (auto command : {0x16,0xe4}) {
        d::State state;state.dummy.active={1,1,0};
        d::Runtime runtime(program(v,{0x1f,std::uint8_t(command),0,0,0,2}),state);runtime.start(d::EntryId{0});
        while(runtime.snapshot().consumed_bytes<4) (void)runtime.advance(1);
        state.dummy.active={0x10007,0x10000,0};
        while(runtime.advance(1)==d::Progress::BudgetExhausted){}
        check(runtime.request()->world_control==WorldControlCommand{
                  command==0x16?K::SetNpcDirection:K::SetSpriteDirection,7,0,0xffff},
              "Zero fallback was captured before the final operand or lost word wrapping");
        runtime.respond();while(runtime.advance()!=d::Progress::Finished){}
    }
}
void teleport_parser(eb::GameVersion v) {
    for(auto literal:{0u,1u,255u}) {
        d::State state;state.dummy.active={0xaabbccdd,0x1234fedc,0x4567};
        const auto before=state.dummy.active;
        d::Runtime runtime(program(v,{0x1f,0x21,std::uint8_t(literal),2}),state);
        runtime.start(d::EntryId{0});
        while(runtime.advance(1)==d::Progress::BudgetExhausted){}
        check(runtime.request() && runtime.request()->kind==d::RequestKind::Teleport &&
              runtime.request()->count==(literal?literal:0xfedc) &&
              runtime.request()->selector==0x21,"Teleport destination gathering differs from CC1F21");
        check(runtime.advance()==d::Progress::Suspended && state.dummy.active==before,
              "Teleport request completed or changed memory without its lifecycle owner");
        // Parser-level service contract only; full teleport is independently
        // driven through the actual suspended Scene by the runtime owner.
        runtime.respond();while(runtime.advance(1)!=d::Progress::Finished){}
        check(runtime.returned_cursor()==d::Location{0,4} && state.dummy.active==before,
              "Teleport consumed a following byte or assigned a helper return");
    }
    d::State state;d::Runtime short_command(program(v,{0x1f,0x21}),state);
    short_command.start(d::EntryId{0});
    rejects([&]{while(short_command.advance(1)!=d::Progress::Finished){}});
}
void live_commands(eb::GameVersion v) {
    Fixture f(v);const auto catalog=npc_catalog();
    WorldNpcCommands commands(*catalog,*f.scripts,f.actors,f.prepared,f.fade);
    check(commands.uses(f.actors),"NPC command ownership identity differs");
    Fixture other(v);
    rejects([&]{WorldNpcCommands invalid(*catalog,*f.scripts,f.actors,f.prepared,other.fade);});
    const auto prepared=f.prepared;const auto random=f.random;const auto scratch=f.scratch.bytes;
    const auto first=commands.create_npc(2,0,0);
    auto first_id=*f.actors.actor_for_role(first);auto &a=f.actors.actor(first_id);
    check(first==0 && a.npc()==2 && a.behavior.direction==prepared.direction &&
          a.action().position==AuthoredActorPosition{0x000c8000,0x00228000,0x00388000} &&
          a.action().variables==prepared.variables && a.action().priority==1 && f.prepared.priority==1,
          "Prepared NPC ignored actual position/fractions/variables/facing");
    const auto second=commands.create_npc(2,0,6);
    const auto second_id=*f.actors.actor_for_role(second);
    check(second==1 && f.actors.actor_for_npc(2) && f.actors.active_npcs()==std::vector<NpcId>{2},
          "Duplicate authored NPC selector rejected or duplicated the activation existence index");
    a.action().animation=2;commands.set_direction(2,4);
    check(a.behavior.direction==4 && a.appearance.displayed()->pose==5 &&
          f.actors.actor(second_id).behavior.direction==prepared.direction,
          "Direction did not select the first numeric source role");
    commands.set_sprite_direction(0,6);
    check(a.behavior.direction==6 && a.appearance.displayed()->pose==7 &&
          f.actors.actor(second_id).behavior.direction==prepared.direction,
          "Sprite direction did not refresh the first retained numeric sprite selector");
    commands.set_direction(2,4);
    a.appearance.select_four(0,0);const auto displayed=a.appearance.displayed();
    commands.set_direction(2,4);
    check(a.appearance.displayed()==displayed,"Unchanged NPC direction refreshed graphics");
    a.action().velocity={1,2,3};const auto position=a.action().position;
    commands.set_script(2,0);
    check(a.action().position==position && a.action().velocity==std::array<std::uint32_t,3>{1,2,3} &&
          a.behavior.direction==4 && a.tasks().size()==1,"NPC script replacement reset motion or pose");
    a.behavior.tick=ActorTickCallback::CenterCamera;
    commands.set_sprite_script(0,0);
    check(a.action().position==position && a.action().velocity==std::array<std::uint32_t,3>{1,2,3} &&
          a.behavior.direction==4 && a.behavior.tick==ActorTickCallback::None && a.tasks().size()==1,
          "Sprite script adapter bypassed the actual task replacement or reset actor motion/pose");
    commands.set_direction(65000,0xffff);commands.set_script(65000,0xffff);
    commands.set_sprite_direction(65000,0xffff);
    commands.set_sprite_script(65000,0xffff);
    check(f.random==random && f.scratch.bytes==scratch && f.actors.ticks()==0,
          "Immediate NPC commands advanced random, scratch or actors");
    f.actors.erase(second_id);
    check(f.actors.actor_for_npc(2)==first_id,"Erasing a duplicate removed the surviving NPC index");
    const auto third=commands.create_npc(2,0,1);const auto third_id=*f.actors.actor_for_role(third);
    f.actors.erase(first_id);
    check(f.actors.actor_for_npc(2)==third_id,"Erasing indexed duplicate lost another live NPC");
    commands.set_direction(2,2);
    check(f.actors.actor(third_id).behavior.direction==2,"Released NPC selector shadowed the next active role");
    f.actors.retire(third_id);
    commands.set_direction(2,2); // Source equality returns even for a retained role.
    rejects([&]{commands.set_script(2,0);}); // Source loops on a released script slot.
    commands.set_direction(2,6);
    check(f.actors.authored_pose(third).direction==6,"Retired graphical NPC facing did not retain its source write");
    const auto revived=f.actors.create_authored_script(0,{}, {third,unsigned(third)+1});
    check(revived && f.actors.actor(*revived).appearance.displayed()->pose==7,
          "Retired NPC refresh lost its retained animation/frame on subsequent real INIT_ENTITY");
    f.actors.retire(*revived);
    commands.set_sprite_direction(0,4);
    check(f.actors.authored_pose(third).direction==4 && f.actors.ticks()==0,
          "Sprite direction skipped retained appearance or advanced the scheduler");
    const auto dormant=f.actors.authored_pose(third);
    rejects([&]{commands.set_sprite_script(0,0);});
    check(f.actors.authored_pose(third)==dormant && f.actors.ticks()==0,
          "Released sprite-script boundary changed retained geometry or advanced time");
}
void queued_commands(eb::GameVersion v) {
    Fixture f(v);const auto catalog=npc_catalog();
    WorldNpcCommands commands(*catalog,*f.scripts,f.actors,f.prepared,f.fade);
    check(commands.create_sprite(0,0,255)==0xffff && commands.create_sprite(0,1,255)==0xffff &&
          f.actors.size()==0 && commands.pending().size()==2,"Queued creation ran an actor/fade producer early");
    f.prepared.x=321;f.prepared.y=654;f.prepared.direction=2;
    commands.drain_created();
    check(commands.pending().empty() && f.actors.size()==2,"Actual queued drain lost records");
    const auto &first=f.actors.actor(*f.actors.actor_for_role(0));
    const auto &second=f.actors.actor(*f.actors.actor_for_role(1));
    check(first.script_style()==1 && second.script_style()==0 &&
          first.action().position[0]==0x01418000 && second.action().position[1]==0x028e8000 &&
          first.behavior.direction==2,"Queued drain used FIFO order or captured prepared position");
    commands.drain_created();check(f.actors.size()==2,"Empty drain created another actor");
    for(unsigned i=0;i<12;++i) (void)commands.create_sprite(0,std::uint16_t(i),255);
    const std::vector<QueuedActorCreation> before(commands.pending().begin(),commands.pending().end());
    rejects([&]{(void)commands.create_sprite(0,0,255);});
    check(std::equal(before.begin(),before.end(),commands.pending().begin()),"Queue overflow mutated owned records");
    Fixture fade(v);WorldNpcCommands animated(*catalog,*fade.scripts,fade.actors,fade.prepared,fade.fade);
    const auto role=animated.create_npc(1,0,4);
    check(role==0 && fade.fade.controller() && fade.fade.count()==1 && fade.fade.allocated_bytes()==384,
          "NPC fade command acknowledged without creating the actual Event859 controller");
}
}
int main() {
    try {for(auto v:{eb::GameVersion::US,eb::GameVersion::JP}) {parser_commands(v);teleport_parser(v);live_commands(v);queued_commands(v);}
        std::cout<<"Native NPC commands: "<<checks<<" checks passed\n";return 0;
    } catch(const std::exception &e) {std::cerr<<e.what()<<'\n';return 1;}
}
