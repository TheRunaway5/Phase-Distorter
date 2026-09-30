#include "eb/native/world_actor_services.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool value,const char *message){if(!value)throw std::runtime_error(message);}
template<class F>void rejects(F f){try{f();}catch(const std::exception&){return;}throw std::runtime_error("Invalid service response accepted");}
struct Fixture {
    native_sprite_test::Fixture graphic;
    std::shared_ptr<SpriteResources> sprites=std::make_shared<SpriteResources>(graphic.bytes,graphic.layout);
    std::shared_ptr<const ActionScriptData> scripts;
    std::shared_ptr<EnemySpawnData> data=std::make_shared<EnemySpawnData>();
    explicit Fixture(std::vector<std::uint8_t> code){scripts=std::make_shared<ActionScriptData>(code,0,std::vector<std::uint32_t>{0});
        data->enemies={{0,0,7,0}};data->butterfly_enemy=0;data->battles={{{1,0}}};data->butterfly_battle=0;
        data->encounters={EnemySpawnEncounter{},EnemySpawnEncounter{0,{100,0},std::vector<unsigned>(8,0)}};}
    ActorWorld world(){return ActorWorld(sprites,scripts,eb::GameVersion::US);}
    WorldEnemies enemies(){return WorldEnemies(data,sprites,scripts,{0,0,10});}
    WorldActorSpec spec(){PreparedActorState prepared;prepared.x=128;prepared.y=112;return make_actor_spec(0,0,prepared,*sprites,*scripts,42);}
};
void stagger(){for(unsigned role:{0,1,7,15,16,29})for(unsigned opcode:{0x42,0xf5}){
    Fixture f({std::uint8_t(opcode),0x23,0,0xc4,0x3b,0x5a,0x06,1,0x09});auto world=f.world();auto enemies=f.enemies();
    const auto id=*world.create_authored(f.spec(),{role,role+1});
    check(world.advance_tick()==WorldTickResult::NeedsEngine,"Stagger did not suspend");
    const auto pending=*world.request();check(world.advance_tick()==WorldTickResult::NeedsEngine&&world.request()->action.task==pending.action.task,"Repeated tick changed pending task");
    rejects([&]{world.respond(5,1,5);});check(world.actor(id).tasks()[0].cursor==4,"Bad response mutated task");
    check(fulfill_actor_lifecycle(world,enemies),"Stagger not fulfilled");
    check(world.advance_tick()==WorldTickResult::Complete&&world.ticks()==1,"Stagger advanced wrong number of world ticks");
    const auto sleep=role&15;
    check(world.actor(id).action().animation==(sleep?0xffff:0x5a)&&world.actor(id).tasks()[0].sleep_frames==(sleep?sleep-1:0),"Stagger sleep assignment/countdown differs");
    for(unsigned n=1;n<=sleep;++n)world.advance_tick();
    check(world.actor(id).action().animation==0x5a,"Stagger continuation did not wake on exact tick");
}}
void missing_cancel(){Fixture f({0x42,0x23,0,0xc4,0x09});auto world=f.world();auto enemies=f.enemies();const auto id=world.create(f.spec());
    world.advance_tick();check(!fulfill_actor_lifecycle(world,enemies)&&world.request(),"Missing authored role silently fulfilled");
    world.erase(id);check(!world.request()&&!fulfill_actor_lifecycle(world,enemies)&&world.advance_tick()==WorldTickResult::Complete,"Cancellation retained task request");
    auto callback_world=f.world();const auto callback=callback_world.create(f.spec());
    callback_world.actor(callback).scripts_and_physics_enabled=false;
    callback_world.actor(callback).behavior.tick=ActorTickCallback::WorldMaintenance;
    check(callback_world.advance_tick()==WorldTickResult::NeedsEngine,"Maintenance fixture did not suspend");
    callback_world.erase(callback);
    check(!fulfill_actor_lifecycle(callback_world,enemies)&&callback_world.request(),
          "Lifecycle handler consumed or dereferenced deleted callback issuer");
    callback_world.respond();check(callback_world.advance_tick()==WorldTickResult::Complete,"Deleted callback issuer blocked acknowledgment");
    auto raw=ActionScripts(std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x1d,7,0,0x1e,0x99,0,0x09},0),0);
    check(raw.tick()==ActionTickResult::NeedsEngine,"Read fixture did not suspend");const auto before=raw.tasks()[0];
    rejects([&]{raw.respond(9,0,3);});check(raw.request()&&raw.tasks()[0].temporary==before.temporary&&raw.tasks()[0].cursor==before.cursor,"Non-call sleep failure was not atomic");
}
void current_task_only(){
    auto script=ActionScripts(std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{
        0x07,10,0,0x06,3,0x09,0x09,0x09,0x09,0x09,0xf5,0x23,0,0xc4,0x3b,0x66,0x06,1,0x09},0),0);
    check(script.tick()==ActionTickResult::NeedsEngine&&script.tasks().size()==2,"Child stagger fixture did not suspend");
    const auto parent=script.tasks()[0];check(script.request()->task==script.tasks()[1].id,"Wrong task raised stagger request");
    script.respond(1,0,1);check(script.tick()==ActionTickResult::Complete&&script.tasks()[0].sleep_frames==parent.sleep_frames&&
        script.tasks()[1].sleep_frames==0&&script.actor().animation==0xffff,"Stagger changed sibling task or resumed child early");
    script.tick();check(script.actor().animation==0x66&&script.tasks()[0].sleep_frames==1,"Child stagger wake changed parent schedule");
}
void retain(){for(unsigned call:{0xc0c6b6,0xc40015}){Fixture f({0x42,std::uint8_t(call),std::uint8_t(call>>8),std::uint8_t(call>>16),0x06,1,0x09});
    auto world=f.world();auto enemies=f.enemies();const auto id=*world.create_authored(f.spec());world.actor(id).action().animation=1;
    world.advance_tick();check(!fulfill_actor_lifecycle(world,enemies)&&world.actor(id).action().animation==1&&world.request(),"Missing retention context mutated actor");
    rejects([&]{world.respond(0,0,1);});ActorRetentionArea area{128,112,0};
    check(fulfill_actor_lifecycle(world,enemies,&area)&&world.advance_tick()==WorldTickResult::Complete,"Retention did not resume");
    check(world.actor(id).tasks()[0].temporary==0xffff,"Inside retention predicate differs");
    if(call==0xc40015)check(world.actor(id).action().animation==0&&world.actor(id).appearance.displayed()->pose==four_direction_pose(0,0),"Refresh/retention did not latch phase0");
}}
void event35(){Fixture f({0x42,0xf1,0x20,0xc0,0});auto world=f.world();auto enemies=f.enemies();EnemySpawnState state;
    enemies.begin_cell(world,1,1,1,8,8,state);while(enemies.busy()){
        if(std::holds_alternative<EnemyRandomRequest>(*enemies.request()))enemies.respond_random(world,0);
        else enemies.respond_terrain(world,0);}
    check(enemies.population().count==1&&enemies.population().butterfly_spawned&&world.size()==1,"Enemy fixture was vacuous");
    const auto id=enemies.actors()[0].actor;const auto before=world.actor(id).action();
    check(world.advance_tick()==WorldTickResult::NeedsEngine&&fulfill_actor_lifecycle(world,enemies),"EVENT35 release failed");
    check(world.size()==1&&!world.actor(id).has_appearance()&&world.actor(id).action().position==before.position&&
          !enemies.population().count&&!enemies.population().butterfly_spawned,"Appearance release prematurely ended actor or missed counters");
    check(world.advance_tick()==WorldTickResult::Complete&&world.size()==0,"EVENT35 End did not remove actor");
    enemies.synchronize_lifetimes(world);check(enemies.actors().empty(),"EVENT35 retained stale enemy identity");
}
}
int main(){try{stagger();missing_cancel();current_task_only();retain();event35();std::cout<<"PASS native actor lifecycle requests, exact sleep timing, missing prerequisites, cancellation and enemy EVENT35\n";}
catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
