// Complete original C0B67F through LOAD_MAP_AT_POSITION, including every nested
// map, palette, artwork, event, RNG and entity routine. No calls are stubbed.
#include "native_world_startup_oracle.hpp"
#include "native_world_map_load_fixture.hpp"
#include <set>
namespace {
using namespace startup_oracle;
unsigned packed(const MapTile &tile) {
  return tile.graphic | tile.palette<<10 | unsigned(tile.priority)<<13 |
      unsigned(tile.flip_x)<<14 | unsigned(tile.flip_y)<<15;
}
unsigned rgb(PaletteColor c){return c.red|unsigned(c.green)<<5|unsigned(c.blue)<<10;}
void compare_map(const Oracle &o,const map_load_test::Fixture &f) {
  const bool jp=f.r.version==eb::GameVersion::JP;
  for(unsigned i=0;i<f.load_state.animation_staging.size();++i)
    check(o.bus->work_ram[0xc000+i]==f.load_state.animation_staging[i],
          "Retained map animation staging differs");
  check(o.get(jp?0x46f4:0x436e)==f.load_state.loaded_combination &&
        o.get(jp?0x46f6:0x4370)==f.load_state.loaded_palette &&
        o.get(jp?0x46f8:0x4372)==f.area.tileset_id(),"Loaded content selection differs");
  check(o.get(0x31)==f.actors.scene().camera_x && o.get(0x33)==f.actors.scene().camera_y,
        "Loaded map camera differs");
  check(o.get(o.l.npcs)==0xffff && f.spawn.npcs==NpcSpawnMode::Streaming,
        "Initial NPC activation did not end in streaming mode");
  check(o.get(jp?0x4de2:0x4a5c)==f.enemies.population().count &&
        o.get(jp?0x4de6:0x4a60)==f.enemies.population().butterfly_spawned &&
        o.get(0x24)==f.random.primary_word && o.get(0x26)==f.random.secondary_word,
        ("Actual enemy population or RNG differs source_count="+std::to_string(o.get(jp?0x4de2:0x4a5c))+" native_count="+std::to_string(f.enemies.population().count)+" source_rng="+std::to_string(o.get(0x24))+","+std::to_string(o.get(0x26))+" native_rng="+std::to_string(f.random.primary_word)+","+std::to_string(f.random.secondary_word)+" draws="+std::to_string(f.runtime->streaming_work().random_draws)+" queries="+std::to_string(f.runtime->streaming_work().terrain_queries)).c_str());
  for(unsigned i=0;i<256;++i)
    check((o.get(0x200+i*2)&0x7fff)==rgb(f.scene_colors[i]),"Complete map palette differs");
  for(unsigned i=0;i<224;++i)
    check(o.get((jp?0x47fc:0x4476)+i*2)==f.load_state.map_palette_backup[i],"Map backup colors differ");
  for(unsigned role=0;role<30;++role) {
    const auto actor=f.actors.actor_for_role(role);
    const unsigned script=actor?f.actors.actor(*actor).script_style():0xffff;
    check(o.get(o.l.script+role*2)==script,"Full map actor occupancy/script differs");
    check(o.get((jp?0x2c9c:0x289e)+role*2)==std::uint16_t(f.actors.authored_behavior(role).collision_object),"Map collision target reset differs");
    check(o.get((jp?0x3098:0x2c9a)+role*2)==f.actors.authored_npc_selector(role),"Activated NPC identity differs");
    if(actor) {
      const auto &a=f.actors.actor(*actor);
      for(unsigned axis=0;axis<3;++axis)
        check(a.action().position[axis]==(o.get(o.l.x+axis*60+role*2)<<16|o.get(o.l.fraction+axis*60+role*2)),"Map activated actor position differs");
      check(a.behavior.direction==o.get(o.l.direction+role*2),"Map activated facing differs");
    }
  }
  for(unsigned block=0;block<f.area.blocks().size();++block)
    for(unsigned tile=0;tile<16;++tile)
      check(o.get(0x18000+block*32+tile*2)==packed(f.area.blocks()[block].tiles[tile]),"Loaded event arrangement differs");
  for(unsigned tile=0;tile<f.area.graphics().size();++tile)
    for(unsigned y=0;y<8;++y)for(unsigned x=0;x<8;++x){unsigned color{};
      for(unsigned plane=0;plane<4;++plane)
        color|=((o.bus->video_ram[tile*32+y*2+(plane/2)*16+(plane&1)]>>(7-x))&1)<<plane;
      check(color==f.area.graphics()[tile][y*8+x],"Loaded map artwork differs");}
  const auto origin=f.activation.origin();
  check(o.get(jp?0x46fa:0x4374)==std::uint16_t(origin.x)&&o.get(jp?0x46fc:0x4376)==std::uint16_t(origin.y),"Final streaming origin differs");
}
void run_map(const eb::GameAssets &assets,startup_test::Resources &resources,
             CameraPosition center,unsigned flag_pattern,unsigned flavor) {
  context=assets.title+" map="+std::to_string(center.x)+","+std::to_string(center.y)+
          " flags="+std::to_string(flag_pattern)+" flavor="+std::to_string(flavor);
  map_load_test::Fixture f(resources);f.bind_startup();
  auto restored=f.snapshot(1);restored.state.game.leader_x=center.x;restored.state.game.leader_y=center.y;
  restored.state.game.text_flavour=flavor;restored.state.event_flags.fill(flag_pattern > 255 ? 0 : flag_pattern);
  if(flag_pattern > 255) {
    const unsigned table=assets.version==eb::GameVersion::JP?0x15f5a5:0x15f645;
    for(unsigned i=0;i<10;++i){const unsigned at=table+i*20+2;
      const unsigned flag=assets.image[at]|unsigned(assets.image[at+1])<<8;
      restored.state.event_flags[(flag-1)/8]|=1u<<((flag-1)%8);}
  }
  if(flavor==3) {
    restored.state.characters[0].name={0x7e,0x75,0x83,0x83,std::uint8_t(assets.version==eb::GameVersion::US?0x83:0)};
    restored.state.characters[0].values.level=5;
    restored.state.characters[0].values.experience=0x123456;
  }
  auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,restored.state,0);
  auto startup=f.startup->begin(restored);
  for(unsigned n=0;startup->stage()!=WorldStartupStage::InitializeMap && n<100000;++n) {
    auto result=startup->advance(1);
    if(result==dialogue::Progress::Suspended){check(startup->service()==WorldStartupService::Runtime,"Initial source prefix escaped Runtime");
      auto*r=startup->runtime_operation();check(r->service()==story::SceneService::Frame,"Prefix needs unavailable service");r->complete_frame({0,0});}
  }
  check(startup->stage()==WorldStartupStage::InitializeMap,"Startup did not reach map initializer");
  Oracle source(assets);source.seed(f,archive);source.put(0xa1,0x2000);source.put(0xa3,0x2000);
  source.start(source.l.boot);source.run(0xc0004b);source.compare(f);
  check(source.get(0x24)==f.random.primary_word && source.get(0x26)==f.random.secondary_word,
        "Original prefix random state already differs before loading");
  const auto actor_ticks=f.actors.ticks(),frame_count=f.runtime->completed_frames();
  while(startup->stage()!=WorldStartupStage::BuzzBuzzDialogue) {
    const auto result=startup->advance(1);
    check(result!=dialogue::Progress::Suspended,"Native map demanded a fabricated service");
  }
  source.run(assets.version==eb::GameVersion::US?0xc06b21:0xc06d4f);
  compare_map(source,f);
  check(f.actors.ticks()==actor_ticks&&f.runtime->completed_frames()==frame_count,
        "Map loading advanced actors or logical input frames");
  check(bool(f.runtime->frame()),"Map loading did not publish native scenery");
  if (flag_pattern != 255) {
    for(unsigned work=0;work<100000 && startup->stage()!=WorldStartupStage::Complete;++work) {
      const auto result=startup->advance(1);
      if(result==dialogue::Progress::Suspended) {
        check(startup->service()==WorldStartupService::Runtime,"Startup tail escaped native Runtime");
        auto *runtime=startup->runtime_operation();
        check(runtime->service()==story::SceneService::Frame,"Imported Buzz Buzz needs an unavailable native service");
        runtime->complete_frame({0,0});
      }
    }
    check(startup->stage()==WorldStartupStage::Complete,"Startup tail failed to complete");
    // Resume the original startup caller through its actual return.
    source.run(0xc0ff04);
    compare_map(source,f);
    const auto artwork=f.graphics->frame();
    std::vector<unsigned> cells;
    if(assets.version==eb::GameVersion::JP)for(unsigned i=0;i<896;++i)cells.push_back(i);
    else {
      for(const auto range:std::array<std::array<unsigned,2>,7>{{{0,0x45},{0x4f,6},{0x5f,0xb},{0x70,0xa},{0x80,1},{0x90,1},{0x200,0x180}}})
        for(unsigned i=0;i<range[1];++i)cells.push_back(range[0]+i);
    }
    for(unsigned cell:cells)for(unsigned y=0;y<8;++y)for(unsigned x=0;x<8;++x) {
      const unsigned at=0xc000+cell*16+y*2;
      const unsigned value=((source.bus->video_ram[at]>>(7-x))&1)|
                           (((source.bus->video_ram[at+1]>>(7-x))&1)<<1);
      const unsigned target=(cell/32*8+y)*256+cell%32*8+x;
      check(artwork->pixels[target]==value,("Startup window atlas publication differs cell="+std::to_string(cell)+" pixel="+std::to_string(x)+","+std::to_string(y)+" got="+std::to_string(artwork->pixels[target])+" expected="+std::to_string(value)).c_str());
    }
    // Reload the same combination after actual tile animation. Its last
    // visible pixels survive the reset, and cleanup releases existing NPCs
    // after resetting population, before the original activation traversal.
    for(unsigned tick=0;tick<7;++tick) {
      source.start(0xc00172);source.run(0xc0ff04);f.area.advance_animation();
    }
    context += " reload";
    const auto animated=f.area.graphics();
    const unsigned wipe=assets.version==eb::GameVersion::JP?0x49fc:0x4676;
    source.put(wipe,1);f.load_state.wipe_palettes=true;
    source.start(assets.version==eb::GameVersion::US?0xc013f6:0xc0140c);
    source.cpu.accumulator=center.x;source.cpu.x_index=center.y;
    source.run(0xc0ff04);
    auto reload=f.loader->begin(center);
    while(!reload->advance(1)){}
    check(f.area.graphics()==animated,"Same-combination reload replaced animated graphics");
    compare_map(source,f);
    for(unsigned i=0;i<256;++i)
      check(source.get(0x10000+i*2)==f.load_state.map_palette_scratch[i],
            "Map scratch backup differs from complete original wipe");
  }
  ++cases;
}
}
int main(int argc,char **argv){using namespace startup_oracle;try{check(argc>1,"Expected imported packs");
 for(int arg=1;arg<argc;++arg){auto assets=eb::load_game_assets(argv[arg],eb::asset_profiles());startup_test::Resources resources(assets.version,assets.image);
  const auto before=cases,before_checks=checks,before_instructions=instructions;
  for(auto center:{CameraPosition{0x456,0x678},CameraPosition{4096,5120},CameraPosition{7168,8960}})
    for(unsigned flags:{0u,255u,256u})for(unsigned flavor:{1u,3u})run_map(assets,resources,center,flags,flavor);
  std::cout<<"PASS native map load "<<(assets.version==eb::GameVersion::US?"US":"JP")<<": "<<cases-before<<" complete original C0B67F map prefixes, "<<checks-before_checks<<" checks, "<<instructions-before_instructions<<" original instructions\n";
 }
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
