#include "eb/native/actor_creation.hpp"
#include "eb/native/world_enemies.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool okay,const char* why){++checks;if(!okay)throw std::runtime_error(why);}
template<class F>void rejects(F f){bool caught{};try{f();}catch(const std::exception&){caught=true;}check(caught,"Invalid lifetime operation accepted");}
struct Fixture {
  native_sprite_test::Fixture graphics;
  std::shared_ptr<SpriteResources> sprites=std::make_shared<SpriteResources>(graphics.bytes,graphics.layout);
  std::shared_ptr<const ActionScriptData> scripts=std::make_shared<ActionScriptData>(
    std::vector<std::uint8_t>{0x09,0},0,std::vector<std::uint32_t>{0,1});
  ActorWorld world(eb::GameVersion version){return ActorWorld(sprites,scripts,version);}
  WorldActorSpec spec(unsigned role,unsigned script=0){
    WorldActorSpec s;s.sprite=role%2;s.script=script;s.npc=NpcId(100+role);
    s.action.position={0xffff0101u-role,0x8000abcd+role,0x70001234};
    s.behavior.direction=std::uint16_t(role*3);return s;
  }
};
void lifetime(eb::GameVersion version){
  Fixture f;auto world=f.world(version);check(world.version()==version&&!world.in_tick(),"Region/tick ownership mismatch");
  for(unsigned role=0;role<30;++role){
    for(unsigned i=0;i<8;++i)
      check(world.authored_variable(role,i)==0,"Cold role retained a script variable");
    check(world.authored_pose(role)==AuthoredActorPose{}&&world.authored_sprite_selector(role)==0&&world.authored_npc_selector(role)==0xffff,"Cold role history differs");
    auto spec=f.spec(role);const auto id=*world.create_authored(spec,{role,role+1});
    check(world.authored_npc_selector(role)==100+role&&world.authored_sprite_selector(role)==role%2,"Live selectors differ");
    auto &a=world.actor(id);a.action().position[0]+=99;a.behavior.direction=0xf000+role;
    for(unsigned i=0;i<8;++i){
      a.action().variables[i]=std::uint16_t(0x8000+role*8+i);
      check(world.authored_variable(role,i)==a.action().variables[i],"Live script variable read is stale");
    }
    a.appearance.select_four(0,0);
    a.hitbox=ActorHitbox{7,{3,4},{5,6}};
    a.behavior.surface_flags=12;a.behavior.path_state=0x8123;a.behavior.obstacle_flags=0x4567;
    a.behavior.moving_direction=7;a.behavior.movement_speed=0x89ab;a.behavior.collision_object=123;
    a.scripts_and_physics_enabled=a.tick_callback_enabled=false;
    const auto pose=world.authored_pose(role);
    check(pose==AuthoredActorPose{a.action().position,a.behavior.direction},"Live pose is a stale copy");
    check(world.retire(id)&&!world.retire(id)&&world.size()==0&&!world.actor_for_role(role),"Retirement lifetime/order differs");
    for(unsigned i=0;i<8;++i)
      check(world.authored_variable(role,i)==0x8000+role*8+i,"Retirement lost authored script variable");
    check(world.authored_pose(role)==pose&&world.authored_sprite_selector(role)==role%2&&world.authored_npc_selector(role)==100+role,"Retirement cleared history");
    world.set_authored_direction(role,7);world.set_authored_coordinate(role,1,0x1234);
    check(world.authored_pose(role).direction==7&&world.authored_position(role)[1]==0x1234abcdu+role,"Vacant pose writer differs");
    const auto old=world.authored_pose(role);
    rejects([&]{world.create_authored_script(999,{}, {role,role+1});});
    check(world.authored_pose(role)==old&&!world.actor_for_role(role),"Creation failure changed retained role");
    PreparedActorState p;p.x=0xffff;p.y=123;p.height=456;p.priority=0xabcd;p.direction=99;p.variables[2]=22;
    const auto script=*world.create_authored_script(0,p,{role,role+1});
    for(unsigned i=0;i<8;++i)
      check(world.authored_variable(role,i)==p.variables[i],"Bare INIT did not reset script variables from prepared state");
    check(script!=id&&world.actor(script).has_appearance()&&world.actor(script).appearance.available()&&world.actor(script).script_only(),"Bare reuse lost inherited artwork or recycled identity");
    check(world.actor_for_npc(NpcId(100+role))==script&&world.actor(script).npc()==NpcId(100+role),"Bare reuse did not restore actual ordinary NPC ownership");
    const auto &live=world.actor(script);
    check(live.hitbox==ActorHitbox{7,{3,4},{5,6}}&&live.behavior.surface_flags==12&&
              live.behavior.path_state==0x8123&&live.behavior.obstacle_flags==0x4567&&
              live.behavior.moving_direction==7&&live.behavior.movement_speed==0x89ab&&
              live.behavior.collision_object==123&&live.scripts_and_physics_enabled&&live.tick_callback_enabled,
          "Bare INIT dropped retained geometry/behavior or kept paused callbacks");
    check(world.authored_pose(role)==AuthoredActorPose{{0xffff8000u,123u<<16|0x8000,456u<<16|0x8000},7},"INIT_ENTITY changed retained facing or fractions");
    check(world.authored_sprite_selector(role)==role%2&&world.authored_npc_selector(role)==100+role&&world.actor(script).action().priority==0xabcd&&world.actor(script).action().variables[2]==22,"INIT_ENTITY selector/priority/variable mismatch");
    auto &script_actor=world.actor(script);
    script_actor.action().velocity={0x00010002,0xffff0001,0x12345678};
    const auto before_motion=script_actor.action().position;
    check(world.advance_tick()==WorldTickResult::Complete,"Script-only actor tick failed");
    check(script_actor.action().position==AuthoredActorPosition{before_motion[0]+0x00010002,
              before_motion[1]+0xffff0001,before_motion[2]},"INIT_ENTITY default motion integrated height or lost planar fractions");
    SpritePalettes palettes{};
    // The source INIT priority word is preserved; the later draw-byte command
    // selects a supported visual group without truncating that stored input.
    script_actor.action().priority=3;
    script_actor.action().animation=0;
    script_actor.behavior.projected_x=128;script_actor.behavior.projected_y=112;
    const auto frame=world.draw(256,palettes,1);
    check(!frame->quads.empty(),"Bare reuse lost its retained graphical appearance");
    const auto before=world.authored_pose(role);world.reset_scripts();
    check(world.authored_variable(role,2)==22,"Scene reset erased retired script variable");
    check(world.size()==0&&world.authored_pose(role)==before&&world.authored_npc_selector(role)==100+role,"Scene script reset cleared role metadata");
    const auto after_reset=*world.create_authored_script(0,{}, {role,role+1});
    check(!world.actor(after_reset).has_appearance()&&world.actor(after_reset).hitbox==ActorHitbox{7,{3,4},{5,6}},
          "Scene script reset retained artwork or erased source geometry");
    world.retire(after_reset);
    world.set_authored_position(role,before.position);
    check(world.release_authored_appearance(role)&&!world.release_authored_appearance(role)&&world.authored_pose(role)==before,"Vacant appearance release changed pose or repeated work");
    check(world.authored_variable(role,2)==0,"Appearance release resurrected an older script variable");
    check(world.authored_npc_selector(role)==0xffff&&world.authored_sprite_selector(role)==0xffff,"Appearance release did not clear keys");
    const auto replacement=*world.create_authored(f.spec(role),{role,role+1});
    check(world.erase(replacement)&&world.authored_pose(role)==AuthoredActorPose{spec.action.position,spec.behavior.direction},"Full removal lost latest pose");
    check(world.authored_npc_selector(role)==0xffff&&world.authored_sprite_selector(role)==0xffff,"Full removal retained identity");
    const auto end=*world.create_authored(f.spec(role,1),{role,role+1});
    check(world.advance_tick()==WorldTickResult::Complete&&!world.actor_for_role(role)&&world.authored_npc_selector(role)==100+role,"Real script END did not retain selector metadata");
    rejects([&]{world.actor(end);});
  }
  rejects([&]{world.authored_pose(30);});rejects([&]{world.set_authored_direction(30,0);});
  rejects([&]{world.authored_npc_selector(30);});rejects([&]{world.authored_sprite_selector(30);});
  rejects([&]{world.release_authored_appearance(30);});
  rejects([&]{world.authored_variable(30,0);});
  rejects([&]{world.authored_variable(0,8);});
  world.reset_scripts();auto a=*world.create_authored(f.spec(1),{0,30});auto b=*world.create_authored(f.spec(2),{0,30});
  world.retire(a);world.retire(b);auto c=*world.create_authored(f.spec(3),{0,30});
  check(world.actor(c).authored_role()==1,"Retirement did not push role to free head");
  world.reset_scripts();auto d=*world.create_authored(f.spec(4),{0,30});check(world.actor(d).authored_role()==0,"Scene reset did not restore numeric allocation order");
}
void enemies(){
  Fixture f;auto world=f.world(eb::GameVersion::US);
  auto data=std::make_shared<EnemySpawnData>();data->enemies={{0,0,7,1}};data->butterfly_enemy=0;data->butterfly_battle=1;
  data->battles={{},{ {1,0} }};data->encounters={{},{0,{100,100},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}}};data->cells.fill(1);data->sectors.fill({0,0});
  WorldEnemies owner(data,f.sprites,f.scripts,{0,0,10});world.bind_enemies(owner);
  EnemySpawnState input;input.event_flags={0};owner.begin_cell(world,3,4,1,8,8,input);
  while(owner.busy()){if(std::holds_alternative<EnemyRandomRequest>(*owner.request()))owner.respond_random(world,0);else owner.respond_terrain(world,0);}
  check(owner.actors().size()==1&&owner.population().count==1,"Enemy fixture did not use real spawning");
  auto foreign=f.world(eb::GameVersion::US);
  foreign.create_authored(f.spec(1)); // Deliberately colliding local ActorId.
  rejects([&]{foreign.bind_enemies(owner);});
  rejects([&]{owner.synchronize_lifetimes(foreign);});
  rejects([&]{owner.release_appearance(foreign,owner.actors()[0].actor);});
  rejects([&]{owner.begin_cell(foreign,3,4,1,8,8,input);});
  auto id=owner.actors()[0].actor;auto role=*world.actor(id).authored_role();
  world.actor(id).behavior.direction=5;const auto pose=world.authored_pose(role);
  check(world.authored_npc_selector(role)==0x8001,"Live enemy selector confused group and spawn cell");
  world.retire(id);owner.synchronize_lifetimes(world);
  check(owner.actors().empty()&&owner.population().count==1&&world.authored_npc_selector(role)==0x8001&&world.authored_pose(role)==pose,"Enemy retirement lost role metadata or retained dead host ID");
  const auto replacement=*world.create_authored_script(0,{}, {role,role+1});
  check(owner.actors().size()==1&&owner.actors()[0].actor==replacement&&owner.population().count==1,"Script-only reuse did not transfer actual enemy ownership");
  owner.synchronize_lifetimes(world);world.retire(replacement);
  owner.release_authored_role(world,role);
  check(owner.population().count==0&&!owner.population().butterfly_spawned&&world.authored_npc_selector(role)==0xffff&&world.authored_sprite_selector(role)==0xffff,"Dormant enemy release lost accounting or keys");
  owner.release_authored_role(world,role);check(owner.population().count==0,"Repeated dormant release decremented twice");
  const auto ordinary=*world.create_authored(f.spec(9),{role,role+1});
  check(owner.actors().empty()&&world.authored_npc_selector(role)==109,"Graphical reuse inherited retired enemy identity");
  world.erase(ordinary);
  owner.begin_cell(world,5,6,1,8,8,input);
  unsigned terrain_probes=0;
  while(owner.busy()){
    if(std::holds_alternative<EnemyRandomRequest>(*owner.request()))owner.respond_random(world,0);
    else {++terrain_probes;owner.respond_terrain(world,0xd0);}
  }
  check(terrain_probes==20&&world.size()==0&&owner.actors().empty()&&owner.population().count==0,
        "Bound enemy failed placement did not erase provisional actor at twenty probes");
  owner.begin_cell(world,9,9,1,8,8,input);
  while(owner.busy()){
    if(std::holds_alternative<EnemyRandomRequest>(*owner.request()))owner.respond_random(world,0);
    else owner.respond_terrain(world,0);
  }
  check(owner.actors().size()==1,"Scene-reset fixture failed to spawn actual enemy");
  const auto reset_id=owner.actors().front().actor;
  const auto reset_role=*world.actor(reset_id).authored_role();
  const auto population=owner.population();
  world.actor(reset_id).behavior.movement_speed=0xabc;
  world.actor(reset_id).behavior.collision_object=24;
  rejects([&]{world.initialize_scene_objects();});
  check(world.actor(reset_id).behavior.movement_speed==0xabc,
        "Rejected live scene initialization changed movement");
  world.reset_scripts();world.initialize_scene_objects();
  check(owner.population().count==population.count &&
            owner.population().butterfly_spawned==population.butterfly_spawned &&
            world.authored_npc_selector(reset_role)==0xffff &&
            world.authored_enemy_selector(reset_role)==0 &&
            world.authored_behavior(reset_role).movement_speed==0 &&
            world.authored_behavior(reset_role).collision_object==-1,
        "Scene initialization changed enemy accounting/type or retained NPC identity");
  const auto reset_reuse=*world.create_authored_script(0,{}, {reset_role,reset_role+1});
  check(!owner.identity(reset_reuse) && owner.enemy_type(reset_reuse)==0 &&
            world.authored_npc_selector(reset_role)==0xffff,
        "Script-only reuse resurrected a cleared enemy identity");
  world.reset_scripts();
  world.clear_enemies(owner);
  rejects([&]{foreign.bind_enemies(owner);});
}
void scene_objects(eb::GameVersion version){
  Fixture f;auto world=f.world(version);
  for(unsigned role=0;role<30;++role){
    auto spec=f.spec(role);spec.behavior.movement_speed=role+10;
    spec.behavior.collision_object=role;spec.behavior.path_state=0xfffe;
    spec.action.variables[1]=0x4000+role;
    world.create_authored(spec,{role,role+1});
  }
  world.reset_scripts();
  std::array<AuthoredActorPose,30> poses;
  for(unsigned role=0;role<30;++role)poses[role]=world.authored_pose(role);
  world.initialize_scene_objects();
  for(unsigned role=0;role<30;++role){
    const auto state=world.authored_behavior(role);
    check(state.movement_speed==0&&state.collision_object==-1&&
              world.authored_npc_selector(role)==0xffff,
          "Scene object initialization missed an authored role");
    check(state.path_state==0xfffe&&world.authored_pose(role)==poses[role]&&
              world.authored_variable(role,1)==0x4000+role&&
              world.authored_sprite_selector(role)==role%2,
          "Scene initialization cleared unrelated retained role state");
  }
  check(world.size()==0&&world.ticks()==0,"Scene metadata initialization advanced actors");
}
}
int main(){try{for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}){lifetime(version);scene_objects(version);}enemies();std::cout<<"PASS native actor lifetime: "<<checks<<" checks\n";}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
