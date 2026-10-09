// Independent original WAIT/GET authority. Only this test runs the original
// CPU/sites; native work uses the actual suspended Runtime frame and its lease.
#define EB_NATIVE_SOURCE_NMI_REFERENCE_NO_MAIN
#include "native_source_nmi_reference.cpp"
#include "eb/native/story/source_frame_input.hpp"
#include "eb/native/world_generated_input.hpp"
#include <algorithm>
#include <map>
#include <set>
#include <sstream>

namespace {
struct WaitOriginal {
  SnesBus bus;MainCpu65816 cpu;
  unsigned interrupts{},foreground{},returns{};
  std::uint64_t access_penalty{},origin{},cycles{};
  bool fast;
  std::set<unsigned> interrupted_sites;
  struct Store {unsigned site,address,value;std::uint64_t clock;};
  std::vector<Store> stores;
  WaitOriginal(const GameAssets &assets,bool fast_rom):bus(assets.image,assets.version),cpu(bus),fast(fast_rom) {
    cpu.set_runtime(MainCpuRuntime::Legacy);cpu.emulation_mode=false;cpu.status_register=4;
    cpu.program_counter=0xc0ff00;cpu.stack_pointer=0x1fff;cpu.direct_page=0x0200;cpu.data_bank=0x7e;
    bus.write_byte(0x4200,0);bus.write_byte(0x420d,fast);
  }
  void put(unsigned at,unsigned word) {bus.work_ram[at]=std::uint8_t(word);bus.work_ram[at+1]=std::uint8_t(word>>8);}
  unsigned word(unsigned at) const {return bus.work_ram[at]|unsigned(bus.work_ram[at+1])<<8;}
  unsigned call() const {return bus.game_version()==GameVersion::JP?0xc100e8:0xc10073;}
  unsigned returned() const {return call()+4;}
  unsigned wait() const {return bus.game_version()==GameVersion::JP?0xc0874c:0xc08756;}
  void audit() {
    origin=bus.master_clocks();cycles=cpu.cycle_count;access_penalty=0;
    bus.debug_read_wram=[this](unsigned,std::uint8_t value){access_penalty+=2;return value;};
    bus.debug_write_wram=[this](unsigned,std::uint8_t value){access_penalty+=2;return value;};
    bus.debug_read_rom=[this](unsigned offset,std::uint8_t value) {
      // Only literal code and native vector bytes are read as ROM by this
      // closed leaf/default-NMI fixture. The vector and bank00 JML stay slow.
      const auto site=cpu.program_counter&0x3fffff;
      require((offset>=site&&offset-site<4)||offset==0xffea||offset==0xffeb,
          "Closed WAIT/default-NMI fixture read an undeclared ROM data owner");
      access_penalty+=(!fast||(cpu.program_counter>>16)==0||offset==0xffea||offset==0xffeb)?2:0;
      return value;
    };
    cpu.observe_memory_write=[this](unsigned at,std::uint8_t value) {
      const unsigned bank=at>>16,lo=at&65535;
      if(bank==0x7e||((bank&0x40)==0&&lo<0x2000)) {
        if(lo==0x2b||(lo>=0x65&&lo<0x7d)||lo==(bus.game_version()==GameVersion::JP?0xa2a:0xa34)||
           lo==(bus.game_version()==GameVersion::JP?0xa2b:0xa35))
          stores.push_back({cpu.program_counter,lo,value,bus.master_clocks()});
      }
    };
  }
  void drain() {
    while(bus.take_nmi()) {
      const auto pc=cpu.program_counter;const auto stack=cpu.stack_pointer;
      const auto image=bus.cartridge_image();
      require(image[0xffea]==0x47&&image[0xffeb]==0x81&&image[0x8147]==0x5c&&
          image[0x8148]==0x70&&image[0x8149]==0x81&&image[0x814a]==0xc0,
          "Original native vector/JML differs from linked authority");
      interrupted_sites.insert(pc);cpu.service_interrupt(true);++interrupts;
      bool finished{};
      for(unsigned count=0;count<2000;++count) {
        if(cpu.program_counter==pc&&cpu.stack_pointer==stack){finished=true;break;}
        cpu.step_instruction();
      }
      require(finished,"Original actual NMI did not return to interrupted WAIT/GET site");
    }
  }
  void instruction() {
    drain();require(cpu.program_counter!=returned(),"Original WAIT executed past its far return");
    if(cpu.program_counter==0xc08500)++returns;
    cpu.step_instruction();++foreground;drain();
  }
  std::uint64_t refreshes() const {
    const auto useful=(cpu.cycle_count-cycles)*6+access_penalty;
    require(bus.master_clocks()-origin>=useful,"Original observed access/cycle total exceeds elapsed clocks");
    const auto stalls=bus.master_clocks()-origin-useful;
    require(stalls%40==0,"Original leaf elapsed has non-refresh unowned hardware debt");return stalls/40;
  }
};
struct WaitNative {
  NativeAudio audio;session::World world;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  std::unique_ptr<SourceNmiWork> nmi;
  WaitNative(const GameAssets &assets,const session::Content &content,bool fast,bool bind_nmi=true)
      :audio(assets.image,assets.version),world(content,audio,256) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(assets.image);
    world.display.transient_memory().configure(assets.version);world.runtime->refresh_world_capture();
    world.runtime->reset_interrupt_callback();
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{work->request_nmi();},[]{},0,0,false);
    physical->bind_peripherals(world.peripherals);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*world.runtime,
      world.actor_object_display_state,*world.actor_object_display,world.frame_display,fast);
    audio.bind_clock(*work);
    nmi=std::make_unique<SourceNmiWork>(*world.runtime,audio,world.clock,world.session,
      world.frame_display,world.palette,world.display,world.scratch,world.fade,world.presentation,
      world.peripherals,SourceInterruptContext{true,true,true});if(bind_nmi)work->bind_interrupt_work(*nmi);
  }
  std::unique_ptr<WorldRuntime::Operation> frame() {
    auto operation=world.runtime->begin(TickKind::Frame);
    for(unsigned count=0;count<30;++count) {
      const auto result=operation->advance(1);
      if(result==dialogue::Progress::Suspended){require(operation->service()==SceneService::Frame,
          "Actual Runtime did not suspend at its Frame boundary");return operation;}
    }
    throw std::runtime_error(context+": Runtime Frame did not reach its actual suspension");
  }
};
struct InputReceipt {
  InputState input;
  std::array<std::uint16_t,2> raw{};
  std::uint8_t pending{},counter{};
  std::uint32_t timer{};
  std::uint64_t clock{},frames{},interrupts{};
  unsigned phase{};
  bool operator==(const InputReceipt&) const=default;
};
InputReceipt receipt(const WaitOriginal &o) {
  InputReceipt r;
  for(unsigned i=0;i<2;++i) {
    r.input.state[i]=o.word(0x65+i*2);r.input.held[i]=o.word(0x69+i*2);
    r.input.pressed[i]=o.word(0x6d+i*2);r.input.repeat_timer[i]=o.word(0x71+i*2);r.raw[i]=o.word(0x77+i*2);
  }
  r.input.player_activity=o.word(o.bus.game_version()==GameVersion::JP?0xa2a:0xa34);
  r.pending=o.bus.work_ram[0x2b];r.counter=o.bus.work_ram[2];r.timer=o.word(0xa7)|(o.word(0xa9)<<16);
  r.clock=o.bus.master_clocks();r.frames=o.bus.completed_frames;r.interrupts=o.interrupts;
  r.phase=AudioFrameClock::physical_phase(o.bus.scanline_index(),o.bus.scanline_clock(),o.bus.completed_frames);return r;
}
InputReceipt receipt(const WaitNative &n) {
  const auto &w=n.world;
  return {w.input,w.playback.state().raw,w.clock.new_frame_started,w.clock.frame_counter,w.session.elapsed_timer,
      n.work->master_clocks(),n.physical->physical_frames(),n.nmi->completed_interrupts(),n.physical->phase()};
}
void same(const WaitOriginal &o,const WaitNative &n,const char *where) {
  const auto expected=receipt(o),actual=receipt(n);
  if(expected!=actual) {
    std::ostringstream details;details<<where<<" PC="<<std::hex<<o.cpu.program_counter<<std::dec
      <<" foreground="<<o.foreground<<" clocks="<<actual.clock<<'/'<<expected.clock
      <<" pending="<<unsigned(actual.pending)<<'/'<<unsigned(expected.pending)
      <<" interrupts="<<actual.interrupts<<'/'<<expected.interrupts
      <<" state="<<actual.input.state[0]<<'/'<<expected.input.state[0]
      <<" raw="<<actual.raw[0]<<'/'<<expected.raw[0];
    require(false,details.str());
  }
  ++checks;
}
void setup(WaitOriginal &o,WaitNative &n,unsigned line,unsigned horizontal,unsigned buttons,
           unsigned mirror,unsigned hardware,unsigned pending,unsigned flavor) {
  auto &w=n.world;const bool jp=o.bus.game_version()==GameVersion::JP;
  // Warm both physical producers with actual upper-bank foreground NOPs.
  // Auto-read establishes its retained result through the real VBlank edge;
  // neither host receives data or timing copied from an original output.
  o.bus.set_buttons(std::uint16_t(buttons));w.peripherals.set_buttons(std::uint16_t(buttons&0xfff0));
  o.bus.write_byte(0x4200,1);w.clock.interrupt_mask=1;
  const auto target=std::uint64_t(262*1364)+line*1364+horizontal;
  while(o.bus.master_clocks()<target) {
    o.cpu.execute_instruction<0xea>(0,1);n.work->retire_source_work({2,1,0,0});
  }
  require(o.bus.master_clocks()==n.work->master_clocks(),"Actual warm-up producers have different clocks");
  w.clock.interrupt_mask=std::uint8_t(hardware&0x7f);w.clock.retained_hardware_interrupt_mask=std::uint8_t(hardware&0x7f);
  n.physical->nmi_enabled(hardware&0x80);w.clock.interrupt_mask=std::uint8_t(mirror);
  o.bus.write_byte(0x4200,std::uint8_t(hardware));o.bus.work_ram[0x1e]=std::uint8_t(mirror);
  w.clock.new_frame_started=std::uint8_t(pending);o.bus.work_ram[0x2b]=std::uint8_t(pending);
  w.clock.frame_counter=0xfe;o.bus.work_ram[2]=0xfe;o.bus.work_ram[3]=0x71;
  w.session.elapsed_timer=0x7654ffff;o.put(0xa7,w.session.elapsed_timer);o.put(0xa9,w.session.elapsed_timer>>16);
  o.put(0x20,0x851b);o.put(0xa3,w.display.transient_memory().base_address());o.put(0xa1,w.display.transient_memory().current_address());
  w.palette.upload_mode=0;o.bus.work_ram[0x30]=0;
  w.fade.force_blank(true);const auto fade=w.fade.state();o.bus.work_ram[0xd]=fade.brightness;
  o.bus.work_ram[0x28]=fade.step;o.bus.work_ram[0x29]=fade.delay;o.bus.work_ram[0x2a]=fade.remaining;
  o.bus.work_ram[jp?0xc9:0xcb]=w.audio.sound_queue_start();o.bus.work_ram[jp?0xc8:0xca]=w.audio.sound_queue_end();
  w.input.state={std::uint16_t(flavor==1||flavor==2?(buttons&0xfff0):0x3000),std::uint16_t(flavor==3?0x2000:0)};
  w.input.held={0x4321,0x8765};w.input.pressed={0xbeef,0xabcd};
  w.input.repeat_timer={std::uint16_t(flavor==1?0:flavor==2?1:8),std::uint16_t(flavor==1?1:0)};
  w.input.player_activity=0xffff;
  for(unsigned i=0;i<2;++i) {
    o.put(0x65+i*2,w.input.state[i]);o.put(0x69+i*2,w.input.held[i]);o.put(0x6d+i*2,w.input.pressed[i]);o.put(0x71+i*2,w.input.repeat_timer[i]);
  }
  o.put(jp?0xa2a:0xa34,w.input.player_activity);w.windows.prompt_state().debug=flavor==3?0x100:0;
  o.put(jp?0x46f2:0x436c,w.windows.prompt_state().debug);
  w.playback.store_source_raw_word(0,0x1234);w.playback.store_source_raw_word(1,0xabcd);o.put(0x77,0x1234);o.put(0x79,0xabcd);o.put(0x7b,0);
  o.cpu.program_counter=o.call();o.cpu.stack_pointer=0x1fff;o.cpu.direct_page=0x0200;o.cpu.data_bank=0x7e;
  o.cpu.accumulator=0x1234;o.cpu.x_index=0x4567;o.cpu.y_index=0x89ab;o.cpu.status_register=4;
  const auto image=o.bus.cartridge_image();const unsigned at=o.call()&0x3fffff,target_wait=o.wait();
  require(image[at]==0x22&&(image[at+1]|unsigned(image[at+2])<<8|unsigned(image[at+3])<<16)==target_wait,
      "Declared actual regional caller no longer contains literal JSL WAIT");
  o.audit();
}
void wait_case(const GameAssets &assets,const session::Content &content,bool fast,unsigned budget,
               unsigned pending,unsigned scenario,std::set<unsigned> &late_sites,
               std::optional<std::pair<unsigned,unsigned>> phase={}) {
  WaitOriginal source(assets,fast);WaitNative native(assets,content,fast);
  context=assets.title+" WAIT fast="+std::to_string(fast)+" budget="+std::to_string(budget)+
      " pending="+std::to_string(pending)+" scenario="+std::to_string(scenario);
  unsigned line=224,horizontal=1000,mirror=0x81,hardware=0x81,flavor=scenario%4;
  if(scenario==1){line=225;horizontal=100;}
  if(scenario==2){line=225;horizontal=500;mirror=0;}
  if(scenario==3){line=225;horizontal=700;mirror=0;hardware=1;}
  if(scenario==4){line=232;horizontal=100;mirror=0x80;hardware=0;}
  if(scenario==5){line=224;horizontal=1100;mirror=hardware=0x80;}
  if(phase){line=phase->first;horizontal=phase->second;mirror=hardware=0x80;flavor=0;context+=" phase="+std::to_string(line)+":"+std::to_string(horizontal);}
  setup(source,native,line,horizontal,0x843f,mirror,hardware,pending,flavor);
  auto operation=native.frame();auto leaf=operation->begin_source_frame(*native.work,*native.physical,
      native.world.peripherals,native.world.playback,{true,true,true,true});
  const auto captured_before=native.world.runtime->completed_frames();
  const auto refresh_before=native.work->refresh_pauses(),audio_before=native.audio.master_clocks(),clock_before=native.work->master_clocks();
  const auto before=receipt(native);require(!leaf->advance(0)&&receipt(native)==before&&!leaf->retired_instructions(),
      "Zero budget retired or changed actual frame-input work");
  bool early{};try{operation->respond_source_frame(*leaf);}catch(const std::logic_error &){early=true;}
  require(early&&receipt(native)==before&&!native.world.clock.input_polls,"Incomplete frame receipt released or mutated its actual wait");
  if(budget==1) {
    for(unsigned count=0;;++count) {
      require(count<200000,"Actual source WAIT did not finish within its literal work budget");
      source.instruction();const bool finished=leaf->advance(1);
      same(source,native,"literal instruction retirement");
      require(leaf->retired_instructions()==source.foreground,"Native budget1 skipped or duplicated a literal instruction");
      require(finished==(source.cpu.program_counter==source.returned()),"Native WAIT completed at another original return site");
      if(finished)break;
    }
  } else {
    for(unsigned count=0;source.cpu.program_counter!=source.returned();++count) {
      require(count<200000,"Original source WAIT did not return");source.instruction();
    }
    for(unsigned count=0;!leaf->advance(budget);++count)require(count<1000,"Native budgeted WAIT did not return");
    same(source,native,"budgeted far return");
    require(leaf->retired_instructions()==source.foreground,"Native budgeted work changed literal instruction count");
  }
  require(source.cpu.stack_pointer==0x1fff&&source.cpu.direct_page==0x0200&&source.cpu.data_bank==0x7e&&
      !(source.cpu.status_register&0x30)&&source.cpu.x_index==0xfffe&&source.returns==1,"Original WAIT lost far return, D/DB restoration or GET width/return");
  require(native.work->refresh_pauses()-refresh_before==source.refreshes(),"Original actual refresh pauses differ");
  require(native.audio.master_clocks()-audio_before==native.work->master_clocks()-clock_before,"Actual input leaf lost or duplicated audio elapsed");
  require(!native.world.clock.input_polls&&native.world.clock.publications==source.interrupts,
      "WAIT receipt performed premature input bookkeeping or publication");
  const auto completed=receipt(native);const auto time=native.audio.master_clocks();
  const auto physical_picture=native.world.runtime->published_frame();
  require(native.world.runtime->completed_frames()==captured_before+source.interrupts,
      "Literal leaf fabricated an immutable capture without actual NMI publication");
  operation->respond_source_frame(*leaf);
  require(receipt(native)==completed&&native.audio.master_clocks()==time&&native.world.clock.input_polls==1&&
      native.world.windows.prompt_state().pressed==native.world.input.pressed[0],"Fresh source receipt repeated input/time or cleared late pending NMI");
  const bool masked_capture=!(mirror&0xb0)&&!source.interrupts;
  const auto accepted_picture=native.world.runtime->published_frame();
  require(native.world.runtime->completed_frames()==captured_before+source.interrupts+unsigned(masked_capture)&&
      (masked_capture?accepted_picture!=physical_picture:accepted_picture==physical_picture),
      "Masked source response lost or repeated its one immutable capture");
  bool duplicate{};try{operation->respond_source_frame(*leaf);}catch(const std::logic_error &){duplicate=true;}
  require(duplicate&&receipt(native)==completed&&native.world.clock.input_polls==1&&!native.world.runtime->failed(),
      "Duplicate source frame receipt mutated or poisoned actual completed owners");
  require(native.world.runtime->published_frame()==accepted_picture&&
      native.world.runtime->completed_frames()==captured_before+source.interrupts+unsigned(masked_capture),
      "Rejected duplicate receipt replaced immutable presentation or its frame count");
  require(leaf->advance(1)&&receipt(native)==completed,"Completed input leaf repeated physical work");
  require(operation->advance()==dialogue::Progress::Finished,"Fresh receipt failed to release exact Runtime frame");
  late_sites.insert(source.interrupted_sites.begin(),source.interrupted_sites.end());
}
void rejected_entry(const GameAssets &assets,const session::Content &content,unsigned kind) {
  WaitNative n(assets,content,true,kind!=7);auto &w=n.world;
  context=assets.title+" source WAIT read-only entry rejection kind="+std::to_string(kind);
  w.clock.interrupt_mask=0x80;w.clock.retained_hardware_interrupt_mask=0;w.clock.new_frame_started=1;
  SourceFrameInputContext caller{true,true,true,true};
  if(kind==0)caller.native_mode=false;
  if(kind==1)caller.upper_rom_caller=false;
  if(kind==2)caller.low_wram_stack=false;
  if(kind==3)caller.low_wram_data_bank=false;
  if(kind==4)w.clock.retained_hardware_interrupt_mask=0x10;
  if(kind==5)w.clock.new_frame_started=0;
  if(kind==6)w.playback.install(std::make_shared<GeneratedInputSequence>(std::vector<GeneratedInputRun>{{2,0x80},{0,0}}));
  if(kind==7)w.clock.retained_hardware_interrupt_mask=0x80;
  auto operation=n.frame();const auto before=receipt(n);const auto time=n.audio.master_clocks();
  bool rejected{};try{auto leaf=operation->begin_source_frame(*n.work,*n.physical,w.peripherals,w.playback,caller);}
  catch(const std::logic_error &){rejected=true;}
  require(rejected&&receipt(n)==before&&n.audio.master_clocks()==time&&!w.clock.input_polls&&!w.clock.publications,
      "Unowned source WAIT context/IRQ/demo/interrupt changed actual owners before rejection");
  require(!w.runtime->failed(),"Read-only source WAIT admission rejection poisoned healthy Runtime");
  // Drop the unrelated suspended frame only after observing pure rejection.
}
void lease_lifecycle(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" exact source frame lease lifecycle";
  WaitNative first(assets,content,true),foreign(assets,content,true);
  first.world.clock.new_frame_started=foreign.world.clock.new_frame_started=1;
  auto operation=first.frame(),other=foreign.frame();
  auto leaf=operation->begin_source_frame(*first.work,*first.physical,first.world.peripherals,first.world.playback,{true,true,true,true});
  const auto start=receipt(first);bool claimed{};
  try{auto duplicate=operation->begin_source_frame(*first.work,*first.physical,first.world.peripherals,first.world.playback,{true,true,true,true});}
  catch(const std::logic_error &){claimed=true;}
  require(claimed&&receipt(first)==start,"A suspended frame created a second actual WAIT lease");
  bool old_path{};try{operation->complete_frame({0,0});}catch(const std::logic_error &){old_path=true;}
  require(old_path&&receipt(first)==start&&!first.world.clock.input_polls,"Old frame completion bypassed the claimed source WAIT lease");
  bool old_publication{};try{operation->complete_publication();}catch(const std::logic_error &){old_publication=true;}
  require(old_publication&&receipt(first)==start&&!first.world.clock.input_polls&&!first.world.clock.publications,
      "Old publication completion bypassed the claimed source WAIT lease");
  while(!leaf->advance(1)){}
  const auto completed=receipt(first),other_before=receipt(foreign);bool wrong{};
  try{other->respond_source_frame(*leaf);}catch(const std::logic_error &){wrong=true;}
  require(wrong&&receipt(first)==completed&&receipt(foreign)==other_before&&!foreign.world.clock.input_polls&&
      !first.world.runtime->failed()&&!foreign.world.runtime->failed(),"Foreign frame consumed or poisoned another actual input receipt");
  operation->respond_source_frame(*leaf);require(operation->advance()==dialogue::Progress::Finished,"Owned receipt failed after foreign response rejection");
  operation.reset();first.world.clock.new_frame_started=1;auto next=first.frame();
  const auto next_before=receipt(first);bool stale{};try{next->respond_source_frame(*leaf);}catch(const std::logic_error &){stale=true;}
  require(stale&&receipt(first)==next_before&&first.world.clock.input_polls==1&&!first.world.runtime->failed(),
      "Previously consumed receipt released a later actual frame");
  bool foreign_clock{};try{auto rejected=next->begin_source_frame(*foreign.work,*foreign.physical,foreign.world.peripherals,foreign.world.playback,{true,true,true,true});}
  catch(const std::logic_error &){foreign_clock=true;}
  require(foreign_clock&&receipt(first)==next_before&&receipt(foreign)==other_before,
      "Foreign work/physical/raw owners mutated the actual suspension");
  auto next_leaf=next->begin_source_frame(*first.work,*first.physical,first.world.peripherals,first.world.playback,{true,true,true,true});
  while(!next_leaf->advance(4096)){}next->respond_source_frame(*next_leaf);
  require(next->advance()==dialogue::Progress::Finished&&first.world.clock.input_polls==2,"Stale rejection prevented the next healthy actual leaf");
}
void abandonment(const GameAssets &assets,const session::Content &content,bool drop_frame,bool completed=false) {
  WaitNative n(assets,content,true);n.world.clock.new_frame_started=1;
  context=assets.title+" source input abandonment frame="+std::to_string(drop_frame)+" completed="+std::to_string(completed);
  auto operation=n.frame();auto leaf=operation->begin_source_frame(*n.work,*n.physical,n.world.peripherals,n.world.playback,{true,true,true,true});
  if(completed){while(!leaf->advance(1)){};}
  else require(!leaf->advance(1),"Single genuine JSL unexpectedly completed WAIT");
  const auto before=receipt(n);const auto time=n.audio.master_clocks();
  if(drop_frame) {
    operation.reset();bool stale{};try{leaf->advance(1);}catch(const std::logic_error &){stale=true;}
    require(stale&&receipt(n)==before&&n.audio.master_clocks()==time&&!n.world.clock.input_polls,
        "Abandoned frame's borrowed leaf touched stale owners or resumed work");
    leaf.reset();
  } else {
    leaf.reset();bool poisoned{};try{operation->complete_frame({0,0});}catch(const std::logic_error &){poisoned=true;}
    require(poisoned&&receipt(n)==before&&n.audio.master_clocks()==time&&!n.world.clock.input_polls,
        "Abandoned input leaf admitted a retry or repeated its retired JSL");
  }
}
void lost_clock(const GameAssets &assets,const session::Content &content,bool physical,bool completed) {
  WaitNative n(assets,content,true);auto &w=n.world;w.clock.new_frame_started=1;
  context=assets.title+" source WAIT lost borrowed clock physical="+std::to_string(physical)+" completed="+std::to_string(completed);
  auto operation=n.frame();auto leaf=operation->begin_source_frame(*n.work,*n.physical,w.peripherals,w.playback,{true,true,true,true});
  if(completed){while(!leaf->advance(1)){};}
  else require(!leaf->advance(1),"Actual far call unexpectedly completed the borrowed-clock fixture");
  const auto input=w.input;const auto raw=w.playback.state();const auto pending=w.clock.new_frame_started;
  const auto counter=w.clock.frame_counter;const auto publications=w.clock.publications,polls=w.clock.input_polls;
  const auto time=n.audio.master_clocks();const auto picture=w.runtime->scene().frame();const auto frames=w.runtime->completed_frames();
  if(physical)n.physical.reset();else n.work.reset();
  bool rejected{};
  try{if(completed)operation->respond_source_frame(*leaf);else leaf->advance(1);}
  catch(const std::logic_error &){rejected=true;}
  require(rejected&&w.input==input&&w.playback.state()==raw&&w.clock.new_frame_started==pending&&
      w.clock.frame_counter==counter&&w.clock.publications==publications&&w.clock.input_polls==polls&&
      n.audio.master_clocks()==time&&w.runtime->scene().frame()==picture&&w.runtime->completed_frames()==frames,
      "Expired work/physical clock read a stale borrower or mutated source frame owners");
}
void foreign_peripheral(const GameAssets &assets,const session::Content &content) {
  WaitNative n(assets,content,true);auto &w=n.world;w.clock.new_frame_started=1;
  context=assets.title+" source WAIT same-clock foreign peripheral admission";
  auto operation=n.frame();PeripheralState foreign;foreign.bind_clock(*n.physical);
  require(foreign.uses(*n.physical)&&w.peripherals.uses(*n.physical),
      "Foreign-peripheral regression did not establish the same forward clock identity");
  const auto before=receipt(n);const auto time=n.audio.master_clocks();const auto picture=w.runtime->published_frame();
  std::unique_ptr<SourceFrameInput> alias;bool rejected{};
  try{alias=operation->begin_source_frame(*n.work,*n.physical,foreign,w.playback,{true,true,true,true});}
  catch(const std::logic_error &){rejected=true;}
  require(rejected&&receipt(n)==before&&n.audio.master_clocks()==time&&!w.clock.input_polls&&
      !w.runtime->failed()&&w.runtime->published_frame()==picture,
      "Factory admitted same-clock foreign peripheral that the actual physical producer never advances");
  auto actual=operation->begin_source_frame(*n.work,*n.physical,w.peripherals,w.playback,{true,true,true,true});
  while(!actual->advance(4096)){}operation->respond_source_frame(*actual);
  require(operation->advance()==dialogue::Progress::Finished&&w.clock.input_polls==1,
      "Foreign-peripheral rejection prevented the healthy actual frame/input owner");
}
void acquired_demo(const GameAssets &assets,const session::Content &content) {
  WaitNative n(assets,content,true);n.world.clock.new_frame_started=1;
  context=assets.title+" source WAIT acquired demo flag at literal read boundary";
  auto operation=n.frame();auto leaf=operation->begin_source_frame(*n.work,*n.physical,n.world.peripherals,n.world.playback,{true,true,true,true});
  require(!leaf->advance(1),"Far entry unexpectedly completed the demo-boundary fixture");
  n.world.playback.install(std::make_shared<GeneratedInputSequence>(std::vector<GeneratedInputRun>{{2,0x80},{0,0}}));
  const auto input=n.world.input;const auto raw=n.world.playback.state();bool rejected{};
  try{while(!leaf->advance(1)){};}catch(const std::logic_error &){rejected=true;}
  require(rejected&&!leaf->complete()&&n.world.input==input&&n.world.playback.state()==raw&&
      !n.world.clock.input_polls&&n.world.runtime->failed(),"Literal READ_JOYPAD demo gate changed raw/processed input or admitted consumed-work retry");
}
void run_wait(const GameAssets &assets) {
  const session::Content content(assets.image,assets.version);unsigned cases{};std::set<unsigned> late_sites;
  foreign_peripheral(assets,content);
  for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned pending:{0u,1u,255u})for(unsigned scenario=0;scenario<6;++scenario) {
    if(scenario==4&&!pending)continue;
    wait_case(assets,content,fast,budget,pending,scenario,late_sites);++cases;
  }
  // This is a declared set of physical entry inputs, not an adjusted WAIT
  // duration. The original authority records the exact interrupt return site.
  for(bool fast:{false,true})for(unsigned line:{223u,224u})for(unsigned horizontal=0;horizontal<1364;horizontal+=64) {
    wait_case(assets,content,fast,1,1,5,late_sites,std::pair{line,horizontal});++cases;
  }
  const unsigned delta=assets.version==GameVersion::JP?10:0;
  require(late_sites.contains(0xc08767-delta)&&late_sites.contains(0xc08778-delta),
      "Declared physical sweep did not witness actual NMI after each distinct WAIT clear");
  require(std::any_of(late_sites.begin(),late_sites.end(),[](unsigned pc){return pc>=0xc084b0&&pc<=0xc084f9;}),
      "Declared physical sweep did not witness NMI between actual processed-pad reducer stores");
  for(unsigned kind=0;kind<8;++kind)rejected_entry(assets,content,kind);
  lease_lifecycle(assets,content);abandonment(assets,content,false);abandonment(assets,content,true);
  abandonment(assets,content,false,true);
  for(bool physical:{false,true})for(bool completed:{false,true})lost_clock(assets,content,physical,completed);
  acquired_demo(assets,content);
  std::cout<<"PASS "<<assets.title<<" original WAIT/GET source work cases="<<cases<<" exact literal clocks/input/pending/refresh/return; NMI return sites=";
  for(auto pc:late_sites)std::cout<<std::hex<<pc<<',';
  std::cout<<std::dec<<'\n';
}
}
int main(int argc,char **argv) {try {
  if(argc<2)return 77;
  const bool alias_only=std::string(argv[1])=="--foreign-peripheral";
  if(alias_only&&argc<3)return 77;
  for(int i=alias_only?2:1;i<argc;++i) {
    const auto assets=load_game_assets(argv[i],asset_profiles());
    if(alias_only){const session::Content content(assets.image,assets.version);foreign_peripheral(assets,content);}
    else run_wait(assets);
  }
  std::cout<<"PASS source WAIT/GET work checks="<<checks<<'\n';
}catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}}
