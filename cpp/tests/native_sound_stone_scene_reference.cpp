// Complete source USE_SOUND_STONE and SpecialEvent9/16 restoration callers.
// The reference CPU and WRAM are confined to this test executable.
#define main retained_world_battle_return_reference_main
#include "native_world_battle_return_reference.cpp"
#undef main
#include "eb/native/cutscenes/sound_stone/scene.hpp"
#include "eb/native/cutscenes/services.hpp"
#include <optional>
#include <map>

namespace sound_stone_scene_reference {
using namespace world_battle_reference;
namespace stone=cutscenes::sound_stone;
unsigned cases{},compared_words{},sampled_operations{},render_samples{};
struct PublishedObject {
  float x{},y{};unsigned width{},height{};int priority{};bool math{};
  std::vector<std::uint16_t> pixels;
  bool operator==(const PublishedObject &) const = default;
};
std::vector<PublishedObject> objects(const eb::DirectSceneFrame &frame) {
  std::vector<PublishedObject> out;
  for(const auto &quad:frame.quads)if(quad.object) {
    PublishedObject object{quad.x,quad.y,quad.width,quad.height,quad.priority,quad.color_math_eligible,{}};
    for(unsigned y=0;y<quad.height;++y)for(unsigned x=0;x<quad.width;++x)
      object.pixels.push_back(frame.palette_indices[(quad.v+y)*frame.atlas_width+quad.u+x]);
    out.push_back(std::move(object));
  }
  return out;
}
void drive_sampled(Rig &rig,stone::Scene::Operation &operation,stone::State &state) {
  std::vector<PublishedObject> published;
  std::uint64_t publication=rig.w.clock.publications;
  bool enabled{};const auto last_sample_publication=publication+80;
  const auto sample=[&] {
    if(!enabled||rig.w.clock.publications>last_sample_publication)return;
    auto &w=rig.w;
    cutscenes::DisplayView view{w.display.vram(),w.frame_display.screen().scroll,{},
        w.frame_display.displayed_hdma_enable,w.clock.publications,w.frame_display.screen().display_id,false,{}};
    for(unsigned i=0;i<256;++i)view.palette[i]=w.palette.displayed_palette(i/16)[i%16];
    const auto retained=state;const auto clock=w.clock.frame_counter;const auto polls=w.clock.input_polls;
    const auto random=std::array{w.random.primary_word,w.random.secondary_word};
    const auto first=objects(*operation.capture_display(view));
    for(unsigned repeated=0;repeated<3;++repeated) {
      check(objects(*operation.capture_display(view))==first,"Repeated actual Sound Stone capture changes its objects");++render_samples;
    }
    check(state==retained&&w.clock.frame_counter==clock&&w.clock.input_polls==polls&&
        random==std::array{w.random.primary_word,w.random.secondary_word},"Sound Stone sampling advances its gameplay owners");
    if(publication==w.clock.publications)check(first==published,"Sound Stone replaces displayed objects before a real publication");
    else {publication=w.clock.publications;published=first;}
  };
  for(unsigned work=0;work<1000000;++work) {
    const auto progress=operation.advance(1);
    // The source initializes these maps after the real background load. They
    // remain initialized through restoration, so no test owner bypasses setup.
    if(enabled&&(rig.w.frame_display.object_size!=0x61||rig.w.layer.value==1))enabled=false;
    if(!enabled&&rig.w.frame_display.object_size==0x61&&rig.w.layer.value!=1&&state.small_map[4]==0x80) {enabled=true;publication=rig.w.clock.publications;published=objects(*operation.capture_display(
        {rig.w.display.vram(),rig.w.frame_display.screen().scroll,{},rig.w.frame_display.displayed_hdma_enable,
         rig.w.clock.publications,rig.w.frame_display.screen().display_id,false,{}}));}
    if(progress==dialogue::Progress::Finished) {++sampled_operations;return;}
    if(progress==dialogue::Progress::Suspended) {
      sample();
      auto *child=operation.runtime_operation();check(child,"Sound Stone sampling lost its real runtime child");
      rig.service(*child);sample();
    }
  }
  throw std::runtime_error("Sampled Sound Stone operation budget exceeded");
}
void compare_state(const Source &source,const stone::State &state) {
  const unsigned base=source.jp?0xb553:0xb37e;
  for(unsigned i=0;i<8;++i) {
    const auto &m=state.melodies[i];
    const std::array<std::uint16_t,7> values{m.state,m.radius_hold,m.orbit_tile_offset,m.orbit_frame,m.radius,m.angle,m.unknown12};
    for(unsigned j=0;j<values.size();++j) {
      ++compared_words;
      check(values[j]==source.word(base+i*14+j*2),"Complete Sound Stone retained playback differs");
    }
  }
  check(std::equal(state.large_map.begin(),state.large_map.end(),source.bus->work_ram.begin()+base+112),"Complete Sound Stone large map differs");
  check(std::equal(state.small_map.begin(),state.small_map.end(),source.bus->work_ram.begin()+base+117),"Complete Sound Stone small map differs");
}
void complete(const eb::GameAssets &assets,unsigned mask,unsigned cancel_after,bool nested) {
  Rig rig(assets);Source source(assets);source.original_object_anchor_comparisons=true;source.initialize();source.fixed_buttons=0;
  cutscenes::DisplayState display_state;
  cutscenes::Display display(assets.version,display_state,{*rig.w.runtime,rig.w.interactions,rig.w.actors,
      *rig.w.map_load,rig.w.map_state,rig.w.windows,*rig.w.window_graphics,rig.w.party,rig.w.clock,
      rig.w.presentation,rig.w.visual,rig.w.music,rig.w.music_state,rig.w.palette,rig.w.scratch,
      rig.w.display,rig.w.frame_display,rig.w.fade,rig.b.background,rig.b.loader,rig.b.video,
      rig.b.blank,rig.b.frame,rig.b.frame_state,rig.content.layers,rig.w.layer,rig.audio});
  rig.w.bind_actor_graphics(assets.image);
  auto snapshot=saved(rig,false);auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,snapshot.state,0);
  auto startup=rig.w.startup->begin(snapshot);
  while(startup->stage()!=WorldStartupStage::ResetWorld) {
    const auto p=startup->advance(1);if(p==dialogue::Progress::Suspended)rig.service(*startup->runtime_operation());
  }
  seed(source,rig,archive);near_call(source,source.jp?0xc0b652:0xc0b67f);rig.drive(*startup);startup.reset();
  stone::Resources resources(assets.image,assets.version);stone::State state;
  stone::Scene scene(resources,state,display,rig.w.input);
  for(unsigned i=0;i<8;++i) {
    const unsigned flag=resources.flag(i)-1;
    if(mask&(1u<<i))rig.w.text.event_flags[flag/8]|=std::uint8_t(1u<<(flag%8));
    else rig.w.text.event_flags[flag/8]&=std::uint8_t(~(1u<<(flag%8)));
  }
  std::copy(rig.w.text.event_flags.begin(),rig.w.text.event_flags.end(),source.bus->work_ram.begin()+(source.jp?0x9eb3:0x9c08));
  const unsigned initial_polls=source.raw_inputs.size(),initial_nmi=source.nmis;
  const unsigned wait_call=source.jp?0xc48270:0xc4ae03;unsigned playback_waits{};
  struct Phase {const char *name;unsigned nmis,polls;std::uint64_t instructions,clocks;};
  std::vector<Phase> phases{{"Entry",source.nmis,source.polls,source.cpu.instruction_count,source.bus->master_clocks()}};
  // Exact original source callsites, rather than intercepting any callee or
  // inventing a native wait for its CPU work. Regional macro expansions differ
  // after the compressed-graphics transfer; addresses come from that region's
  // generated instruction inventory and are fixed test-only identities.
  const std::map<unsigned,const char *> checkpoints=source.jp?
      std::map<unsigned,const char *>{{0xc48143,"BlankReset"},{0xc48147,"StopMusic"},{0xc4814b,"EnemySprites"},
          {0xc4816b,"GraphicsDecompress"},{0xc48181,"GraphicsTransfer"},{0xc48199,"WindowPalette"},
          {0xc48195,"PaletteCopy"},{0xc481a6,"BackgroundLoad"},{0xc48249,"BlankRetain"},
          {0xc48251,"FadeIn"},{0xc485fa,"FadeOut"},{0xc4860c,"ExitBlank"},
          {0xc48613,"LayerRestore"},{0xc48617,"ReloadMap"},{0xc4861f,"RestoreFadeIn"}}:
      std::map<unsigned,const char *>{{0xc4acda,"BlankReset"},{0xc4acde,"StopMusic"},{0xc4ace2,"EnemySprites"},
          {0xc4ad02,"GraphicsDecompress"},{0xc4ad18,"GraphicsTransfer"},{0xc4ad30,"WindowPalette"},
          {0xc4ad2c,"PaletteCopy"},{0xc4ad3d,"BackgroundLoad"},{0xc4addc,"BlankRetain"},
          {0xc4ade4,"FadeIn"},{0xc4b18d,"FadeOut"},{0xc4b19f,"ExitBlank"},
          {0xc4b1a6,"LayerRestore"},{0xc4b1aa,"ReloadMap"},{0xc4b1b2,"RestoreFadeIn"}};
  bool entering_wait{},fade_in_seen{},first_draw_published{};unsigned visible_inherited_oam{};
  source.observer=[&](Source &s) {
    const unsigned pc=s.cpu.program_counter;
    if(const auto checkpoint=checkpoints.find(pc);checkpoint!=checkpoints.end()) {
      if(phases.back().name!=checkpoint->second)phases.push_back({checkpoint->second,s.nmis,s.polls,s.cpu.instruction_count,s.bus->master_clocks()});
      if(std::string_view(checkpoint->second)=="FadeIn")fade_in_seen=true;
    }
    if(pc==wait_call&&!entering_wait) {
      entering_wait=true;
      if(phases.back().name!=std::string_view("Playback"))phases.push_back({"Playback",s.nmis,s.polls,s.cpu.instruction_count,s.bus->master_clocks()});
      // Only a source actual WAIT changes PAD_PRESS; the held button stays
      // asserted after the requested cancellation point.
      if(cancel_after&&++playback_waits>=cancel_after)s.fixed_buttons=0x80;
    }
    if(pc==wait_call+4)entering_wait=false;
    if(pc==(s.jp?0xc485d1u:0xc4b164u))first_draw_published=true;
    if(pc==0xc08170&&fade_in_seen&&!first_draw_published) {
      const auto brightness=s.bus->scene_read_view().ppu_registers[0];
      if(!(brightness&0x80)&&(brightness&15))++visible_inherited_oam;
    }
  };
  const std::uint8_t event=cancel_after?9:16;
  if(nested)source.call(source.jp?0xc1bd62:0xc1befc,event);
  else source.call(source.jp?0xc48137:0xc4acce,cancel_after!=0);
  source.observer={};
  phases.push_back({"Return",source.nmis,source.polls,source.cpu.instruction_count,source.bus->master_clocks()});
  for(unsigned i=0;i+1<phases.size();++i) {
    const auto &p=phases[i],&next=phases[i+1];
    std::cout<<"SOURCE Sound Stone phase "<<assets.title<<" flags="<<mask<<" cancel_after="<<cancel_after
        <<" phase="<<p.name<<" nmis="<<next.nmis-p.nmis<<" polls="<<next.polls-p.polls
        <<" instructions="<<next.instructions-p.instructions<<" master_clocks="<<next.clocks-p.clocks<<'\n';
  }
  check(visible_inherited_oam==0,"Complete Sound Stone exposes inherited visible OAM before its first draw");
  std::cout<<"SOURCE Sound Stone inherited OAM "<<assets.title<<" flags="<<mask<<" cancel_after="<<cancel_after
      <<" nested="<<nested<<" visible_frames="<<visible_inherited_oam<<std::endl;
  rig.inputs=&source.raw_inputs;rig.cursor=initial_polls;rig.phase="sound-stone";
  const auto initial_publications=rig.w.clock.publications,initial_native_polls=rig.w.clock.input_polls;
  std::uint16_t result{};
  if(nested) {
    cutscenes::Services services(assets.image,assets.version,display,rig.w.input);
    rig.special_events.bind_cinematics(services);
    auto program=std::make_shared<dialogue::Program>(assets.version,
        std::vector<dialogue::ContentBlock>{{0,0,{0x1f,0x41,event,0x02}}});
    dialogue::Conversation conversation(program,rig.w.prompts);conversation.start(dialogue::Location{0,0});
    auto parent=rig.w.runtime->begin(conversation);
    while(parent->advance(1)!=dialogue::Progress::Suspended){}
    const auto &request=std::get<dialogue::Request>(*parent->dialogue_event());
    check(request.kind==dialogue::RequestKind::SpecialEvent&&request.special_event==event,
        "Sound Stone dialogue did not enter the actual SpecialEvent request");
    auto operation=rig.special_events.begin(event,rig.w.runtime->scene_operation(*parent),parent.get());
    for(unsigned work=0;!operation->complete()&&work<1000000;++work) {
      if(operation->advance(1)==dialogue::Progress::Suspended) {
        auto *cinematic=operation->cinematic();check(cinematic,"SpecialEvent lost its actual Sound Stone child");
        auto *runtime=cinematic->runtime_operation();check(runtime,"Sound Stone suspension lacks its real runtime child");rig.service(*runtime);
      }
    }
    check(operation->complete(),"Nested Sound Stone restoration budget exceeded");result=operation->result();operation.reset();
    dialogue::Response response;response.special_event_result=result;parent->respond_dialogue(response);rig.runtime(*parent);parent.reset();
    check(!services.busy()&&!services.failed()&&!rig.special_events.busy()&&!rig.special_events.failed(),"Completed Sound Stone poisoned its special event owners");
  } else {
    auto operation=scene.begin(cancel_after!=0);drive_sampled(rig,*operation,state);result=operation->result();operation.reset();compare_state(source,state);
    check(!scene.busy()&&!scene.failed(),"Completed Sound Stone poisoned its actual scene owner");
  }
  if(!nested)std::cout<<"SAMPLING PASS Sound Stone complete "<<assets.title<<" flags="<<mask
      <<" cancel_after="<<cancel_after<<" captures="<<render_samples<<std::endl;
  check(!display.busy()&&!display.failed(),"Completed Sound Stone retained its display continuation");
  check(result==0,"Sound Stone SpecialEvent result differs");
  check(rig.cursor==source.raw_inputs.size(),"Complete Sound Stone input poll count differs");
  check(rig.w.clock.input_polls-initial_native_polls==source.raw_inputs.size()-initial_polls,"Sound Stone input receipt differs");
  const bool physical_timing_matches=rig.w.clock.publications-initial_publications==source.nmis-initial_nmi;
  std::cout<<"TIMING Sound Stone complete "<<assets.title<<" flags="<<mask<<" cancel_after="<<cancel_after
      <<" nested="<<nested<<" native_nmis="<<rig.w.clock.publications-initial_publications
      <<" source_nmis="<<source.nmis-initial_nmi<<std::endl;
  check(rig.w.random.primary_word==source.word(0x24)&&rig.w.random.secondary_word==source.word(0x26),"Sound Stone restoration RNG differs");
  compare_party(source,rig);
  for(unsigned i=0;i<256;++i) {
    check(rig.w.palette.staged_color(i)==source.word(0x200+i*2),"Sound Stone restored staged palette differs color="+std::to_string(i));
    const auto native_color=rig.w.palette.displayed_palette(i/16)[i%16];
    const auto source_color=source.bus->palette_ram[i*2]|unsigned(source.bus->palette_ram[i*2+1])<<8;
    check(native_color==source_color,"Sound Stone restored displayed palette differs color="+
          std::to_string(i)+" native="+std::to_string(native_color)+" source="+std::to_string(source_color));
  }
  for(unsigned i=0;i<65536;++i)check(rig.w.display.vram()[i]==source.bus->video_ram[i],"Sound Stone final VRAM differs byte="+std::to_string(i));
  check(rig.w.fade.state().brightness==source.bus->work_ram[0xd]&&rig.w.fade.state().step==source.bus->work_ram[0x28]&&
      rig.w.fade.state().delay==source.bus->work_ram[0x29]&&rig.w.fade.state().remaining==source.bus->work_ram[0x2a],"Sound Stone final asynchronous fade differs");
  check(rig.w.frame_display.object_size==source.bus->work_ram[0x0e],"Sound Stone restored object size differs");
  check(rig.audio.current_track()==source.word(source.jp?0xb6ec:0xb53b),"Sound Stone restored audio track differs");
  std::cout<<"STATE PASS Sound Stone complete "<<assets.title<<" flags="<<mask<<" cancel_after="<<cancel_after
      <<" nested="<<nested<<" polls="<<source.raw_inputs.size()-initial_polls<<" native_nmis="
      <<rig.w.clock.publications-initial_publications<<" source_nmis="<<source.nmis-initial_nmi<<std::endl;
  check(physical_timing_matches,"Complete Sound Stone physical NMI count differs native="+
      std::to_string(rig.w.clock.publications-initial_publications)+" source="+std::to_string(source.nmis-initial_nmi));
  ++cases;
  std::cout<<"PASS Sound Stone complete "<<assets.title<<" flags="<<mask<<" cancel_after="<<cancel_after<<" nested="<<nested
      <<" polls="<<source.raw_inputs.size()-initial_polls<<" nmis="<<source.nmis-initial_nmi<<" source_instructions="<<source.cpu.instruction_count<<'\n';
}
}
int main(int argc,char **argv) {
  try {
    if(argc<2)return 77;
    unsigned failures{};
    for(int i=1;i<argc;++i) {
      const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
      const auto one=[&](unsigned mask,unsigned cancel,bool nested) {
        try {sound_stone_scene_reference::complete(assets,mask,cancel,nested);}
        catch(const std::exception &e) {++failures;std::cerr<<"FAIL Sound Stone complete "<<assets.title
            <<" flags="<<mask<<" cancel_after="<<cancel<<" nested="<<nested<<": "<<e.what()<<std::endl;}
      };
      one(0,1,false);one(0x81,75,false);one(0,0,false);one(255,0,false);one(0xaa,75,true);one(1,0,true);
    }
    std::cout<<(failures?"FAIL":"PASS")<<" Sound Stone complete cases="<<sound_stone_scene_reference::cases
        <<" failures="<<failures<<" playback_words="<<sound_stone_scene_reference::compared_words
        <<" sampled_operations="<<sound_stone_scene_reference::sampled_operations<<" render_samples="<<sound_stone_scene_reference::render_samples<<'\n';return failures?1:0;
  }catch(const std::exception &e){std::cerr<<"FAIL Sound Stone complete: "<<e.what()<<'\n';return 1;}
}
