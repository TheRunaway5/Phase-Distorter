// Actual original COFFEETEA_SCENE through both complete SpecialEvent callers.
#define NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include "native_world_battle_return_reference.cpp"
#include "eb/native/cutscenes/coffee/scene.hpp"
#include "eb/native/cutscenes/services.hpp"
namespace coffee_reference {
using namespace world_battle_reference;
namespace coffee=eb::native::cutscenes::coffee;
struct TextReceipt {
  std::array<std::uint8_t,1664> bytes{};
  std::uint16_t x{},y{},columns{},base{},low{},high{},pixel{},byte{},screen{};
};
struct PollReceipt { unsigned rows{},bodies{},brightness{},step{}; };
struct PictureReceipt {std::vector<std::uint32_t> pixels;std::array<std::uint16_t,256> palette{};std::array<std::uint16_t,8> scroll{};std::array<std::uint8_t,64> registers{};};
struct RasterReceipt {
  std::array<std::uint16_t,448> offsets{};std::array<std::uint8_t,65536> video{};
  std::array<BattleBackgroundState,2> layers;unsigned frame_counter{},generator_counter{};
};
BattleBackgroundState background_state(Source &source,unsigned ordinal) {
  const unsigned at=(source.jp?0xafa9:0xadd4)+ordinal*119;
  const auto byte=[&](unsigned offset){return source.bus->work_ram[at+offset];};
  const auto word=[&](unsigned offset){return std::uint16_t(source.word(at+offset));};
  BattleBackgroundState out;
  out.palette_step1=byte(8);out.palette_step2=byte(9);out.palette_remaining=byte(11);
  out.scroll_index=byte(82);out.scroll={word(83),word(89),word(91),word(93),word(95)};
  out.horizontal_position=word(85);out.vertical_position=word(87);out.distortion_index=byte(101);
  out.distortion={word(102),byte(104),word(105),word(107),byte(109),word(110),word(112),word(114),byte(116),word(117)};
  return out;
}
PictureReceipt frozen_ppu(Source &source,const RasterReceipt &raster) {
  // Independent original software PPU composition from the actual poll's
  // physical owner inputs. This intentionally freezes those inputs for all
  // rows; it does not claim the original CPU/HDMA per-scanline work phase.
  auto inspection=std::make_unique<eb::SnesBus>(*source.bus);
  auto view=inspection->scene_read_view();eb::GameSceneRenderer renderer;
  PictureReceipt result;result.pixels.resize(256*224);
  for(unsigned i=0;i<256;++i)result.palette[i]=view.palette(i);
  std::copy(view.ppu_registers.begin(),view.ppu_registers.end(),result.registers.begin());
  std::array<std::uint16_t,4> horizontal{},vertical{};
  std::copy(view.background_scroll_x.begin(),view.background_scroll_x.end(),horizontal.begin());
  std::copy(view.background_scroll_y.begin(),view.background_scroll_y.end(),vertical.begin());
  for(unsigned i=0;i<4;++i){result.scroll[i*2]=horizontal[i];result.scroll[i*2+1]=vertical[i];}
  const std::array<unsigned,2> destination{inspection->read_byte(0x4351),inspection->read_byte(0x4361)};
  const unsigned enabled=source.bus->work_ram[0x1f];
  view.video_ram=raster.video;view.background_scroll_x=horizontal;view.background_scroll_y=vertical;
  for(unsigned y=0;y<224;++y) {
    for(unsigned channel=0;channel<2;++channel)if(enabled&(1u<<(channel+5))) {
      const unsigned target=destination[channel];
      check(target>=0x0d&&target<=0x14,"Frozen coffee PPU requires the actual background scroll HDMA destinations");
      (target&1?horizontal:vertical)[(target-0x0d)/2]=raster.offsets[channel*224+y];
    }
    eb::BackgroundTileRows cache;view.tile_rows=&cache;renderer.begin_scanline(view,y);
    std::array<eb::PpuPixel,256> objects{};
    if((view.ppu_registers[0x2c]|view.ppu_registers[0x2d])&16)view.sample_sprite_pixels(y,objects,0);
    for(unsigned x=0;x<256;++x)result.pixels[y*256+x]=view.ppu_registers[0]&0x80?0xff000000u:
        renderer.compose_presentation_pixel(view,int(x),y,objects[x],false);
  }
  return result;
}
TextReceipt receipt(Source &s) {
  TextReceipt r;const unsigned at=s.jp?0x3f9a:0x3c14;
  std::copy_n(s.bus->work_ram.begin()+(s.jp?0x3918:0x3492),1664,r.bytes.begin());
  r.x=s.word(at);r.y=s.word(at+2);r.columns=s.word(at+4);r.base=s.word(at+(s.jp?8:6));r.low=s.word(s.jp?0x3fa4:0x3c1e);r.high=s.word(s.jp?0x3fa6:0x3c20);
  r.screen=s.word(s.jp?0xa133:0x9f2d);if(!s.jp){r.pixel=s.word(0x9f2f);r.byte=s.word(0x9f31);}return r;
}
void compare_text(const TextReceipt &r,const coffee::Text &t,unsigned row) {
  check(std::equal(r.bytes.begin(),r.bytes.end(),t.bytes().begin()),"Coffee/tea row backing differs row="+std::to_string(row));
  check(r.x==t.x&&r.y==t.y&&r.columns==t.columns&&r.base==t.tile_base&&r.low==t.dirty_low&&r.high==t.dirty_high&&r.screen==t.screen_offset,
      "Coffee/tea row cursor/ring differs row="+std::to_string(row));
  if(t.version()==eb::GameVersion::US)check(r.pixel==t.pixel_offset&&r.byte==t.byte_offset,"Coffee/tea US row variable-width cursor differs");
}
void cinematic_call(Source &s,unsigned target,unsigned argument) {
  s.cpu.program_counter=(target&0xff0000)|0xff00;s.cpu.accumulator=argument;s.cpu.x_index=s.cpu.y_index=0;
  s.cpu.status_register=eb::MainCpu65816::InterruptDisable;
  const unsigned end=s.cpu.program_counter+4,stack=s.cpu.stack_pointer;
  s.cpu.execute_instruction<0x22>(target,4);
  for(unsigned n=0;n<1000000000;++n){if(s.cpu.program_counter==end&&s.cpu.stack_pointer==stack)return;s.step();}
  throw std::runtime_error("Complete original coffee/tea exceeded billion-instruction budget "+s.cpu.describe_registers());
}
void run(const eb::GameAssets &assets,unsigned selector,bool semantic,bool pictures,bool retained_entry,bool frozen,bool semantic_timing) {
  Rig rig(assets);Source source(assets);source.original_object_anchor_comparisons=true;source.initialize();
  cutscenes::DisplayState display_state;
  cutscenes::Display display(assets.version,display_state,{*rig.w.runtime,rig.w.interactions,rig.w.actors,*rig.w.map_load,rig.w.map_state,
      rig.w.windows,*rig.w.window_graphics,rig.w.party,rig.w.clock,rig.w.presentation,rig.w.visual,rig.w.music,rig.w.music_state,
      rig.w.palette,rig.w.scratch,rig.w.display,rig.w.frame_display,rig.w.fade,rig.b.background,rig.b.loader,rig.b.video,rig.b.blank,rig.b.frame,rig.b.frame_state,
      rig.content.layers,rig.w.layer,rig.audio});
  rig.w.bind_actor_graphics(assets.image);
  auto snapshot=saved(rig,false);auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,snapshot.state,0);
  auto startup=rig.w.startup->begin(snapshot);
  while(startup->stage()!=WorldStartupStage::ResetWorld){const auto p=startup->advance(1);if(p==dialogue::Progress::Suspended)rig.service(*startup->runtime_operation());}
  seed(source,rig,archive);near_call(source,source.jp?0xc0b652:0xc0b67f);rig.drive(*startup);startup.reset();
  coffee::Resources resources(assets.image,assets.version);coffee::Text text(resources);coffee::State state;coffee::Scene scene(resources,text,state,display);
  if(retained_entry) {
    // These are real retained entry inputs from the completed original startup,
    // not decompressed replacements or an assertion of native startup parity.
    std::copy_n(source.bus->work_ram.begin()+0x10000,65536,rig.w.scratch.bytes.begin());
    std::copy_n(source.bus->work_ram.begin()+(source.jp?0x8176:0x7dfe),2048,display_state.text_tiles.begin());
    auto &heap=rig.w.display.transient_memory();for(unsigned bank=0;bank<2;++bank) {
      const auto bytes=heap.bank(bank);std::copy_n(source.bus->work_ram.begin()+0x2000+bank*heap.capacity(),bytes.size(),bytes.begin());
    }
  }
  const auto first_poll=source.raw_inputs.size();const unsigned first_nmi=source.nmis;source.fixed_buttons=0;
  std::vector<TextReceipt> rows;unsigned bodies{},poll_body{};std::vector<PollReceipt> source_polls,native_polls;
  struct FadeInterrupt {unsigned pc{},a{},body{},brightness{},step{};};std::vector<FadeInterrupt> final_interrupts;bool source_final_fade{};
  struct FadeWait {unsigned body{},nmis{},started{},brightness{},step{};};std::vector<FadeWait> final_waits;
  std::map<unsigned,PictureReceipt> source_pixels,frozen_pixels;unsigned compared_pictures{};
  std::map<unsigned,RasterReceipt> source_poll_rasters;
  unsigned source_generator_counter{};std::map<unsigned,unsigned> native_generator_counters;
  const auto selected=[](unsigned body){return body==64||body==137||body==511||body==1025||body==2049||body==4097||body==7001;};
  source.observer=[&](Source &s){
    if(s.cpu.program_counter==(s.jp?0xc47336u:0xc49e58u))source_final_fade=true;
    if(s.cpu.program_counter==(s.jp?0xc4734bu:0xc49e6du))source_final_fade=false;
    if(source_final_fade&&s.cpu.program_counter==(s.jp?0xc0874cu:0xc08756u))final_waits.push_back({bodies,s.nmis,s.bus->work_ram[0x2b],s.bus->work_ram[0xd],s.bus->work_ram[0x28]});
    if(source_final_fade&&s.cpu.program_counter==0xc08170&&(s.bus->work_ram[0xd]<=1||(s.bus->work_ram[0xd]&0x80))) {
      const auto stack=s.cpu.stack_pointer;final_interrupts.push_back({s.word(stack+2)|(unsigned(s.bus->work_ram[stack+4])<<16),s.cpu.accumulator,bodies,s.bus->work_ram[0xd],s.bus->work_ram[0x28]});
    }
    if(s.cpu.program_counter==(s.jp?0xc46fb2u:0xc49b6eu))rows.push_back(receipt(s));
    if(s.cpu.program_counter==(s.jp?0xc2dab4u:0xc2db3fu)){++bodies;source_generator_counter=s.bus->work_ram[2];}
    if(s.cpu.program_counter==0xc08496){poll_body=bodies;source_polls.push_back({unsigned(rows.size()),bodies,s.bus->work_ram[0xd],s.bus->work_ram[0x28]});
      if((pictures||frozen)&&selected(bodies)){RasterReceipt r;r.video=s.bus->video_ram;for(unsigned i=0;i<448;++i)r.offsets[i]=std::uint16_t(s.word((s.jp?0x3fcc:0x3c46)+i*2));
        r.frame_counter=s.bus->work_ram[2];r.generator_counter=source_generator_counter;
        for(unsigned layer=0;layer<2;++layer)r.layers[layer]=background_state(s,layer);
        if(frozen)frozen_pixels.emplace(bodies,frozen_ppu(s,r));
        source_poll_rasters.emplace(bodies,std::move(r));}}
  };
  if(pictures)source.bus->on_presentation_frame=[&](std::span<const std::uint32_t> picture,unsigned width,std::uint64_t) {
    if(selected(poll_body)&&!source_pixels.contains(poll_body)){check(width==256&&picture.size()==256*224,"Coffee/tea source scanout extent differs");
      PictureReceipt r;r.pixels.assign(picture.begin(),picture.end());const auto view=source.bus->scene_read_view();for(unsigned i=0;i<256;++i)r.palette[i]=view.palette(i);
      for(unsigned i=0;i<4;++i){r.scroll[i*2]=view.background_scroll_x[i];r.scroll[i*2+1]=view.background_scroll_y[i];}std::copy(view.ppu_registers.begin(),view.ppu_registers.end(),r.registers.begin());source_pixels.emplace(poll_body,std::move(r));}
  };
  source.call(source.jp?0xc088a3:0xc088b1);
  cinematic_call(source,source.jp?0xc1bd62:0xc1befc,selector+1);source.observer={};source.bus->on_presentation_frame={};
  rig.inputs=&source.raw_inputs;rig.cursor=first_poll;rig.phase="coffee/tea";
  auto program=std::make_shared<dialogue::Program>(assets.version,std::vector<dialogue::ContentBlock>{{0,0,{0x1f,0x41,std::uint8_t(selector+1),0x02}}});
  dialogue::Conversation conversation(program,rig.w.prompts);conversation.start(dialogue::Location{0,0});auto parent=rig.w.runtime->begin(conversation);
  while(parent->advance(1)!=dialogue::Progress::Suspended){}
  const auto &request=std::get<dialogue::Request>(*parent->dialogue_event());
  check(request.kind==dialogue::RequestKind::SpecialEvent&&request.special_event==selector+1,"Coffee/tea parent lost its actual source request");
  auto operation=scene.begin(selector,parent.get());unsigned seen_rows{};
  for(unsigned work=0;!operation->complete()&&work<2000000;++work) {
    const auto old_row=state.row_count,old_bodies=state.battle_frames;
    const auto progress=operation->advance(1);
    if(state.battle_frames!=old_bodies)native_generator_counters.emplace(unsigned(state.battle_frames),rig.w.clock.frame_counter);
    if(state.row_count!=old_row) {
      check(seen_rows<rows.size(),"Coffee/tea generated an extra authored row");
      auto expected=rows[seen_rows];
      // C49B6E inverts US after its entry. The native owner has performed
      // that same inversion before its PREPARE descriptors are admitted.
      if(!source.jp)for(auto &byte:expected.bytes)byte^=255;
      expected.low=0xffff;expected.high=0;compare_text(expected,text,seen_rows++);
    }
    if(progress==dialogue::Progress::Suspended){auto *runtime=operation->runtime_operation();check(runtime,"Coffee/tea suspension lost its real runtime");
      if(runtime->service()==story::SceneService::Frame)native_polls.push_back({unsigned(state.row_count),unsigned(state.battle_frames),rig.w.fade.state().brightness,rig.w.fade.state().step});
      const auto frame=runtime->service()==story::SceneService::Frame;
      rig.service(*runtime);
      const auto &pixel_reference=frozen?frozen_pixels:source_pixels;
      if(frame&&(pictures||frozen))if(const auto expected=pixel_reference.find(unsigned(state.battle_frames));expected!=pixel_reference.end()) {
        const auto published=rig.w.runtime->published_frame();check(bool(published),"Coffee/tea WAIT NMI lost its actual published frame");
        const auto actual=eb::rasterize_direct_scene({published,{}});
        const auto &raster=source_poll_rasters.at(unsigned(state.battle_frames));
        check(raster.layers[0]==rig.b.background.primary().state()&&raster.layers[1]==rig.b.background.secondary()->state(),
              "Coffee/tea actual background animation parameters differ body="+std::to_string(state.battle_frames));
        if(actual!=expected->second.pixels){unsigned count{},first=actual.size(),palette_differences{};for(unsigned i=0;i<actual.size();++i)if(actual[i]!=expected->second.pixels[i]){++count;first=std::min(first,i);}
          for(unsigned i=0;i<256;++i)if(rig.w.palette.displayed_palette(i/16)[i%16]!=expected->second.palette[i])++palette_differences;
          const auto background=rig.b.background.snapshot();unsigned offset_differences{},video_differences{};
          for(unsigned i=0;i<448;++i){const auto offset=i<224?background.primary.offsets[i]:background.secondary->offsets[i-224];if(offset!=raster.offsets[i])++offset_differences;}
          const auto video=rig.w.display.vram();for(unsigned i=0;i<video.size();++i)if((i<0x4000||i>=0xb000)&&video[i]!=raster.video[i])++video_differences;
          std::cerr<<"TRACE source-poll owners offset_differences="<<offset_differences<<" active_video_differences="<<video_differences<<'\n';
          std::cerr<<"TRACE physical frame counters source/native at generator="<<raster.generator_counter<<'/'<<native_generator_counters.at(unsigned(state.battle_frames))
                   <<" at poll="<<raster.frame_counter<<'/'<<unsigned(rig.w.clock.frame_counter)<<'\n';
          for(const auto range:std::array<std::array<unsigned,2>,6>{{{0,0x2000},{0x2000,0x4000},{0xb000,0xb800},{0xb800,0xc000},{0xc000,0xf800},{0xf800,0x10000}}}) {
            unsigned differences{},first_byte=range[1];
            for(unsigned i=range[0];i<range[1];++i)if(video[i]!=raster.video[i]){++differences;first_byte=std::min(first_byte,i);}
            std::cerr<<"TRACE video range="<<std::hex<<range[0]<<'-'<<range[1]<<std::dec<<" differences="<<differences;
            if(differences)std::cerr<<" first="<<first_byte<<" source="<<unsigned(raster.video[first_byte])<<" native="<<unsigned(video[first_byte]);
            std::cerr<<'\n';
          }
          for(unsigned layer=0;layer<2;++layer) {
            const unsigned map=rig.b.video.maps[layer],graphics=((rig.b.video.graphics[0]>>(layer*4))&15)*8192;
            const unsigned screens=(map&1?2:1)*(map&2?2:1);std::array<bool,65536> used{};unsigned maximum_tile{},differences{};
            for(unsigned cell=0;cell<screens*1024;++cell) {
              const unsigned at=((map&0xfc)<<9)+cell*2;
              const unsigned tile=(unsigned(raster.video[std::uint16_t(at)])|(unsigned(raster.video[std::uint16_t(at+1)])<<8))&1023;
              maximum_tile=std::max(maximum_tile,tile);
              for(unsigned byte=0;byte<32;++byte)used[std::uint16_t(graphics+tile*32+byte)]=true;
            }
            for(unsigned byte=0;byte<used.size();++byte)if(used[byte]&&video[byte]!=raster.video[byte])++differences;
            std::cerr<<"TRACE referenced BG"<<layer+1<<" graphics="<<graphics<<" maximum_tile="<<maximum_tile<<" byte_differences="<<differences<<'\n';
          }
          std::cerr<<"TRACE picture palette_differences="<<palette_differences<<" scroll source/native=";for(unsigned i=0;i<4;++i)std::cerr<<expected->second.scroll[i*2]<<','<<expected->second.scroll[i*2+1]<<'/'<<rig.w.frame_display.screen().scroll[i].x<<','<<rig.w.frame_display.screen().scroll[i].y<<' ';std::cerr<<" source TM/TS/CGWSEL/CGADSUB="<<unsigned(expected->second.registers[0x2c])<<','<<unsigned(expected->second.registers[0x2d])<<','<<unsigned(expected->second.registers[0x30])<<','<<unsigned(expected->second.registers[0x31])<<'\n';
          throw std::runtime_error("Coffee/tea physical scanout differs body="+std::to_string(state.battle_frames)+" pixels="+std::to_string(count)+" first="+std::to_string(first)+" source="+std::to_string(expected->second.pixels.at(first))+" native="+std::to_string(actual.at(first)));}
        ++compared_pictures;
      }}
  }
  check(operation->complete(),"Coffee/tea scene exhausted complete caller budget");const auto result=operation->result();operation.reset();
  dialogue::Response response;response.special_event_result=result;parent->respond_dialogue(response);rig.runtime(*parent);parent.reset();
  check(seen_rows==rows.size(),"Coffee/tea omitted an authored text row");check(result==source.cpu.accumulator,"Coffee/tea SpecialEvent return differs");
  if(rig.cursor!=source.raw_inputs.size()) {
    std::cerr<<"TRACE poll mismatch bodies source="<<bodies<<" native="<<state.battle_frames<<" authored_waits="<<state.waits<<'\n';
    const auto dump=[](const char *label,const std::vector<PollReceipt> &polls) {
      std::cerr<<label<<" initial=";unsigned initial{};while(initial<polls.size()&&!polls[initial].rows)++initial;std::cerr<<initial<<" final polls:";
      for(unsigned i=polls.size()>20?polls.size()-20:0;i<polls.size();++i){const auto &p=polls[i];std::cerr<<" ["<<i<<':'<<p.rows<<','<<p.bodies<<','<<p.brightness<<','<<p.step<<']';}std::cerr<<'\n';
    };dump("source",source_polls);dump("native",native_polls);
    for(const auto &nmi:final_interrupts)std::cerr<<"TRACE source final-fade NMI interrupted="<<std::hex<<nmi.pc<<" a="<<nmi.a<<std::dec<<" body="<<nmi.body<<" brightness="<<nmi.brightness<<" step="<<nmi.step<<'\n';
    for(unsigned i=0;i<std::min<std::size_t>(final_waits.size(),8);++i){const auto &w=final_waits[i];std::cerr<<"TRACE source final-fade WAIT body="<<w.body<<" nmis="<<w.nmis<<" started="<<w.started<<" brightness="<<w.brightness<<" step="<<w.step<<'\n';}
  }
  bool stale_frame_boundary{};
  unsigned early_fade_differences{},final_fade_differences{};
  std::string early_fade_signature,final_fade_signature;
  if(semantic_timing&&source.jp&&!selector&&rig.cursor+1==source.raw_inputs.size()) {
    check(rows.size()==125&&state.battle_frames==7232&&bodies==7233&&state.waits==7232,
          "JP coffee semantic timing mode reached an unexpected body signature");
    check(final_waits.size()==33&&final_waits[0].body==7200&&final_waits[0].started==1&&
          final_waits[1].body==7201&&final_waits[1].started==0&&final_waits[0].nmis==final_waits[1].nmis,
          "JP coffee semantic timing mode lost the exact stale-frame/no-NMI WAIT predicate");
    for(unsigned i=1;i<final_waits.size();++i)check(final_waits[i].body==7200+i&&!final_waits[i].started&&
        final_waits[i].nmis==final_waits[0].nmis+i-1,
        "JP coffee semantic timing mode changed an authored fade NMI boundary");
    constexpr unsigned skipped=16+7200;
    check(source_polls.size()==7249&&native_polls.size()==7248,
          "JP coffee semantic timing mode changed the complete physical poll signature");
    for(unsigned i=0;i<native_polls.size();++i) {
      const auto &actual=native_polls[i],&expected=source_polls[i+(i>=skipped)];
      check(actual.rows==expected.rows&&actual.bodies+(i>=skipped)==expected.bodies,
          "JP coffee semantic timing mode changed ordered row/fade owner work index="+std::to_string(i)+
          " source="+std::to_string(expected.rows)+","+std::to_string(expected.bodies)+","+std::to_string(expected.brightness)+","+std::to_string(expected.step)+
          " native="+std::to_string(actual.rows)+","+std::to_string(actual.bodies)+","+std::to_string(actual.brightness)+","+std::to_string(actual.step));
      if(actual.brightness!=expected.brightness||actual.step!=expected.step) {
        auto &differences=i>=skipped?final_fade_differences:early_fade_differences;
        auto &signature=i>=skipped?final_fade_signature:early_fade_signature;
        ++differences;
        if(signature.empty())signature="index="+std::to_string(i)+" row="+std::to_string(actual.rows)+" body="+std::to_string(actual.bodies)+
            " source_brightness="+std::to_string(expected.brightness)+" native_brightness="+std::to_string(actual.brightness)+
            " source_step="+std::to_string(expected.step)+" native_step="+std::to_string(actual.step);
      }
    }
    stale_frame_boundary=true;
    std::cout<<"NOTE explicit semantic-timing mode: JP coffee source first final-fade WAIT consumes NEW_FRAME_STARTED=1 without an NMI; source/native physical polls7249/7248 and bodies7233/7232. Timing parity is not claimed.\n";
  }
  check(rig.cursor==source.raw_inputs.size()||stale_frame_boundary,"Coffee/tea complete input poll count differs original="+std::to_string(source.raw_inputs.size()-first_poll)+" native="+std::to_string(rig.cursor-first_poll));
  compare_text(receipt(source),text,seen_rows);
  for(unsigned i=0;i<256;++i)check(rig.w.palette.staged_color(i)==source.word(0x200+i*2),"Coffee/tea restored staged palette differs index="+std::to_string(i));
  const auto vram=rig.w.display.vram();
  unsigned world_alias_differences{},first_difference=65536;
  for(unsigned i=0;i<0xc000;++i)if(vram[i]!=source.bus->video_ram[i]){++world_alias_differences;first_difference=std::min(first_difference,i);}
  if(!semantic)for(unsigned i=0;i<65536;++i)check(vram[i]==source.bus->video_ram[i],"Coffee/tea strict restored VRAM differs byte="+std::to_string(i)+" source="+std::to_string(source.bus->video_ram[i])+" native="+std::to_string(vram[i]));
  std::cout<<(semantic?"NOTE explicit semantic-owner mode: restored world raw-VRAM aliases native semantic-owner differences=":
      "NOTE strict full65536 return-VRAM comparison: differences=")<<world_alias_differences;
  if(world_alias_differences)std::cout<<" first="<<first_difference<<" source="<<unsigned(source.bus->video_ram[first_difference])<<" native="<<unsigned(vram[first_difference]);
  std::cout<<'\n';
  const auto window_ranges=source.jp?std::vector<std::array<unsigned,2>>{{0xc000,0x3800}}
      :std::vector<std::array<unsigned,2>>{{0xc000,0x450},{0xc4f0,0x60},{0xc5f0,0xb0},{0xc700,0xa0},{0xc800,0x10},{0xc900,0x10},{0xe000,0x1800}};
  for(const auto range:window_ranges)for(unsigned i=0;i<range[1];++i)check(vram[range[0]+i]==source.bus->video_ram[range[0]+i],"Coffee/tea restored window VRAM differs byte="+std::to_string(range[0]+i));
  check(rig.w.random.primary_word==source.word(0x24)&&rig.w.random.secondary_word==source.word(0x26),"Coffee/tea changed RNG order");
  check(rig.w.fade.state().brightness==source.bus->work_ram[0xd]&&rig.w.fade.state().step==source.bus->work_ram[0x28],"Coffee/tea return fade differs");
  check(rig.w.actors.scene().camera_x==source.word(0x31)&&rig.w.actors.scene().camera_y==source.word(0x33),"Coffee/tea reload camera differs");
  for(unsigned layer=0;layer<2;++layer) {
    const auto &actual=layer?rig.b.background.secondary()->state():rig.b.background.primary().state();
    const bool retained=background_state(source,layer)==actual;
    std::cout<<"NOTE retained background layer"<<layer<<" parameters_equal="<<retained<<'\n';
    if(bodies==state.battle_frames)check(retained,"Coffee/tea retained background animation parameters differ");
  }
  if(pictures||frozen)check(compared_pictures==(frozen?frozen_pixels:source_pixels).size(),"Coffee/tea omitted a selected source PPU picture");
  if(early_fade_differences||final_fade_differences) {
    std::cout<<"VERIFIED JP coffee named return owners: text/windowranges/palette256/RNG/camera/fade/return, with the separately recorded rawVRAM and physicaltiming boundaries.\n";
    throw std::runtime_error("JP coffee physical fade phases still differ early_polls="+std::to_string(early_fade_differences)+" "+early_fade_signature+
        " final_polls="+std::to_string(final_fade_differences)+" "+final_fade_signature);
  }
  std::cout<<"PASS complete "<<assets.title<<' '<<(selector?"tea":"coffee")<<" rows="<<seen_rows<<" native_bodies="<<state.battle_frames<<" source_bodies="<<bodies<<" actual_polls="<<rig.cursor-first_poll<<" source_nmis="<<source.nmis-first_nmi<<" source_instructions="<<source.cpu.instruction_count<<" compared_ppu_pictures="<<compared_pictures<<" frozen_ppu="<<frozen<<" retained_entry="<<retained_entry<<'\n';
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  bool semantic{},pictures{},retained_entry{},frozen{},semantic_timing{};int first=1;
  while(first<argc&&std::string_view(argv[first]).starts_with("--")){const auto option=std::string_view(argv[first++]);if(option=="--semantic-owners")semantic=true;else if(option=="--semantic-timing")semantic_timing=true;else if(option=="--sample-pixels")pictures=true;else if(option=="--sample-frozen-ppu")frozen=true;else if(option=="--retained-entry")retained_entry=true;else{std::cerr<<"Unknown coffee reference option "<<option<<'\n';return 1;}}
  if(pictures&&frozen){std::cerr<<"Select actual scanouts or frozen PPU composition in separate reference runs\n";return 1;}
  if(argc<=first)return 77;
  unsigned failures{};
  for(int i=first;i<argc;++i) {
    try {
      const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
      for(unsigned selector=0;selector<2;++selector)try{coffee_reference::run(assets,selector,semantic,pictures,retained_entry,frozen,semantic_timing);}
        catch(const std::exception &e){std::cerr<<"FAIL "<<assets.title<<' '<<(selector?"tea":"coffee")<<": "<<e.what()<<'\n';++failures;}
    }catch(const std::exception &e){std::cerr<<e.what()<<'\n';++failures;}
  }
  return failures?1:0;
}
