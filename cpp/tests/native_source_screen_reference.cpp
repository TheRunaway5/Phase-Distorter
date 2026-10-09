// Independent original UPDATE_SCREEN authority. Entry descriptors are produced
// independently; only the measured leaf and real NMI use physical timelines.
#define EB_NATIVE_SOURCE_NMI_REFERENCE_NO_MAIN
#include "native_source_nmi_reference.cpp"
#include "eb/native/story/source_screen.hpp"
#include <algorithm>
#include <set>
#include <sstream>

namespace {
using entities::graphics::ObjectEmitter;
using entities::graphics::ObjectMap;
struct ScreenOriginal {
  SnesBus bus; MainCpu65816 cpu;
  bool fast,dma_access{};
  unsigned interrupts{},foreground{};
  std::uint64_t origin{},cycles{},access_penalty{},dma_debt{};
  std::set<unsigned> interrupted_sites;
  struct Store {unsigned site,address,value;std::uint64_t clock;};
  std::vector<Store> stores;
  ScreenOriginal(const GameAssets &assets,bool speed,unsigned selected=1):bus(assets.image,assets.version),cpu(bus),fast(speed) {
    cpu.set_runtime(MainCpuRuntime::Legacy);cpu.emulation_mode=false;cpu.status_register=4;
    cpu.program_counter=0xc0ff00;cpu.stack_pointer=0x1fff;cpu.direct_page=0x200;cpu.data_bank=0x7e;
    bus.write_byte(0x4200,0);bus.write_byte(0x420d,fast);
    // Original prehistory uses its own real mapped bus: bank00 direct-page
    // OAM writes must alias the same7E WRAM. Only its resulting owners feed
    // this original measured bus; its timeline never feeds the native host.
    SnesBus preparation(assets.image,assets.version);
    for(unsigned b=0;b<2;++b)for(unsigned i=0;i<544;++i)
      preparation.work_ram[(b?0x800:0x500)+i]=std::uint8_t(i*71+b*113+37);
    preparation.work_ram[0x2e]=1;
    MainCpu65816 producer(preparation);producer.set_runtime(MainCpuRuntime::Legacy);producer.emulation_mode=false;
    producer.status_register=4;producer.stack_pointer=0x1fff;producer.direct_page=0x200;producer.data_bank=0x7e;
    const bool jp=assets.version==GameVersion::JP;
    const auto invoke=[&](unsigned site,unsigned target) {
      const auto at=site&0x3fffff;
      require(assets.image[at]==0x22&&(assets.image[at+1]|unsigned(assets.image[at+2])<<8|unsigned(assets.image[at+3])<<16)==target,
          "Original retained-screen producer lost its literal regional far call");
      producer.program_counter=site;
      bool returned{};
      for(unsigned count=0;count<10000;++count){producer.step_instruction();if(producer.program_counter==site+4){returned=true;break;}}
      require(returned,"Original retained-screen producer lost its far return");
    };
    for(unsigned round=0;round<(selected==1?2u:3u);++round) {
      const unsigned b=1+(round%2);
      for(unsigned i=0;i<8;++i){const auto value=std::uint16_t(0x4100+b*0x211+i*0x127);
        preparation.work_ram[0x31+i*2]=std::uint8_t(value);preparation.work_ram[0x32+i*2]=std::uint8_t(value>>8);}
      invoke(jp?0xc100dc:0xc10067,jp?0xc088a3:0xc088b1);
      invoke(jp?0xc100e4:0xc1006f,jp?0xc08b17:0xc08b26);
    }
    bus.work_ram=preparation.work_ram;
  }
  void put(unsigned at,unsigned value) {bus.work_ram[at]=std::uint8_t(value);bus.work_ram[at+1]=std::uint8_t(value>>8);}
  unsigned word(unsigned at) const {return bus.work_ram[at]|unsigned(bus.work_ram[at+1])<<8;}
  unsigned delta() const {return bus.game_version()==GameVersion::JP?15:0;}
  unsigned call() const {return bus.game_version()==GameVersion::JP?0xc100e4:0xc1006f;}
  unsigned returned() const {return call()+4;}
  unsigned entry() const {return 0xc08b26-delta();}
  void far(unsigned site,unsigned target) {
    const auto image=bus.cartridge_image();const auto at=site&0x3fffff;
    require(image[at]==0x22&&(image[at+1]|unsigned(image[at+2])<<8|unsigned(image[at+3])<<16)==target,
        "Actual original regional caller no longer contains its literal far call");
    cpu.program_counter=site;
    for(unsigned i=0;i<10000;++i) {cpu.step_instruction();if(cpu.program_counter==site+4)return;}
    require(false,"Original independent producer did not far-return");
  }
  void audit() {
    origin=bus.master_clocks();cycles=cpu.cycle_count;access_penalty=dma_debt=0;
    bus.debug_read_wram=[this](unsigned,std::uint8_t value){if(!dma_access)access_penalty+=2;return value;};
    bus.debug_write_wram=[this](unsigned,std::uint8_t value){if(!dma_access)access_penalty+=2;return value;};
    bus.debug_read_rom=[this](unsigned offset,std::uint8_t value) {
      const auto site=cpu.program_counter&0x3fffff;
      require((offset>=site&&offset-site<4)||offset==0xffea||offset==0xffeb,
          "Closed screen/default-NMI leaf read undeclared ROM data");
      access_penalty+=(!fast||(cpu.program_counter>>16)==0||offset==0xffea||offset==0xffeb)?2:0;
      return value;
    };
    cpu.observe_memory_write=[this](unsigned address,std::uint8_t value) {
      const unsigned bank=address>>16,lo=address&65535;
      if((bank&0x40)==0&&lo==0x420b) {
        require(value==1,"Closed screen/default-NMI fixture started an unowned DMA channel");
        const unsigned count=bus.read_byte(0x4305)|unsigned(bus.read_byte(0x4306))<<8;
        require(count==544,"Closed screen fixture started a non-OAM DMA owner");
        dma_debt+=16+std::uint64_t(count)*8;dma_access=true;
      }
      if(bank==0x7e||((bank&0x40)==0&&lo<0x2000))
        stores.push_back({cpu.program_counter,lo,value,bus.master_clocks()});
    };
  }
  void step() {dma_access=false;cpu.step_instruction();dma_access=false;}
  void drain() {
    while(bus.take_nmi()) {
      const auto pc=cpu.program_counter;const auto stack=cpu.stack_pointer;
      const auto image=bus.cartridge_image();
      require(image[0xffea]==0x47&&image[0xffeb]==0x81&&image[0x8147]==0x5c&&
          image[0x8148]==0x70&&image[0x8149]==0x81&&image[0x814a]==0xc0,
          "Original native NMI vector no longer matches linked authority");
      interrupted_sites.insert(pc);cpu.service_interrupt(true);++interrupts;
      bool done{};
      for(unsigned i=0;i<2000;++i) {
        if(cpu.program_counter==pc&&cpu.stack_pointer==stack){done=true;break;}
        step();
      }
      require(done,"Original NMI did not return to the interrupted screen instruction");
    }
  }
  void instruction() {drain();require(cpu.program_counter!=returned(),"Original screen ran into WAIT");step();++foreground;drain();}
  std::uint64_t refreshes() const {
    const auto useful=(cpu.cycle_count-cycles)*6+access_penalty+dma_debt;
    require(bus.master_clocks()-origin>=useful,"Actual instruction/access/DMA total exceeds elapsed screen time");
    const auto pauses=bus.master_clocks()-origin-useful;
    require(pauses%40==0,"Screen fixture elapsed has unowned non-refresh debt");return pauses/40;
  }
};
struct ScreenNative {
  NativeAudio audio;session::World world;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  std::unique_ptr<SourceNmiWork> nmi;
  ScreenNative(const GameAssets &assets,const session::Content &content,bool fast,bool interrupt_owner=true,unsigned selected=1,bool physical_owner=true)
      :audio(assets.image,assets.version),world(content,audio,256) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(assets.image);
    world.display.transient_memory().configure(assets.version);world.runtime->refresh_world_capture();
    world.runtime->reset_interrupt_callback();world.clock.action_scripts_disabled=1;
    // Existing semantic screen producers create the actual two retained
    // latches before binding their physical work owner; no fake publication.
    for(unsigned b=0;b<2;++b)for(unsigned i=0;i<544;++i)
      world.actor_object_display_state.buffers[b].bytes[i]=std::uint8_t(i*71+b*113+37);
    for(unsigned round=0;round<(selected==1?2u:3u);++round) {
      const unsigned b=1+(round%2);
      for(unsigned i=0;i<4;++i)world.display.staged_scroll[i]={std::uint16_t(0x4100+b*0x211+i*2*0x127),
        std::uint16_t(0x4100+b*0x211+(i*2+1)*0x127)};
      world.frame_display.update_world_screen();
    }
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{work->request_nmi();},[]{},0,0,false);
    if(physical_owner)physical->bind_peripherals(world.peripherals);
    else world.peripherals.bind_clock(*physical);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*world.runtime,
        world.actor_object_display_state,*world.actor_object_display,world.frame_display,fast);
    audio.bind_clock(*work);
    nmi=std::make_unique<SourceNmiWork>(*world.runtime,audio,world.clock,world.session,world.frame_display,
        world.palette,world.display,world.scratch,world.fade,world.presentation,world.peripherals,SourceInterruptContext{true,true,true});
    if(interrupt_owner)work->bind_interrupt_work(*nmi);
  }
  std::unique_ptr<WorldRuntime::Operation> screen() {
    auto op=world.runtime->begin(TickKind::WorldFrame);
    for(unsigned count=0;count<100;++count)if(op->advance(1)==dialogue::Progress::Suspended) {
      require(op->service()==SceneService::ScreenUpdate,"Actual world frame did not suspend at its screen continuation");return op;
    }
    throw std::runtime_error(context+": Actual world frame did not reach UPDATE_SCREEN");
  }
};
struct ScreenReceipt {
  std::array<std::array<std::uint8_t,544>,2> objects{};
  std::array<std::uint8_t,1036> working{};
  std::array<std::array<battle::PsiScroll,4>,2> buffered{};
  std::array<battle::PsiScroll,4> staged{},hardware{};
  std::array<std::uint8_t,544> displayed_objects{};
  std::array<std::uint8_t,7> dma{};
  std::array<std::uint8_t,65536> vram{};
  InputState input;
  std::uint16_t request{},address{},end{},high_address{};
  std::uint8_t next{},high_buffer{},pending{},counter{};
  std::uint32_t timer{};
  std::uint64_t clocks{},frames{},interrupts{},polls{};
  unsigned phase{};
  bool operator==(const ScreenReceipt&) const=default;
};
ScreenReceipt screen_receipt(ScreenOriginal &s) {
  ScreenReceipt r;
  for(unsigned b=0;b<2;++b) {
    std::copy_n(s.bus.work_ram.begin()+(b?0x800:0x500),544,r.objects[b].begin());
    for(unsigned i=0;i<4;++i)r.buffered[b][i]={std::uint16_t(s.word(0x41+i*8+b*2)),std::uint16_t(s.word(0x45+i*8+b*2))};
  }
  const unsigned working=s.bus.game_version()==GameVersion::JP?0x2800:0x2400;
  std::copy_n(s.bus.work_ram.begin()+working,1036,r.working.begin());
  for(unsigned i=0;i<4;++i)r.staged[i]={std::uint16_t(s.word(0x31+i*4)),std::uint16_t(s.word(0x33+i*4))};
  const auto view=s.bus.scene_read_view();
  for(unsigned i=0;i<4;++i)r.hardware[i]={view.background_scroll_x[i],view.background_scroll_y[i]};
  r.displayed_objects=s.bus.object_attributes;r.vram=s.bus.video_ram;
  for(unsigned i=0;i<7;++i)r.dma[i]=s.bus.read_byte(0x4300+i);
  for(unsigned i=0;i<2;++i) {
    r.input.state[i]=s.word(0x65+i*2);r.input.held[i]=s.word(0x69+i*2);
    r.input.pressed[i]=s.word(0x6d+i*2);r.input.repeat_timer[i]=s.word(0x71+i*2);
  }
  r.input.player_activity=s.word(s.bus.game_version()==GameVersion::JP?0xa2a:0xa34);
  r.request=s.word(0x2c);r.next=s.bus.work_ram[0x2e];r.address=s.word(3);r.end=s.word(5);
  r.high_address=s.word(7);r.high_buffer=s.bus.work_ram[10];r.pending=s.bus.work_ram[0x2b];r.counter=s.bus.work_ram[2];
  r.timer=s.word(0xa7)|(s.word(0xa9)<<16);r.clocks=s.bus.master_clocks();r.frames=s.bus.completed_frames;r.interrupts=s.interrupts;
  r.phase=AudioFrameClock::physical_phase(s.bus.scanline_index(),s.bus.scanline_clock(),s.bus.completed_frames);return r;
}
ScreenReceipt screen_receipt(const ScreenNative &n) {
  ScreenReceipt r;const auto &w=n.world;
  for(unsigned b=0;b<2;++b){r.objects[b]=w.actor_object_display_state.buffers[b].bytes;r.buffered[b]=w.frame_display.source_buffer(b+1).scroll;}
  r.working=w.actor_object_display_state.working;r.staged=w.display.staged_scroll;r.hardware=w.display.source_hardware_scroll();
  if(w.frame_display.screen().raw_objects)r.displayed_objects=w.frame_display.screen().raw_objects->bytes;
  r.vram=w.display.vram();for(unsigned i=0;i<7;++i)r.dma[i]=w.peripherals.dma(0)[i];r.input=w.input;
  r.request=w.frame_display.display_request();r.next=w.frame_display.next_buffer_id();
  const auto &b=w.actor_object_display_state.builder;r.address=b.address;r.end=b.end_address;r.high_address=b.high_address;r.high_buffer=b.high_buffer;
  r.pending=w.clock.new_frame_started;r.counter=w.clock.frame_counter;r.timer=w.session.elapsed_timer;
  r.clocks=n.work?n.work->master_clocks():n.audio.master_clocks();r.frames=n.physical?n.physical->physical_frames():0;
  r.interrupts=n.nmi?n.nmi->completed_interrupts():n.work->completed_source_interrupts();r.polls=w.clock.input_polls;r.phase=n.physical?n.physical->phase():0;return r;
}
void same_screen(ScreenOriginal &o,const ScreenNative &n,const char *where) {
  const auto expected=screen_receipt(o),actual=screen_receipt(n);
  if(actual!=expected) {
    std::ostringstream out;out<<where<<" PC="<<std::hex<<o.cpu.program_counter<<std::dec<<" foreground="<<o.foreground
      <<" clocks="<<actual.clocks<<'/'<<expected.clocks<<" request="<<actual.request<<'/'<<expected.request
      <<" next="<<unsigned(actual.next)<<'/'<<unsigned(expected.next)<<" NMI="<<actual.interrupts<<'/'<<expected.interrupts
      <<" OAM="<<(actual.objects==expected.objects)<<" working="<<(actual.working==expected.working)
      <<" scroll="<<(actual.buffered==expected.buffered)<<" hardware="<<(actual.hardware==expected.hardware)
      <<" DMA="<<(actual.dma==expected.dma)<<" input="<<(actual.input==expected.input);
    for(unsigned b=0;b<2;++b)for(unsigned i=0;i<544;++i)if(actual.objects[b][i]!=expected.objects[b][i]) {
      out<<" first OAM byte="<<std::hex<<(b?0x800:0x500)+i<<std::dec
        <<" native="<<unsigned(actual.objects[b][i])<<" original="<<unsigned(expected.objects[b][i]);
      b=2;break;
    }
    require(false,out.str());
  }
  ++checks;
}
void independent_partial(ScreenOriginal &o,ScreenNative &n,unsigned selected,unsigned count) {
  if(!count)return;
  // This original producer has its own mapped physical bus and genuine WRAM
  // mirrors. Only its descriptor/builder results become original entry owners;
  // neither producer timing nor any original result feeds the native host.
  const auto image=o.bus.cartridge_image();SnesBus preparation(image,o.bus.game_version());
  preparation.work_ram=o.bus.work_ram;
  std::vector<std::uint8_t> map;
  for(unsigned i=0;i<count;++i)map.insert(map.end(),{std::uint8_t(i*3),std::uint8_t(0x20+i),0x34,
      std::uint8_t(i*2),std::uint8_t((i&1)|((i+1==count)?0x80:0))});
  std::copy(map.begin(),map.end(),preparation.work_ram.begin()+0x6000);preparation.work_ram[0xb]=0x7e;preparation.work_ram[0xc]=0;
  MainCpu65816 producer(preparation);producer.set_runtime(MainCpuRuntime::Legacy);producer.emulation_mode=false;
  producer.status_register=4;producer.stack_pointer=0x1fff;producer.direct_page=0x200;producer.data_bank=0x7e;
  producer.accumulator=0x6000;producer.x_index=0xfffd;producer.y_index=31;
  const unsigned target=0xc08cd5-o.delta();unsigned site{};
  for(unsigned at=0xc08b8e - o.delta();at<0xc08c53-o.delta();++at) {
    const auto offset=at&0x3fffff;
    if(image[offset]==0x22&&(image[offset+1]|unsigned(image[offset+2])<<8|unsigned(image[offset+3])<<16)==target){site=at;break;}
  }
  require(site!=0,"Actual original queue has no JSL to its genuine sprite producer");producer.program_counter=site;
  bool returned{};
  for(unsigned i=0;i<10000;++i){producer.step_instruction();if(producer.program_counter==site+4){returned=true;break;}}
  require(returned,"Original independent partial sprite producer failed its real far return");
  const unsigned base=selected==1?0x500:0x800;
  std::copy_n(preparation.work_ram.begin()+base,544,o.bus.work_ram.begin()+base);
  for(unsigned i=3;i<=10;++i)o.bus.work_ram[i]=preparation.work_ram[i];
  ObjectEmitter native(n.world.actor_object_display_state.buffers[selected-1]);native.clear();
  native.append(ObjectMap{map,0x6000,0x6000},0xfffd,31);
  n.world.actor_object_display_state.builder={std::uint16_t(base+native.count()*4),std::uint16_t(base+512),
      std::uint16_t(base+512+native.high_count()),native.high_buffer()};
  require(native.count()==count&&native.high_buffer()!=0x80,"Actual producer did not retain the declared partial high table");
  require(o.word(3)==n.world.actor_object_display_state.builder.address&&o.word(7)==n.world.actor_object_display_state.builder.high_address&&
      o.bus.work_ram[10]==native.high_buffer()&&std::equal(o.bus.work_ram.begin()+base,o.bus.work_ram.begin()+base+544,
        n.world.actor_object_display_state.buffers[selected-1].bytes.begin()),"Independent original/native partial producers differ");
}
std::unique_ptr<WorldRuntime::Operation> prepare_screen(ScreenOriginal &o,ScreenNative &n,unsigned selected,unsigned insertion,
    unsigned partial,unsigned high,unsigned pending,unsigned line,unsigned horizontal,bool enabled=true) {
  auto &w=n.world;const bool jp=o.bus.game_version()==GameVersion::JP;
  require(w.frame_display.next_buffer_id()==selected&&o.bus.work_ram[0x2e]==selected,
      "Independent real screen producers selected another drawing buffer");
  o.far(jp?0xc100dc:0xc10067,jp?0xc088a3:0xc088b1);auto operation=n.screen();
  require(o.bus.master_clocks()==n.work->master_clocks(),"Actual original/native OAM_CLEAR producer clocks differ");
  independent_partial(o,n,selected,partial);
  const unsigned working=jp?0x2800:0x2400;
  w.actor_object_display_state.working[2]=std::uint8_t(insertion);w.actor_object_display_state.working[3]=std::uint8_t(insertion>>8);
  o.put(working+2,insertion);
  for(unsigned i=0;i<4;++i){w.display.staged_scroll[i]={std::uint16_t(0x8713+i*0x137),std::uint16_t(0xa229+i*0x251)};
    o.put(0x31+i*4,w.display.staged_scroll[i].x);o.put(0x33+i*4,w.display.staged_scroll[i].y);}
  // Preserve the adjacent display-ID byte using the existing word producer.
  for(unsigned i=0;i<high*256;++i)w.frame_display.request_retained_screen();
  require(!pending||w.frame_display.pending_display_id()==pending,"Declared pending buffer disagrees with the genuine retained producer");
  o.put(0x2c,w.frame_display.display_request());
  w.clock.frame_counter=0xfe;o.bus.work_ram[2]=0xfe;w.clock.new_frame_started=0x7f;o.bus.work_ram[0x2b]=0x7f;
  w.session.elapsed_timer=0x1234ffff;o.put(0xa7,w.session.elapsed_timer);o.put(0xa9,w.session.elapsed_timer>>16);
  w.input.state={0x3000,0x8400};w.input.held={0x1234,0x4321};w.input.pressed={0xabcd,0xefab};w.input.repeat_timer={9,7};w.input.player_activity=0xffff;
  for(unsigned i=0;i<2;++i){o.put(0x65+i*2,w.input.state[i]);o.put(0x69+i*2,w.input.held[i]);o.put(0x6d+i*2,w.input.pressed[i]);o.put(0x71+i*2,w.input.repeat_timer[i]);}
  o.put(jp?0xa2a:0xa34,w.input.player_activity);o.put(0x20,0x851b);o.put(0xa3,w.display.transient_memory().base_address());o.put(0xa1,w.display.transient_memory().current_address());
  w.palette.upload_mode=0;o.bus.work_ram[0x30]=0;w.fade.force_blank(true);const auto fade=w.fade.state();
  o.bus.work_ram[0xd]=fade.brightness;o.bus.work_ram[0x28]=fade.step;o.bus.work_ram[0x29]=fade.delay;o.bus.work_ram[0x2a]=fade.remaining;
  o.bus.work_ram[jp?0xc9:0xcb]=w.audio.sound_queue_start();o.bus.work_ram[jp?0xc8:0xca]=w.audio.sound_queue_end();
  const auto target=std::uint64_t(262*1364)+line*1364+horizontal;
  o.cpu.program_counter=0xc0ff00;
  while(o.bus.master_clocks()<target){o.cpu.execute_instruction<0xea>(0,1);n.work->retire_source_work({2,1,0,0});}
  require(o.bus.master_clocks()==n.work->master_clocks(),"Independent physical producer warm-up differs");
  // Perform the actual hardware transition while its owner is still disabled.
  // A real warm-up retirement can enter VBlank and leave its unread latch set.
  n.physical->nmi_enabled(enabled);
  w.clock.interrupt_mask=std::uint8_t(enabled?0x80:0);w.clock.retained_hardware_interrupt_mask=w.clock.interrupt_mask;
  o.bus.write_byte(0x4200,std::uint8_t(enabled?0x80:0));o.bus.work_ram[0x1e]=w.clock.interrupt_mask;
  o.cpu.program_counter=o.call();o.cpu.status_register=4;o.cpu.data_bank=0x7e;o.cpu.direct_page=0x200;
  o.cpu.accumulator=0x1234;o.cpu.x_index=0x4567;o.cpu.y_index=0x89ab;
  const auto image=o.bus.cartridge_image();const auto at=o.call()&0x3fffff;
  require(image[at]==0x22&&(image[at+1]|unsigned(image[at+2])<<8|unsigned(image[at+3])<<16)==o.entry(),"Original regional screen call differs");
  o.audit();same_screen(o,n,"declared real entry owners");return operation;
}
void screen_case(const GameAssets &assets,const session::Content &content,bool fast,unsigned budget,unsigned selected,
    unsigned insertion,unsigned partial,unsigned high,unsigned pending,unsigned line,unsigned horizontal,std::set<unsigned> &sites) {
  context=assets.title+" SCREEN fast="+std::to_string(fast)+" budget="+std::to_string(budget)+" selected="+std::to_string(selected)+
      " insertion="+std::to_string(insertion)+" partial="+std::to_string(partial)+" high="+std::to_string(high)+
      " pending="+std::to_string(pending)+" phase="+std::to_string(line)+":"+std::to_string(horizontal);
  ScreenOriginal source(assets,fast,selected);ScreenNative native(assets,content,fast,true,selected);
  auto operation=prepare_screen(source,native,selected,insertion,partial,high,pending,line,horizontal);
  auto leaf=operation->begin_source_screen(*native.work,{true,true,true,true});
  const auto before=screen_receipt(native);
  const auto audio_before=native.audio.master_clocks(),refresh_before=native.work->refresh_pauses();
  const auto picture=native.world.runtime->published_frame();
  require(!leaf->advance(0)&&screen_receipt(native)==before&&!leaf->retired_instructions(),"Zero screen budget mutated or retired work");
  bool early{};try{operation->respond_source_screen(*leaf);}catch(const std::logic_error&){early=true;}
  require(early&&screen_receipt(native)==before,"Incomplete screen receipt changed or released its frame");
  if(budget==1) {
    for(unsigned i=0;;++i) {
      require(i<10000,"Original/native source screen did not return");source.instruction();const bool done=leaf->advance(1);
      same_screen(source,native,"literal instruction retirement");
      require(leaf->retired_instructions()==source.foreground,"Screen skipped or duplicated literal instructions");
      require(done==(source.cpu.program_counter==source.returned()),"Screen completed at another original far return");if(done)break;
    }
  } else {
    while(source.cpu.program_counter!=source.returned())source.instruction();
    for(unsigned i=0;!leaf->advance(budget);++i)require(i<100,"Native source screen did not complete");
    same_screen(source,native,"budgeted far return");require(leaf->retired_instructions()==source.foreground,"Budget changed screen instruction count");
  }
  require(source.cpu.stack_pointer==0x1fff&&source.cpu.direct_page==0x200&&source.cpu.data_bank==0x7e&&!(source.cpu.status_register&0x30),
      "Original screen lost real far return/context/widths");
  require(native.work->refresh_pauses()-refresh_before==source.refreshes(),"Exact original screen refresh pauses differ");
  require(native.audio.master_clocks()-audio_before==native.work->master_clocks()-before.clocks,"Screen audio elapsed was omitted or duplicated");
  require(!native.world.clock.input_polls&&native.world.clock.publications==source.interrupts,"Screen performed input or synthetic publication");
  if(!source.interrupts)require(native.world.runtime->published_frame()==picture,"Screen selection fabricated a physical scene publication");
  const auto completed=screen_receipt(native);operation->respond_source_screen(*leaf);
  require(screen_receipt(native)==completed&&native.world.clock.input_polls==0,"Screen receipt repeated effects/time/input");
  bool duplicate{};try{operation->respond_source_screen(*leaf);}catch(const std::logic_error&){duplicate=true;}
  require(duplicate&&screen_receipt(native)==completed,"Duplicate source screen receipt changed owners");
  require(operation->advance()==dialogue::Progress::Suspended&&operation->service()==SceneService::Frame,"Screen receipt failed to resume exact WAIT continuation");
  sites.insert(source.interrupted_sites.begin(),source.interrupted_sites.end());
}
void rejected_screen(const GameAssets &assets,const session::Content &content,unsigned kind) {
  context=assets.title+" SCREEN pure admission rejection kind="+std::to_string(kind);
  ScreenOriginal source(assets,true);ScreenNative n(assets,content,true,kind!=5);
  auto operation=prepare_screen(source,n,1,0,0,0,0,40,100,kind==5);auto &w=n.world;
  SourceScreenContext entry{true,true,true,true};
  if(kind==0)entry.native_mode=false;
  if(kind==1)entry.upper_rom_caller=false;
  if(kind==2)entry.low_wram_stack=false;
  if(kind==3)entry.low_wram_data_bank=false;
  if(kind==4){w.clock.interrupt_mask=0x90;w.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind>=6&&kind<10)w.actor_object_display_state.working[4+(kind-6)*258+256]=2;
  if(kind==10)w.actor_object_display_state.builder.high_buffer=0;
  if(kind==11)w.actor_object_display_state.builder.high_address=0x720;
  if(kind==12){w.actor_object_display_state.builder.address=0x700;w.actor_object_display_state.builder.high_address=0x720;}
  if(kind==13)w.actor_object_display_state.builder.end_address=0xa00;
  if(kind==14)w.frame_display.request_retained_screen();
  const auto before=screen_receipt(n);const auto audio=n.audio.master_clocks();const auto picture=w.runtime->scene().frame();
  std::unique_ptr<SourceScreenUpdate> leaf;bool rejected{};
  try{leaf=operation->begin_source_screen(*n.work,entry);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&screen_receipt(n)==before&&n.audio.master_clocks()==audio&&w.runtime->scene().frame()==picture&&
      !w.runtime->failed(),"Unsupported screen owner/context changed state or poisoned pure admission");
}
void screen_lease_lifecycle(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" SCREEN exact fresh/foreign/stale single-use lease";
  ScreenOriginal original(assets,true),other_original(assets,true,2);ScreenNative n(assets,content,true),foreign(assets,content,true,true,2);
  auto operation=prepare_screen(original,n,1,3,0,0,0,40,100,false);
  auto other=prepare_screen(other_original,foreign,2,7,0,0,0,40,100,false);
  const auto before=screen_receipt(n),foreign_before=screen_receipt(foreign);
  bool wrong_work{};try{operation->begin_source_screen(*foreign.work,{true,true,true,true});}catch(const std::logic_error&){wrong_work=true;}
  require(wrong_work&&screen_receipt(n)==before&&screen_receipt(foreign)==foreign_before,"Foreign work clock changed either actual scene owner");
  auto leaf=operation->begin_source_screen(*n.work,{true,true,true,true});
  bool claimed{};try{operation->begin_source_screen(*n.work,{true,true,true,true});}catch(const std::logic_error&){claimed=true;}
  require(claimed&&screen_receipt(n)==before,"Second source screen factory reused a live lease");
  bool ordinary{};try{operation->complete_frame({0x8000,0});}catch(const std::logic_error&){ordinary=true;}
  bool publication{};try{operation->complete_publication();}catch(const std::logic_error&){publication=true;}
  require(ordinary&&publication&&screen_receipt(n)==before,"Ordinary frame/publication acknowledgement bypassed source screen lease");
  while(!leaf->advance(1)){}
  const auto completed=screen_receipt(n);bool foreign_response{};
  try{other->respond_source_screen(*leaf);}catch(const std::logic_error&){foreign_response=true;}
  require(foreign_response&&screen_receipt(n)==completed&&screen_receipt(foreign)==foreign_before,"Foreign operation consumed another screen leaf");
  operation->respond_source_screen(*leaf);
  require(screen_receipt(n)==completed&&operation->advance()==dialogue::Progress::Suspended&&operation->service()==SceneService::Frame,
      "Fresh screen receipt failed to reach its exact Frame continuation");
  operation->complete_frame({0,0});require(operation->advance()==dialogue::Progress::Finished,"Actual masked frame failed to finish");operation.reset();
  // The completed masked frame may leave a pending selected descriptor. Its
  // next actual OAM_CLEAR uses the opposite drawing buffer, as the source does.
  auto later=n.screen();const auto later_before=screen_receipt(n);bool stale{};
  try{later->respond_source_screen(*leaf);}catch(const std::logic_error&){stale=true;}
  require(stale&&screen_receipt(n)==later_before,"Stale old screen receipt changed a later actual suspension");
  auto actual=later->begin_source_screen(*n.work,{true,true,true,true});while(!actual->advance(4096)){}later->respond_source_screen(*actual);
}
void screen_abandonment(const GameAssets &assets,const session::Content &content,bool parent,bool complete) {
  context=assets.title+" SCREEN abandoned parent="+std::to_string(parent)+" completed="+std::to_string(complete);
  ScreenOriginal original(assets,true);ScreenNative n(assets,content,true);
  auto operation=prepare_screen(original,n,1,0,0,0,0,40,100,false);auto leaf=operation->begin_source_screen(*n.work,{true,true,true,true});
  if(complete){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Screen JSL alone unexpectedly completed the actual leaf");
  const auto before=screen_receipt(n);const auto audio=n.audio.master_clocks();
  if(parent) {
    operation.reset();bool rejected{};try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
    require(rejected&&screen_receipt(n)==before&&n.audio.master_clocks()==audio,"Dropped source parent allowed stale borrowed screen work");leaf.reset();
  } else {
    leaf.reset();bool rejected{};try{operation->begin_source_screen(*n.work,{true,true,true,true});}catch(const std::logic_error&){rejected=true;}
    require(rejected&&screen_receipt(n)==before&&n.audio.master_clocks()==audio,"Dropped screen leaf admitted a repeated invocation");
  }
}
void screen_lost_clock(const GameAssets &assets,const session::Content &content,bool physical,bool complete) {
  context=assets.title+" SCREEN lost borrowed clock physical="+std::to_string(physical)+" completed="+std::to_string(complete);
  ScreenOriginal original(assets,true);ScreenNative n(assets,content,true);
  auto operation=prepare_screen(original,n,1,0,0,0,0,40,100,false);auto leaf=operation->begin_source_screen(*n.work,{true,true,true,true});
  if(complete){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Source screen entry unexpectedly completed");
  const auto before=screen_receipt(n);const auto audio=n.audio.master_clocks();const auto picture=n.world.runtime->scene().frame();
  if(physical)n.physical.reset();else n.work.reset();
  bool rejected{};try{if(complete)operation->respond_source_screen(*leaf);else leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
  auto after=screen_receipt(n);after.clocks=before.clocks;after.frames=before.frames;after.phase=before.phase;
  require(rejected&&after==before&&n.audio.master_clocks()==audio&&n.world.runtime->scene().frame()==picture,
      "Expired borrowed clock changed screen/input/display owners or read a dead timeline");
}
void acquired_queue(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" SCREEN acquires unowned spritemap work after far entry";
  ScreenOriginal original(assets,true);ScreenNative n(assets,content,true);
  auto operation=prepare_screen(original,n,1,0,0,0,0,40,100,false);auto leaf=operation->begin_source_screen(*n.work,{true,true,true,true});
  require(!leaf->advance(1),"Actual screen JSL unexpectedly completed");n.world.actor_object_display_state.working[260]=2;
  const auto before=screen_receipt(n);bool rejected{};try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&!leaf->complete()&&screen_receipt(n)==before&&n.world.runtime->failed(),"Late unowned queue changed actual owners or admitted retry");
}
void physical_owner_admission(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" SCREEN missing reverse physical peripheral identity";
  ScreenOriginal original(assets,true);ScreenNative n(assets,content,true,true,1,false);
  auto operation=prepare_screen(original,n,1,0,0,0,0,40,100,false);auto &w=n.world;
  require(w.peripherals.uses(*n.physical)&&!n.physical->uses_peripherals(w.peripherals),
      "Physical owner regression did not establish the actual forward-only binding");
  const auto before=screen_receipt(n);const auto audio=n.audio.master_clocks(),retired=n.work->completed_source_interrupts();
  const auto picture=w.runtime->scene().frame();bool rejected{};std::unique_ptr<SourceScreenUpdate> leaf;
  try{leaf=operation->begin_source_screen(*n.work,{true,true,true,true});}catch(const std::logic_error&){rejected=true;}
  require(rejected&&screen_receipt(n)==before&&n.audio.master_clocks()==audio&&w.runtime->scene().frame()==picture&&
      n.work->completed_source_interrupts()==retired&&!w.runtime->failed(),
      "Screen factory admitted a physical clock that never advances its forward-bound peripheral");
  // Failed pure admission leaves the actual public owner available to bind.
  n.physical->bind_peripherals(w.peripherals);
  auto healthy=operation->begin_source_screen(*n.work,{true,true,true,true});while(!healthy->advance(4096)){}
  operation->respond_source_screen(*healthy);
}
void physical_owner_rebinding(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" SCREEN public physical owners remain immutable after admission";
  ScreenOriginal original(assets,true);ScreenNative n(assets,content,true);
  auto operation=prepare_screen(original,n,1,0,0,0,0,40,100,false);auto leaf=operation->begin_source_screen(*n.work,{true,true,true,true});
  require(!leaf->advance(1),"Actual screen far call unexpectedly completed");
  PeripheralState foreign;const auto before=screen_receipt(n);bool rejected{};
  try{n.physical->bind_peripherals(foreign);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&screen_receipt(n)==before&&n.physical->uses_peripherals(n.world.peripherals)&&
      n.world.peripherals.uses(*n.physical)&&!foreign.has_physical_clock(),
      "Post-admission peripheral replacement mutated the immutable actual physical binding");
  while(!leaf->advance(4096)){}operation->respond_source_screen(*leaf);
}
void expired_interrupt_owner(const GameAssets &assets,const session::Content &content,unsigned stage,bool enabled) {
  context=assets.title+" SCREEN expired actual SourceInterruptWork stage="+std::to_string(stage)+" enabled="+std::to_string(enabled);
  ScreenOriginal original(assets,true);ScreenNative n(assets,content,true);
  auto operation=prepare_screen(original,n,1,0,0,0,0,40,100,enabled);std::unique_ptr<SourceScreenUpdate> leaf;
  if(stage) {
    leaf=operation->begin_source_screen(*n.work,{true,true,true,true});
    if(stage==2){while(!leaf->advance(1)){}}
    else require(!leaf->advance(1),"Far screen call unexpectedly completed interrupt-lifetime fixture");
  }
  const auto before=screen_receipt(n);const auto audio=n.audio.master_clocks();const auto picture=n.world.runtime->scene().frame();
  n.nmi.reset();bool rejected{};
  try {
    if(stage==0)leaf=operation->begin_source_screen(*n.work,{true,true,true,true});
    else if(stage==1)leaf->advance(1);
    else operation->respond_source_screen(*leaf);
  }catch(const std::logic_error&){rejected=true;}
  // Factory-only baseline RED is safe: a falsely admitted leaf is never
  // advanced after the actual virtual owner dies. Current production guards
  // the partial/complete cases before any borrowed read or source retirement.
  require(rejected&&screen_receipt(n)==before&&n.audio.master_clocks()==audio&&n.world.runtime->scene().frame()==picture,
      "Expired actual interrupt owner admitted source work or changed OAM/scroll/input/audio owners");
}
void retained_high_regression(const GameAssets &assets,const session::Content &content) {
  std::set<unsigned> sites;screen_case(assets,content,true,1,1,0,0,1,2,224,1100,sites);
}
void run_screen(const GameAssets &assets) {
  const session::Content content(assets.image,assets.version);unsigned cases{};std::set<unsigned> sites;
  for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned selected:{1u,2u})for(unsigned insertion:{0u,1u,2u,3u,0x1234u})
    for(unsigned partial:{0u,1u,2u,3u}) {
      screen_case(assets,content,fast,budget,selected,insertion,partial,0,0,40,100,sites);++cases;
    }
  // Declared physical inputs; no delay is fitted using a native/original result.
  for(bool fast:{false,true})for(unsigned line:{223u,224u})for(unsigned horizontal=0;horizontal<1364;horizontal+=16) {
    const unsigned selected=1+((horizontal/16)&1),pending=selected^3;
    screen_case(assets,content,fast,1,selected,3,3,0,pending,line,horizontal,sites);++cases;
  }
  const unsigned delta=assets.version==GameVersion::JP?15:0;
  require(sites.contains(0xc08b86-delta)||sites.contains(0xc08b88-delta),
      "Declared physical grid failed to witness actual NMI between display selection and next-buffer store");
  require(std::any_of(sites.begin(),sites.end(),[&](unsigned pc){return pc>=0xc08b54-delta&&pc<=0xc08b7e - delta;}),
      "Declared physical grid failed to witness actual NMI between distinct screen scroll stores");
  for(unsigned kind=0;kind<15;++kind)rejected_screen(assets,content,kind);
  screen_lease_lifecycle(assets,content);screen_abandonment(assets,content,false,false);screen_abandonment(assets,content,true,false);
  screen_abandonment(assets,content,false,true);
  for(bool physical:{false,true})for(bool complete:{false,true})screen_lost_clock(assets,content,physical,complete);
  acquired_queue(assets,content);physical_owner_admission(assets,content);physical_owner_rebinding(assets,content);
  for(bool enabled:{false,true})for(unsigned stage=0;stage<3;++stage)expired_interrupt_owner(assets,content,stage,enabled);
  retained_high_regression(assets,content);
  std::cout<<"PASS "<<assets.title<<" original UPDATE_SCREEN cases="<<cases<<" literal OAM/scroll/DMA/clocks/refresh/input/far-return; NMI sites=";
  for(auto site:sites)std::cout<<std::hex<<site<<',';
  std::cout<<std::dec<<'\n';
}
}
int main(int argc,char **argv) {try {
  if(argc<2)return 77;
  const std::string mode=argv[1];
  const bool focused=mode=="--retained-high"||mode=="--physical-owner"||mode=="--expired-interrupt-factory"||mode=="--interrupt-lifetime";
  if(focused&&argc<3)return 77;
  for(int i=focused?2:1;i<argc;++i) {
    const auto assets=load_game_assets(argv[i],asset_profiles());
    if(focused) {
      const session::Content content(assets.image,assets.version);
      if(mode=="--retained-high")retained_high_regression(assets,content);
      if(mode=="--physical-owner")physical_owner_admission(assets,content);
      if(mode=="--expired-interrupt-factory")expired_interrupt_owner(assets,content,0,true);
      if(mode=="--interrupt-lifetime")for(bool enabled:{false,true})for(unsigned stage=0;stage<3;++stage)
        expired_interrupt_owner(assets,content,stage,enabled);
    } else run_screen(assets);
  }
  std::cout<<"PASS original source screen checks="<<checks<<'\n';
}catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}}
