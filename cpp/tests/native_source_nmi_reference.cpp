// Complete native-mode hardware entry, literal vector JML, original regional
// NMI and RTI. Production executes typed source-work atoms, never this CPU.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/native/story/source_nmi.hpp"
#include "eb/native/story/source_world_callback.hpp"
#include "generated_assets.hpp"
#include "../src/native/session/world.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb;
using namespace eb::native;
using namespace eb::native::story;
unsigned checks{};
std::string context;
void require(bool value,const std::string &message) {
  ++checks;if(!value)throw std::runtime_error(context+": "+message);
}
struct Original {
  SnesBus bus;MainCpu65816 cpu;
  Original(const GameAssets &assets,unsigned phase,bool fast):bus(assets.image,assets.version),cpu(bus) {
    cpu.set_runtime(MainCpuRuntime::Legacy);cpu.emulation_mode=false;cpu.status_register=4;
    cpu.program_counter=0xc0ff00;cpu.stack_pointer=0x1fff;cpu.direct_page=0x0200;cpu.data_bank=0x7e;
    bus.write_byte(0x4200,0);bus.write_byte(0x420d,fast);
    bus.advance_master_clocks_with_refresh(225*1364+phase);
  }
  void put(unsigned at,unsigned word) {
    bus.work_ram[at]=std::uint8_t(word);bus.work_ram[at+1]=std::uint8_t(word>>8);
  }
  unsigned word(unsigned at) const {return bus.work_ram[at]|unsigned(bus.work_ram[at+1])<<8;}
  void interrupt(bool enable=true,bool foreground_nop=true) {
    const auto return_pc=cpu.program_counter;
    const auto vector=unsigned(bus.read_byte(0xffea))|unsigned(bus.read_byte(0xffeb))<<8;
    require(vector==0x8147 && bus.read_byte(vector)==0x5c && bus.read_byte(vector+1)==0x70 &&
        bus.read_byte(vector+2)==0x81 && bus.read_byte(vector+3)==0xc0,
        "Original native vector/JML literals differ from ROM");
    if(enable)bus.write_byte(0x4200,0x80);
    cpu.step_instruction();
    require(cpu.program_counter==vector,
            "Hardware native vector did not enter the actual bank00 JML");
    for(unsigned count=0;count<2000;++count) {
      if(cpu.program_counter==return_pc && cpu.stack_pointer==0x1fff) {
        // Shared literal foreground NOP after RTI is the native retirement
        // trigger; it is outside the measured authored handler body.
        if(foreground_nop)cpu.execute_instruction<0xea>(0,1);
        return;
      }
      cpu.step_instruction();
    }
    throw std::runtime_error(context+": Original NMI did not return: "+cpu.describe_registers());
  }
};
struct Native {
  NativeAudio audio;session::World world;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  std::unique_ptr<SourceNmiWork> nmi;
  std::unique_ptr<SourceWorldCallbackWork> callback;
  Native(const GameAssets &assets,const session::Content &content,const Original &source,bool fast,
         SourceInterruptContext entry={true,true,true})
      :audio(assets.image,assets.version),world(content,audio,256) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(assets.image);
    world.display.transient_memory().configure(assets.version);
    world.runtime->refresh_world_capture();
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{work->request_nmi();},[]{},
      AudioFrameClock::physical_phase(source.bus.scanline_index(),source.bus.scanline_clock(),source.bus.completed_frames),
      source.bus.completed_frames,true);
    physical->bind_peripherals(world.peripherals);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*world.runtime,
      world.actor_object_display_state,*world.actor_object_display,world.frame_display,fast);
    audio.bind_clock(*work);
    nmi=std::make_unique<SourceNmiWork>(*world.runtime,audio,world.clock,world.session,
      world.frame_display,world.palette,world.display,world.scratch,world.fade,world.presentation,
      world.peripherals,entry);
    work->bind_interrupt_work(*nmi);
  }
};
void run_case(const GameAssets &assets,const session::Content &content,unsigned phase,bool fast,
              unsigned pending,unsigned palette,unsigned flavor,bool world_callback) {
  Original source(assets,phase,fast);Native native(assets,content,source,fast);
  auto &w=native.world;const bool jp=assets.version==GameVersion::JP;
  context=assets.title+" phase="+std::to_string(phase)+" fast="+std::to_string(fast)+
      " pending="+std::to_string(pending)+" palette="+std::to_string(palette)+
      " flavor="+std::to_string(flavor)+" world="+std::to_string(world_callback);
  if(!world_callback)w.runtime->reset_interrupt_callback();
  else {
    native.callback=std::make_unique<SourceWorldCallbackWork>(*w.runtime,w.scheduler);
    native.nmi->bind_callback_work(*native.callback);
  }
  source.put(0x20,world_callback?(jp?0xdc16:0xdc4e):0x851b);
  // The actual default world callback's four inactive tasks and closed-window
  // gate are entry owners, not output copied back from the original.
  source.put(jp?0x8c22:0x88e0,0xffff);
  w.clock.frame_counter=flavor==5?255:0;source.bus.work_ram[2]=w.clock.frame_counter;
  source.bus.work_ram[3]=0xa5;w.clock.new_frame_started=254;source.bus.work_ram[0x2b]=254;
  w.session.elapsed_timer=flavor==5?0x1234ffff:0x12345678;
  source.put(0xa7,w.session.elapsed_timer);source.put(0xa9,w.session.elapsed_timer>>16);
  source.put(0xa3,w.display.transient_memory().base_address());source.put(0xa1,0x2012);
  w.display.transient_memory().set_source_current_address(0x2012);
  w.display.set_source_dma_transfer_flag(0xbeef);source.put(jp?0xa031:0x9e2b,0xbeef);
  for(unsigned i=0;i<256;++i) {
    const auto color=std::uint16_t(0x8000|((i*113+57)&0x7fff));
    w.palette.staged_color(i)=color;source.put(0x200+i*2,color);
  }
  w.palette.upload_mode=std::uint8_t(palette);source.bus.work_ram[0x30]=std::uint8_t(palette);
  if(pending==2)w.frame_display.update_world_screen();
  for(unsigned buffer=0;buffer<2;++buffer)for(unsigned i=0;i<544;++i) {
    const auto byte=std::uint8_t(i*71+buffer*39+flavor);
    w.actor_object_display_state.buffers[buffer].bytes[i]=byte;
    source.bus.work_ram[(buffer?0x800:0x500)+i]=byte;
  }
  for(unsigned i=0;i<4;++i) {
    w.display.staged_scroll[i]={std::uint16_t(19+i*23),std::uint16_t(51+i*17)};
    source.put(0x41+i*8+(pending==2?2:0),w.display.staged_scroll[i].x);
    source.put(0x45+i*8+(pending==2?2:0),w.display.staged_scroll[i].y);
  }
  if(pending)w.frame_display.update_world_screen();
  // Entry to this NMI leaf uses the actual completed native producer's
  // selected544-byte input. No original result or post-NMI output is copied.
  if(pending)std::copy(w.actor_object_display_state.buffers[pending-1].bytes.begin(),
      w.actor_object_display_state.buffers[pending-1].bytes.end(),source.bus.work_ram.begin()+(pending==1?0x500:0x800));
  require(w.frame_display.pending_display_id()==pending,"Fixture selected another actual OAM buffer");
  source.bus.work_ram[0x2c]=std::uint8_t(pending);
  switch(flavor) {
  case 0:w.fade.force_blank(true);break;
  case 1:w.fade.write_brightness(15);w.fade.clear_parameters();break;
  case 2:w.fade.write_brightness(0);w.fade.begin_in(1,0);break;
  case 3:w.fade.write_brightness(1);w.fade.begin_out(2,0);break;
  case 4:w.fade.write_brightness(15);w.fade.begin_in(1,0);break;
  default:w.fade.write_brightness(9);w.fade.begin_out(1,3);break;
  }
  const auto fade=w.fade.state();source.bus.work_ram[0x0d]=fade.brightness;
  source.bus.work_ram[0x28]=fade.step;source.bus.work_ram[0x29]=fade.delay;source.bus.work_ram[0x2a]=fade.remaining;
  if(flavor>=2) {
    for(unsigned i=0;i<65536;++i)w.scratch.bytes[i]=source.bus.work_ram[0x10000+i]=std::uint8_t(i*13+47);
    for(unsigned mode:{0u,6u,12u}) {
      battle::PsiTransfer transfer{battle::PsiTransferKind::Vram,std::uint16_t(0xfff0+mode),
        std::uint16_t(17+mode),std::uint16_t(0x3ffc+mode),std::uint8_t(mode)};
      auto op=w.display.begin_transfer(transfer,w.scratch,w.fade);
      require(op->advance(),"Small fixture queue unexpectedly required publication");
    }
    const auto descriptors=w.display.descriptor_bytes();
    std::copy(descriptors.begin(),descriptors.end(),source.bus.work_ram.begin()+0x400);
    source.bus.work_ram[0]=w.display.producer_index();source.bus.work_ram[1]=w.display.consumer_index();
    source.put(0x99,w.display.pending_bytes());
  }
  if(flavor==5)w.audio.play_sound(0x34);
  source.bus.work_ram[jp?0xc9:0xcb]=w.audio.sound_queue_start();
  source.bus.work_ram[jp?0xc8:0xca]=w.audio.sound_queue_end();
  source.bus.work_ram[(jp?0x1b30:0x1ac2)+w.audio.sound_queue_start()]=flavor==5?0x34:0;
  const auto before=native.audio.master_clocks(),origin=source.bus.master_clocks();
  const auto random=w.random;const auto input=w.input.state;
  native.physical->nmi_enabled(true);source.interrupt();native.work->retire_source_work({2,1,0,0});
  require(native.work->master_clocks()==source.bus.master_clocks(),"Literal NMI clocks native="+
      std::to_string(native.work->master_clocks()-origin)+" original="+std::to_string(source.bus.master_clocks()-origin));
  require(native.audio.master_clocks()-before==source.bus.master_clocks()-origin,"Real audio elapsed differs");
  require(w.clock.frame_counter==source.bus.work_ram[2] && w.clock.new_frame_started==source.bus.work_ram[0x2b] &&
      w.clock.publications==1 && native.nmi->completed_interrupts()==1,"Actual low byte/publication receipt differs");
  require(w.session.elapsed_timer==(source.word(0xa7)|(source.word(0xa9)<<16)),"Timer word/carry differs");
  require(w.fade.state().brightness==source.bus.work_ram[0x0d] && w.fade.state().step==source.bus.work_ram[0x28] &&
      w.fade.state().remaining==source.bus.work_ram[0x2a],"Fade source branches differ");
  require(w.display.vram()==source.bus.video_ram,"Complete physical VRAM differs");
  if(pending)require(w.frame_display.screen().raw_objects &&
      w.frame_display.screen().raw_objects->bytes==source.bus.object_attributes,"All544 published raw OAM bytes differ");
  for(unsigned i=0;i<256;++i)require(w.palette.displayed_palette(i/16)[i%16]==
      (source.bus.palette_ram[i*2]|unsigned(source.bus.palette_ram[i*2+1])<<8),"CGRAM color="+std::to_string(i));
  for(unsigned i=0;i<7;++i)require(w.peripherals.dma(0)[i]==source.bus.read_byte(0x4300+i),"DMA register differs");
  require(w.display.transient_memory().base_address()==source.word(0xa3) &&
      w.display.transient_memory().current_address()==source.word(0xa1) && !w.display.dma_transfer_flag(),"Heap/flag tail differs");
  require(!w.clock.input_polls && w.input.state==input && w.random.primary_word==random.primary_word &&
      w.random.secondary_word==random.secondary_word,"NMI polled or advanced logical RNG");
  require(!(w.peripherals.read(0x4210,0)&0x80) && !(source.bus.read_byte(0x4210)&0x80),"Handler did not read the real RDNMI flag");
}
void forced_blank_dma(const GameAssets &assets,const session::Content &content,bool fast,unsigned horizon) {
  Original source(assets,0,fast);Native native(assets,content,source,fast);auto &w=native.world;
  context=assets.title+" retained forced-blank MDMAEN bytes8192 fast="+std::to_string(fast)+" horizon="+std::to_string(horizon);
  w.runtime->reset_interrupt_callback();source.put(0x20,0x851b);source.bus.work_ram[0x0d]=0x80;
  w.palette.upload_mode=0;source.put(0xa3,0x2000);source.put(0xa1,0x2000);
  source.bus.work_ram[assets.version==GameVersion::JP?0xc9:0xcb]=w.audio.sound_queue_start();
  source.bus.work_ram[assets.version==GameVersion::JP?0xc8:0xca]=w.audio.sound_queue_end();
  native.physical->nmi_enabled(true);source.interrupt();native.work->retire_source_work({2,1,0,0});
  require(native.work->master_clocks()==source.bus.master_clocks() && w.fade.displayed_brightness()==0x80 &&
      source.bus.ppu_registers()[0]==0x80,"Prior real original/native NMI did not establish hardware forced blank");
  const auto next_frame=source.bus.completed_frames+1;
  // Genuine literal foreground NOP work reaches the following line224.
  // The8192-byte DMA crosses the next edge and frame end without arbitration.
  while(source.bus.completed_frames<next_frame || source.bus.scanline_index()<224 || source.bus.scanline_clock()<horizon) {
    source.cpu.execute_instruction<0xea>(0,1);native.work->retire_source_work({2,1,0,0});
  }
  for(unsigned i=0;i<65536;++i)w.scratch.bytes[i]=source.bus.work_ram[0x10000+i]=std::uint8_t(i*31+19);
  const battle::PsiTransfer transfer{battle::PsiTransferKind::Vram,0xf000,8192,0x2000,0};
  const std::array<std::uint8_t,7> registers{1,0x18,0,0xf0,0x7f,0,0x20};
  for(unsigned i=0;i<registers.size();++i) {
    source.bus.write_byte(0x4310+i,registers[i]);w.peripherals.write_source_dma_register(1,i,registers[i]);
  }
  source.bus.write_byte(0x2115,0x80);source.bus.write_byte(0x2116,0);source.bus.write_byte(0x2117,0x20);
  // This foreground DMA instruction's authored register page is bank00.
  // NMI restores its caller's DB; the earlier arbitrary7E NMI leaf context
  // must not turn this absolute MDMAEN store into a WRAM write.
  source.cpu.data_bank=0;source.cpu.status_register|=0x20;source.cpu.accumulator=2;
  const auto before=source.bus.master_clocks();
  source.cpu.execute_instruction<0x8d>(0x420b,3);
  require(source.bus.scanline_index()<225 && source.bus.completed_frames==next_frame+1,
      "Actual8192-byte DMA did not retain an NMI into the next active period");
  source.interrupt(false,false);
  native.work->retire_dma_work({4,3,0,0},8192,[&]{w.display.complete_source_dma(w.scratch,transfer);});
  require(native.work->master_clocks()==source.bus.master_clocks(),"Deferred DMA/NMI clocks native="+
      std::to_string(native.work->master_clocks()-before)+" original="+std::to_string(source.bus.master_clocks()-before));
  require(w.display.vram()==source.bus.video_ram && w.fade.displayed_brightness()==0x80 &&
      w.clock.publications==2 && native.nmi->completed_interrupts()==2 && native.work->completed_source_interrupts()==2,
      "Established blank DMA/NMI payload or exact receipts differ");
  require(!w.clock.input_polls && !(w.peripherals.read(0x4210,0)&0x80) &&
      !(source.bus.read_byte(0x4210)&0x80),"Delayed NMI fabricated input or retained an already-cleared flag");
  for(unsigned i=0;i<7;++i)require(w.peripherals.dma(1)[i]==source.bus.read_byte(0x4310+i),"NMI changed actual foreground DMA channel1");
}
void hardware_flags(const GameAssets &assets) {
  SnesBus original(assets.image,assets.version);TickState ticks;ticks.interrupt_mask=0x80;
  unsigned edges{};AudioFrameClock clock(ticks,[&]{++edges;},[]{});PeripheralState peripheral;clock.bind_peripherals(peripheral);
  original.write_byte(0x4200,0x80);original.advance_master_clocks_with_refresh(225*1364);
  clock.elapsed(clock.next_quantum(225*1364));
  require(original.take_nmi()&&edges==1,"Original/actual enabled VBlank failed to dispatch");
  original.write_byte(0x4200,0);original.write_byte(0x4200,0x80);clock.nmi_enabled(false);clock.nmi_enabled(true);
  require(original.take_nmi()&&edges==2,"Unread RDNMI rising enable did not request the original second edge");
  require(original.read_byte(0x4210)==peripheral.read(0x4210,0) && !clock.acknowledge_nmi(),
      "Dispatch consumed the visible flag or actual4210 failed to acknowledge it");
  original.write_byte(0x4200,0);original.write_byte(0x4200,0x80);clock.nmi_enabled(false);clock.nmi_enabled(true);
  require(!original.take_nmi()&&edges==2,"RDNMI-acknowledged rising enable repeated an obsolete edge");
}
void admission(const GameAssets &assets,const session::Content &content) {
  Original source(assets,0,true);Native native(assets,content,source,true,{false,true,true});
  native.world.runtime->reset_interrupt_callback();native.physical->nmi_enabled(true);
  const auto before=native.audio.master_clocks();const auto bytes=native.world.display.vram();
  bool rejected{},effect{};
  try{native.work->retire_source_work({2,1,0,0},[&]{effect=true;});}
  catch(const std::logic_error &){rejected=true;}
  require(rejected&&!effect&&native.work->failed()&&native.work->pending_nmi()&&
      before==native.audio.master_clocks()&&bytes==native.world.display.vram()&&
      !native.world.clock.publications&&!native.world.clock.new_frame_started&&
      (native.world.peripherals.read(0x4210,0)&0x80),"Unsupported entry consumed or mutated the real NMI owners");
  bool unrelated_rejected{};
  try{auto operation=native.world.runtime->begin(TickKind::Frame);}
  catch(const std::logic_error &){unrelated_rejected=true;}
  require(unrelated_rejected&&native.world.runtime->failed(),"Failed clock admitted unrelated Runtime work");
  Original abandoned_source(assets,0,true);Native abandoned(assets,content,abandoned_source,true);
  abandoned.world.runtime->reset_interrupt_callback();abandoned.physical->nmi_enabled(true);
  {auto pin=abandoned.world.runtime->begin_source_interrupt();}
  require(abandoned.world.runtime->failed()&&!abandoned.world.clock.publications,
      "Abandoned source interrupt pin permitted continuation");

  Original detached_source(assets,0,true);Native detached(assets,content,detached_source,true);
  detached.physical->nmi_enabled(true);
  auto suspended=detached.world.runtime->begin_publication();
  detached.work.reset();bool owner_lost{};
  try{suspended->advance();}catch(const std::logic_error &){owner_lost=true;}
  require(owner_lost&&detached.world.runtime->failed()&&!detached.world.clock.publications,
      "Removing the actual source-work owner admitted an existing continuation");

  TickState another_ticks;AudioFrameClock another_physical(another_ticks,[]{},[]{});
  bool different_tick_rejected{};
  try{SourceWorkClock wrong(another_physical,native.audio,native.world.clock,*native.world.runtime,
      native.world.actor_object_display_state,*native.world.actor_object_display,native.world.frame_display);}
  catch(const std::invalid_argument &){different_tick_rejected=true;}
  require(different_tick_rejected,"Source work admitted a physical clock with another actual TickState");

  // A software mirror and a sampled capture are insufficient evidence that
  // INIDISP was physically committed. Fault-inject a pending interrupt at an
  // active-display boundary; reject it before the first handler/effect.
  Original mirror_source(assets,0,true);Native mirror(assets,content,mirror_source,true);
  mirror.world.runtime->reset_interrupt_callback();
  mirror.audio.advance_master_clocks(262*1364-mirror.physical->phase());
  mirror.world.fade.force_blank(true);(void)mirror.world.fade.preview_next_frame();
  require(!mirror.world.fade.displayed_brightness(),"Mirror/preview established an uncommitted hardware blank");
  mirror.physical->nmi_enabled(true);mirror.work->request_nmi();
  const auto mirror_time=mirror.audio.master_clocks();bool unknown_blank_rejected{},mirror_effect{};
  try{mirror.work->retire_source_work({2,1,0,0},[&]{mirror_effect=true;});}
  catch(const std::logic_error &){unknown_blank_rejected=true;}
  require(unknown_blank_rejected&&!mirror_effect&&mirror.work->failed()&&
      mirror.audio.master_clocks()==mirror_time&&!mirror.world.clock.publications,
      "Unestablished physical blank consumed pending source work");
}
void publication_receipt(const GameAssets &assets,const session::Content &content) {
  Original source(assets,0,true);Native native(assets,content,source,true);auto &w=native.world;
  context=assets.title+" actual source publication receipt";w.runtime->reset_interrupt_callback();
  native.physical->nmi_enabled(true);
  auto operation=w.runtime->begin_publication();bool stale{},duplicate{};
  try{operation->respond_source_publication();}catch(const std::logic_error &){stale=true;}
  require(stale&&!w.clock.publications&&!w.clock.input_polls,"Stale source receipt mutated or released publication");
  // An ordinary untimed publisher while the adapter is present is not a
  // completed timed-handler receipt and cannot release this suspension.
  w.runtime->interrupt_publication();bool untimed_rejected{};
  try{operation->respond_source_publication();}catch(const std::logic_error &){untimed_rejected=true;}
  require(untimed_rejected&&w.clock.publications==1,"Untimed publication was accepted as a source-work receipt");
  native.work->retire_source_work({2,1,0,0});
  const auto time=native.audio.master_clocks();const auto count=w.clock.publications;
  operation->respond_source_publication();
  try{operation->respond_source_publication();}catch(const std::logic_error &){duplicate=true;}
  require(duplicate&&native.audio.master_clocks()==time&&w.clock.publications==count&&
      !w.clock.input_polls&&!w.runtime->failed(),"Receipt repeated physical publication or advanced input/time");
  require(operation->advance()==dialogue::Progress::Finished,"Completed source receipt did not finish the actual child");
  NativeAudio plain_audio(assets.image,assets.version);session::World plain(content,plain_audio,256);
  plain_audio.initialize();plain.runtime->refresh_world_capture();plain.runtime->reset_interrupt_callback();
  auto unbound=plain.runtime->begin_publication();plain.runtime->interrupt_publication();bool no_owner{};
  try{unbound->respond_source_publication();}catch(const std::logic_error &){no_owner=true;}
  require(no_owner&&plain.clock.publications==1&&!plain.clock.input_polls,"Unbound Scene accepted a source-work receipt");
  unbound->complete_publication();require(unbound->advance()==dialogue::Progress::Finished,"Original untimed publication path regressed");
}
void run(const GameAssets &assets) {
  const session::Content content(assets.image,assets.version);unsigned cases{};
  for(bool fast:{false,true})for(unsigned phase:{0u,7u,531u})
    for(unsigned flavor=0;flavor<6;++flavor) {
      run_case(assets,content,phase,fast,flavor%3,flavor%4*8,flavor,false);++cases;
    }
  for(bool fast:{false,true})for(unsigned flavor:{0u,5u}) {
    run_case(assets,content,19,fast,1,24,flavor,true);++cases;
  }
  admission(assets,content);
  publication_receipt(assets,content);hardware_flags(assets);
  for(bool fast:{false,true})for(unsigned horizon:{500u,1100u})forced_blank_dma(assets,content,fast,horizon);
  std::cout<<"PASS "<<assets.title<<" original NMI source work: "<<cases
      <<" complete native entry/vector/body/RTI cases; 4 actual8192-byte delayed forced-blank DMA cases; variable DMA/fade/timer/SFX and actual world callback\n";
}
}
#ifndef EB_NATIVE_SOURCE_NMI_REFERENCE_NO_MAIN
int main(int argc,char **argv) {try {
  if(argc<2)return 77;
  for(int i=1;i<argc;++i)run(load_game_assets(argv[i],asset_profiles()));
  std::cout<<"PASS source NMI work checks="<<checks<<'\n';
}catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}}
#endif
