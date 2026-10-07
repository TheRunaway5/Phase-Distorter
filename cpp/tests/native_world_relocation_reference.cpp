// Real complete world bootstrap, RELOAD_MAP_AT_POSITION and C03FA9. No
// original callee is intercepted and no native output is seeded from it.
#define main retained_map_reference_main
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
#include "native_world_map_load_reference.cpp"
#pragma GCC diagnostic pop
#undef main
#include "eb/native/world_party_relocation.hpp"

namespace {
struct RelocationFixture : map_load_test::Fixture {
  WorldMovement movement_data;
  WorldNavigationState navigation;
  std::shared_ptr<const WorldDoorResources> door_data;
  WorldDoors doors;
  WorldPartyFollowingData following_data;
  WorldPartyFollowing following_owner;
  ActorCreationData creation_data;
  WorldPartyRelocation relocation;
  explicit RelocationFixture(startup_test::Resources &r)
      : map_load_test::Fixture(r), movement_data(r.bytes,world_movement_layout(r.version)),
        door_data(WorldDoorResources::import(r.bytes,r.version)),
        doors(r.map_text,door_data,actors,talk.state(),control,navigation,maintenance,input,queue),
        following_data(import_party_following_data(r.bytes,r.version)),
        following_owner(actors,party,formation,trail,control,talk.state(),windows.prompt_state(),
                        maintenance,style,following,following_data),
        creation_data(import_actor_creation_data(r.bytes,r.version)),
        relocation({startup_test::Fixture::owners(),load_state,following_owner,*r.map,area,
                    *r.collision,movement_data,navigation,doors,following_data,*r.bootstrap_data,
                    *r.sprites,creation_data}) {}
};
void bootstrap_pair(const eb::GameAssets &assets, RelocationFixture &f, Oracle &source,
                    CameraPosition center, unsigned party_count) {
  f.bind_startup();
  auto restored=f.snapshot(party_count);
  restored.state.game.leader_x=center.x;restored.state.game.leader_y=center.y;
  restored.state.event_flags.fill(0);
  auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,restored.state,0);
  auto startup=f.startup->begin(restored);
  // C0B67F begins after Continue's pre-game conversation. Capture that actual
  // entry, before bootstrap mutates shared NEW_ENTITY variables for members.
  while(startup->stage()!=WorldStartupStage::ResetWorld) {
    const auto result=startup->advance(1);
    if(result==dialogue::Progress::Suspended) {
      auto *child=startup->runtime_operation();
      check(child&&child->service()==story::SceneService::Frame,"Pre-game requires unavailable service");
      child->complete_frame({0,0});
    }
  }
  source.seed(f,archive);source.put(0xa1,0x2000);source.put(0xa3,0x2000);
  while(startup->stage()!=WorldStartupStage::InitializeMap) {
    const auto result=startup->advance(1);
    if(result==dialogue::Progress::Suspended) {
      auto *child=startup->runtime_operation();
      check(child&&child->service()==story::SceneService::Frame,"Bootstrap requires an unavailable service");
      child->complete_frame({0,0});
    }
  }
  source.start(source.l.boot);source.run(0xc0004b);
  for(const auto id:f.actors.actors()) {
    const auto &actor=f.actors.actor(id);const auto role=*actor.authored_role();
    for(unsigned v=0;v<8;++v)check(source.get(source.l.variables+v*60+role*2)==actor.action().variables[v],
      ("Bootstrap variable differs role="+std::to_string(role)+" var="+std::to_string(v)+
       " source="+std::to_string(source.get(source.l.variables+v*60+role*2))+" native="+std::to_string(actor.action().variables[v])).c_str());
  }
  source.compare(f);
  for(unsigned step=0;startup->stage()!=WorldStartupStage::Complete && step<100000;++step) {
    const auto result=startup->advance(1);
    if(result==dialogue::Progress::Suspended) {
      auto *child=startup->runtime_operation();
      check(child&&child->service()==story::SceneService::Frame,"Bootstrap tail requires unavailable service");
      child->complete_frame({0,0});
    }
  }
  check(startup->stage()==WorldStartupStage::Complete,"Native full bootstrap did not return");
  source.run(0xc0ff04);compare_map(source,f);
}
void compare_relocation(const Oracle &source,const RelocationFixture &f) {
  const auto &l=source.l;
  check(source.get(source.game(130))==f.talk.state().leader_x &&
        source.get(source.game(134))==f.talk.state().leader_y &&
        source.get(source.game(138))==f.talk.state().leader_direction &&
        source.get(source.game(140))==f.control.trodden_surface_flags &&
        source.get(source.game(142))==f.talk.state().walking_style &&
        source.get(source.game(146))==f.style,"Relocated leader/terrain/area state differs");
  check(source.get(source.game(136))==f.trail.next_write,"Relocated trail cursor differs");
  for(unsigned i=0;i<256;++i) {
    const auto &p=f.trail.points[i];
    const std::array<unsigned,6> values{p.x,p.y,p.surface_flags,p.walking_style,p.direction,p.reserved};
    for(unsigned j=0;j<6;++j)check(source.get(l.trail+i*12+j*2)==values[j],
                                 "Relocated full trail/retained entry differs");
  }
  for(unsigned role=0;role<30;++role) {
    const auto id=f.actors.actor_for_role(role);
    check(source.get(l.script+role*2)==(id?f.actors.actor(*id).script_style():0xffff),
          "Relocation changed actor occupancy/script differently");
    if(!id)continue;
    const auto &a=f.actors.actor(*id);
    for(unsigned axis=0;axis<3;++axis)
      check(a.action().position[axis]==(source.get(l.x+axis*60+role*2)<<16|
                                      source.get(l.fraction+axis*60+role*2)),"Relocated full actor position differs");
    for(unsigned i=0;i<8;++i)
      check(a.action().variables[i]==source.get(l.variables+i*60+role*2),
            ("Relocated actor variable differs role="+std::to_string(role)+" variable="+std::to_string(i)+
             " original="+std::to_string(source.get(l.variables+i*60+role*2))+" native="+std::to_string(a.action().variables[i])).c_str());
    check(source.get(l.animation+role*2)==a.action().animation&&
          source.get(l.direction+role*2)==a.behavior.direction,"Relocated animation/facing differs");
    check(source.get(l.screen_x+role*2)==std::uint16_t(a.behavior.projected_x)&&
          source.get(l.screen_y+role*2)==std::uint16_t(a.behavior.projected_y),"Relocated projection differs");
  }
  check(source.get(l.pajamas)==f.following.pajamas,"Relocation pajamas flag differs");
  check(source.get(0x24)==f.random.primary_word&&source.get(0x26)==f.random.secondary_word,
        "Relocation consumed unexpected RNG");
}
void complete_pair(const eb::GameAssets &assets,startup_test::Resources &resources,
                   CameraPosition center,unsigned count,unsigned direction) {
  context=assets.title+" relocation party="+std::to_string(count)+" direction="+std::to_string(direction);
  RelocationFixture f(resources);Oracle source(assets);bootstrap_pair(assets,f,source,center,count);
  const auto ticks=f.actors.ticks(), polls=f.clock.input_polls;
  // Real same-area reload must replace animated map graphics, invalidate its
  // remembered selection and retain existing actors/population/collision state.
  for(unsigned i=0;i<7;++i){source.start(0xc00172);source.run(0xc0ff04);f.area.advance_animation();}
  source.start(assets.version==eb::GameVersion::US?0xc012ed:0xc01303);
  source.cpu.accumulator=center.x;source.cpu.x_index=center.y;source.run(0xc0ff04);
  auto reload=f.loader->begin_reload(center);while(!reload->advance(1)){}
  compare_map(source,f);
  source.start(assets.version==eb::GameVersion::US?0xc03fa9:0xc04230);
  source.cpu.accumulator=center.x;source.cpu.x_index=center.y;source.cpu.y_index=direction;
  source.run(0xc0ff04);
  auto relocate=f.relocation.begin(center,std::uint16_t(direction));
  for(unsigned i=0;i<100000&&!relocate->complete();++i)relocate->advance(1);
  check(relocate->complete(),"Native relocation did not complete");compare_relocation(source,f);
  check(f.actors.ticks()==ticks&&f.clock.input_polls==polls,"Reload/relocation advanced actors/input");
  ++cases;
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try {
    for(int arg=1;arg<argc;++arg) {
      auto assets=eb::load_game_assets(argv[arg],eb::asset_profiles());
      startup_test::Resources resources(assets.version,assets.image);
      const auto old_cases=cases,old_checks=checks,old_instructions=instructions;
      for(unsigned count:{1u,4u})for(unsigned direction:{0u,2u,6u})
        complete_pair(assets,resources,{0x456,0x678},count,direction);
      std::cout<<"PASS real world reload/relocation "<<(assets.version==eb::GameVersion::US?"US":"JP")
               <<": "<<cases-old_cases<<" complete paired lifetimes, "<<checks-old_checks
               <<" comparisons, "<<instructions-old_instructions<<" original instructions\n";
    }
  }catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}
}
