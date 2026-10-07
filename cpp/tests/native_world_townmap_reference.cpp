// Original callers are reference-only. The tested TownMap scene retains no
// processor, address interpreter or copied WRAM image.
#include "eb/direct_scene.hpp"
#define main retained_world_battle_return_reference_main
#include "native_world_battle_return_reference.cpp"
#undef main
#include "eb/native/world/townmap/scene.hpp"
#include <set>
namespace townmap_reference {
using namespace world_battle_reference;
namespace town=world::townmap;
std::uint64_t pixel_checks{},object_checks{},cases{};
std::uint32_t color(unsigned p) {
  const unsigned r=p&31,g=(p>>5)&31,b=(p>>10)&31;
  return 0xff000000u|((r<<3|r>>2)<<16)|((g<<3|g>>2)<<8)|(b<<3|b>>2);
}
std::array<std::uint16_t,2> point(const town::Resources &resources,unsigned id,unsigned arrow=0) {
  for(unsigned y=0;y<80;++y)for(unsigned x=0;x<32;++x) {
    const auto sector=resources.sector(x*256,y*128);
    if((sector.selector&15)==id && (sector.selector&0x70)==arrow)return {std::uint16_t(x*256),std::uint16_t(y*128)};
  }
  throw std::runtime_error("Authored town-map sector missing");
}
void artwork(const eb::GameAssets &assets) {
  cases=pixel_checks=object_checks=0;
  town::Resources resources(assets.image,assets.version);Source source(assets);source.initialize();
  source.call(source.jp?0xc0870e:0xc08715);
  // LOAD_TOWN_MAP_DATA inherits the actual overworld Mode1 admission.
  source.bus->work_ram[0x0f]=1;source.bus->write_byte(0x2105,1);
  source.fixed_buttons=0;
  const unsigned game=source.jp?0x9aa9:0x97f5,delta=source.jp?3:0,flags_at=source.jp?0x9eb3:0x9c08;
  const unsigned counters=source.jp?0xb682:0xb4ae;
  const unsigned wait=source.jp?0xc0874c:0xc08756;
  for(unsigned map=0;map<6;++map) {
    const auto position=point(resources,map+1);source.put(game+130-delta,position[0]);source.put(game+134-delta,position[1]);
    source.call(source.jp?0xc088a3:0xc088b1);
    source.cpu.accumulator=map;
    try{near_call(source,source.jp?0xc4a823:0xc4d553);}
    catch(const std::exception &e){throw std::runtime_error(std::string(e.what())+" map="+std::to_string(map)+" "+
        source.cpu.describe_registers()+" fade="+std::to_string(source.bus->work_ram[0x28])+" nmis="+std::to_string(source.nmis));}
    for(unsigned i=0;i<18;++i)source.call(wait);
    check(source.bus->work_ram[0xd]==15,"Original town-map fade never reached full brightness");
    const auto &decoded=resources.map(map).decoded;
    for(unsigned i=0;i<32;++i)check(source.word(0x200+i*2)==resources.map(map).palette[i],"Town-map background palette staging differs");
    check(std::equal(decoded.begin()+0x40,decoded.begin()+0x840,source.bus->video_ram.begin()+0x6000),"Town-map arrangement DMA differs");
    check(std::equal(decoded.begin()+0x840,decoded.end(),source.bus->video_ram.begin()),"Town-map split graphics DMA differs");
    check(std::equal(resources.labels().begin(),resources.labels().end(),source.bus->video_ram.begin()+0xc000),"Regional label DMA differs");
    check(std::equal(decoded.begin()+resources.labels().size(),
        decoded.begin()+(source.jp?0x2000:0x2400),source.bus->video_ram.begin()+0xc000+resources.labels().size()),
        "Regional label DMA retained map-buffer tail differs");
    std::set<unsigned> arrow_modes;
    for(unsigned sy=0;sy<80;++sy)for(unsigned sx=0;sx<32;++sx) {
      const auto sector=resources.sector(sx*256,sy*128);
      if((sector.selector&15)==map+1)arrow_modes.insert(sector.selector&0x70);
    }
    for(const auto arrow:arrow_modes) {
    const auto position=point(resources,map+1,arrow);
    source.put(game+130-delta,position[0]);source.put(game+134-delta,position[1]);
    for(unsigned mode=0;mode<2;++mode)for(const unsigned animation:{60u,10u,9u,1u}) {
      std::array<std::uint8_t,128> flags{};if(mode)flags.fill(255);
      std::copy(flags.begin(),flags.end(),source.bus->work_ram.begin()+flags_at);
      const town::State state{std::uint16_t(animation),std::uint16_t(animation==60?20:animation),12};
      source.put(counters,state.animation);source.put(counters+2,state.player_animation);source.put(counters+4,state.palette_countdown);
      source.call(source.jp?0xc088a3:0xc088b1);source.cpu.accumulator=map;
      near_call(source,source.jp?0xc4a70f:0xc4d43f);
      source.call(source.jp?0xc08b17:0xc08b26);
      source.call(wait);source.call(wait);
      const auto draws=town::select_icons(resources,map,resources.sector(position[0],position[1]),state,flags);
      auto rendered=std::make_shared<eb::DirectSceneFrame>(*town::render(resources,map,draws));
      eb::DirectSceneFrame::Effects effects;effects.main={true,false,false,false,true};
      effects.brightness=15;effects.backdrop=color(resources.map(map).palette[0]);rendered->effects=effects;
      const auto pixels=eb::rasterize_direct_scene({rendered,{}});
      unsigned objects{};
      for(const auto &draw:draws)for(const auto &part:resources.icon(draw.icon)) {
        const int x=draw.x+part.x,y=draw.y+part.y-1;
        if(y>=224||y< -32||x>=256||x< -256)continue;
        check(source.bus->object_attributes[objects*4]==std::uint8_t(x)&&
            source.bus->object_attributes[objects*4+1]==std::uint8_t(y)&&
            source.bus->object_attributes[objects*4+2]==std::uint8_t(part.tile)&&
            source.bus->object_attributes[objects*4+3]==std::uint8_t(part.tile>>8),"Town-map OAM command differs");
        const unsigned bits=(source.bus->object_attributes[512+objects/4]>>((objects%4)*2))&3;
        check(bits==((x<0?1u:0u)|(part.large?2u:0u)),"Town-map OAM size/X-high differs");
        ++objects;++object_checks;
      }
      for(unsigned i=0;i<pixels.size();++i) {
        ++pixel_checks;
        if((pixels[i]&0xffffff)!=(source.bus->native_framebuffer[i]&0xffffff))
          throw std::runtime_error("Town-map regional pixel differs palette0="+std::to_string(source.word(0x200))+" palette0display="+
              std::to_string(source.bus->palette_ram[0]|unsigned(source.bus->palette_ram[1])<<8)+" map="+std::to_string(map)+" phase="+
              std::to_string(animation)+" flags="+std::to_string(mode)+" x="+std::to_string(i%256)+
              " y="+std::to_string(i/256)+" native="+std::to_string(pixels[i]&0xffffff)+
              " original="+std::to_string(source.bus->native_framebuffer[i]&0xffffff));
      }
      check(source.word(counters)==(animation==1?60:animation-1)&&
            source.word(counters+2)==(state.player_animation==1?20u:unsigned(state.player_animation)-1)&&
            source.word(counters+4)==11,"Town-map helper counters differ");
      ++cases;
    }
    }
  }
  std::cout<<"PASS TownMap artwork "<<assets.title<<" cases="<<cases<<" pixel_comparisons="<<pixel_checks
      <<" oam_commands="<<object_checks<<" source_instructions="<<source.cpu.instruction_count<<'\n';
}
void complete(const eb::GameAssets &assets,bool nested=false) {
  Rig rig(assets);Source source(assets);source.initialize();
  auto snapshot=saved(rig,false);auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,snapshot.state,0);
  auto startup=rig.w.startup->begin(snapshot);
  while(startup->stage()!=WorldStartupStage::ResetWorld){const auto p=startup->advance(1);if(p==dialogue::Progress::Suspended)rig.service(*startup->runtime_operation());}
  seed(source,rig,archive);near_call(source,source.jp?0xc0b652:0xc0b67f);rig.drive(*startup);startup.reset();
  town::Resources resources(assets.image,assets.version);town::State state;
  town::Scene scene(resources,state,{*rig.w.runtime,rig.w.input,rig.w.interactions,*rig.w.map_load,
      rig.w.windows,*rig.w.window_graphics,rig.w.party,rig.w.clock,rig.w.presentation,rig.w.visual,
      rig.w.music,rig.w.music_state,rig.w.palette,rig.w.scratch,rig.w.display,rig.w.frame_display,rig.w.fade});
  const auto initial_polls=source.raw_inputs.size();source.fixed_buttons=0;
  const auto initial_nmi=source.nmis;
  std::array<std::uint8_t,0x4840> loaded_buffer{};
  std::array<std::uint8_t,65536> loaded_video{};
  std::array<std::uint16_t,256> loaded_palette{};bool source_loaded{},native_loaded{};
  source.observer=[&](Source &s) {
    if(s.nmis>initial_nmi+35)s.fixed_buttons=0x40;
    if(!source_loaded&&s.cpu.program_counter==(s.jp?0xc4a70fu:0xc4d43fu)) {
      std::copy_n(s.bus->work_ram.begin()+0x10000,loaded_buffer.size(),loaded_buffer.begin());
      std::copy(s.bus->video_ram.begin(),s.bus->video_ram.end(),loaded_video.begin());
      for(unsigned i=0;i<256;++i)loaded_palette[i]=s.word(0x200+i*2);
      source_loaded=true;
    }
  };
  // MAIN_LOOP has selected an actual OAM buffer before SHOW_TOWN_MAP enters.
  source.call(source.jp?0xc088a3:0xc088b1);
  if(nested)source.call(source.jp?0xc1bd62:0xc1befc,7);
  else source.call(source.jp?0xc4a951:0xc4d681);
  source.observer={};
  rig.inputs=&source.raw_inputs;rig.cursor=initial_polls;rig.phase="townmap";
  auto service=[&](WorldRuntime::Operation &runtime) {
    if(!native_loaded&&runtime.service()==story::SceneService::Frame) {
      check(source_loaded,"Original caller did not enter its actual loaded map draw");
      check(std::equal(loaded_buffer.begin(),loaded_buffer.end(),rig.w.scratch.bytes.begin()),
          "Actual TownMap shared scratch prefix or retained label tail differs");
      for(const auto range:std::array<std::array<unsigned,2>,3>{{{0,0x4000},{0x6000,0x800},
          {0xc000,source.jp?0x2000u:0x2400u}}})
        check(std::equal(loaded_video.begin()+range[0],loaded_video.begin()+range[0]+range[1],
            rig.w.display.vram().begin()+range[0]),"Actual TownMap split DMA differs from the original caller");
      for(unsigned i=0;i<256;++i)check(rig.w.palette.staged_color(i)==loaded_palette[i],
          "Actual TownMap raw loaded palette differs from the original caller");
      native_loaded=true;
    }
    rig.service(runtime);
  };
  std::uint16_t result{};
  if(nested) {
    rig.special_events.bind_town_map(scene);
    auto program=std::make_shared<dialogue::Program>(assets.version,
        std::vector<dialogue::ContentBlock>{{0,0,{0x1f,0x41,7,0x02}}});
    dialogue::Conversation conversation(program,rig.w.prompts);
    conversation.start(dialogue::Location{0,0});
    auto parent=rig.w.runtime->begin(conversation);
    while(parent->advance(1)!=dialogue::Progress::Suspended){}
    const auto &request=std::get<dialogue::Request>(*parent->dialogue_event());
    check(request.kind==dialogue::RequestKind::SpecialEvent&&request.special_event==7,
        "Actual runtime parent did not reach its SpecialEvent7 request");
    auto operation=rig.special_events.begin(7,rig.w.runtime->scene_operation(*parent),parent.get());
    for(unsigned work=0;!operation->complete()&&work<1000000;++work) {
      if(operation->advance(1)==dialogue::Progress::Suspended) {
        auto *child=operation->town_map();check(child,"SpecialEvent7 lost its actual town-map owner");
        auto *runtime=child->runtime_operation();check(runtime,"Nested town-map suspension lacks actual runtime");
        service(*runtime);
      }
    }
    check(operation->complete(),"Actual nested SpecialEvent7 did not finish");
    result=operation->result();operation.reset();
    dialogue::Response response;response.special_event_result=result;parent->respond_dialogue(response);
    rig.runtime(*parent);parent.reset();
    check(!rig.special_events.busy()&&!rig.special_events.failed()&&!scene.busy()&&!scene.failed(),
        "Completed SpecialEvent7 poisoned or retained its actual owners");
  } else {
    auto operation=scene.begin();
    for(unsigned work=0;!operation->complete()&&work<1000000;++work)
      if(operation->advance(1)==dialogue::Progress::Suspended)service(*operation->runtime_operation());
    check(operation->complete(),"Complete direct TownMap work budget exceeded");
    result=operation->result();operation.reset();
  }
  check(native_loaded,"Actual TownMap caller never reached its shared DMA load");
  check(rig.cursor==source.raw_inputs.size(),"Complete town-map input poll count differs");
  check(result==source.cpu.accumulator,"Town-map return selector differs");
  const unsigned counters=source.jp?0xb682:0xb4ae;
  check(state.animation==source.word(counters)&&state.player_animation==source.word(counters+2)&&
      state.palette_countdown==source.word(counters+4),"Complete TownMap counters differ");
  for(unsigned i=0;i<256;++i)check(rig.w.palette.staged_color(i)==source.word(0x200+i*2),"Complete town-map restored raw palette differs");
  for(unsigned i=0;i<256;++i)check(rig.w.palette.displayed_palette(i/16)[i%16]==
      (source.bus->palette_ram[i*2]|unsigned(source.bus->palette_ram[i*2+1])<<8),"Complete TownMap displayed palette differs");
  if(rig.w.clock.new_frame_started!=source.bus->work_ram[0x2b])
    std::cout<<"NOTE original CPU-time pending NMI byte="<<unsigned(source.bus->work_ram[0x2b])
        <<" native explicit publication byte="<<unsigned(rig.w.clock.new_frame_started)<<'\n';
  check(rig.w.fade.state().brightness==source.bus->work_ram[0xd]&&
      rig.w.fade.state().step==source.bus->work_ram[0x28],"Complete TownMap fade differs");
  check(rig.w.music_state.disable_changes==source.word(source.jp?0x615e:0x5dd8),"Town-map music-disable word differs");
  check(rig.w.actors.scene().camera_x==source.word(0x31)&&rig.w.actors.scene().camera_y==source.word(0x33),"Town-map reload camera differs");
  const auto window_ranges=source.jp?std::vector<std::array<unsigned,2>>{{0xc000,0x3800}}
      :std::vector<std::array<unsigned,2>>{{0xc000,0x450},{0xc4f0,0x60},{0xc5f0,0xb0},
          {0xc700,0xa0},{0xc800,0x10},{0xc900,0x10},{0xe000,0x1800}};
  for(const auto range:window_ranges)for(unsigned i=0;i<range[1];++i)
    if(rig.w.display.vram()[range[0]+i]!=source.bus->video_ram[range[0]+i])
      throw std::runtime_error("TownMap actual restored window-artwork VRAM differs byte="+std::to_string(range[0]+i));
  std::cout<<"PASS complete "<<(nested?"nested SpecialEvent7 TownMap ":"TownMap ")<<assets.title<<" actual_polls="<<rig.cursor-initial_polls
      <<" source_instructions="<<source.cpu.instruction_count<<'\n';
}
void no_map(const eb::GameAssets &assets) {
  Rig rig(assets);Source source(assets);source.initialize();
  town::Resources resources(assets.image,assets.version);town::State state{0x1234,0xabcd,0xffff};
  town::Scene scene(resources,state,{*rig.w.runtime,rig.w.input,rig.w.interactions,*rig.w.map_load,
      rig.w.windows,*rig.w.window_graphics,rig.w.party,rig.w.clock,rig.w.presentation,rig.w.visual,
      rig.w.music,rig.w.music_state,rig.w.palette,rig.w.scratch,rig.w.display,rig.w.frame_display,rig.w.fade});
  const auto position=point(resources,0);
  rig.w.interactions.state().leader_x=position[0];rig.w.interactions.state().leader_y=position[1];
  const unsigned game=source.jp?0x9aa9:0x97f5,delta=source.jp?3:0,counters=source.jp?0xb682:0xb4ae;
  source.put(game+130-delta,position[0]);source.put(game+134-delta,position[1]);
  source.put(counters,0x1234);source.put(counters+2,0xabcd);source.put(counters+4,0xffff);
  const auto frames=rig.w.clock.frame_counter;
  const auto publications=rig.w.clock.publications,polls=rig.w.clock.input_polls;
  const auto video=rig.w.display.vram();const auto scratch=rig.w.scratch.bytes;
  const auto palette=rig.w.palette.staged_palette(0);const auto brightness=rig.w.fade.state().brightness;
  const auto source_polls=source.raw_inputs.size();source.call(source.jp?0xc4a951:0xc4d681);
  auto operation=scene.begin();check(operation->advance()==dialogue::Progress::Finished,
      "Absent map unexpectedly needed frame or publication work");
  check(operation->result()==0&&source.cpu.accumulator==0,"Absent map return selector differs");operation.reset();
  check(state.animation==source.word(counters)&&state.player_animation==source.word(counters+2)&&
      state.palette_countdown==source.word(counters+4),"Absent map counter reset differs");
  check(rig.w.clock.frame_counter==frames&&rig.w.clock.publications==publications&&rig.w.clock.input_polls==polls&&
      source.raw_inputs.size()==source_polls&&rig.w.display.vram()==video&&rig.w.scratch.bytes==scratch&&
      rig.w.palette.staged_palette(0)==palette&&rig.w.fade.state().brightness==brightness,
      "Absent map changed actual input, publication, scratch or video state");
  std::cout<<"PASS absent TownMap "<<assets.title<<" immediate selector0 and counter reset; no input/publication\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try{for(int i=1;i<argc;++i){const auto a=eb::load_game_assets(argv[i],eb::asset_profiles());
      townmap_reference::artwork(a);townmap_reference::complete(a);townmap_reference::complete(a,true);townmap_reference::no_map(a);}}
  catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}
}
