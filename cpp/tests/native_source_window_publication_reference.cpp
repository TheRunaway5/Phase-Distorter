// Independent actual C2038B/JP C2036C two-copy transport authority. Earlier
// WindowTick/cold metadata/caller timing remains explicitly outside this leaf.
#define main eb_embedded_window_screen_reference_main
#include "native_source_screen_reference.cpp"
#undef main
#include "eb/native/story/source_window_publication.hpp"
#include "eb/native/display/text_tiles.hpp"
#include <tuple>

namespace {
std::array<std::uint8_t,256> window_page() {
  std::array<std::uint8_t,256> result;for(unsigned i=0;i<result.size();++i)result[i]=std::uint8_t(i*37+0x51);return result;
}
SourceWindowPublicationContext window_context(unsigned direct_page=0x1e00) {
  return {true,true,true,0xc2,0x7e,std::uint16_t(direct_page),0x1ffc};
}
void bytes_are(const GameAssets &assets,unsigned pc,std::initializer_list<unsigned> bytes) {
  const auto at=pc&0x3fffff;unsigned i{};
  for(unsigned byte:bytes){require(assets.image[at+i]==byte,"Immutable original window authority byte differs at "+std::to_string(pc+i));++i;}
}
void window_original_authority(const GameAssets &assets) {
  const bool jp=assets.version==GameVersion::JP;const unsigned bg=jp?0x8176:0x7dfe,tail=jp?0x0b34:0x0be8,entry=jp?0xc2036c:0xc2038b;
  bytes_are(assets,jp?0xc13555:0xc12e37,{0x22,entry&255,(entry>>8)&255,0xc2});
  bytes_are(assets,entry,{0xc2,0x31,0x0b,0x7b,0x69,0xee,0xff,0x5b,
    0xa9,0x7e,0x00,0x85,0x0e,0xa9,0x00,0x7c,0x85,0x10,0xa0,bg&255,bg>>8,0xa2,0x00,0x07,0xe2,0x20,0x22,0x2e,0x86,0xc0});
  bytes_are(assets,entry+30,{0xa9,tail&255,tail>>8,0x85,0x0e,0xa9,0xc4,0x00,0x85,0x10,0xa0,0x80,0x7f,0xa2,0x40,0x00,
    0xe2,0x20,0xa9,0x00,0x22,0x16,0x86,0xc0,0x2b,0x6b});
  bytes_are(assets,0xc08616,{0xc2,0x30,0x8d,0x91,0x00,0x8e,0x92,0x00,0xa5,0x0e,0x8d,0x94,0x00,0xa5,0x10,
    0x8d,0x96,0x00,0x8c,0x97,0x00,0x4c,0x43,0x86});
  bytes_are(assets,0xc0862e,{0xc2,0x30,0x8d,0x91,0x00,0x8e,0x92,0x00,0x8c,0x94,0x00,0xa5,0x0e,
    0x8d,0x96,0x00,0xa5,0x10,0x8d,0x97,0x00});
  bytes_are(assets,0xc08643,{0x08,0xc2,0x20,0xe2,0x10,0x0b,0xf4,0x00,0x00,0x2b,0x8b,0xa0,0x00,0x5a,0xab,
    0xc2,0x10,0x20,0x5f,0x86,0xab,0x2b,0x28,0x6b});
  bytes_are(assets,0xc0865f,{0x08,0x5a,0xe2,0x10,0xa4,0x0d,0x30,0x3e});
  const unsigned table=jp?0x8f94:0x8fb0;
  bytes_are(assets,0xc086a5,{0xa4,0x91,0xb9,table&255,table>>8,0x8d,0x10,0x43,0xbe,(table+2)&255,(table+2)>>8,
    0x8e,0x15,0x21,0xa5,0x92,0x8d,0x15,0x43,0xa5,0x94,0x8d,0x12,0x43,0xa6,0x96,0x8e,0x14,0x43,
    0xa5,0x97,0x8d,0x16,0x21,0xa2,0x02,0x8e,0x0b,0x42,0xad,0xa3,0x00,0x8d,0xa1,0x00});
  if(jp)bytes_are(assets,0xc086d2,{0xc2,0x10,0x7a,0x28,0x60});
  else bytes_are(assets,0xc086d2,{0xa9,0x00,0x00,0x8f,0x2b,0x9e,0x7e,0xc2,0x10,0x7a,0x28,0x60});
  bytes_are(assets,0xc00000+table,{0x01,0x18,0x80});
  bytes_are(assets,0xc20171,{0xa0,bg&255,bg>>8,0xa2,0x80,0x03,0x80,0x09,0xa9,0x00,0x00,0x99,0x00,0x00,0xc8,0xc8,0xca,0xd0,0xf5});
  // The nine frozen presentation overrides are C0C6*/C0DB* only; none is in
  // these exact immutable C2/C086 blocks or the admitted default NMI body.
}
struct WindowOriginal : ScreenOriginal {
  unsigned instruction_entry=0xffffffff,copies{},second_heap_reads{};
  std::optional<std::uint16_t> second_heap_sample;
  std::uint8_t vmain{};std::uint16_t vmadd{};
  struct Witness {unsigned pc,copies;bool operator<(const Witness&r)const{return std::tie(pc,copies)<std::tie(r.pc,r.copies);}};
  std::set<Witness> copy_sites;
  WindowOriginal(const GameAssets &assets,bool fast):ScreenOriginal(assets,fast) {
    window_original_authority(assets);
    const unsigned bg=assets.version==GameVersion::JP?0x8176:0x7dfe;
    SnesBus producer_bus(assets.image,assets.version);MainCpu65816 producer(producer_bus);
    producer.set_runtime(MainCpuRuntime::Legacy);producer.emulation_mode=false;
    producer_bus.write_byte(0x4200,0);
    for(unsigned i=0;i<2048;++i)producer_bus.work_ram[bg+i]=std::uint8_t(i*53+0xa7);
    // Genuine mapped original 896-word cold producer, independently executed;
    // its semantic metadata and timing are not attributed to the measured leaf.
    producer.program_counter=0xc20171;producer.direct_page=0x1e00;producer.status_register=4;producer.data_bank=0x7e;
    unsigned atoms{};while(producer.program_counter!=0xc20184&&atoms<6000){producer.step_instruction();++atoms;}
    require(producer.program_counter==0xc20184&&atoms==5380,"Original BG2 cold zero-loop did not reach its real boundary");
    require(std::all_of(producer_bus.work_ram.begin()+bg,producer_bus.work_ram.begin()+bg+1792,[](auto value){return !value;}),"Original cold producer did not clear its actual896words");
    for(unsigned i=1792;i<2048;++i)require(producer_bus.work_ram[bg+i]==std::uint8_t(i*53+0xa7),"Original cold BG2 producer cleared retained tail");
    // Transfer only this original producer's resulting BG2 to its own measured
    // original bus; neither host receives its preceding clock epoch.
    std::copy_n(producer_bus.work_ram.begin()+bg,2048,bus.work_ram.begin()+bg);
  }
  unsigned caller()const{return bus.game_version()==GameVersion::JP?0xc13555:0xc12e37;}
  unsigned target()const{return bus.game_version()==GameVersion::JP?0xc2036c:0xc2038b;}
  unsigned return_pc()const{return caller()+4;}
  void audit_window() {
    origin=bus.master_clocks();cycles=cpu.cycle_count;access_penalty=dma_debt=0;
    bus.debug_read_wram=[this](unsigned,std::uint8_t value){if(!dma_access)access_penalty+=2;return value;};
    bus.debug_write_wram=[this](unsigned,std::uint8_t value){if(!dma_access)access_penalty+=2;return value;};
    bus.debug_read_rom=[this](unsigned offset,std::uint8_t value){
      if(!dma_access){const auto pc=cpu.program_counter&0x3fffff;const unsigned table=bus.game_version()==GameVersion::JP?0x8f94:0x8fb0;
        const bool data=offset>=table&&offset<table+3,vector=offset==0xffea||offset==0xffeb;
        require((offset>=pc&&offset-pc<4)||data||vector,"Window/default NMI leaf read an undeclared ROM data owner");
        if(!fast||((cpu.program_counter>>16)&0x40)==0||data||vector)access_penalty+=2;
      }return value;
    };
    cpu.observe_memory_write=[this](unsigned address,std::uint8_t value){
      const unsigned bank=address>>16,low=address&65535;
      if((bank&0x40)==0){
        if(low==0x2115)vmain=value;
        if(low==0x2116)vmadd=std::uint16_t((vmadd&0xff00)|value);
        if(low==0x2117)vmadd=std::uint16_t((vmadd&255)|(unsigned(value)<<8));
        if(low==0x420b){
          require(value==1||value==2,"Window/default NMI issued an unowned DMA mask");const unsigned channel=value==1?0:1;
          const unsigned count=bus.read_byte(0x4305+channel*16)|unsigned(bus.read_byte(0x4306+channel*16))<<8;
          require(count==(value==1?544:copies?64:1792),"Original copy ordinal/count escaped its actual source extent");
          if(value==2)++copies;
          dma_debt+=16+std::uint64_t(count)*8;dma_access=true;
        }
      }
      if(bank==0x7e||((bank&0x40)==0&&low<0x2000))stores.push_back({instruction_entry,low,value,bus.master_clocks()});
    };
  }
  void step_window(){instruction_entry=cpu.program_counter;dma_access=false;
    // The genuine pre-instruction NMI drain has finished. Retain this host's
    // actual second LDA BASE input; a later NMI may rotate the live heap.
    if(instruction_entry==0xc086cc&&copies==2){second_heap_sample=std::uint16_t(word(0xa3));++second_heap_reads;}
    cpu.step_instruction();dma_access=false;}
  void drain_window(){
    while(bus.take_nmi()){
      const unsigned pc=cpu.program_counter,stack=cpu.stack_pointer;copy_sites.insert({pc,copies});interrupted_sites.insert(pc);
      const auto image=bus.cartridge_image();require(image[0xffea]==0x47&&image[0xffeb]==0x81&&image[0x8147]==0x5c&&
        image[0x8148]==0x70&&image[0x8149]==0x81&&image[0x814a]==0xc0,"Original window native NMI vector differs");
      instruction_entry=0xffffffff;cpu.service_interrupt(true);++interrupts;bool done{};
      for(unsigned i=0;i<2000;++i){if(cpu.program_counter==pc&&cpu.stack_pointer==stack){done=true;break;}step_window();}
      require(done,"Original window NMI lost its suspended far helper/context");
    }
  }
  void instruction_window(){drain_window();require(cpu.program_counter!=return_pc(),"Original window helper ran into C1004E");step_window();++foreground;drain_window();}
};
struct WindowNative {
  // This sole retained BG2 owner is constructed before, and outlives, World.
  std::unique_ptr<cutscenes::DisplayState> text=std::make_unique<cutscenes::DisplayState>();
  NativeAudio audio;session::World world;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  std::unique_ptr<SourceNmiWork> nmi;
  WindowNative(const GameAssets&assets,const session::Content&content,bool fast,bool interrupt_owner=true,bool physical_owner=true)
    :audio(assets.image,assets.version),world(content,audio,256) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(assets.image);
    world.display.transient_memory().configure(assets.version);world.runtime->refresh_world_capture();world.runtime->reset_interrupt_callback();
    world.clock.action_scripts_disabled=1;world.clock.disabled_transitions=1;
    // Actual shared artwork is produced through its real native initializer.
    // Its upload/initialization timing and original font predecessors are not
    // part of this raw-descriptor transport component. The metadata oracle
    // takes this atlas as a separately declared live rendering input.
    const bool us=assets.version==GameVersion::US;
    std::array<std::uint8_t,5> name{std::uint8_t(us?0x71:0x41),std::uint8_t(us?0x72:0x42),
      std::uint8_t(us?0x73:0x43),std::uint8_t(us?0x74:0x44),0};
    dialogue::PartyNameInputs names;for(auto& member:names.names)member=name;
    world.window_graphics->prepare(names,1);
    auto artwork=world.window_graphics->begin_publication(us?dialogue::ArtworkPublication::GeneratedThenCommon:dialogue::ArtworkPublication::All);
    while(artwork->advance()==dialogue::Progress::Suspended)artwork->respond();
    require(artwork->complete(),"Actual native artwork prehistory failed to complete");
    for(unsigned i=0;i<text->text_tiles.size();++i)text->text_tiles[i]=std::uint8_t(i*53+0xa7);
    world.windows.bind_source_text_tiles(*text);world.windows.initialize_cold_text_tiles();
    require(std::all_of(text->text_tiles.begin(),text->text_tiles.begin()+1792,[](auto byte){return !byte;}),"Native genuine cold BG2 producer did not clear896words");
    for(unsigned i=1792;i<2048;++i)require(text->text_tiles[i]==std::uint8_t(i*53+0xa7),"Native cold producer overwrote retained BG2 tail");
    // Independent genuine ordinary screen producers retain distinctive OAM and
    // scroll inputs. Their preceding semantic/timing scope is excluded.
    for(unsigned b=0;b<2;++b)for(unsigned i=0;i<544;++i)world.actor_object_display_state.buffers[b].bytes[i]=std::uint8_t(i*71+b*113+37);
    for(unsigned round=0;round<2;++round){const unsigned b=1+(round%2);
      for(unsigned i=0;i<4;++i)world.display.staged_scroll[i]={std::uint16_t(0x4100+b*0x211+i*2*0x127),std::uint16_t(0x4100+b*0x211+(i*2+1)*0x127)};
      world.frame_display.update_world_screen();}
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{work->request_nmi();},[]{},0,0,false);
    if(physical_owner)physical->bind_peripherals(world.peripherals);else world.peripherals.bind_clock(*physical);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*world.runtime,world.actor_object_display_state,*world.actor_object_display,world.frame_display,fast);
    audio.bind_clock(*work);nmi=std::make_unique<SourceNmiWork>(*world.runtime,audio,world.clock,world.session,world.frame_display,world.palette,
      world.display,world.scratch,world.fade,world.presentation,world.peripherals,SourceInterruptContext{true,true,true});
    if(interrupt_owner)work->bind_interrupt_work(*nmi);
  }
  std::unique_ptr<WorldRuntime::Operation> publication(SourceWindowPublicationContext ctx=window_context()) {
    auto operation=world.runtime->begin_source_window_tick(*work,ctx);
    for(unsigned i=0;i<100;++i)if(operation->advance(1)==dialogue::Progress::Suspended){
      require(operation->service()==SceneService::WindowPublication,"Actual opted-in WindowTick did not suspend before publication");return operation;}
    throw std::runtime_error(context+": Actual WindowTick did not reach source publication");
  }
};
struct WindowFrame {
  unsigned width{},height{};
  std::vector<std::uint8_t> pixels,priority;
  bool operator==(const WindowFrame&)const=default;
};
WindowFrame window_frame(const std::shared_ptr<const dialogue::TextFrame>&frame) {
  require(bool(frame),"Actual WindowHost/atlas returned no frame");
  return {frame->width,frame->height,frame->pixels,frame->priority};
}
WindowFrame blank_window_frame(unsigned rows) {
  return {256,rows*8,std::vector<std::uint8_t>(256*rows*8),std::vector<std::uint8_t>(256*rows*8)};
}
WindowFrame original_descriptor_frame(const WindowOriginal&o,const WindowFrame&atlas,unsigned first,unsigned rows) {
  // Raw words come exclusively from this original host's actual DMA result.
  // Artwork is the declared live shared atlas input, sampled before the leaf;
  // this does not assert original PPU/font-predecessor raster equivalence.
  require(atlas.width==256&&atlas.height==256&&atlas.pixels.size()==65536,"Declared atlas has an unexpected extent");
  auto expected=blank_window_frame(rows);
  for(unsigned at=0;at<rows*32;++at) {
    const unsigned descriptor=o.bus.video_ram[first+at*2]|unsigned(o.bus.video_ram[first+at*2+1])<<8;
    const unsigned image=descriptor&1023,palette=(descriptor>>10)&7;
    for(unsigned pixel=0;pixel<64;++pixel) {
      const unsigned x=pixel&7,y=pixel>>3;
      const unsigned from_x=(descriptor&0x4000)?7-x:x,from_y=(descriptor&0x8000)?7-y:y;
      const auto color=atlas.pixels[(image/32*8+from_y)*256+image%32*8+from_x];
      const unsigned to=(at/32*8+y)*256+at%32*8+x;
      expected.pixels[to]=color?std::uint8_t(palette*4+color):0;
      expected.priority[to]=color?std::uint8_t((descriptor>>13)&1):0;
    }
  }
  return expected;
}
struct WindowMetadataOracle {
  WindowFrame atlas,scene=blank_window_frame(28),tail=blank_window_frame(1);
  unsigned copies{};
  explicit WindowMetadataOracle(const WindowNative&n):atlas(window_frame(n.world.window_graphics->frame())) {
    require(std::any_of(atlas.pixels.begin(),atlas.pixels.end(),[](auto pixel){return pixel!=0;}),
      "Authentic declared shared atlas contains no artwork for metadata checks");
    require(window_frame(n.world.windows.frame())==scene&&window_frame(n.world.windows.tail_frame())==tail,
      "Fresh actual WindowHost metadata prehistory is not the declared blank scene/tail");
  }
  void check(const WindowOriginal&o,const WindowNative&n,bool final=false) {
    if(copies!=o.copies) {
      require(o.copies==copies+1,"Original transport skipped an individual metadata checkpoint");
      if(o.copies==1)scene=original_descriptor_frame(o,atlas,0xf800,28);
      else {require(o.copies==2,"Original transport published a third metadata component");tail=original_descriptor_frame(o,atlas,0xff00,1);}
      copies=o.copies;
    }
    require(window_frame(n.world.windows.frame())==scene&&window_frame(n.world.windows.tail_frame())==tail,
      "Actual Scene/Tail metadata diverged from original copied descriptors or became visible before its individual MDMA");
    if(final) {
      auto combined=blank_window_frame(32);
      std::copy(scene.pixels.begin(),scene.pixels.end(),combined.pixels.begin());
      std::copy(scene.priority.begin(),scene.priority.end(),combined.priority.begin());
      std::copy(tail.pixels.begin(),tail.pixels.end(),combined.pixels.begin()+256*224);
      std::copy(tail.priority.begin(),tail.priority.end(),combined.priority.begin()+256*224);
      require(window_frame(n.world.windows.full_frame())==combined&&window_frame(n.world.window_graphics->frame())==atlas,
        "Source publication changed retained lower rows or its shared live artwork input");
    }
  }
};
struct WindowOwners {
  std::array<std::array<std::uint8_t,544>,2> objects;
  std::array<std::uint8_t,544> displayed_objects{};
  std::array<std::array<battle::PsiScroll,4>,2> scroll;
  std::array<battle::PsiScroll,4> staged,hardware;
  std::array<std::uint8_t,2048> text;
  std::array<std::uint8_t,256> page,ring;
  std::array<std::uint8_t,1036> working;
  std::array<std::uint8_t,512> staged_palette,displayed_palette;
  std::array<std::uint16_t,5> builder;
  std::array<std::uint8_t,8> parameters;
  std::array<std::array<std::uint8_t,7>,2> dma;
  std::array<std::uint8_t,65536> vram;
  InputState input;
  std::uint16_t heap{},base{},flag{},vmadd{},request{},next{},credit{};
  std::uint8_t vmain{},producer{},consumer{},pending{},counter{},palette{},brightness{};
  std::uint32_t timer{};
  std::uint64_t clocks{},frames{},interrupts{},polls{},phase{},scene_copies{},tail_copies{};
  bool operator==(const WindowOwners&)const=default;
};
WindowOwners window_owners(WindowOriginal&o) {
  WindowOwners r;const bool jp=o.bus.game_version()==GameVersion::JP;const unsigned bg=jp?0x8176:0x7dfe;
  for(unsigned b=0;b<2;++b){std::copy_n(o.bus.work_ram.begin()+(b?0x800:0x500),544,r.objects[b].begin());
    for(unsigned i=0;i<4;++i)r.scroll[b][i]={std::uint16_t(o.word(0x41+b*2+i*8)),std::uint16_t(o.word(0x45+b*2+i*8))};}
  const auto view=o.bus.scene_read_view();
  for(unsigned i=0;i<4;++i){r.staged[i]={std::uint16_t(o.word(0x31+i*4)),std::uint16_t(o.word(0x33+i*4))};r.hardware[i]={view.background_scroll_x[i],view.background_scroll_y[i]};}
  std::copy_n(o.bus.work_ram.begin()+(jp?0x2800:0x2400),1036,r.working.begin());
  std::copy_n(o.bus.work_ram.begin()+0x200,512,r.staged_palette.begin());r.displayed_palette=o.bus.palette_ram;
  r.builder={std::uint16_t(o.word(3)),std::uint16_t(o.word(5)),std::uint16_t(o.word(7)),o.bus.work_ram[10],o.bus.work_ram[9]};
  std::copy(o.bus.object_attributes.begin(),o.bus.object_attributes.end(),r.displayed_objects.begin());
  std::copy_n(o.bus.work_ram.begin()+bg,2048,r.text.begin());std::copy_n(o.bus.work_ram.begin()+0x1d00,256,r.page.begin());
  std::copy_n(o.bus.work_ram.begin()+0x400,256,r.ring.begin());std::copy_n(o.bus.work_ram.begin()+0x91,8,r.parameters.begin());
  for(unsigned b=0;b<2;++b)for(unsigned i=0;i<7;++i)r.dma[b][i]=o.bus.read_byte(0x4300+b*16+i);
  r.vram=o.bus.video_ram;
  for(unsigned i=0;i<2;++i){r.input.state[i]=std::uint16_t(o.word(0x65+i*2));r.input.held[i]=std::uint16_t(o.word(0x69+i*2));
    r.input.pressed[i]=std::uint16_t(o.word(0x6d+i*2));r.input.repeat_timer[i]=std::uint16_t(o.word(0x71+i*2));}
  r.input.player_activity=std::uint16_t(o.word(jp?0xa2a:0xa34));
  r.heap=std::uint16_t(o.word(0xa1));r.base=std::uint16_t(o.word(0xa3));r.flag=std::uint16_t(o.word(jp?0xa031:0x9e2b));
  r.vmadd=o.vmadd;r.vmain=o.vmain;r.request=std::uint16_t(o.word(0x2c));r.next=std::uint16_t(o.word(0x2e));r.credit=std::uint16_t(o.word(0x99));
  r.producer=o.bus.work_ram[0];r.consumer=o.bus.work_ram[1];r.pending=o.bus.work_ram[0x2b];r.counter=o.bus.work_ram[2];
  r.palette=o.bus.work_ram[0x30];r.brightness=o.bus.work_ram[0xd];r.timer=o.word(0xa7)|(o.word(0xa9)<<16);
  r.clocks=o.bus.master_clocks();r.frames=o.bus.completed_frames;r.interrupts=o.interrupts;
  r.phase=AudioFrameClock::physical_phase(o.bus.scanline_index(),o.bus.scanline_clock(),o.bus.completed_frames);
  r.scene_copies=std::min(o.copies,1u);r.tail_copies=o.copies>1;return r;
}
WindowOwners window_owners(const WindowNative&n,const SourceWindowPublicationEntry&entry) {
  WindowOwners r;const auto&w=n.world;
  for(unsigned b=0;b<2;++b){r.objects[b]=w.actor_object_display_state.buffers[b].bytes;r.scroll[b]=w.frame_display.source_buffer(b+1).scroll;}
  if(w.frame_display.screen().raw_objects)r.displayed_objects=w.frame_display.screen().raw_objects->bytes;
  r.staged=w.display.staged_scroll;r.hardware=w.display.source_hardware_scroll();if(n.text)r.text=n.text->text_tiles;std::copy(entry.page().begin(),entry.page().end(),r.page.begin());
  r.working=w.actor_object_display_state.working;const auto&builder=w.actor_object_display_state.builder;
  r.builder={builder.address,builder.end_address,builder.high_address,builder.high_buffer,w.actor_object_display_state.scratch.high_pointer_bank};
  for(unsigned i=0;i<256;++i){const unsigned color=w.palette.staged_color(i),displayed=w.palette.displayed[i/16][i%16];
    r.staged_palette[i*2]=std::uint8_t(color);r.staged_palette[i*2+1]=std::uint8_t(color>>8);
    r.displayed_palette[i*2]=std::uint8_t(displayed);r.displayed_palette[i*2+1]=std::uint8_t(displayed>>8);}
  std::copy(w.display.descriptor_bytes().begin(),w.display.descriptor_bytes().end(),r.ring.begin());const auto p=w.display.source_copy_parameters();
  r.parameters={p.mode,std::uint8_t(p.byte_count),std::uint8_t(p.byte_count>>8),std::uint8_t(p.source_offset),std::uint8_t(p.source_offset>>8),
    std::uint8_t(p.source_identity>>16),std::uint8_t(p.destination),std::uint8_t(p.destination>>8)};
  for(unsigned b=0;b<2;++b)std::copy_n(w.peripherals.dma(b).begin(),7,r.dma[b].begin());
  r.vram=w.display.vram();r.input=w.input;
  r.heap=w.display.transient_memory().current_address();r.base=w.display.transient_memory().base_address();r.flag=w.display.dma_transfer_flag();
  r.vmadd=w.display.source_vmadd();r.vmain=w.display.source_vmain();r.request=w.frame_display.display_request();r.next=w.frame_display.next_buffer_id();
  r.credit=w.display.pending_bytes();r.producer=w.display.producer_index();r.consumer=w.display.consumer_index();
  r.pending=w.clock.new_frame_started;r.counter=w.clock.frame_counter;r.palette=w.palette.upload_mode;r.brightness=w.fade.state().brightness;r.timer=w.session.elapsed_timer;
  r.clocks=n.work?n.work->master_clocks():n.audio.master_clocks();r.frames=n.physical?n.physical->physical_frames():0;
  r.interrupts=n.work?n.work->completed_source_interrupts():0;r.polls=w.clock.input_polls;
  r.phase=n.physical?n.physical->phase():0;r.scene_copies=w.windows.source_scene_publications();r.tail_copies=w.windows.source_tail_publications();return r;
}
void same_window(WindowOriginal&o,const WindowNative&n,const SourceWindowPublicationEntry&entry,const char*where) {
  const auto expected=window_owners(o),actual=window_owners(n,entry);
  if(actual!=expected){std::ostringstream out;out<<where<<" PC="<<std::hex<<o.cpu.program_counter<<std::dec<<" atom="<<o.foreground
    <<" clocks="<<actual.clocks<<'/'<<expected.clocks<<" parameters="<<(actual.parameters==expected.parameters)<<" page="<<(actual.page==expected.page)
    <<" DMA="<<(actual.dma==expected.dma)<<" VRAM="<<(actual.vram==expected.vram)<<" copies="<<actual.scene_copies<<','<<actual.tail_copies<<'/'<<expected.scene_copies<<','<<expected.tail_copies
    <<" OAM="<<(actual.objects==expected.objects)<<" displayed="<<(actual.displayed_objects==expected.displayed_objects)
    <<" scroll="<<(actual.hardware==expected.hardware)<<" input="<<(actual.input==expected.input)<<" NMI="<<actual.interrupts<<'/'<<expected.interrupts;
    require(false,out.str());}++checks;
}
struct WindowCase {bool fast=true,enabled=true,declared=false;unsigned budget=1,direct_page=0x1e00,line=40,horizontal=100;};
std::unique_ptr<WorldRuntime::Operation> prepare_window(WindowOriginal&o,WindowNative&n,SourceWindowPublicationEntry&entry,const WindowCase&c) {
  auto&w=n.world;const bool jp=o.bus.game_version()==GameVersion::JP;const unsigned bg=jp?0x8176:0x7dfe;
  // Raw descriptor component inputs are declared independently after the two
  // real cold producers; they do not claim authored border/glyph predecessors.
  if(c.declared)for(unsigned i=0;i<896;++i){const unsigned word=(i%256)|((i%8)<<10)|(i&4?0x2000:0)|(i&1?0x4000:0x8000);
    n.text->text_tiles[i*2]=std::uint8_t(word);n.text->text_tiles[i*2+1]=std::uint8_t(word>>8);o.put(bg+i*2,word);}
  const auto page=window_page();std::copy(page.begin(),page.end(),o.bus.work_ram.begin()+0x1d00);
  require(std::equal(page.begin(),page.end(),entry.page().begin()),"Native source entry lost its independent declared C-stack page");
  for(unsigned i=0;i<65536;++i){const auto value=std::uint8_t(i*19+(i>>8)*11+0x37);w.display.set_vram_byte(std::uint16_t(i),value);o.bus.video_ram[i]=value;}
  for(unsigned i=0;i<256;++i){const auto staged=std::uint16_t(0x8000|((i*113+57)&0x7fff)),displayed=std::uint16_t((i*53+71)&0x7fff);
    w.palette.staged_color(i)=staged;o.put(0x200+i*2,staged);w.palette.displayed[i/16][i%16]=displayed;
    o.bus.palette_ram[i*2]=std::uint8_t(displayed);o.bus.palette_ram[i*2+1]=std::uint8_t(displayed>>8);}
  w.palette.upload_mode=0;o.bus.work_ram[0x30]=0;
  w.fade.force_blank(true);const auto fade=w.fade.state();o.bus.work_ram[0xd]=fade.brightness;
  o.bus.work_ram[0x28]=fade.step;o.bus.work_ram[0x29]=fade.delay;o.bus.work_ram[0x2a]=fade.remaining;
  w.display.transient_memory().set_source_current_address(0x2012);o.put(0xa1,0x2012);o.put(0xa3,w.display.transient_memory().base_address());
  w.display.set_source_dma_transfer_flag(0xbeef);o.put(jp?0xa031:0x9e2b,0xbeef);
  battle::PsiTransfer parameters{battle::PsiTransferKind::Vram,0x2137,0x6b51,0xe731,0xa7};parameters.source_identity=0x5a0000;
  w.display.set_source_copy_parameters(parameters);
  const std::array<std::uint8_t,8> raw{0xa7,0x51,0x6b,0x37,0x21,0x5a,0x31,0xe7};std::copy(raw.begin(),raw.end(),o.bus.work_ram.begin()+0x91);
  std::array<std::uint8_t,256> ring;for(unsigned i=0;i<256;++i)ring[i]=std::uint8_t(i*97+0x23);
  w.display.write_descriptor_prefix(ring);std::copy(ring.begin(),ring.end(),o.bus.work_ram.begin()+0x400);
  for(unsigned channel=0;channel<2;++channel)for(unsigned i=0;i<7;++i){const auto value=std::uint8_t(i*37+channel*83+0x11);
    w.peripherals.write_source_dma_register(channel,i,value);o.bus.write_byte(0x4300+channel*16+i,value);}
  w.display.set_source_vmain(0x80);w.display.set_source_vmadd(0x4321);o.bus.write_byte(0x2115,0x80);o.bus.write_byte(0x2116,0x21);o.bus.write_byte(0x2117,0x43);
  o.vmain=0x80;o.vmadd=0x4321;
  w.input.state={0x3000,0x8400};w.input.held={0x1234,0x4321};w.input.pressed={0xabcd,0xefab};w.input.repeat_timer={9,7};w.input.player_activity=0xffff;
  for(unsigned i=0;i<2;++i){o.put(0x65+i*2,w.input.state[i]);o.put(0x69+i*2,w.input.held[i]);o.put(0x6d+i*2,w.input.pressed[i]);o.put(0x71+i*2,w.input.repeat_timer[i]);}
  o.put(jp?0xa2a:0xa34,w.input.player_activity);o.put(0x20,0x851b);
  w.clock.frame_counter=0xfe;o.bus.work_ram[2]=0xfe;w.clock.new_frame_started=0x7f;o.bus.work_ram[0x2b]=0x7f;
  w.session.elapsed_timer=0x1234ffff;o.put(0xa7,w.session.elapsed_timer);o.put(0xa9,w.session.elapsed_timer>>16);
  o.bus.work_ram[jp?0xc9:0xcb]=w.audio.sound_queue_start();o.bus.work_ram[jp?0xc8:0xca]=w.audio.sound_queue_end();
  // Only the actual reached WindowPublication is pinned. Its preceding RAND,
  // meter and draw stages are native semantic preparation, not measured calls.
  auto operation=n.publication(window_context(c.direct_page));
  const auto target=std::uint64_t(262*1364)+c.line*1364+c.horizontal;o.cpu.program_counter=0xc0ff00;
  while(o.bus.master_clocks()<target){o.cpu.execute_instruction<0xea>(0,1);n.work->retire_source_work({2,1,0,0});}
  require(o.bus.master_clocks()==n.work->master_clocks(),"Independent declared window physical warmup epochs differ");
  n.physical->nmi_enabled(c.enabled);w.clock.interrupt_mask=std::uint8_t(c.enabled?0x80:0);w.clock.retained_hardware_interrupt_mask=w.clock.interrupt_mask;
  o.bus.write_byte(0x4200,w.clock.interrupt_mask);o.bus.work_ram[0x1e]=w.clock.interrupt_mask;
  o.cpu.program_counter=o.caller();o.cpu.status_register=4;o.cpu.data_bank=0x7e;o.cpu.direct_page=std::uint16_t(c.direct_page);o.cpu.stack_pointer=0x1fff;
  o.cpu.accumulator=0x1234;o.cpu.x_index=0x4567;o.cpu.y_index=0x89ab;
  o.audit_window();same_window(o,n,entry,"independent window component entry owners");return operation;
}
void window_case(const GameAssets&assets,const session::Content&content,const WindowCase&c,std::set<WindowOriginal::Witness>&sites) {
  context=assets.title+" WINDOW fast="+std::to_string(c.fast)+" budget="+std::to_string(c.budget)+" D="+std::to_string(c.direct_page)+
    " declared="+std::to_string(c.declared)+" phase="+std::to_string(c.line)+":"+std::to_string(c.horizontal);
  WindowOriginal o(assets,c.fast);WindowNative n(assets,content,c.fast);SourceWindowPublicationEntry entry;entry.set_page(window_page());
  auto operation=prepare_window(o,n,entry,c);const auto audio=n.audio.master_clocks(),clock=n.work->master_clocks(),initial=o.bus.master_clocks(),polls=n.world.clock.input_polls,refresh=n.work->refresh_pauses();
  const auto retained=n.text->text_tiles;const auto before=window_owners(n,entry);WindowMetadataOracle metadata(n);
  // Genuine authored external JSL is executed/charged once outside the leaf.
  o.instruction_window();n.work->retire_source_work({8,4,3,0});same_window(o,n,entry,"actual external window JSL");metadata.check(o,n);
  auto leaf=operation->begin_source_window_publication(*n.work,window_context(c.direct_page),SourceWindowPublicationCall(entry));
  const auto after_call=window_owners(n,entry);require(!leaf->advance(0)&&leaf->retired_instructions()==0&&window_owners(n,entry)==after_call,
    "Source window factory/zero budget retired work or changed live owners");
  if(c.budget==1){while(!leaf->complete()){
      o.instruction_window();leaf->advance(1);same_window(o,n,entry,"each actual window instruction retirement");metadata.check(o,n);
      require(leaf->retired_instructions()+1==o.foreground,"Native window skipped or doubled a measured source atom");
    }}else{while(o.cpu.program_counter!=o.return_pc())o.instruction_window();while(!leaf->advance(c.budget)){}
    // Large-budget callers observe both copies at completion; their individual
    // boundaries are proved by the identical literal owner stream at budget1.
    metadata.scene=original_descriptor_frame(o,metadata.atlas,0xf800,28);
    metadata.tail=original_descriptor_frame(o,metadata.atlas,0xff00,1);metadata.copies=o.copies;
    same_window(o,n,entry,"large-budget complete window owner effects");}
  metadata.check(o,n,true);
  const unsigned expected_atoms=assets.version==GameVersion::JP?125:129;
  require(leaf->retired_instructions()==expected_atoms&&o.foreground==expected_atoms+1&&o.copies==2,
    "Window helper omitted/doubled its regional atoms or either physical DMA");
  require(o.second_heap_reads==1&&o.second_heap_sample.has_value(),"Original second-copy LDA BASE was not sampled exactly once");
  require(o.cpu.program_counter==o.return_pc()&&o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==c.direct_page&&o.cpu.data_bank==0x7e&&
    !o.cpu.emulation_mode&&!(o.cpu.status_register&0x30)&&o.cpu.x_index==2&&o.cpu.y_index==0&&
    o.cpu.accumulator==(assets.version==GameVersion::JP?*o.second_heap_sample:0),
    "Original window helper lost actual far return/stack/D/DB/width/register effects");
  require(n.audio.master_clocks()-audio==n.work->master_clocks()-clock&&n.work->master_clocks()-clock==o.bus.master_clocks()-initial&&
    n.work->refresh_pauses()-refresh==o.refreshes(),"Original window helper refresh or independent elapsed audio/physical epochs differ");
  require(n.world.clock.input_polls==polls&&n.text->text_tiles==retained&&n.world.windows.pending_publications()==0,
    "Window transport polled input, changed its live BG2 source or manufactured a queued publication");
  require(before.scene_copies+1==n.world.windows.source_scene_publications()&&before.tail_copies+1==n.world.windows.source_tail_publications(),
    "Window transport lacked two individual actual scene/tail MDMA receipts");
  const auto completed=window_owners(n,entry);const auto picture=n.world.runtime->scene().frame();operation->respond_source_window_publication(*leaf);
  require(window_owners(n,entry)==completed&&n.world.runtime->scene().frame()==picture,
    "Window completion response replayed DMA/time/input/publication before the subsequent C1004E");
  sites.insert(o.copy_sites.begin(),o.copy_sites.end());
}
struct WindowFixture {
  WindowNative native;
  std::unique_ptr<SourceWindowPublicationEntry> entry=std::make_unique<SourceWindowPublicationEntry>();
  std::unique_ptr<WorldRuntime::Operation> operation;
  WindowFixture(const GameAssets&assets,const session::Content&content):native(assets,content,true) {
    entry->set_page(window_page());native.world.fade.force_blank(true);native.physical->nmi_enabled(true);
    native.world.clock.interrupt_mask=0x80;native.world.clock.retained_hardware_interrupt_mask=0x80;
    operation=native.publication();
  }
  std::unique_ptr<SourceWindowPublication> begin(){return operation->begin_source_window_publication(*native.work,window_context(),SourceWindowPublicationCall(*entry));}
};
struct WindowSnapshot {
  WindowOwners owners;
  std::optional<std::array<std::uint8_t,256>> page;
  std::optional<std::array<std::uint8_t,2048>> text;
  std::uint64_t audio{};
  unsigned semantic_pending{};
  WindowFrame scene,tail,full;
  bool operator==(const WindowSnapshot&)const=default;
};
WindowSnapshot window_snapshot(const WindowFixture&f) {
  WindowSnapshot r;SourceWindowPublicationEntry absent;const auto&entry=f.entry?*f.entry:absent;r.owners=window_owners(f.native,entry);
  if(f.entry){r.page.emplace();std::copy(f.entry->page().begin(),f.entry->page().end(),r.page->begin());}
  if(f.native.text)r.text=f.native.text->text_tiles;
  r.audio=f.native.audio.master_clocks();r.semantic_pending=f.native.world.windows.pending_publications();
  r.scene=window_frame(f.native.world.windows.frame());r.tail=window_frame(f.native.world.windows.tail_frame());
  r.full=window_frame(f.native.world.windows.full_frame());return r;
}
void window_rejection(const GameAssets&assets,const session::Content&content,unsigned kind) {
  context=assets.title+" WINDOW pure factory admission kind="+std::to_string(kind);WindowFixture f(assets,content);auto ctx=window_context();
  if(kind==0)ctx.native_mode=false;
  if(kind==1)ctx.low_wram_stack=false;
  if(kind==2)ctx.decimal_clear=false;
  if(kind==3)ctx.program_bank=0xc1;
  if(kind==4)ctx.data_bank=0x7f;
  if(kind==5)ctx.direct_page=0x1b12;
  if(kind==6)ctx.stack_pointer=0x1dfc;
  if(kind==7)ctx.stack_pointer=0xffff;
  if(kind==8)f.native.world.fade.write_brightness(15);
  if(kind==9)f.native.world.windows.queue_scene();
  if(kind==10)f.native.world.display.queue_frame(0);
  if(kind==11)f.native.world.meters.state().area_dirty=1;
  if(kind==12){f.native.world.clock.interrupt_mask=0x90;f.native.world.clock.retained_hardware_interrupt_mask=0x90;}
  const auto before=window_snapshot(f);const auto picture=f.native.world.runtime->scene().frame();bool rejected{};
  try{auto leaf=f.operation->begin_source_window_publication(*f.native.work,ctx,SourceWindowPublicationCall(*f.entry));}
  catch(const std::logic_error&){rejected=true;}
  require(rejected&&window_snapshot(f)==before&&f.native.world.runtime->scene().frame()==picture&&!f.native.world.runtime->failed(),
    "Invalid actual window path/owner/context was admitted or mutated before a source lease");
  f.entry->set_page(window_page());
  require(window_snapshot(f)==before,"Rejected window factory claimed its entry or changed equal-page setup");
}
void window_receipts(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" WINDOW exact typed receipts and generic bypass";WindowFixture f(assets,content),foreign(assets,content);
  const auto before=window_snapshot(f),other=window_snapshot(foreign);auto leaf=f.begin();bool duplicate{},generic{},frame{},publication{},source{},page{},early{};
  try{f.begin();}catch(const std::logic_error&){duplicate=true;}
  try{f.operation->respond_actor();}catch(const std::logic_error&){generic=true;}
  try{f.operation->complete_frame({0,0});}catch(const std::logic_error&){frame=true;}
  try{f.operation->complete_publication();}catch(const std::logic_error&){publication=true;}
  try{f.operation->respond_source_publication();}catch(const std::logic_error&){source=true;}
  try{f.entry->set_page(window_page());}catch(const std::logic_error&){page=true;}
  try{f.operation->respond_source_window_publication(*leaf);}catch(const std::logic_error&){early=true;}
  require(duplicate&&generic&&frame&&publication&&source&&page&&early&&window_snapshot(f)==before,
    "Active source window lease allowed generic/early/duplicate completion or page mutation");
  while(!leaf->advance(1)){}const auto complete=window_snapshot(f);bool wrong{},locked{};
  try{foreign.operation->respond_source_window_publication(*leaf);}catch(const std::logic_error&){wrong=true;}
  try{f.entry->set_page(window_page());}catch(const std::logic_error&){locked=true;}
  require(wrong&&locked&&window_snapshot(f)==complete&&window_snapshot(foreign)==other,"Foreign/completed unacknowledged window receipt changed another parent or unlocked locals");
  f.operation->respond_source_window_publication(*leaf);bool repeated{},second{};
  try{f.operation->respond_source_window_publication(*leaf);}catch(const std::logic_error&){repeated=true;}
  try{f.begin();}catch(const std::logic_error&){second=true;}
  require(repeated&&second&&window_snapshot(f)==complete,"Consumed source window receipt replayed either physical copy");
  bool sealed{};try{f.entry->set_page(window_page());}catch(const std::logic_error&){sealed=true;}
  require(sealed&&window_snapshot(f)==complete,"Single-use acknowledged window entry was rewritten or changed physical state");
}
void window_abandon(const GameAssets&assets,const session::Content&content,bool parent,bool complete) {
  context=assets.title+" WINDOW abandonment parent="+std::to_string(parent)+" complete="+std::to_string(complete);WindowFixture f(assets,content);auto leaf=f.begin();
  if(complete){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Window REP alone completed two copies");
  const auto before=window_snapshot(f);bool rejected{};
  if(parent){f.operation.reset();try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}}
  else{leaf.reset();try{f.begin();}catch(const std::logic_error&){rejected=true;}}
  require(rejected&&window_snapshot(f)==before,"Abandoned partial/completed window parent/leaf reused a receipt or advanced physical work");
}
void window_lost_owner(const GameAssets&assets,const session::Content&content,unsigned owner,unsigned stage) {
  context=assets.title+" WINDOW lost actual owner="+std::to_string(owner)+" stage="+std::to_string(stage);WindowFixture f(assets,content);
  std::unique_ptr<SourceWindowPublication> leaf;if(stage){leaf=f.begin();if(stage==2){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Window first atom completed transport");}
  std::optional<SourceWindowPublicationCall> call;if(owner==0&&stage==0)call.emplace(*f.entry);
  if(owner==0)f.entry.reset();
  if(owner==1)f.native.text.reset();
  if(owner==2)f.native.nmi.reset();
  if(owner==3)f.native.work.reset();
  if(owner==4)f.native.physical.reset();
  const auto before=window_snapshot(f);const auto picture=f.native.world.runtime->scene().frame();bool rejected{};
  try{if(!stage){if(call)leaf=f.operation->begin_source_window_publication(*f.native.work,window_context(),*call);else leaf=f.begin();}
    else if(stage==1)leaf->advance(1);else f.operation->respond_source_window_publication(*leaf);
  }catch(const std::logic_error&){rejected=true;}
  require(rejected&&window_snapshot(f)==before&&f.native.world.runtime->scene().frame()==picture,
    "Expired actual BG2/page/NMI/work/physical owner was dereferenced or advanced either copy");
}
void window_foreign_work(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" WINDOW foreign actual SourceWork identity";WindowFixture f(assets,content),foreign(assets,content);
  const auto before=window_snapshot(f),other=window_snapshot(foreign);bool rejected{};
  try{auto leaf=f.operation->begin_source_window_publication(*foreign.native.work,window_context(),SourceWindowPublicationCall(*f.entry));}
  catch(const std::logic_error&){rejected=true;}
  require(rejected&&window_snapshot(f)==before&&window_snapshot(foreign)==other&&!f.native.world.runtime->failed(),
    "Foreign work clock changed either actual window continuation before admission");
}
void window_rebind(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" WINDOW sole BG2 binding cannot alias a second owner";WindowFixture f(assets,content);cutscenes::DisplayState foreign;
  const auto before=window_snapshot(f);bool rejected{};
  try{f.native.world.windows.bind_source_text_tiles(foreign);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&window_snapshot(f)==before,"WindowHost silently rebound its retained source BG2 authority");
}
void window_reverse_peripheral(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" WINDOW same-clock reverse peripheral pure tick admission";
  WindowNative n(assets,content,true,true,false);n.world.fade.force_blank(true);SourceWindowPublicationEntry entry;entry.set_page(window_page());
  const auto before=window_owners(n,entry);const auto audio=n.audio.master_clocks();const auto random=n.world.random;const auto picture=n.world.runtime->scene().frame();bool rejected{};
  try{auto operation=n.world.runtime->begin_source_window_tick(*n.work,window_context());}catch(const std::logic_error&){rejected=true;}
  require(rejected&&window_owners(n,entry)==before&&n.audio.master_clocks()==audio&&n.world.random==random&&n.world.runtime->scene().frame()==picture&&
    !n.world.runtime->failed(),"Reverse-only same-clock peripheral affinity started the excluded prefix or claimed a parent");
}
void window_tick_rejection(const GameAssets&assets,const session::Content&content,unsigned kind) {
  context=assets.title+" WINDOW pure actual tick admission kind="+std::to_string(kind);
  WindowNative n(assets,content,true,kind!=2);SourceWindowPublicationEntry entry;entry.set_page(window_page());
  n.world.fade.force_blank(true);n.physical->nmi_enabled(true);
  n.world.clock.interrupt_mask=0x80;n.world.clock.retained_hardware_interrupt_mask=0x80;
  if(kind==0)n.world.runtime->restore_world_interrupt_callback(); // Genuine idle callback owner.
  if(kind==1) {
    dialogue::WindowCommand command;command.action=dialogue::WindowAction::Open;command.id=dialogue::WindowId{1};
    auto open=n.world.windows.begin(command);
    while(open->advance()==dialogue::OutputProgress::Suspended)open->respond();
    require(open->complete()&&!n.world.text.windows.empty(),"Actual open-window preparation failed");
  }
  if(kind==3)n.text.reset();
  if(kind==4)n.world.windows.queue_scene();
  if(kind==5)n.world.fade.write_brightness(15);
  const auto before=window_owners(n,entry);const auto audio=n.audio.master_clocks();const auto random=n.world.random;
  const auto picture=n.world.runtime->scene().frame();const auto scene=window_frame(n.world.windows.frame()),tail=window_frame(n.world.windows.tail_frame());
  const auto full=window_frame(n.world.windows.full_frame());bool rejected{};
  try{auto operation=n.world.runtime->begin_source_window_tick(*n.work,window_context());}catch(const std::logic_error&){rejected=true;}
  require(rejected&&window_owners(n,entry)==before&&n.audio.master_clocks()==audio&&n.world.random==random&&
    n.world.runtime->scene().frame()==picture&&window_frame(n.world.windows.frame())==scene&&window_frame(n.world.windows.tail_frame())==tail&&
    window_frame(n.world.windows.full_frame())==full&&!n.world.runtime->failed(),
    "Unsupported actual callback/open-window/NMI/BG2/queue/blank owner entered the excluded prefix or changed metadata/time/input");
}
void window_wrong_parent(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" WINDOW actual non-window ScreenUpdate parent admission";WindowNative n(assets,content,true);n.world.fade.force_blank(true);
  SourceWindowPublicationEntry entry;entry.set_page(window_page());auto operation=n.world.runtime->begin(TickKind::WorldFrame);bool suspended{};
  for(unsigned i=0;i<100;++i)if(operation->advance(1)==dialogue::Progress::Suspended){suspended=true;break;}
  require(suspended&&operation->service()==SceneService::ScreenUpdate,"Wrong-parent fixture did not establish its real ordinary WorldFrame suspension");
  const auto before=window_owners(n,entry);const auto audio=n.audio.master_clocks();bool rejected{};
  try{auto leaf=operation->begin_source_window_publication(*n.work,window_context(),SourceWindowPublicationCall(entry));}catch(const std::logic_error&){rejected=true;}
  require(rejected&&window_owners(n,entry)==before&&n.audio.master_clocks()==audio&&!n.world.runtime->failed(),
    "Window helper accepted an unrelated actual ScreenUpdate continuation or mutated admission");
}
unsigned window_regressions(const GameAssets&assets,const session::Content&content) {
  for(unsigned kind=0;kind<13;++kind)window_rejection(assets,content,kind);
  window_receipts(assets,content);
  for(bool parent:{false,true})for(bool complete:{false,true})window_abandon(assets,content,parent,complete);
  for(unsigned owner=0;owner<5;++owner)for(unsigned stage=0;stage<3;++stage)if(owner!=3||stage)window_lost_owner(assets,content,owner,stage);
  window_foreign_work(assets,content);window_rebind(assets,content);window_reverse_peripheral(assets,content);window_wrong_parent(assets,content);
  for(unsigned kind=0;kind<6;++kind)window_tick_rejection(assets,content,kind);
  return 42;
}
} //namespace
int main(int argc,char**argv){try{
  if(argc<2)return 77;
  const bool smoke=std::string(argv[1])=="--window-publication-smoke";if(smoke&&argc<3)return 77;
  for(int arg=smoke?2:1;arg<argc;++arg){const auto assets=load_game_assets(argv[arg],asset_profiles());const session::Content content(assets.image,assets.version);
    unsigned cases{};std::set<WindowOriginal::Witness> sites;
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned direct_page:{0x1e00u,0x1d12u})for(bool declared:{false,true}){
      WindowCase c;c.fast=fast;c.budget=budget;c.direct_page=direct_page;c.declared=declared;window_case(assets,content,c,sites);++cases;}
    const auto regressions=window_regressions(assets,content);
    if(!smoke){
      for(bool fast:{false,true})for(unsigned direct_page:{0x1e00u,0x1d12u})for(bool declared:{false,true}){
        WindowCase c;c.fast=fast;c.direct_page=direct_page;c.declared=declared;c.enabled=false;c.line=224;c.horizontal=1300;
        window_case(assets,content,c,sites);++cases;}
      // Static slow-ROM helper upper18872 + external62 + actual default
      // NMI/OAM conservative9304 + aggregate foreground refresh reserve920
      // =29158 <25shortest scanlines34000. Uniform25lines is declared from
      // that source bound; no fitted waits/result selects an entry phase.
      for(bool fast:{false,true})for(unsigned line=200;line<=224;++line)for(unsigned h=0;h<1364;h+=16){
        WindowCase c;c.fast=fast;c.line=line;c.horizontal=h;window_case(assets,content,c,sites);++cases;}
      require(sites.contains({0xc086cc,1}),"Declared physical matrix missed original NMI after the first physical copy");
      require(sites.contains({0xc086cc,2}),"Declared physical matrix missed original NMI after the second physical copy");
      require(sites.contains({0xc08633,0}),"Declared physical matrix missed original transient MODE/SIZE overlap");
      require(sites.contains({0xc0863e,0}),"Declared physical matrix missed original transient source-bank/destination overlap");
      require(sites.contains({assets.version==GameVersion::JP?0xc13559u:0xc12e3bu,2}),"Declared physical matrix missed true window caller after final RTL");
    }
    std::cout<<"PASS "<<assets.title<<" original forced-blank window two-copy compositions="<<cases<<" regressions="<<regressions<<" checks="<<checks<<'\n';
  }return 0;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
