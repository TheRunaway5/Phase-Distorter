#include "eb/native/world_activation.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool ok, const char *message) { if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F call) {
    try { call(); } catch (const std::exception &) { return; }
    throw std::runtime_error("Invalid native activation call was accepted");
}
struct Fixture {
    native_sprite_test::Fixture graphic;
    std::shared_ptr<SpriteResources> sprites = std::make_shared<SpriteResources>(graphic.bytes, graphic.layout);
    std::shared_ptr<const ActionScriptData> scripts = std::make_shared<ActionScriptData>(
        std::vector<std::uint8_t>{0x09}, 0, std::vector<std::uint32_t>(800, 0));
    std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x3000);
    NpcCatalogLayout layout{0, 0x1000, 0x1100, 0x1100, 0x2000, 8, 799};
    std::shared_ptr<const NpcCatalog> catalog;
    std::array<std::uint8_t,2> flags{};
    void word(unsigned at, unsigned value) { bytes[at] = value; bytes[at+1] = value >> 8; }
    void entry(unsigned at, unsigned id, unsigned x, unsigned y) {
        word(at,id); bytes[at+2] = y; bytes[at+3] = x;
    }
    Fixture() {
        for (unsigned i=0;i<8;++i) {
            const auto at=layout.definitions+i*17;
            bytes[at]=i==3||i==5 ? 3 : 1;
            word(at+1,i&1); bytes[at+3]=i&7; word(at+4,20+i);
        }
        bytes[layout.definitions+2*17+8]=1; word(layout.definitions+2*17+6,1);
        bytes[layout.definitions+3*17+8]=2; word(layout.definitions+3*17+6,8);
        std::fill(bytes.begin()+0x2000,bytes.begin()+0x2a00,3*8);
        word(0,0x1000); word(2,0x1040); word(64,0x1080);
        word(0x1000,5);
        entry(0x1002,2,240,40); entry(0x1006,1,10,25);
        entry(0x100a,3,200,128); entry(0x100e,4,250,200);
        entry(0x1012,1,20,30); // duplicate identity after successful creation
        word(0x1040,2); entry(0x1042,5,0,25); entry(0x1046,6,255,30);
        word(0x1080,1); entry(0x1082,7,20,0);
        catalog=std::make_shared<NpcCatalog>(bytes,layout);
    }
    ActorWorld world() { return ActorWorld(sprites,scripts,eb::GameVersion::US); }
    WorldActivation activation(CameraStreamOrigin origin={}) {
        return WorldActivation(catalog,sprites,scripts,eb::GameVersion::US,origin);
    }
    NpcActivationState state() {
        NpcActivationState result;
        result.mode=NpcSpawnMode::Initial; result.tileset=3; result.event_flags=flags;
        result.prepared.height=17; result.prepared.variables={1,2,3,4,5,6,7,8};
        result.prepared.phase_id=11;
        return result;
    }
};
std::vector<NpcId> ids(const std::vector<NpcActivation> &events) {
    std::vector<NpcId> result;
    for (const auto &event:events) result.push_back(event.candidate.placement.npc);
    return result;
}
void creation_and_gates() {
    Fixture f;
    auto world=f.world(); auto activation=f.activation(); auto state=f.state();
    // Loading artwork has no authority to add gameplay actors.
    f.sprites->acquire(0,0);
    check(world.size()==0,"Artwork preparation activated an actor");
    const auto events=activation.activate_cell(world,0,0,state);
    check(ids(events)==std::vector<NpcId>({2,1,4}),"Authored placement/duplicate/flag order differs");
    check(world.ticks()==0 && world.actors()==std::vector<ActorId>({events[0].actor,events[1].actor,events[2].actor}),
          "Activation changed tick/creation order");
    for (const auto &event:events) {
        const auto &actor=world.actor(event.actor);
        check(actor.action().position[0]==(event.candidate.placement.x<<16|0x8000) &&
              actor.action().position[1]==(event.candidate.placement.y<<16|0x8000) &&
              actor.action().position[2]==(17u<<16|0x8000) &&
              actor.action().variables==state.prepared.variables &&
              actor.action().velocity==std::array<std::uint32_t,3>{} &&
              actor.behavior.direction==event.direction && actor.action().animation==0xffff &&
              actor.authored_role() && actor.appearance_context.phase_id==*actor.authored_role() &&
              !actor.appearance.displayed(),
              "Activation ran behavior or lost prepared creation state");
    }
    check(activation.activate_cell(world,0,0,state).empty(),"Repeated strip duplicated active NPCs");
    world.erase(events[1].actor);
    check(ids(activation.activate_cell(world,0,0,state))==std::vector<NpcId>({1}),
          "Removed NPC did not become eligible in authored order");
    const auto released=events[0].actor;
    const auto role=world.actor(released).authored_role();
    const auto before=world.actor(released).action();
    const auto order=world.actors();
    world.actor(released).appearance.select_four(2,0);
    check(world.release_appearance(released)&&!world.actor_for_npc(2)&&
          !world.actor(released).has_appearance()&&world.actor(released).authored_role()==role&&
          world.actor(released).action().position==before.position&&
          world.actor(released).action().variables==before.variables&&world.actors()==order,
          "Graphics-only release removed task, role, position or creation order");
    check(ids(activation.activate_cell(world,0,0,state))==std::vector<NpcId>({2}),
          "Graphics release retained NPC activation identity");
    for (unsigned mode=0;mode<8;++mode) {
        auto fresh=f.world(); auto next=state;
        next.objects_only=mode&1; next.photograph=mode&2; next.debug={bool(mode&4),false,1};
        const auto created=activation.activate_cell(fresh,0,0,next);
        const auto expected=(mode&2) ? std::vector<NpcId>{1,4} :
            (mode&1) ? ((mode&4)?std::vector<NpcId>{3}:std::vector<NpcId>{}) :
            (mode&4)?std::vector<NpcId>{2,1,3,4}:std::vector<NpcId>{2,1,4};
        check(ids(created)==expected,"Object/photo/debug appearance gates differ");
        for (const auto &event:created)
            check(event.candidate.script==((mode&2)?799u:(mode&4)?10u:20u+event.candidate.placement.npc),
                  "Photo/debug script selection differs");
    }
    for (int x:{-65,-64,-1,0,255,256,319,320})
        for (int y:{-65,-64,-1,0,223,224,319,320})
            for (auto mode:{NpcSpawnMode::Initial,NpcSpawnMode::Streaming}) {
                auto fresh=f.world(); auto next=state;
                next.camera={std::uint16_t(240-x),std::uint16_t(40-y)}; next.mode=mode;
                activation.activate_cell(fresh,0,0,next);
                const bool expected=x>=-64&&x<320&&y>=-64&&y<320&&
                    (mode==NpcSpawnMode::Initial||x<0||x>=256||y<0||y>=224);
                check(bool(fresh.actor_for_npc(2))==expected,"Activation boundary differs");
            }
    auto full=f.world();
    for(unsigned role=0;role<22;++role)
        check(full.create_authored(make_actor_spec(0,0,{},*f.sprites,*f.scripts)).has_value(),
              "Authored role setup failed before capacity");
    const auto full_order=full.actors();
    rejects([&]{activation.activate_cell(full,0,0,state);});
    check(full.actors()==full_order&&full.active_npcs().empty(),
          "Exhausted activation overwrote an existing actor or fabricated an NPC");
}
void traversal() {
    Fixture f; auto world=f.world(); auto activation=f.activation({0,0}); auto state=f.state();
    activation.begin_refresh({16,8}); state.camera={16,8};
    const auto expected=plan_camera_refresh({0,0},{16,8});
    std::size_t count=0;
    while (activation.request()) {
        check(*activation.request()==expected.intents[count],"Native activation traversal reordered services");
        check(activation.origin()==CameraStreamOrigin{0,0},"Streaming origin committed before all services");
        rejects([&]{activation.begin_refresh({32,32});});
        if (activation.request()->service==CameraRefreshService::Npcs)
            activation.activate_next(world,state,NpcStripAdmission::Admitted);
        else {
            rejects([&]{activation.activate_next(world,state,NpcStripAdmission::Admitted);});
            activation.complete_enemy_request();
        }
        ++count;
    }
    check(count==expected.intents.size()&&activation.origin()==expected.origin,"Traversal did not commit final origin");
    rejects([&]{activation.complete_enemy_request();});
    activation.begin_initial_load({128,112}); state.camera={0,0};
    count=0;
    while(activation.request()) {
        const auto request=*activation.request();
        check(request.axis==CameraStripAxis::Row &&
              request.service==(count<32?CameraRefreshService::Npcs:CameraRefreshService::Enemies) &&
              request.x==(count<32?0:-8) && request.y==(count<32?int(count)-1:int(count)-40),
              "Initial map load changed row order");
        if (count<32) activation.activate_next(world,state,NpcStripAdmission::Admitted);
        else activation.complete_enemy_request();
        ++count;
    }
    check(count==80 && activation.origin()==CameraStreamOrigin{},"Initial load did not complete exact strips");
    auto empty=f.world();
    check(activation.activate_strip(empty,{CameraRefreshService::Npcs,CameraStripAxis::Row,0,0},state,
                                    NpcStripAdmission::Rejected).empty()&&empty.size()==0,
          "Rejected strip admission activated NPCs");
}
}
int main() {
    try {
        creation_and_gates(); traversal();
        for(unsigned speed:{0,3,4,65535}) for(int x:{-65,-64,0,319,320}) for(int y:{-65,-64,0,319,320})
            check(npc_within_retention_area(std::uint16_t(x),std::uint16_t(y),128,112,speed)==
                  (speed>=4||(x>=-64&&x<320&&y>=-64&&y<320)),"Authored retention predicate differs");
        std::cout<<"PASS native world NPC creation/order/gates, camera and initial-load service traversal, explicit strip admission and retention predicate\n";
    } catch(const std::exception &error) { std::cerr<<error.what()<<'\n'; return 1; }
}
