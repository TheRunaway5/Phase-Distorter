#define main retained_world_battle_return_reference_main
#include "native_world_battle_return_reference.cpp"
#undef main
#include "eb/native/cutscenes/display.hpp"
namespace {
using namespace world_battle_reference;
void run_display_setup(const eb::GameAssets &assets) {
  encounter_reference::Source source(assets);Rig rig(assets,true);
  cutscenes::DisplayState display_state;
  cutscenes::Display display(assets.version,display_state,{*rig.w.runtime,rig.w.interactions,rig.w.actors,*rig.w.map_load,rig.w.map_state,
      rig.w.windows,*rig.w.window_graphics,rig.w.party,rig.w.clock,rig.w.presentation,rig.w.visual,rig.w.music,rig.w.music_state,
      rig.w.palette,rig.w.scratch,rig.w.display,rig.w.frame_display,rig.w.fade,rig.b.background,rig.b.loader,rig.b.video,rig.b.blank,
      rig.b.frame,rig.b.frame_state,rig.content.layers,rig.w.layer,rig.audio});
  unsigned cases{};
  for(unsigned mode=0;mode<256;++mode) {
    source.bus->work_ram[0xf]=std::uint8_t(mode);
    source.bus->work_ram[0x14]=0xb7;
    source.bus->work_ram[0x16]=std::uint8_t(mode);
    rig.b.video.mode=std::uint8_t(mode);
    rig.b.video.maps[3]=0xb7;
    rig.b.video.graphics[1]=std::uint8_t(mode);
    rig.w.frame_display.object_size=0x17;
    source.bus->work_ram[0xe]=0x17;
    for(unsigned plane=0;plane<4;++plane) {
      rig.w.display.staged_scroll[plane]={std::uint16_t(plane*53+18),std::uint16_t(plane*37+9)};
      source.put(0x31+plane*4,plane*53+18);source.put(0x33+plane*4,plane*37+9);
    }
    rig.w.presentation.setup_overworld_video();source.call(0xc00013);
    check(rig.b.video.mode==source.bus->work_ram[0xf],"OVERWORLD_SETUP_VRAM BGMODE differs");
    for(unsigned i=0;i<4;++i) {
      check(rig.b.video.maps[i]==source.bus->work_ram[0x11+i],"OVERWORLD_SETUP_VRAM BG map differs");
      check(rig.w.display.staged_scroll[i].x==source.word(0x31+i*4) &&
          rig.w.display.staged_scroll[i].y==source.word(0x33+i*4),"OVERWORLD_SETUP_VRAM retained scroll differs");
    }
    for(unsigned i=0;i<2;++i)check(rig.b.video.graphics[i]==source.bus->work_ram[0x15+i],"OVERWORLD_SETUP_VRAM BG graphics differs");
    check(rig.w.frame_display.object_size==source.bus->work_ram[0xe],"OVERWORLD_SETUP_VRAM OBSEL differs");
    ++cases;
  }
  source.bus->work_ram[0xd]=0x80;source.bus->write_byte(0x2100,0x80);
  rig.w.fade.write_brightness(0x80);
  for(unsigned i=0;i<65536;++i) {
    const auto value=std::uint8_t(i*73+9);
    source.bus->video_ram[i]=value;rig.w.display.set_vram_byte(std::uint16_t(i),value);
    source.bus->work_ram[0x10000+i]=value;rig.w.scratch.bytes[i]=value;
  }
  source.call(0xc0004b);rig.w.map_load->initialize_overworld();
  const auto output=rig.w.display.vram();
  for(unsigned i=0;i<65536;++i) {
    check(output[i]==source.bus->video_ram[i],"OVERWORLD_INITIALIZE physical VRAM clear differs");
    check(rig.w.scratch.bytes[i]==source.bus->work_ram[0x10000+i],"OVERWORLD_INITIALIZE retained BUFFER differs");
  }
  check(source.nmis==0 && source.polls==0 && rig.w.clock.publications==0 && rig.w.clock.input_polls==0,
      "World display setup introduced a logical/publication/input frame");
  check(!rig.w.map_state.loaded_combination && !rig.w.map_state.loaded_palette &&
      rig.w.display.pending().empty(),"OVERWORLD_INITIALIZE retained loaded map or deferred blank DMA");
  std::cout<<"PASS "<<assets.title<<" worlddisplay layoutcases="<<cases<<" 65536VRAM+65536BUFFER bytes exact noframes/input sourceinstructions="<<source.cpu.instruction_count<<'\n';
}
}
int main(int argc,char **argv) {if(argc<2)return 77;try{for(int i=1;i<argc;++i)
  run_display_setup(eb::load_game_assets(argv[i],eb::asset_profiles()));}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
