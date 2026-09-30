#include "eb/native/world_enemies.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool value,const char *message){if(!value)throw std::runtime_error(message);}
template<class F>void rejects(F f){try{f();}catch(const std::exception&){return;}throw std::runtime_error("Invalid enemy continuation accepted");}
struct Fixture {
    native_sprite_test::Fixture graphics;
    std::shared_ptr<SpriteResources> sprites=std::make_shared<SpriteResources>(graphics.bytes,graphics.layout);
    std::shared_ptr<const ActionScriptData> scripts=std::make_shared<ActionScriptData>(
        std::vector<std::uint8_t>{0x09},0,std::vector<std::uint32_t>(40,0));
    std::shared_ptr<EnemySpawnData> data=std::make_shared<EnemySpawnData>();
    Fixture(){
        data->enemies={{0,19,7,10},{1,20,4,20},{0,21,7,30}};data->butterfly_enemy=2;data->butterfly_battle=2;
        data->battles={{{1,0},{0,1},{2,1}},{{1,1}},{{2,2}}};data->debug_battle={{1,0}};
        data->encounters={EnemySpawnEncounter{},EnemySpawnEncounter{1,{100,100},{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}}};
        data->cells.fill(1);data->sectors.fill({3,5});
    }
    ActorWorld world(){return ActorWorld(sprites,scripts,eb::GameVersion::US);}
    WorldEnemies owner(EnemyPopulation population={0,0,20}){return WorldEnemies(data,sprites,scripts,population);}
    EnemySpawnState state(){EnemySpawnState s;s.tileset=3;s.event_flags={0};s.prepared.height=7;s.prepared.direction=6;
        s.prepared.variables={10,20,30,40,50,60,70,80};return s;}
};
EnemyRandomPurpose purpose(const WorldEnemies &owner){check(owner.request()&&std::holds_alternative<EnemyRandomRequest>(*owner.request()),"Expected random request");return std::get<EnemyRandomRequest>(*owner.request()).purpose;}
void finish(WorldEnemies &owner,ActorWorld &world,std::uint16_t terrain=0){unsigned steps=0;while(owner.busy()){
    check(++steps<1000,"Enemy continuation failed to finish");check(bool(owner.request()),"Busy spawn lacks explicit request");
    if(std::holds_alternative<EnemyRandomRequest>(*owner.request()))owner.respond_random(world,0);
    else owner.respond_terrain(world,terrain);}}
void ordered_spawn(){Fixture f;auto world=f.world();auto owner=f.owner();auto s=f.state();
    owner.begin_cell(world,4,6,1,24,8,s);check(purpose(owner)==EnemyRandomPurpose::EncounterChance&&world.size()==0,"Chance gate order differs");
    rejects([&]{owner.respond_terrain(world,0);});rejects([&]{owner.begin_cell(world,0,0,1,8,8,s);});
    owner.respond_random(world,0);check(purpose(owner)==EnemyRandomPurpose::WeightedGroup,"Weighted selection order differs");
    owner.respond_random(world,0);check(world.size()==1&&purpose(owner)==EnemyRandomPurpose::PositionX,"Actor must exist before position selection");
    owner.respond_random(world,25);owner.respond_random(world,10);
    const auto terrain=std::get<EnemyTerrainRequest>(*owner.request());
    check(terrain.x==264&&terrain.y==400,"Authored modulo/8px placement differs");
    owner.respond_terrain(world,0);check(purpose(owner)==EnemyRandomPurpose::Weakness,"Weakness order differs");
    owner.respond_random(world,201);finish(owner,world);
    check(owner.actors().size()==3&&world.size()==3&&owner.population().count==3&&owner.population().remaining==255,"Member count/order differs");
    const auto &first=owner.actors()[0];const auto &actor=world.actor(first.actor);
    check(first.enemy==0&&first.battle==0&&first.spawn_cell==6*128+4&&first.weakness==201,"Enemy identity differs");
    check(actor.action().position[0]==(264u<<16|0x8000)&&actor.action().position[1]==(400u<<16|0x8000)&&
          actor.action().position[2]==(7u<<16|0x8000)&&actor.behavior.direction==0&&actor.action().variables==s.prepared.variables&&
          actor.authored_role()==0&&!actor.npc()&&world.ticks()==0,"Enemy creation changed authored defaults or executed script");
    owner.begin_cell(world,4,6,1,8,8,s);owner.respond_random(world,0);owner.respond_random(world,0);
    check(!owner.busy()&&world.size()==3,"Duplicate battle/spawn cell was not suppressed");
    const auto old_order=world.actors();owner.release_appearance(world,first.actor);
    check(owner.population().count==2&&world.actors()==old_order&&!world.actor(first.actor).has_appearance()&&
          !owner.actors()[0].has_identity,"Graphics release changed actor lifetime or kept enemy identity");
    owner.erase(world,first.actor);check(owner.population().count==2&&world.size()==2,"Full deletion decremented released enemy twice");
}
void rejection_and_limits(){Fixture f;auto world=f.world();auto owner=f.owner();auto s=f.state();
    s.event_flags[0]=1;owner.begin_cell(world,1,2,1,8,8,s);owner.respond_random(world,0);owner.respond_random(world,7);
    unsigned positions=0;while(owner.busy()){
        if(std::holds_alternative<EnemyTerrainRequest>(*owner.request())){++positions;owner.respond_terrain(world,0xd0);}
        else owner.respond_random(world,0);}
    check(positions==20&&world.size()==0&&owner.population().count==0,"Failed placement must delete after twenty probes");
    owner.begin_cell(world,1,2,1,8,8,s);owner.respond_random(world,0);owner.respond_random(world,0);finish(owner,world,4);
    check(world.size()==0,"Enemy run-mask gate ignored unsupported terrain");
    auto capped=f.owner({0,5,5});capped.begin_cell(world,1,2,1,8,8,s);finish(capped,world);
    check(capped.population().capacity_failures==1&&world.size()==0,"Capacity equality gate differs");
    auto above=f.owner({0,6,5});above.begin_cell(world,1,2,1,8,8,s);finish(above,world);
    check(above.population().count==7&&world.size()==1,"Source capacity is equality, not a greater-than clamp");
    auto chance=f.owner();s.tileset=4;chance.begin_cell(world,1,2,1,8,8,s);
    check(!chance.busy()&&chance.population().spawn_counter==1,"Tileset gate consumed randomness or lost attempt counter");
}
void butterflies_debug(){Fixture f;auto world=f.world();auto owner=f.owner({15,0,20});auto s=f.state();
    owner.begin_cell(world,1,2,0,8,8,s);check(purpose(owner)==EnemyRandomPurpose::ButterflyChance,"Sixteenth attempt skipped butterfly path");
    finish(owner,world);check(owner.population().count==1&&owner.population().butterfly_spawned&&owner.actors().size()==1,"Butterfly uniqueness failed within one group");
    const auto first=owner.actors()[0].actor;owner.release_appearance(world,first);
    check(owner.population().count==0&&!owner.population().butterfly_spawned,"Butterfly release failed");
    auto debug=f.owner({15,0,20});s.debug_forced_encounter=true;debug.begin_cell(world,1,2,0,8,8,s);
    check(purpose(debug)==EnemyRandomPurpose::DebugEncounter,"Debug draw missing");finish(debug,world);
    check(debug.population().spawn_counter==15&&debug.actors().size()==1&&debug.actors()[0].enemy==0,"Forced debug path altered counter or battle order");
}
void lifecycle_coordination(){Fixture f;auto world=f.world();auto owner=f.owner();auto state=f.state();
    state.event_flags[0]=1;owner.begin_cell(world,1,2,1,8,8,state);finish(owner,world);
    const auto id=owner.actors()[0].actor;owner.release_appearance(world,id);world.erase(id);
    owner.synchronize_lifetimes(world);check(owner.actors().empty()&&owner.population().count==0,
        "Released task termination retained stale enemy metadata");
    owner.begin_cell(world,1,2,1,8,8,state);finish(owner,world);world.erase(owner.actors()[0].actor);
    rejects([&]{owner.synchronize_lifetimes(world);});
    check(owner.population().count==1,"Uncoordinated deletion silently changed authored population");
    rejects([&]{owner.begin_cell(world,1,2,1,8,8,state);});
    auto butterfly_world=f.world();auto butterflies=f.owner({15,0,20});
    butterflies.begin_cell(butterfly_world,1,2,0,8,8,state);finish(butterflies,butterfly_world);
    const auto first=butterflies.actors()[0].actor;butterflies.release_appearance(butterfly_world,first);
    for(unsigned i=0;i<15;++i)butterflies.begin_cell(butterfly_world,1,2,0,8,8,state);
    butterflies.begin_cell(butterfly_world,1,2,0,8,8,state);finish(butterflies,butterfly_world);
    check(butterflies.population().butterfly_spawned&&butterflies.population().count==1,"Second butterfly did not spawn after release");
    butterflies.release_appearance(butterfly_world,first);
    check(!butterflies.population().butterfly_spawned&&butterflies.population().count==1,
        "Source retained enemy ID must still clear butterfly flag on repeated release");
}
void strips(){Fixture f;auto s=f.state();CameraRefreshIntent row{CameraRefreshService::Enemies,CameraStripAxis::Row,16,24};
    const auto cells=plan_enemy_spawn_strip(*f.data,row,s);check(cells.size()==6,"Identical encounters must merge up to six cells");
    for(const auto &cell:cells)check(cell==EnemySpawnCell{2,3,1,48,8},"Merged placement range/attempt count differs");
    for(unsigned i=0;i<6;++i)f.data->cells[3*128+2+i]=0;
    check(plan_enemy_spawn_strip(*f.data,row,s).size()==5,"Empty cells still need butterfly spawn attempts");
    s.enabled=false;check(plan_enemy_spawn_strip(*f.data,row,s).empty(),"Disabled spawn strip admitted attempts");s.enabled=true;
    row.y=25;check(plan_enemy_spawn_strip(*f.data,row,s).empty(),"Unaligned strip admitted attempts");row.y=-8;
    check(!plan_enemy_spawn_strip(*f.data,row,s).empty(),"Near-negative fixed edge was not normalized");row.y=-24;
    check(plan_enemy_spawn_strip(*f.data,row,s).empty(),"Outside fixed edge was admitted");
}
}
int main(){try{ordered_spawn();rejection_and_limits();butterflies_debug();lifecycle_coordination();strips();
    std::cout<<"PASS native enemy ordered RNG/placement, population/lifecycle, duplicates, terrain and strip gates\n";
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
