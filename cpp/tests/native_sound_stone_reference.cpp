// The original routine is reference-only. Its complete startup and every
// playback callee run without intercepted completion. This first test checks
// the sequence/draw domain through the exact FADE_OUT call frontier; the
// complete display/map-restoration caller is tested separately.
#include "native_encounter_source_fixture.hpp"
#include "generated_assets.hpp"
#include "eb/native/cutscenes/sound_stone/playback.hpp"
#include "eb/native/cutscenes/sound_stone/render.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
namespace stone=cutscenes::sound_stone;
using Source=encounter_reference::Source;
unsigned checks{},cases{},frames{},sprites_checked{};
bool compare_pixels{};unsigned sample_copies{1};
std::uint64_t pixel_comparisons{},visible_frames{};
void check(bool value,const std::string &message) { ++checks; if(!value) throw std::runtime_error(message); }
std::array<std::uint8_t,128> flags(const stone::Resources &r,unsigned mask) {
  std::array<std::uint8_t,128> out{};
  for(unsigned i=0;i<8;++i) if(mask&(1u<<i)) { const unsigned flag=r.flag(i)-1;out[flag/8]|=std::uint8_t(1u<<(flag%8)); }
  return out;
}
void compare_state(const Source &source,const stone::State &state,const std::string &phase) {
  const unsigned base=source.jp?0xb553:0xb37e;
  for(unsigned i=0;i<8;++i) {
    const auto &m=state.melodies[i];
    const std::array<std::uint16_t,7> words{m.state,m.radius_hold,m.orbit_tile_offset,m.orbit_frame,m.radius,m.angle,m.unknown12};
    for(unsigned j=0;j<words.size();++j)
      check(source.word(base+i*14+j*2)==words[j],phase+" playback word differs melody="+std::to_string(i)+" field="+std::to_string(j));
  }
  check(std::equal(state.large_map.begin(),state.large_map.end(),source.bus->work_ram.begin()+base+112),phase+" large spritemap differs");
  check(std::equal(state.small_map.begin(),state.small_map.end(),source.bus->work_ram.begin()+base+117),phase+" small spritemap differs");
}
void one(const eb::GameAssets &assets,unsigned mask,bool retained,unsigned cancel_frame=0,bool cancel_enabled=true) {
  stone::Resources resources(assets.image,assets.version); stone::State state;
  Source source(assets);source.initialize();source.fixed_buttons=0;
  const auto selected=flags(resources,mask);const unsigned base=source.jp?0xb553:0xb37e;
  std::copy(selected.begin(),selected.end(),source.bus->work_ram.begin()+(source.jp?0x9eb3:0x9c08));
  for(unsigned i=0;i<8;++i) {
    auto &m=state.melodies[i];
    if(retained) m={std::uint16_t(0x100+i),std::uint16_t(0x200+i),std::uint16_t(i&1?2:0),
                   std::uint16_t(0x300+i),std::uint16_t(0x400+i),std::uint16_t(0xfa00+i*137),std::uint16_t(0x600+i)};
    const std::array<std::uint16_t,7> words{m.state,m.radius_hold,m.orbit_tile_offset,m.orbit_frame,m.radius,m.angle,m.unknown12};
    for(unsigned j=0;j<words.size();++j)source.put(base+i*14+j*2,words[j]);
  }
  const unsigned entry=source.jp?0xc48137:0xc4acce,wait_call=source.jp?0xc48270:0xc4ae03;
  const unsigned clear_call=source.jp?0xc48392:0xc4af25,update_call=source.jp?0xc485cd:0xc4b160;
  const unsigned fade_call=source.jp?0xc485fa:0xc4b18d,change=source.jp?0xc4cf5c:0xc4fbbd;
  source.cpu.program_counter=0xc4ff00;source.cpu.accumulator=cancel_enabled;
  source.cpu.status_register=eb::MainCpu65816::InterruptDisable;
  source.cpu.execute_instruction<0x22>(entry,4);
  source.until(wait_call);
  stone::Playback playback(resources,state,selected);compare_state(source,state,"entry");
  check(std::equal(resources.graphics().begin(),resources.graphics().end(),source.bus->video_ram.begin()+0x4000),"Sound Stone regional graphics DMA differs");
  for(unsigned i=0;i<96;++i)check(source.word(0x300+i*2)==resources.palette()[i],"Sound Stone palette copy differs");
  unsigned frame{},music_calls{},effect_calls{},draws{},visible_before_draw{},displayed_id{};
  stone::SequenceStep step;std::vector<stone::Sprite> sprites;
  std::array<std::vector<stone::Sprite>,2> buffers;
  std::vector<stone::Sprite> displayed_sprites;
  bool pending{},drawing{},finished{};unsigned current_music{},current_effect{};
  BattleBackgroundScenes backgrounds(assets.image,assets.version);
  const auto model=backgrounds.prepare(BattleBackgroundPair{228,229,4}).snapshot();
  std::vector<std::uint32_t> captured_pixels;unsigned captured_draws{};
  const auto capture_visible=[&] {
    const auto hardware=source.bus->scene_read_view();const auto registers=hardware.ppu_registers;
    captured_pixels.clear();
    if(!draws||(registers[0]&0x80)||!(registers[0]&15))return;
    check(displayed_id>=1&&displayed_id<=2,"Sound Stone visible capture lacks its selected source OAM");
    const auto &selected_sprites=displayed_sprites;
    for(unsigned i=0;i<selected_sprites.size();++i) {
      const auto &sprite=selected_sprites[i];const unsigned at=i*4;
      check(hardware.object_attributes[at]==std::uint8_t(sprite.x)&&
          hardware.object_attributes[at+1]==std::uint8_t(sprite.y)&&
          hardware.object_attributes[at+2]==sprite.tile&&hardware.object_attributes[at+3]==sprite.flags,
          "Sound Stone latched OAM differs draw="+std::to_string(draws)+" sprite="+std::to_string(i));
    }
    auto background=model;const unsigned record=source.jp?0xafa9:0xadd4,rows=source.jp?0x3fcc:0x3c46;
    // This is a renderer differential. Original controllers supply the test
    // snapshot's actual row values; playback/controller parity is independent
    // and is checked above. No Source values enter production rendering.
    for(unsigned ordinal=0;ordinal<2;++ordinal) {
      auto &layer=ordinal?*background.secondary:background.primary;
      const unsigned type=source.bus->work_ram[record+ordinal*119+104];
      layer.axis=type==3?BattleDistortionAxis::Vertical:BattleDistortionAxis::Horizontal;
      for(unsigned y=0;y<224;++y)layer.offsets[y]=std::uint16_t(source.word(rows+ordinal*448+y*2));
    }
    cutscenes::DisplayView view{source.bus->video_ram,{},{},source.bus->work_ram[0x1f],source.bus->completed_frames+1,std::uint8_t(displayed_id),false,{}};
    battle::BackgroundDisplayState layout;layout.mode=registers[5];
    for(unsigned i=0;i<4;++i){layout.maps[i]=registers[7+i];view.scroll[i]={hardware.background_scroll_x[i],hardware.background_scroll_y[i]};}
    layout.graphics={registers[11],registers[12]};
    for(unsigned i=0;i<256;++i)view.palette[i]=hardware.palette(i);
    const auto retained_state=state;const auto selected_melody=playback.selected(),countdown=playback.countdown();
    auto captured=std::make_shared<eb::DirectSceneFrame>(*stone::render(view,background,layout,displayed_sprites));
    eb::DirectSceneFrame::Effects effects;
    for(unsigned i=0;i<5;++i){effects.main[i]=bool(registers[0x2c]&(1u<<i));effects.sub[i]=bool(registers[0x2d]&(1u<<i));}
    for(unsigned i=0;i<6;++i)effects.math[i]=bool(registers[0x31]&(1u<<i));
    effects.use_subscreen=registers[0x30]&2;effects.subtract=registers[0x31]&0x80;effects.half=registers[0x31]&0x40;
    effects.clip=eb::DirectSceneFrame::WindowPolicy((registers[0x30]>>6)&3);
    effects.prevent=eb::DirectSceneFrame::WindowPolicy((registers[0x30]>>4)&3);
    effects.brightness=registers[0]&15;
    const auto color=[](unsigned p){const unsigned r=p&31,g=(p>>5)&31,b=(p>>10)&31;
      return 0xff000000u|((r<<3|r>>2)<<16)|((g<<3|g>>2)<<8)|(b<<3|b>>2);};
    effects.backdrop=color(view.palette[0]);
    effects.fixed={std::uint8_t(hardware.fixed_color&31),std::uint8_t((hardware.fixed_color>>5)&31),std::uint8_t((hardware.fixed_color>>10)&31)};
    captured->effects=effects;captured_pixels=eb::rasterize_direct_scene({captured,{}});captured_draws=draws;
    const auto instructions=source.cpu.instruction_count,clocks=source.bus->master_clocks();
    for(unsigned sample=1;sample<sample_copies;++sample) {
      auto repeated=std::make_shared<eb::DirectSceneFrame>(*stone::render(view,background,layout,displayed_sprites));
      repeated->effects=effects;
      check(eb::rasterize_direct_scene({repeated,{}})==captured_pixels,"Repeated Sound Stone capture changed its picture");
    }
    check(source.cpu.instruction_count==instructions&&source.bus->master_clocks()==clocks,
        "Sound Stone sampling advanced the original physical clock");
    check(state==retained_state&&playback.selected()==selected_melody&&playback.countdown()==countdown,
        "Sound Stone capture advanced its playback owner");
  };
  if(compare_pixels)source.bus->on_presentation_frame=[&](std::span<const std::uint32_t> original,unsigned width,std::uint64_t identity) {
    if(captured_pixels.empty())return;
    check(width==256&&original.size()==captured_pixels.size(),"Sound Stone original canvas differs");
    for(unsigned i=0;i<captured_pixels.size();++i) {
      ++pixel_comparisons;
      if(captured_pixels[i]!=original[i])throw std::runtime_error("Sound Stone actual scanout pixel differs flags="+std::to_string(mask)+
          " frame="+std::to_string(identity)+" draw="+std::to_string(captured_draws)+" x="+std::to_string(i%256)+
          " y="+std::to_string(i/256)+" native="+std::to_string(captured_pixels[i])+" source="+std::to_string(original[i]));
    }
    ++visible_frames;captured_pixels.clear();
  };
  for(unsigned instructions=0;instructions<100000000;++instructions) {
    const unsigned pc=source.cpu.program_counter;
    if(pc==wait_call&&!pending) {
      ++frame;step=playback.sequence();pending=true;drawing=false;current_music=current_effect=0;
      if(cancel_frame&&frame>=cancel_frame)source.fixed_buttons=0x80;
    }
    if(pending&&pc==change&&!current_music) { ++current_music;++music_calls;check(step.music&&*step.music==source.cpu.accumulator,"Sound Stone music sequence differs"); }
    if(pending&&pc==(source.jp?0xc4838e:0xc4af21)&&!current_effect) {
      ++current_effect;++effect_calls;check(step.effect&&*step.effect==source.cpu.accumulator,
          "Sound Stone driver effect sequence differs frame="+std::to_string(frame)+" source="+std::to_string(source.cpu.accumulator)+
          " native="+(step.effect?std::to_string(*step.effect):"none"));
    }
    if(pc==clear_call&&!drawing) {
      check(!step.finished&&pending&&!drawing,"Sound Stone original drew after sequence completion");
      check(current_music==unsigned(step.music.has_value())&&current_effect==unsigned(step.effect.has_value()),"Sound Stone audio call cardinality differs");
      compare_state(source,state,"sequence");sprites=playback.draw();drawing=true;
    }
    if(pc==update_call&&pending) {
      check(drawing,"Sound Stone UPDATE_SCREEN omitted its drawing phase");compare_state(source,state,"draw");
      const unsigned id=source.word(0x2e),start=id==1?0x500:0x800;
      buffers[id-1]=sprites;
      check(source.word(3)==start+sprites.size()*4,"Sound Stone accepted OAM count differs");
      for(unsigned i=0;i<sprites.size();++i) {
        const auto &sprite=sprites[i];const unsigned at=start+i*4;
        check(source.bus->work_ram[at]==std::uint8_t(sprite.x)&&source.bus->work_ram[at+1]==std::uint8_t(sprite.y)&&
              source.bus->work_ram[at+2]==sprite.tile&&source.bus->work_ram[at+3]==sprite.flags,"Sound Stone OAM command differs");
        // Partial high-table bytes remain in the real shift buffer until a
        // fourth object or UPDATE_SCREEN commits them; compare complete groups.
        if(i/4<sprites.size()/4) {
          const unsigned bits=(source.bus->work_ram[start+512+i/4]>>((i%4)*2))&3;
          check(bits==((sprite.x&0x100?1u:0u)|(sprite.large?2u:0u)),"Sound Stone OAM size/X-high differs");
        }
        ++sprites_checked;
      }
      ++draws;pending=false;
    }
    if(pc==0xc08170) {
      // The visible scanlines finish before NMI publishes the next palette,
      // scroll and OAM. Latch this complete picture before those writes, then
      // compare it at the bus's physical frame boundary.
      if(compare_pixels)capture_visible();
      const auto brightness=source.bus->scene_read_view().ppu_registers[0];
      if(!draws&&!(brightness&0x80)&&(brightness&15))++visible_before_draw;
      const unsigned requested=source.word(0x2c);
      if(requested){displayed_id=requested;displayed_sprites=buffers[requested-1];}
    }
    if(pc==fade_call) {
      finished=true;
      check(step.finished||(cancel_frame&&cancel_enabled),"Sound Stone exited without natural completion or enabled cancel");
      check(!step.finished||!pending||!drawing,"Natural completion unexpectedly drew its final WAIT");
      break;
    }
    source.step();
  }
  check(finished,"Original Sound Stone playback did not reach its exit frontier");
  frames+=frame;++cases;
  std::cout<<"PASS Sound Stone playback "<<assets.title<<" flags="<<mask<<" retained="<<retained
      <<" cancel_frame="<<cancel_frame<<" cancel_enabled="<<cancel_enabled<<" waits="<<frame<<" draws="<<draws
      <<" music="<<music_calls<<" effects="<<effect_calls<<" visible_nmi_before_first_draw="<<visible_before_draw
      <<" instructions="<<source.cpu.instruction_count<<'\n';
}
}
int main(int argc,char **argv) {
  try {
    if(argc<2)return 77;
    for(int i=1;i<argc;++i) {
      if(std::string_view(argv[i])=="--pixels"){compare_pixels=true;continue;}
      if(std::string_view(argv[i])=="--sample-copies=3"){sample_copies=3;continue;}
      const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
      one(assets,0,false,0,false);
      for(unsigned melody=0;melody<8;++melody)one(assets,1u<<melody,false,0,false);
      one(assets,255,true,0,false);
      one(assets,0x55,true,1,true);one(assets,0xaa,true,75,true);
      one(assets,0x81,true,75,false);
    }
    std::cout<<"PASS Sound Stone reference cases="<<cases<<" waits="<<frames<<" objects="<<sprites_checked<<" checks="<<checks
        <<" sample_copies="<<sample_copies<<" visible_frames="<<visible_frames<<" pixel_comparisons="<<pixel_comparisons<<'\n';
    return 0;
  } catch(const std::exception &e) { std::cerr<<"FAIL Sound Stone reference: "<<e.what()<<'\n';return 1; }
}
