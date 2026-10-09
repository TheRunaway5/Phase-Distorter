// Original C1004E no-window/overworld composition. Retained descriptor
// preparation is independent on each host and remains outside this proof.
#define main eb_embedded_source_screen_reference_main
#include "native_source_screen_reference.cpp"
#undef main
#include "eb/native/story/source_foreground.hpp"
#include "eb/native/story/source_frame_input.hpp"

namespace {
struct ForegroundOriginal : ScreenOriginal {
  unsigned get_returns{},acknowledged_polls{};
  using ScreenOriginal::ScreenOriginal;
  unsigned caller() const {return bus.game_version()==GameVersion::JP?0xc4c6a9:0xc4f667;}
  unsigned entry() const {return bus.game_version()==GameVersion::JP?0xc100c4:0xc1004e;}
  unsigned returned() const {return caller()+4;}
  unsigned cleared() const {return bus.game_version()==GameVersion::JP?0xc100e0:0xc1006b;}
  unsigned screen_call() const {return bus.game_version()==GameVersion::JP?0xc100e4:0xc1006f;}
  unsigned wait_call() const {return screen_call()+4;}
  unsigned return_site() const {return wait_call()+4;}
  unsigned guard_at() const {return bus.game_version()==GameVersion::JP?0xa56:0xa60;}
  unsigned render_at() const {return bus.game_version()==GameVersion::JP?0x8d07:0x89c9;}
  unsigned battle_at() const {return bus.game_version()==GameVersion::JP?0x993b:0x9643;}
  void instruction() {
    drain();require(cpu.program_counter!=returned(),"Original foreground ran past its exact authored far return");
    if(cpu.program_counter==0xc08500)++get_returns;
    step();++foreground;drain();
  }
};
struct ForegroundReceipt {
  ScreenReceipt screen;
  std::array<std::uint16_t,2> raw{};
  std::uint16_t guard{},battle{};
  std::uint8_t render{};
  bool operator==(const ForegroundReceipt&) const=default;
};
ForegroundReceipt foreground_receipt(ForegroundOriginal &s) {
  auto base=screen_receipt(s);base.polls=s.acknowledged_polls;
  return {std::move(base),{std::uint16_t(s.word(0x77)),std::uint16_t(s.word(0x79))},
      std::uint16_t(s.word(s.guard_at())),std::uint16_t(s.word(s.battle_at())),std::uint8_t(s.word(s.render_at()))};
}
ForegroundReceipt foreground_receipt(const ScreenNative &n) {
  return {screen_receipt(n),n.world.playback.state().raw,n.world.clock.action_scripts_disabled,
      n.world.windows.prompt_state().battle_mode,n.world.meters.state().render};
}
void same_foreground(ForegroundOriginal &s,const ScreenNative &n,const char *where) {
  const auto expected=foreground_receipt(s),actual=foreground_receipt(n);
  if(expected!=actual) {
    std::ostringstream out;out<<where<<" PC="<<std::hex<<s.cpu.program_counter<<std::dec
      <<" atoms="<<s.foreground<<" clocks="<<actual.screen.clocks<<'/'<<expected.screen.clocks
      <<" NMI="<<actual.screen.interrupts<<'/'<<expected.screen.interrupts
      <<" pending="<<unsigned(actual.screen.pending)<<'/'<<unsigned(expected.screen.pending)
      <<" guard="<<actual.guard<<'/'<<expected.guard<<" input="<<(actual.screen.input==expected.screen.input)
      <<" raw="<<(actual.raw==expected.raw)<<" buffers="<<(actual.screen.buffered==expected.screen.buffered)
      <<" OAM="<<(actual.screen.objects==expected.screen.objects)<<" hardware="<<(actual.screen.hardware==expected.screen.hardware);
    require(false,out.str());
  }
  require(n.world.actors.size()==0&&n.world.actors.ticks()==0&&!n.world.actors.in_tick()&&n.world.actors.object_draws().empty(),
      "Suppressed foreground advanced or manufactured its actual fresh actor owner");++checks;
}
void prepare_foreground(ForegroundOriginal &o,ScreenNative &n,unsigned guard,unsigned pending,unsigned line,unsigned horizontal,bool enabled=true) {
  auto &w=n.world;const bool jp=o.bus.game_version()==GameVersion::JP;
  require(w.actors.size()==0&&!w.actors.in_tick()&&w.actors.ticks()==0&&w.actors.object_draws().empty(),
      "Fixture does not have the admitted actual fresh actor owner");
  w.clock.action_scripts_disabled=std::uint16_t(guard);o.put(o.guard_at(),guard);
  w.meters.state().render=0;o.put(o.render_at(),0xa500);
  w.windows.prompt_state().battle_mode=0;o.put(o.battle_at(),0);
  // The unused actual actor head is declared independently, never inferred
  // from raw queue offsets or substituted for a native actor/list owner.
  o.put(o.guard_at()-16,0xffff);o.put(o.guard_at()-14,0xffff);
  const unsigned working=jp?0x2800:0x2400;
  w.actor_object_display_state.working[2]=3;w.actor_object_display_state.working[3]=0;o.put(working+2,3);
  for(unsigned i=0;i<4;++i) {
    const battle::PsiScroll value{std::uint16_t(0x8713+i*0x137),std::uint16_t(0xa229+i*0x251)};
    w.display.staged_scroll[i]=value;o.put(0x31+i*4,value.x);o.put(0x33+i*4,value.y);
  }
  w.clock.frame_counter=0xfe;o.bus.work_ram[2]=0xfe;w.clock.new_frame_started=std::uint8_t(pending);o.bus.work_ram[0x2b]=std::uint8_t(pending);
  w.session.elapsed_timer=0x1234ffff;o.put(0xa7,w.session.elapsed_timer);o.put(0xa9,w.session.elapsed_timer>>16);
  const InputState declared{{0x3000,0x8400},{0x1234,0x4321},{0xabcd,0xefab},{9,7},0xffff};w.input=declared;
  for(unsigned i=0;i<2;++i){o.put(0x65+i*2,declared.state[i]);o.put(0x69+i*2,declared.held[i]);o.put(0x6d+i*2,declared.pressed[i]);o.put(0x71+i*2,declared.repeat_timer[i]);}
  o.put(jp?0xa2a:0xa34,declared.player_activity);w.windows.prompt_state().debug=0;o.put(jp?0x46f2:0x436c,0);
  w.playback.store_source_raw_word(0,0x1234);w.playback.store_source_raw_word(1,0xabcd);o.put(0x77,0x1234);o.put(0x79,0xabcd);o.put(0x7b,0);
  o.put(0x20,0x851b);o.put(0xa3,w.display.transient_memory().base_address());o.put(0xa1,w.display.transient_memory().current_address());
  w.palette.upload_mode=0;o.bus.work_ram[0x30]=0;w.fade.force_blank(true);const auto fade=w.fade.state();
  o.bus.work_ram[0xd]=fade.brightness;o.bus.work_ram[0x28]=fade.step;o.bus.work_ram[0x29]=fade.delay;o.bus.work_ram[0x2a]=fade.remaining;
  o.bus.work_ram[jp?0xc9:0xcb]=w.audio.sound_queue_start();o.bus.work_ram[jp?0xc8:0xca]=w.audio.sound_queue_end();
  const auto target=std::uint64_t(262*1364)+line*1364+horizontal;o.cpu.program_counter=0xc0ff00;
  while(o.bus.master_clocks()<target){o.cpu.execute_instruction<0xea>(0,1);n.work->retire_source_work({2,1,0,0});}
  require(o.bus.master_clocks()==n.work->master_clocks(),"Independent original/native foreground warm-up clocks differ");
  n.physical->nmi_enabled(enabled);w.clock.interrupt_mask=std::uint8_t(enabled?0x80:0);w.clock.retained_hardware_interrupt_mask=w.clock.interrupt_mask;
  o.bus.write_byte(0x4200,w.clock.interrupt_mask);o.bus.work_ram[0x1e]=w.clock.interrupt_mask;
  o.cpu.program_counter=o.caller();o.cpu.status_register=0x34;o.cpu.data_bank=0x7e;o.cpu.direct_page=0x200;
  o.cpu.accumulator=0x1234;o.cpu.x_index=0x67;o.cpu.y_index=0xab;
  const auto image=o.bus.cartridge_image();const auto at=o.caller()&0x3fffff;
  require(image[at]==0x22&&(image[at+1]|unsigned(image[at+2])<<8|unsigned(image[at+3])<<16)==o.entry(),
      "Authored credits loop no longer contains its genuine regional C1004E far call");
  o.audit();same_foreground(o,n,"independent foreground entry owners");
}
void until(ForegroundOriginal &o,unsigned stop) {
  for(unsigned count=0;o.cpu.program_counter!=stop;++count){require(count<200000,"Original foreground helper did not reach its exact boundary");o.instruction();}
}
template<class Leaf> void compare_leaf(ForegroundOriginal &o,ScreenNative &n,Leaf &leaf,unsigned budget,unsigned stop,const char *label) {
  const auto before=o.foreground;
  if(budget==1)for(unsigned count=0;;++count) {
    require(count<200000,"Composed source leaf did not return");o.instruction();const bool done=leaf.advance(1);same_foreground(o,n,label);
    require(leaf.retired_instructions()==o.foreground-before,"Composed leaf skipped or duplicated a source instruction");
    require(done==(o.cpu.program_counter==stop),"Composed leaf returned at another original site");if(done)break;
  } else {
    until(o,stop);for(unsigned count=0;!leaf.advance(budget);++count)require(count<2000,"Native foreground leaf did not return");
    same_foreground(o,n,label);require(leaf.retired_instructions()==o.foreground-before,"Budget changed literal composed work count");
  }
}
constexpr SourceForegroundContext foreground_context{true,true,true,true};
void at_service(WorldRuntime::Operation &operation,SceneService service) {
  for(unsigned count=0;count<100;++count) {
    const auto progress=operation.advance(1);
    if(progress==dialogue::Progress::Suspended) {
      require(operation.service()==service,"Explicit foreground suspended at another actual Scene service");return;
    }
    require(progress!=dialogue::Progress::Finished,"Explicit foreground finished before its original far return");
  }
  require(false,"Actual foreground continuation did not reach its source service");
}
void pure_response(WorldRuntime::Operation &operation,SourceForegroundWork &leaf,ScreenNative &n) {
  const auto before=foreground_receipt(n);const auto picture=n.world.runtime->scene().frame();
  operation.respond_source_foreground(leaf);
  require(foreground_receipt(n)==before&&n.world.runtime->scene().frame()==picture,
      "Foreground response repeated time, input or immutable publication");
  bool duplicate{};try{operation.respond_source_foreground(leaf);}catch(const std::logic_error&){duplicate=true;}
  require(duplicate&&foreground_receipt(n)==before&&!n.world.runtime->failed(),
      "Duplicate foreground receipt mutated or poisoned completed owners");
}
void foreground_case(const GameAssets &assets,const session::Content &content,bool fast,unsigned budget,
    unsigned selected,unsigned guard,unsigned pending,unsigned line,unsigned horizontal,std::set<unsigned> &sites) {
  context=assets.title+" foreground fast="+std::to_string(fast)+" budget="+std::to_string(budget)+
      " selected="+std::to_string(selected)+" guard="+std::to_string(guard)+" pending="+std::to_string(pending)+
      " phase="+std::to_string(line)+":"+std::to_string(horizontal);
  ForegroundOriginal original(assets,fast,selected);ScreenNative native(assets,content,fast,true,selected);
  prepare_foreground(original,native,guard,pending,line,horizontal);
  const auto refresh_before=native.work->refresh_pauses();
  const auto audio_before=native.audio.master_clocks(),original_before=original.bus.master_clocks();
  auto operation=native.world.runtime->begin_source_world_frame(*native.work,foreground_context);
  // This is the actual authored upper-bank JSL, separate from the wrapper.
  original.instruction();native.work->retire_source_work({8,4,3,0});
  require(original.cpu.program_counter==original.entry(),"Real credits JSL entered another foreground routine");
  same_foreground(original,native,"separately charged actual caller JSL");
  at_service(*operation,SceneService::ForegroundPrefix);
  auto prefix=operation->begin_source_foreground(*native.work,foreground_context);
  require(prefix->stage()==SourceForegroundStage::Prefix,"Actual prefix lease has another stage");
  const auto unstarted=foreground_receipt(native);require(!prefix->advance(0)&&!prefix->retired_instructions()&&foreground_receipt(native)==unstarted,
      "Zero foreground budget changed actual owners");
  bool early{};try{operation->respond_source_foreground(*prefix);}catch(const std::logic_error&){early=true;}
  require(early&&foreground_receipt(native)==unstarted&&!native.world.runtime->failed(),"Incomplete prefix receipt changed its Scene");
  compare_leaf(original,native,*prefix,budget,original.cleared()-4,"literal foreground prefix");
  require(prefix->retired_instructions()==6,"Prefix did not retire the actual six source instructions");
  pure_response(*operation,*prefix,native);
  // Existing synchronous source CLEAR owns its one JSL/body/RTL. Its separate
  // original proof exposes its atoms; this composition compares its exact exit.
  until(original,original.cleared());at_service(*operation,SceneService::SuppressedActors);
  same_foreground(original,native,"actual source CLEAR boundary");
  auto run=operation->begin_source_foreground(*native.work,foreground_context);
  require(run->stage()==SourceForegroundStage::SuppressedActors,"Actual suppressed call lease has another stage");
  compare_leaf(original,native,*run,budget,original.screen_call(),"literal suppressed RUN call and return");
  require(run->retired_instructions()==4&&native.world.clock.action_scripts_disabled==guard,
      "Suppressed RUN manufactured, incremented or cleared the genuine nonzero guard");
  pure_response(*operation,*run,native);
  at_service(*operation,SceneService::ScreenUpdate);
  auto screen=operation->begin_source_screen(*native.work,{true,true,true,true});
  compare_leaf(original,native,*screen,budget,original.wait_call(),"composed original UPDATE_SCREEN");
  const auto after_screen=foreground_receipt(native);operation->respond_source_screen(*screen);
  require(foreground_receipt(native)==after_screen,"Screen response repeated composed source work");
  at_service(*operation,SceneService::Frame);
  const auto before_wait=foreground_receipt(native);bool bypass_frame{},bypass_publication{};
  try{operation->complete_frame({0xffff,0xffff});}catch(const std::logic_error&){bypass_frame=true;}
  try{operation->complete_publication();}catch(const std::logic_error&){bypass_publication=true;}
  require(bypass_frame&&bypass_publication&&foreground_receipt(native)==before_wait&&!native.world.runtime->failed(),
      "Explicit foreground accepted an ordinary frame/publication bypass");
  auto wait=operation->begin_source_frame(*native.work,*native.physical,native.world.peripherals,native.world.playback,{true,true,true,true});
  compare_leaf(original,native,*wait,budget,original.return_site(),"composed original WAIT/GET");
  require(original.get_returns==1&&!native.world.clock.input_polls,"Composed WAIT duplicated GET or acknowledged before its real return");
  const auto time=native.work->master_clocks();const auto physical_publications=native.world.clock.publications;
  operation->respond_source_frame(*wait);original.acknowledged_polls=1;
  same_foreground(original,native,"single actual WAIT response");
  require(native.work->master_clocks()==time&&native.world.clock.publications==physical_publications&&
      native.world.windows.prompt_state().pressed==native.world.input.pressed[0],"WAIT response repeated clocks/publication or lost prompt input");
  at_service(*operation,SceneService::ForegroundReturn);
  require(native.world.runtime->scene().busy(),"Scene released before the literal foreground RTL");
  auto returned=operation->begin_source_foreground(*native.work,foreground_context);
  require(returned->stage()==SourceForegroundStage::Return,"Actual final return lease has another stage");
  compare_leaf(original,native,*returned,budget,original.returned(),"literal foreground final RTL");
  require(returned->retired_instructions()==1,"Final foreground return did not retire exactly one RTL");
  pure_response(*operation,*returned,native);
  require(operation->advance()==dialogue::Progress::Finished,"Actual source foreground did not release its exact parent after RTL");
  same_foreground(original,native,"complete original authored foreground return");
  require(original.cpu.stack_pointer==0x1fff&&original.cpu.direct_page==0x200&&original.cpu.data_bank==0x7e&&
      !(original.cpu.status_register&0x30)&&original.cpu.x_index==0xfffe,"Composed actual far return lost stack/D/DB or GET widths");
  const auto original_refresh=original.refreshes(),native_refresh=native.work->refresh_pauses()-refresh_before;
  // Native audio initialization and both retained-screen producer histories
  // precede this measured caller. Preserve their epochs; compare only the
  // independently recorded elapsed interval, as the existing CLEAR proof does.
  const auto original_audio=original.bus.master_clocks()-original_before,native_audio=native.audio.master_clocks()-audio_before;
  require(original_refresh==native_refresh&&native_audio==original_audio,
      "Original composed foreground refresh/audio differs: refresh native="+std::to_string(native_refresh)+
      " original="+std::to_string(original_refresh)+" audio native="+std::to_string(native_audio)+
      " original="+std::to_string(original_audio)+" initial audio="+std::to_string(audio_before)+
      " initial original="+std::to_string(original_before));
  require(original.word(original.guard_at())==guard&&std::none_of(original.stores.begin(),original.stores.end(),[&](const auto &s){
      return s.address==original.guard_at()||s.address==original.guard_at()+1;
    }),"Original suppressed foreground wrote its retained guard");
  require(native.world.clock.input_polls==1&&original.get_returns==1,"Final RTL duplicated input receipt or GET");
  sites.insert(original.interrupted_sites.begin(),original.interrupted_sites.end());
}
void rejected_foreground(const GameAssets &assets,const session::Content &content,unsigned kind) {
  context=assets.title+" foreground pure admission kind="+std::to_string(kind);
  ForegroundOriginal original(assets,true);ScreenNative native(assets,content,true,kind!=9,1,kind!=10);
  prepare_foreground(original,native,kind==4?0:1,1,40,100);
  auto caller=foreground_context;
  if(kind==0)caller.native_mode=false;
  if(kind==1)caller.upper_rom_caller=false;
  if(kind==2)caller.low_wram_stack=false;
  if(kind==3)caller.low_wram_data_bank=false;
  if(kind==5)native.world.meters.state().render=1;
  if(kind==6)native.world.windows.prompt_state().battle_mode=1;
  if(kind==7){native.world.clock.interrupt_mask=0x90;native.world.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind==8)native.nmi.reset();
  const auto before=foreground_receipt(native);const auto picture=native.world.runtime->scene().frame();
  const auto time=native.audio.master_clocks();bool rejected{};
  try{auto operation=native.world.runtime->begin_source_world_frame(*native.work,caller);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&foreground_receipt(native)==before&&native.audio.master_clocks()==time&&
      native.world.runtime->scene().frame()==picture&&!native.world.runtime->scene().busy(),
      "Unsupported source foreground mutated or admitted its actual entry owners");
}
std::unique_ptr<WorldRuntime::Operation> prefix_operation(ScreenNative &native) {
  auto operation=native.world.runtime->begin_source_world_frame(*native.work,foreground_context);
  at_service(*operation,SceneService::ForegroundPrefix);return operation;
}
void foreground_lease(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" foreground exact single-use parent/stage receipt";
  ScreenNative first(assets,content,true),second(assets,content,true);
  auto operation=prefix_operation(first),foreign=prefix_operation(second);
  auto leaf=operation->begin_source_foreground(*first.work,foreground_context);
  const auto before=foreground_receipt(first);bool duplicate{},clock{};
  try{auto extra=operation->begin_source_foreground(*first.work,foreground_context);}catch(const std::logic_error&){duplicate=true;}
  try{auto extra=foreign->begin_source_foreground(*first.work,foreground_context);}catch(const std::logic_error&){clock=true;}
  require(duplicate&&clock&&foreground_receipt(first)==before&&!first.world.runtime->failed()&&!second.world.runtime->failed(),
      "Duplicate/foreign source factory changed actual receipt owners");
  while(!leaf->advance(1)){}
  const auto completed=foreground_receipt(first),other=foreground_receipt(second);bool wrong{};
  try{foreign->respond_source_foreground(*leaf);}catch(const std::logic_error&){wrong=true;}
  require(wrong&&foreground_receipt(first)==completed&&foreground_receipt(second)==other,"Foreign parent consumed completed foreground receipt");
  pure_response(*operation,*leaf,first);at_service(*operation,SceneService::SuppressedActors);
  const auto next=foreground_receipt(first);bool stale{};
  try{operation->respond_source_foreground(*leaf);}catch(const std::logic_error&){stale=true;}
  require(stale&&foreground_receipt(first)==next&&!first.world.runtime->failed(),"Stale prefix receipt consumed suppressed actor stage");
  // Ordinary timed WorldFrame is intentionally not an explicit C1004E lease.
  ScreenNative ordinary(assets,content,true);auto normal=ordinary.screen();const auto old=foreground_receipt(ordinary);bool opt_in{};
  try{auto extra=normal->begin_source_foreground(*ordinary.work,foreground_context);}catch(const std::logic_error&){opt_in=true;}
  require(opt_in&&foreground_receipt(ordinary)==old&&!ordinary.world.runtime->failed(),"Ordinary tick acquired manufactured foreground source mode");
}
void foreground_abandonment(const GameAssets &assets,const session::Content &content,bool parent,bool completed) {
  context=assets.title+" foreground abandon parent="+std::to_string(parent)+" completed="+std::to_string(completed);
  ScreenNative native(assets,content,true);auto operation=prefix_operation(native);
  auto leaf=operation->begin_source_foreground(*native.work,foreground_context);
  if(completed){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Prefix unexpectedly returned after REP31");
  const auto before=foreground_receipt(native);bool rejected{};
  if(parent) {
    operation.reset();try{if(completed)leaf->advance(0);else leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
    // Completed leaves may report their terminal flag, but cannot be consumed
    // by any actual parent after its destruction.
    if(completed)rejected=native.world.runtime->failed();
  } else {
    leaf.reset();try{operation->advance(1);}catch(const std::logic_error&){rejected=true;}
  }
  require(rejected&&foreground_receipt(native)==before&&native.world.runtime->failed(),
      "Abandoned incomplete/completed foreground receipt released or replayed actual source owners");
}
void foreground_lost_owner(const GameAssets &assets,const session::Content &content,unsigned owner,bool completed,bool enabled) {
  context=assets.title+" foreground lost owner="+std::to_string(owner)+" complete="+std::to_string(completed)+" enabled="+std::to_string(enabled);
  ScreenNative native(assets,content,true);native.physical->nmi_enabled(enabled);
  native.world.clock.interrupt_mask=std::uint8_t(enabled?0x80:0);native.world.clock.retained_hardware_interrupt_mask=native.world.clock.interrupt_mask;
  auto operation=prefix_operation(native);auto leaf=operation->begin_source_foreground(*native.work,foreground_context);
  if(completed){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Prefix unexpectedly completed owner-loss case");
  const auto before=foreground_receipt(native);const auto time=native.audio.master_clocks();const auto picture=native.world.runtime->scene().frame();
  if(owner==0)native.work.reset();
  if(owner==1)native.physical.reset();
  if(owner==2)native.nmi.reset();
  bool rejected{};try{if(completed)operation->respond_source_foreground(*leaf);else leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
  auto after=foreground_receipt(native);after.screen.clocks=before.screen.clocks;after.screen.frames=before.screen.frames;after.screen.phase=before.screen.phase;
  require(rejected&&after==before&&native.audio.master_clocks()==time&&native.world.runtime->scene().frame()==picture,
      "Expired foreground owner advanced source clocks, read a dead virtual owner or changed publication");
}
void run_foreground(const GameAssets &assets,bool focused=false) {
  const session::Content content(assets.image,assets.version);unsigned cases{};std::set<unsigned> sites;
  for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned selected:{1u,2u})for(unsigned guard:{1u,65535u})for(unsigned pending:{0u,1u}) {
    foreground_case(assets,content,fast,budget,selected,guard,pending,40,100,sites);++cases;
  }
  if(!focused) {
    // Declared physical phases, with no measured result used to select/fill a
    // wait. The warm-up may overshoot VBlank and preserves real enable edges.
    for(bool fast:{false,true})for(unsigned line:{220u,221u,222u,223u,224u})for(unsigned horizontal=0;horizontal<1364;horizontal+=8) {
      const unsigned selected=1+((horizontal/8)&1),guard=(horizontal/8)&2?65535:1;
      foreground_case(assets,content,fast,1,selected,guard,1,line,horizontal,sites);++cases;
    }
    // Earlier uniformly declared entries cover the longer composed predecessor
    // interval before the final RTL. No NOP or wait is fitted to an output.
    for(bool fast:{false,true})for(unsigned line:{216u,217u,218u,219u})for(unsigned horizontal=0;horizontal<1364;horizontal+=16) {
      const unsigned selected=1+((horizontal/16)&1),guard=(horizontal/16)&2?65535:1;
      foreground_case(assets,content,fast,1,selected,guard,1,line,horizontal,sites);++cases;
    }
    const bool jp=assets.version==GameVersion::JP;
    require(sites.contains(jp?0xc100c9:0xc10053),"Declared phase grid did not witness NMI after sampled render read");
    require(sites.contains(jp?0xc100d4:0xc1005f),"Declared phase grid did not witness NMI after sampled battle read");
    require(sites.contains(jp?0xc09448:0xc09469),"Declared phase grid did not witness NMI after genuine sampled nonzero guard");
    require(sites.contains(jp?0xc4c6ad:0xc4f66b),
        "Declared phase grid did not witness NMI across original final foreground return");
  }
  for(unsigned kind=0;kind<11;++kind)rejected_foreground(assets,content,kind);
  foreground_lease(assets,content);
  for(bool parent:{false,true})for(bool completed:{false,true})foreground_abandonment(assets,content,parent,completed);
  for(unsigned owner=0;owner<3;++owner)for(bool completed:{false,true})for(bool enabled:{false,true})
    foreground_lost_owner(assets,content,owner,completed,enabled);
  std::cout<<"PASS "<<assets.title<<" original C1004E composed cases="<<cases<<" +28 admission/lifecycle; original NMI sites=";
  for(auto site:sites)std::cout<<std::hex<<site<<',';
  std::cout<<std::dec<<'\n';
}
}
int main(int argc,char **argv) {try {
  if(argc<2)return 77;
  const bool focused=std::string(argv[1])=="--foreground-smoke";
  if(focused&&argc<3)return 77;
  for(int i=focused?2:1;i<argc;++i)run_foreground(load_game_assets(argv[i],asset_profiles()),focused);
  std::cout<<"PASS original foreground wrapper checks="<<checks<<'\n';
}catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}}
