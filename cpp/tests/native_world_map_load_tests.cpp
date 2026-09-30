#include "native_world_map_load_fixture.hpp"
#include <iostream>
namespace {
using namespace eb::native;
unsigned checks{};
void check(bool okay,const char*why){++checks;if(!okay)throw std::runtime_error(why);}
template<class F>void rejects(F f){bool caught{};try{f();}catch(const std::exception&){caught=true;}check(caught,"Invalid map loader was accepted");}
void drive(WorldMapLoad::Operation &op,unsigned budget){for(unsigned i=0;i<20000;++i)if(op.advance(budget))return;throw std::runtime_error("Map transaction did not complete");}
void ordinary(eb::GameVersion region,unsigned budget) {
  startup_test::Resources r(region);map_load_test::Fixture f(r);
  f.party.controlled_count=f.party.party_count=1;f.party.party_order[0]=1;
  f.party.character(1).current_hp=100;f.party.character(1).target_hp=100;
  f.spawn.npcs=NpcSpawnMode::Initial;f.spawn.enemies=true;
  std::vector<ActorId> keep,remove;
  for(unsigned role=0;role<8;++role) {
    auto id=f.actors.create_authored_script(role,f.spawn.prepared,{role,role+1});
    (role<6?keep:remove).push_back(*id);
    f.actors.actor(*id).behavior.collision_object=3;
  }
  const auto ticks=f.actors.ticks(),frames=f.runtime->completed_frames();
  const auto random=f.random;
  f.loader->initialize_overworld();
  check(!f.load_state.loaded_combination && !f.load_state.loaded_palette,
        "Initializer retained old map content selections");
  auto op=f.loader->begin({1110,1656});
  drive(*op,budget);
  check(op->complete()&&!f.loader->busy()&&!f.loader->failed(),"Map transaction did not release ownership");
  for(auto id:keep)check(f.actors.actor(id).action().alive,"Map cleanup deleted a surviving script");
  for(auto id:remove)rejects([&]{f.actors.actor(id);});
  for(unsigned role=0;role<30;++role)check(f.actors.authored_behavior(role).collision_object==-1,"Map cleanup omitted a collision target");
  auto expected_random=random;
  for(unsigned i=0;i<f.runtime->streaming_work().random_draws;++i)story::next_random(expected_random);
  check(f.spawn.npcs==NpcSpawnMode::Streaming && f.runtime->streaming_work().npc_strips==32 &&
        f.runtime->streaming_work().enemy_strips==48 && f.actors.ticks()==ticks &&
        f.runtime->completed_frames()==frames && f.random==expected_random,
        "Map loading changed time/RNG or skipped ordered activation rows");
  check(f.actors.scene().camera_x==982 && f.actors.scene().camera_y==1544 &&
        f.load_state.loaded_combination==f.area.combination() && bool(f.runtime->frame()),
        "Map loading lost selected area or drawable scenery");
  check(f.visual.visible_layers==std::array<bool,5>{true,true,true,false,true},"World layers did not publish");
  const auto snapshot=f.scene_colors;
  f.load_state.wipe_palettes=true;
  auto reload=f.loader->begin({1110,1656});drive(*reload,budget);
  check(f.load_state.map_palette_scratch==snapshot&&!f.load_state.wipe_palettes,
        "Map wipe lost its actual palette backup");
  for(auto color:f.scene_colors)check(color==PaletteColor{31,31,31},"Map wipe did not affect shared colors");
  const auto after=f.actors.ticks();check(reload->advance(1)&&f.actors.ticks()==after,"Completed load replayed work");
}
void startup(eb::GameVersion region,unsigned budget) {
  startup_test::Resources r(region);map_load_test::Fixture f(r);f.bind_startup();
  auto restored=f.snapshot(1);restored.state.event_flags.fill(0);
  restored.state.characters[0].name={0x7e,0x75,0x83,0x83,0x83};
  restored.state.characters[0].values.level=5;
  restored.state.characters[0].values.experience=0x123456;
  auto op=f.startup->begin(restored);unsigned frames{};
  for(unsigned i=0;i<50000;++i){const auto result=op->advance(budget);
    if(result==dialogue::Progress::Finished)break;
    if(result==dialogue::Progress::Suspended){check(op->service()==WorldStartupService::Runtime,"Bound startup escaped actual map owner");
      auto *runtime=op->runtime_operation();check(runtime&&runtime->service()==story::SceneService::Frame,"Startup demanded unsupported service");
      runtime->complete_frame({0,0});++frames;}}
  check(op->stage()==WorldStartupStage::Complete&&!f.startup->busy()&&!f.startup->failed(),"Actual map startup did not finish initializer");
  check(f.actors.size()==2&&f.spawn.npcs==NpcSpawnMode::Streaming&&f.runtime->frame(),"Native startup did not publish real restored world");
  check(f.actors.ticks()==frames && f.runtime->completed_frames()==frames,("Startup actor/frame count: ticks="+std::to_string(f.actors.ticks())+" frames="+std::to_string(f.runtime->completed_frames())+" completed="+std::to_string(frames)).c_str());
  check(f.windows.uses(*f.graphics)&&f.graphics->pending_publications()==0,"Window artwork publication remained pending");
  const auto before=f.runtime->completed_frames();check(op->advance(100)==dialogue::Progress::Finished&&f.runtime->completed_frames()==before,"Complete startup replayed");
}
void deliveries(eb::GameVersion region) {
  startup_test::Resources r(region);map_load_test::Fixture f(r);
  f.text.event_flags.assign(128,0);f.talk.bind_event_flags();
  for(unsigned i=0;i<10;++i)f.text.set_flag(180+i,true);
  f.spawn.prepared.x=0x4567;f.spawn.prepared.y=0xabcd;f.spawn.prepared.direction=7;
  for(unsigned i=1;i<8;++i)f.spawn.prepared.variables[i]=0x1200+i;
  const auto before=f.random;auto expected=before;story::next_random(expected);
  const auto ids=f.startup_data.restore_deliveries(f.actors,f.spawn.prepared,f.text.event_flags,f.random);
  check(ids.size()==10&&f.random==expected&&f.spawn.prepared.variables[0]==9&&
        f.spawn.prepared.priority==1&&f.spawn.prepared.x==0x4567&&f.spawn.prepared.direction==7,
        "Timed deliveries did not preserve source flag/RNG/prepared writes");
  for(unsigned i=0;i<ids.size();++i){const auto&a=f.actors.actor(ids[i]);
    check(a.script_style()==500&&a.behavior.direction==0&&a.action().position[0]==0x8000&&
          a.action().position[1]==0x8000&&a.action().position[2]==(19u<<16|0x8000)&&
          a.action().variables[0]==i&&a.action().variables[7]==0x1207,
          "Delivery actor did not receive actual CREATE_ENTITY parameters");}
}
void invalid(eb::GameVersion region) {
  startup_test::Resources r(region);map_load_test::Fixture f(r);
  f.spawn.photograph=true;rejects([&]{f.loader->begin({0,0});});f.spawn.photograph=false;
  f.windows.prompt_state().debug=1;rejects([&]{f.loader->begin({0,0});});f.windows.prompt_state().debug=0;
  f.load_state.teleport_tile_x=0xffff;rejects([&]{f.loader->begin({0,0});});f.load_state.teleport_tile_x=0;
  check(!f.loader->failed()&&!f.actors.size(),"Preflight failure consumed map owners");
  ScenePalette other;WorldScenePresentation foreign(other,f.visual,f.layer_data,f.layers);
  rejects([&]{WorldMapLoad bad(f.load_state,{*f.runtime,f.actors,f.enemies,f.talk,f.area,
      f.colors,*r.map,*r.palettes,*r.animations,f.spawn,f.random,f.windows,f.party,f.clock,
      foreign,other,*f.graphics,f.overlays});});
  auto operation=f.loader->begin({0,0});
  auto competing=f.runtime->begin(story::TickKind::Frame);
  rejects([&]{operation->advance(1);});
  check(f.loader->failed()&&f.actors.size()==0,"Competing Runtime was not rejected before map mutation");
}
}
int main(){try{for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}){
  for(unsigned budget:{1u,1000u}){ordinary(region,budget);startup(region,budget);}invalid(region);deliveries(region);}
 std::cout<<"PASS native map loading/startup: "<<checks<<" checks\n";
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
