#include "eb/native/world_streaming.hpp"
#include "eb/native/world/collision_window.hpp"
#include "native_sprite_fixture.hpp"
#include "native_world_movement_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <tuple>

namespace {
using namespace eb::native;
void check(bool value, const char *message) { if (!value) throw std::runtime_error(message); }
template<class F> void rejects(F operation) {
    try { operation(); } catch (const std::exception &) { return; }
    throw std::runtime_error("Invalid streaming continuation was accepted");
}
struct Fixture {
    native_sprite_test::Fixture graphics;
    movement_test::Fixture terrain;
    std::shared_ptr<SpriteResources> sprites = std::make_shared<SpriteResources>(graphics.bytes, graphics.layout);
    std::shared_ptr<const CompiledActionProgram> program;
    std::shared_ptr<const NpcCatalog> catalog;
    std::shared_ptr<EnemySpawnData> enemies = std::make_shared<EnemySpawnData>();
    Fixture(unsigned npc_x = 320, unsigned npc_y = 128, bool solid = false) {
        // Both NPC and enemy tasks increment once then wait. No source engine
        // operation is needed to distinguish the captured-next traversal.
        auto scripts = std::make_shared<ActionScriptData>(
            std::vector<std::uint8_t>{0x14,0,2,1,0,0x09}, 0, std::vector<std::uint32_t>(800,0));
        program = std::make_shared<CompiledActionProgram>(scripts, eb::GameVersion::US);
        std::vector<std::uint8_t> bytes(0x3000);
        const NpcCatalogLayout layout{0,0x1000,0x1100,0x1100,0x2000,8,799};
        auto word = [&](unsigned at, unsigned value) { bytes.at(at)=value; bytes.at(at+1)=value>>8; };
        for(unsigned id=0;id<8;++id)bytes[layout.definitions+id*17]=1;
        word(2*((npc_y/256)*32+npc_x/256),0x1000);
        word(0x1000,1); word(0x1002,1); bytes[0x1004]=npc_y; bytes[0x1005]=npc_x;
        catalog=std::make_shared<NpcCatalog>(bytes,layout);
        std::fill_n(terrain.bytes.begin()+terrain.map_layout.collision_patterns,4096,solid?0xd0:0);
        enemies->cells.fill(1); enemies->sectors.fill({0,0});
        enemies->encounters={EnemySpawnEncounter{},EnemySpawnEncounter{0,{100,0},{0,0,0,0,0,0,0,0}}};
        enemies->battles={{{1,0}},{{1,1}}}; enemies->enemies={{0,0,4,20},{0,0,4,20}};
        enemies->butterfly_enemy=1; enemies->butterfly_battle=1;
    }
};
struct Scene {
    std::array<std::uint8_t,128> flags{};
    ActorWorld world;
    WorldActivation activation;
    WorldEnemies enemies;
    WorldCollision collision;
    WorldMapArea area;
    story::RandomState random{0x1234,0x5678};
    WorldSpawnControls controls;
    WorldStreaming streaming;
    Scene(Fixture &f, CameraStreamOrigin origin={0,8})
        :world(f.sprites,f.program),activation(f.catalog,f.sprites,f.program->scripts(),eb::GameVersion::US,origin),
         enemies(f.enemies,f.sprites,f.program->scripts(),{0,0,2}),
         collision(f.terrain.bytes,f.terrain.collision_layout),area(f.terrain.area()),
         streaming(world,activation,enemies,collision,area,random,controls) {
        world.scene().event_flags=flags; world.scene().camera_y=64;
        controls.npcs=NpcSpawnMode::Streaming; controls.enemies=true;
        controls.prepared.height=7; controls.prepared.variables={0,2,3,4,5,6,7,8};
    }
};
void complete(WorldStreaming &streaming, unsigned budget) {
    unsigned yields=0;
    while (!streaming.advance(budget)) check(++yields<10000,"Streaming failed to complete");
}
auto population(const WorldEnemies &e) {
    const auto &p=e.population();
    return std::tuple{p.spawn_counter,p.count,p.maximum,p.butterfly_spawned,p.capacity_failures,
        p.encounter,p.chance,p.battle,p.name_initial,p.sprite,p.remaining};
}
void compare(const Scene &a,const Scene &b) {
    check(a.random==b.random && a.flags==b.flags && population(a.enemies)==population(b.enemies) &&
          a.world.actors()==b.world.actors() && a.activation.origin()==b.activation.origin() &&
          a.streaming.work()==b.streaming.work(),"Work yields changed native streaming state or RNG");
    for (const auto id:a.world.actors()) {
        const auto &left=a.world.actor(id), &right=b.world.actor(id);
        check(left.action().position==right.action().position && left.action().variables==right.action().variables &&
              left.authored_role()==right.authored_role() && left.npc()==right.npc() &&
              left.behavior.direction==right.behavior.direction,"Work yields changed actor state");
    }
    check(a.enemies.actors().size()==b.enemies.actors().size(),"Work yields changed enemy identity count");
    for(unsigned i=0;i<a.enemies.actors().size();++i) {
        const auto &x=a.enemies.actors()[i], &y=b.enemies.actors()[i];
        check(x.actor==y.actor&&x.battle==y.battle&&x.enemy==y.enemy&&x.spawn_cell==y.spawn_cell&&
              a.world.actor(x.actor).behavior.path_state==b.world.actor(y.actor).behavior.path_state&&
              x.weakness==y.weakness&&x.has_identity==y.has_identity,
              "Work yields changed enemy identity");
    }
}
void camera_barrier(bool delete_camera, bool tail) {
    Fixture f; Scene s(f);
    auto spec=make_actor_spec(0,0,{},*f.sprites,*f.program->scripts());
    spec.action.position={192u<<16|0x8000,176u<<16|0x8000,0x8000};
    spec.behavior.tick=ActorTickCallback::CenterCamera;
    const auto camera=*s.world.create_authored(spec,{23,24});
    spec.behavior.tick=ActorTickCallback::None;
    const auto observer=tail?ActorId{}:s.world.create(spec);
    check(s.world.advance_tick()==WorldTickResult::NeedsCameraRefresh,"Camera did not suspend its actor pass");
    const auto before=s.random;
    s.streaming.begin_actor_refresh(NpcStripAdmission::Admitted);
    check(!s.streaming.advance(1)&&s.world.actor_for_npc(1)&&s.random==before&&s.world.ticks()==0,
          "First NPC strip changed RNG, missed actor or advanced a tick");
    rejects([&]{s.streaming.begin_actor_refresh(NpcStripAdmission::Admitted);});
    check(s.world.advance_tick()==WorldTickResult::NeedsCameraRefresh&&s.world.actor(camera).action().variables[0]==1,
          "Budget yield resumed or repeated a camera actor");
    rejects([&]{s.world.draw(522,{},1);});
    if (!tail) check(s.world.actor(observer).action().variables[0]==0,"Observer ran before activation completed");
    if (delete_camera) s.world.erase(camera);
    complete(s.streaming,1);
    check(!s.world.camera_refresh()&&s.world.ticks()==0&&s.enemies.population().count==1&&
          s.streaming.work().npc_strips==8&&s.streaming.work().enemy_strips==8&&
          s.streaming.work().npc_creations==1&&s.streaming.work().terrain_queries==1&&s.random!=before,
          "Streaming lost exact strip order, real terrain/RNG or its camera acknowledgment");
    check(s.world.advance_tick()==WorldTickResult::Complete&&s.world.ticks()==1,
          "Completed streaming failed to resume the same world tick");
    const auto npc=*s.world.actor_for_npc(1);
    check(s.world.actor(npc).action().variables[0]==(tail?0:1),"Activation changed captured-next script timing");
    for(const auto &enemy:s.enemies.actors())
        check(s.world.actor(enemy.actor).action().variables[0]==(tail?0:1),"Enemy activation changed captured-next timing");
}
void yields_terrain_and_gates() {
    for(bool solid:{false,true}) {
        Fixture f(320,128,solid); Scene small(f),large(f);
        for(auto scene:{&small,&large}) scene->streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);
        complete(small.streaming,1); complete(large.streaming,4096); compare(small,large);
        check(small.streaming.work().terrain_queries==(solid?120u:1u)&&
              small.enemies.population().count==(solid?0:1),"Coordinator bypassed the real map/shape terrain service");
        check(small.world.ticks()==0&&large.world.ticks()==0,"Streaming advanced game time");
    }
    Fixture f; Scene admitted(f),rejected(f);
    admitted.streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);
    rejected.streaming.begin_refresh({64,64},NpcStripAdmission::Rejected);
    complete(admitted.streaming,7); complete(rejected.streaming,3);
    check(admitted.random==rejected.random&&population(admitted.enemies)==population(rejected.enemies)&&
          !rejected.world.actor_for_npc(1)&&admitted.world.actor_for_npc(1),
          "Explicit NPC admission incorrectly changed enemy randomness or population");
    for(unsigned gate=0;gate<3;++gate) {
        Scene gated(f); const auto seed=gated.random;
        if(gate==0)gated.controls.enemies=false;
        if(gate==1)gated.flags[1]|=4;
        if(gate==2)gated.flags[9]|=1;
        gated.streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);complete(gated.streaming,5);
        check(gated.world.size()==1&&gated.random==seed&&!gated.streaming.work().terrain_queries,
              "Enemy gate consumed RNG or changed NPC activation");
    }
}
void retained_terrain_binding() {
    // A prepared area can differ from the collision cells currently retained
    // by the map/camera owner. Enemy placement must read that owner throughout
    // its real retry traversal, including across work-budget yields.
    for (bool retained_solid : {false,true}) {
        Fixture retained_fixture(320,128,retained_solid);
        Fixture prepared_fixture(320,128,!retained_solid);
        Scene reference(retained_fixture),unbound(prepared_fixture);
        Scene small(prepared_fixture),large(prepared_fixture);
        WorldCollisionWindow window;
        window.load({64,64},reference.area);
        // The actual loader writes sixty rows and retains four. A second load
        // displaced by four rows gives this synthetic uniform fixture a full
        // previously loaded ring, rather than assuming cold retained rows.
        window.load({64,96},reference.area);
        check(std::all_of(window.cells().begin(),window.cells().end(),
                          [&](auto cell){return cell==(retained_solid?0xd0:0);}),
              "Retained terrain fixture did not load its complete uniform ring");
        const auto cells=window.cells();
        const auto blocks=window.blocks();
        for (auto scene : {&small,&large}) {
            scene->streaming.bind_collision_window(window);
            scene->streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);
            rejects([&]{scene->streaming.bind_collision_window(window);});
        }
        reference.streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);
        unbound.streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);
        complete(small.streaming,1);complete(large.streaming,4096);
        complete(reference.streaming,3);complete(unbound.streaming,7);
        compare(small,large);compare(small,reference);
        check(small.streaming.work().terrain_queries==(retained_solid?120u:1u)&&
              small.enemies.population().count==(retained_solid?0u:1u)&&
              unbound.streaming.work().terrain_queries==(retained_solid?1u:120u)&&
              unbound.enemies.population().count==(retained_solid?1u:0u)&&
              small.random!=unbound.random&&
              small.streaming.work().random_draws!=unbound.streaming.work().random_draws,
              "Bound enemy terrain used prepared map cells or normalized retry RNG");
        check(window.cells()==cells&&window.blocks()==blocks&&
              small.world.ticks()==0&&large.world.ticks()==0,
              "Enemy placement refreshed its borrowed map window or advanced actors");
        WorldCollisionWindow other;other.load({64,64},unbound.area);
        rejects([&]{small.streaming.bind_collision_window(other);});

        // A later actual owner reload must be observed through the existing
        // binding, rather than through a copied snapshot of the old cells.
        Scene reloaded(prepared_fixture),reloaded_reference(prepared_fixture);
        reloaded.streaming.bind_collision_window(window);
        window.load({64,64},reloaded.area);
        window.load({64,96},reloaded.area);
        reloaded.streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);
        reloaded_reference.streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);
        complete(reloaded.streaming,2);complete(reloaded_reference.streaming,5);
        compare(reloaded,reloaded_reference);
    }
}
void initial_activation() {
    Fixture f(1024,1024); Scene s(f),disabled(f);
    s.streaming.begin_initial_activation({1024,1024},NpcStripAdmission::Admitted);
    check(s.controls.npcs==NpcSpawnMode::Initial&&s.world.scene().camera_x==896&&s.world.scene().camera_y==912,
          "Initial activation did not set its authored camera and NPC mode");
    const auto seed=s.random;
    check(!s.streaming.advance(32)&&s.world.actor_for_npc(1)&&s.enemies.actors().empty()&&s.random==seed&&
          s.controls.npcs==NpcSpawnMode::Initial&&s.streaming.work().npc_strips==32,
          "Initial load did not finish its NPC rows before enemy work");
    complete(s.streaming,1);
    check(s.controls.npcs==NpcSpawnMode::Streaming&&s.streaming.work().enemy_strips==48&&s.world.ticks()==0&&
          s.enemies.population().count==2,"Initial activation committed mode early or lost rows");
    disabled.controls.npcs=NpcSpawnMode::Disabled;
    disabled.streaming.begin_initial_activation({1024,1024},NpcStripAdmission::Admitted);
    complete(disabled.streaming,1000);
    check(disabled.controls.npcs==NpcSpawnMode::Disabled&&!disabled.world.actor_for_npc(1),
          "Initial load enabled NPCs that the scene disabled");
}
void invalid_ownership() {
    Fixture f; Scene s(f);
    const auto seed=s.random;
    s.world.scene().event_flags={};
    rejects([&]{s.streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);});
    check(!s.streaming.busy()&&!s.activation.request()&&s.random==seed,"Missing flags partially began streaming");
    s.world.scene().event_flags=s.flags;
    rejects([&]{s.streaming.begin_refresh({64,64},static_cast<NpcStripAdmission>(99));});
    rejects([&]{s.streaming.begin_actor_refresh(NpcStripAdmission::Admitted);});
    rejects([&]{s.streaming.advance(0);});
    s.streaming.begin_refresh({0,64},NpcStripAdmission::Admitted);
    check(!s.streaming.busy()&&s.streaming.advance()&&s.world.size()==0&&s.random==seed,
          "No-op camera refresh invented activation work");
}
void failed_work_cannot_replay() {
    Fixture f; Scene s(f);
    s.streaming.begin_refresh({64,64},NpcStripAdmission::Admitted);
    unsigned steps=0;
    while(!s.enemies.request()||!std::holds_alternative<EnemyTerrainRequest>(*s.enemies.request())) {
        check(++steps<100&&s.streaming.busy(),"Missing placement terrain boundary");
        s.streaming.advance(1);
    }
    const auto actor=std::get<EnemyTerrainRequest>(*s.enemies.request()).actor;
    const auto shape=s.world.actor(actor).appearance_context.shape;
    s.world.actor(actor).appearance_context.shape=65535;
    const auto rng=s.random;
    const auto work=s.streaming.work();
    const auto order=s.world.actors();
    rejects([&]{s.streaming.advance(1);});
    check(s.streaming.failed()&&s.streaming.busy(),"Failed streaming released its publication barrier");
    s.world.actor(actor).appearance_context.shape=shape;
    rejects([&]{s.streaming.advance(4096);});
    rejects([&]{s.streaming.begin_refresh({128,64},NpcStripAdmission::Admitted);});
    check(s.streaming.work()==work&&s.random==rng&&s.world.actors()==order&&s.world.ticks()==0,
          "Failed traversal replayed committed work after its source was repaired");
}
void scene_camera_completion() {
    Fixture f;
    for(bool empty:{false,true}) {
        Scene s(f);
        auto spec=make_actor_spec(0,0,{},*f.sprites,*f.program->scripts());
        spec.action.position={std::uint32_t(empty?128:192)<<16,176u<<16,0};
        spec.behavior.tick=ActorTickCallback::CenterCamera;s.world.create(spec);
        check(s.world.advance_tick()==WorldTickResult::NeedsCameraRefresh,"Scene camera did not suspend");
        unsigned completions=0;
        s.streaming.begin_actor_refresh(NpcStripAdmission::Admitted,[&] {
            check(!s.activation.request()&&!s.enemies.busy()&&s.world.ticks()==0,
                  "Scene acknowledgment ran before activation finished");
            ++completions;s.world.respond_camera_refresh();
        });
        complete(s.streaming,1);
        check(completions==1&&!s.world.camera_refresh()&&s.world.ticks()==0,
              "Scene wrapper completion was repeated or advanced a tick");
        check(s.world.advance_tick()==WorldTickResult::Complete,"Scene acknowledgment did not resume actors");
    }
    Scene invalid(f);
    auto spec=make_actor_spec(0,0,{},*f.sprites,*f.program->scripts());
    spec.action.position={128u<<16,176u<<16,0};spec.behavior.tick=ActorTickCallback::CenterCamera;
    invalid.world.create(spec);invalid.world.advance_tick();
    unsigned calls=0;
    rejects([&]{invalid.streaming.begin_actor_refresh(NpcStripAdmission::Admitted,[&]{++calls;});});
    check(invalid.streaming.busy()&&invalid.streaming.failed()&&invalid.world.camera_refresh(),
          "Unacknowledged no-op camera did not latch its failure");
    rejects([&]{invalid.streaming.advance();});
    check(calls==1,"Failed no-op camera completion was retried");
}
}
int main() { try {
    for(bool deletion:{false,true})for(bool tail:{false,true})camera_barrier(deletion,tail);
    yields_terrain_and_gates();retained_terrain_binding();initial_activation();invalid_ownership();failed_work_cannot_replay();scene_camera_completion();
    std::cout<<"PASS native streaming: shared RNG and real terrain, retained-window retries and live owner reload, work-budget invariance, camera barriers, actor traversal and initial activation\n";
} catch(const std::exception &e) { std::cerr<<e.what()<<'\n'; return 1; } }
