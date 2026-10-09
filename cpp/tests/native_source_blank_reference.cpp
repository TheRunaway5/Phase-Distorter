// Actual C08726/C08744 entry, spin, interrupt and return. The oracle CPU is
// test-only; production advances the existing typed owners and work clock.
#define EB_NATIVE_SOURCE_NMI_REFERENCE_NO_MAIN
#include "native_source_nmi_reference.cpp"
#include "../src/native/session/battle.hpp"
#include "eb/native/cutscenes/display.hpp"
#include "eb/native/cutscenes/ending/scene.hpp"

namespace {
void blank_case(const GameAssets &assets,const session::Content &content,
                unsigned horizon,bool fast,bool reset,unsigned budget) {
  Original source(assets,0,fast);
  // Enter just before the next genuine VBlank, after acknowledging the older
  // flag. This is an explicit leaf input, never an original output transplant.
  const auto next_frame=source.bus.completed_frames+1;
  while(source.bus.completed_frames<next_frame || source.bus.scanline_index()<224 ||
      source.bus.scanline_clock()<horizon)
    source.cpu.execute_instruction<0xea>(0,1);
  require(source.bus.scanline_index()==224,"Original blank leaf did not begin on its declared scanline224");
  source.bus.read_byte(0x4210);
  Native native(assets,content,source,fast);auto &w=native.world;
  w.peripherals.read(0x4210,0);
  context=assets.title+" blank="+(reset?"reset":"retain")+" fast="+
      std::to_string(fast)+" horizon="+std::to_string(horizon)+" budget="+std::to_string(budget);
  w.runtime->reset_interrupt_callback();source.put(0x20,0x851b);
  source.put(assets.version==GameVersion::JP?0x8c22:0x88e0,0xffff);
  w.palette.upload_mode=0;source.bus.work_ram[0x30]=0;
  w.fade.write_brightness(9);w.fade.clear_parameters();source.bus.work_ram[0x0d]=9;
  source.put(0xa3,w.display.transient_memory().base_address());
  source.put(0xa1,w.display.transient_memory().current_address());
  source.bus.work_ram[assets.version==GameVersion::JP?0xc9:0xcb]=w.audio.sound_queue_start();
  source.bus.work_ram[assets.version==GameVersion::JP?0xc8:0xca]=w.audio.sound_queue_end();
  w.clock.new_frame_started=254;source.bus.work_ram[0x2b]=254;
  w.clock.frame_counter=255;source.bus.work_ram[2]=255;
  w.session.elapsed_timer=0x1234ffff;source.put(0xa7,0xffff);source.put(0xa9,0x1234);
  native.physical->nmi_enabled(true);source.bus.write_byte(0x4200,0x80);
  const auto start=source.bus.master_clocks(),audio_start=native.audio.master_clocks();
  const bool jp=assets.version==GameVersion::JP;
  const auto return_pc=(source.cpu.program_counter&0xff0000u)|std::uint16_t(source.cpu.program_counter+4);
  std::uint64_t original_interrupts{};
  source.cpu.observe_memory_write=[&](std::uint32_t address,std::uint8_t) {
    if(address==2)++original_interrupts; // actual NMI low-byte INC
  };
  source.cpu.execute_instruction<0x22>(reset?(jp?0xc0871f:0xc08726):(jp?0xc0873a:0xc08744),4);
  unsigned instructions{};
  while(source.cpu.program_counter!=return_pc||source.cpu.stack_pointer!=0x1fff) {
    if(++instructions>100000)throw std::runtime_error(context+": Original blank did not return: "+source.cpu.describe_registers());
    source.cpu.step_instruction();
  }
  battle::DisplaySetup blank(assets.version,w.fade,w.frame_display,w.clock,w.visual,w.runtime->scene());
  auto operation=blank.begin_source(*native.work,reset?battle::DisplayBlankKind::Reset:battle::DisplayBlankKind::Retain);
  unsigned advances{};
  while(!operation->advance(budget))if(++advances>100000)throw std::runtime_error(context+": Native blank did not return");
  require(!blank.pending()&&operation->complete(),"Actual blank pin was not released");
  require(native.work->master_clocks()==source.bus.master_clocks(),"Whole blank clock native="+
      std::to_string(native.work->master_clocks()-start)+" original="+std::to_string(source.bus.master_clocks()-start));
  require(native.audio.master_clocks()-audio_start==source.bus.master_clocks()-start,"Actual audio elapsed differs");
  require(w.clock.new_frame_started==source.bus.work_ram[0x2b]&&w.clock.frame_counter==source.bus.work_ram[2]&&
      original_interrupts&&native.work->completed_source_interrupts()==original_interrupts&&
      w.clock.publications==original_interrupts,"Source frame/interrupt receipt differs");
  require(w.session.elapsed_timer==(source.word(0xa7)|(source.word(0xa9)<<16)),"Actual timer carry differs");
  const auto fade=w.fade.state();
  require(fade.brightness==source.bus.work_ram[0x0d]&&fade.step==source.bus.work_ram[0x28]&&
      fade.delay==source.bus.work_ram[0x29]&&fade.remaining==source.bus.work_ram[0x2a],"Fade owner differs");
  require(w.fade.displayed_brightness()==source.bus.ppu_registers()[0]&&
      w.frame_display.displayed_hdma_enable==source.bus.ppu_registers()[0x1f],"Actual displayed blank/HDMA differs");
  require(w.display.vram()==source.bus.video_ram,"Blank changed complete VRAM");
  require(w.display.transient_memory().base_address()==source.word(0xa3)&&
      w.display.transient_memory().current_address()==source.word(0xa1),"Actual heap rotation differs");
  require(!w.clock.input_polls,"Blank helper fabricated a controller poll");
  require(operation->advance(budget)&&w.clock.publications==original_interrupts,"Completed blank repeated its interrupt");
}
void blank_run(const GameAssets &assets) {
  const session::Content content(assets.image,assets.version);unsigned cases{};
  for(bool fast:{false,true})for(bool reset:{false,true})
    for(unsigned horizon:{0u,7u,500u,1100u,1280u})for(unsigned budget:{1u,4096u}) {
      blank_case(assets,content,horizon,fast,reset,budget);++cases;
    }
  std::cout<<"PASS "<<assets.title<<" original blank source work: "<<cases<<" cases\n";
}
struct DisplayLifecycle {
  Original source;
  Native native;
  session::BattleContent battle_content;
  session::Battle battle;
  cutscenes::DisplayState state;
  cutscenes::Display display;
  DisplayLifecycle(const GameAssets &assets,const session::Content &content)
      :source(assets,0,true),native(assets,content,source,true),
       battle_content(assets.image,assets.version),battle(battle_content,native.world,assets.image),
       display(assets.version,state,{*native.world.runtime,native.world.interactions,native.world.actors,
         *native.world.map_load,native.world.map_state,native.world.windows,*native.world.window_graphics,
         native.world.party,native.world.clock,native.world.presentation,native.world.visual,native.world.music,
         native.world.music_state,native.world.palette,native.world.scratch,native.world.display,
         native.world.frame_display,native.world.fade,battle.background,battle.loader,battle.video,battle.blank,
         battle.frame,battle.frame_state,content.layers,native.world.layer,native.audio}) {
    auto &w=native.world;w.runtime->reset_interrupt_callback();w.palette.upload_mode=0;w.fade.force_blank(true);
    display.bind_source_work(*native.work);native.physical->nmi_enabled(true);
  }
};
void reload_clock_loss(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" reload-before-first-effect clock loss";
  DisplayLifecycle f(assets,content);auto &w=f.native.world;
  w.map_state.loaded_combination=37;w.map_state.loaded_palette=19;
  w.actors.scene().camera_x=0x123f;w.actors.scene().camera_y=0x2347;
  const auto camera=w.actors.scene();const auto palette=w.palette.staged;
  const auto video=w.display.vram();const auto text=f.state.text_tiles;
  const auto fade=w.fade.state();const auto clocks=f.native.audio.master_clocks();
  const auto publications=w.clock.publications,input=w.clock.input_polls;
  auto operation=f.display.reload_map();f.native.work.reset();bool rejected{};
  try{operation->advance(1);}catch(const std::logic_error &){rejected=true;}
  require(rejected&&w.map_state.loaded_combination==37&&w.map_state.loaded_palette==19&&
      w.actors.scene().camera_x==camera.camera_x&&w.actors.scene().camera_y==camera.camera_y&&
      w.palette.staged==palette&&w.display.vram()==video&&f.state.text_tiles==text&&w.fade.state()==fade&&
      f.native.audio.master_clocks()==clocks&&w.clock.publications==publications&&w.clock.input_polls==input&&
      !f.battle.blank.pending(),"Lost clock changed cache/camera/display/timeline before rejecting reload");
}
void ordinary_finish_during_source_blank(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" ordinary finish during timed blank";
  DisplayLifecycle f(assets,content);auto &w=f.native.world;
  auto operation=f.battle.blank.begin_source(*f.native.work,battle::DisplayBlankKind::Reset);
  unsigned advances{};
  // Retire the literal prefix through its STZ NEW_FRAME_STARTED. Any older
  // unread flag/NMI at entry is handled by the actual clock along the way.
  for(unsigned prefix=0;prefix<(assets.version==GameVersion::US?7u:6u);++prefix)
    require(!operation->advance(1),"Timed blank returned inside its entry prefix");
  const auto first=f.native.work->completed_source_interrupts();
  // Observe a genuine NMI after the source STZ, before completing the helper.
  // The test never manufactures the pending byte or publication receipt.
  while(!w.clock.new_frame_started||f.native.work->completed_source_interrupts()==first) {
    require(!operation->advance(1),"Timed blank returned before its first fresh NMI was observable");
    if(++advances>100000)throw std::runtime_error(context+": no actual source publication");
  }
  const auto clocks=f.native.work->master_clocks(),publications=w.clock.publications;
  const auto fade=w.fade.state();const auto pending=w.frame_display.pending_display_id();bool rejected{};
  try{f.battle.blank.finish();}catch(const std::logic_error &){rejected=true;}
  require(rejected&&f.battle.blank.pending()&&!operation->complete()&&
      f.native.work->master_clocks()==clocks&&w.clock.publications==publications&&w.fade.state()==fade&&
      w.frame_display.pending_display_id()==pending,"Ordinary finish consumed a timed blank owner/receipt");
  while(!operation->advance(1))
    if(++advances>100000)throw std::runtime_error(context+": timed owner did not finish after rejected ordinary finish");
  require(!f.battle.blank.pending()&&operation->complete()&&w.clock.publications==publications&&
      !w.clock.input_polls,"Rejected ordinary finish broke the actual timed return or repeated its NMI");
}
namespace ending=cutscenes::ending;
struct EndingLifecycle {
  DisplayLifecycle display;
  ending::Resources resources;
  ending::State state;
  ending::DecodeWorkState decode;
  ending::InitializerWorkState initializer_state{0x1234};
  ending::AssetWork assets;
  ending::InitializerWork initializer;
  ending::Scene scene;
  EndingLifecycle(const GameAssets &input,const session::Content &content)
      :display(input,content),resources(input.image,input.version),
       assets(input.version,*display.native.work,decode,display.native.world.scratch,
         display.native.world.display,display.native.world.fade),
       initializer(resources,*display.native.work,initializer_state,display.native.world.palette,
         display.state.text_tiles,display.native.world.actors,display.native.world.display),
       scene(resources,state,display.display,display.native.world.startup_owners()) {
    display.battle.video.mode=1;scene.bind_asset_work(assets,{true,0});
    scene.bind_initializer_work(initializer,{0xd4,false});
  }
};
void ending_busy_initializer(const GameAssets &input,const session::Content &content) {
  context=input.title+" ending busy initializer admission";
  EndingLifecycle f(input,content);auto &w=f.display.native.world;
  const auto video=w.display.vram(),buffer=w.scratch.bytes;const auto text=f.display.state.text_tiles;
  const auto palette=w.palette.staged;const auto fade=w.fade.state();
  const auto transitions=w.clock.disabled_transitions;const auto publications=w.clock.publications;
  const auto clocks=f.display.native.audio.master_clocks();
  auto held=f.initializer.begin_palette_copy(ending::PalettePart::Frame,{0xd4,false});bool rejected{};
  try{auto operation=f.scene.begin();}catch(const std::logic_error &){rejected=true;}
  require(rejected&&!f.scene.busy()&&!f.display.display.busy()&&!f.display.battle.blank.pending()&&
      w.display.vram()==video&&w.scratch.bytes==buffer&&f.display.state.text_tiles==text&&
      w.palette.staged==palette&&w.fade.state()==fade&&w.clock.disabled_transitions==transitions&&
      w.clock.publications==publications&&f.display.native.audio.master_clocks()==clocks&&
      f.initializer_state.memcpy_words_left==0x1234,"Busy initializer admission changed ending owners/timeline");
  held.reset();rejected=false;
  try{auto operation=f.scene.begin();}catch(const std::logic_error &){rejected=true;}
  require(rejected&&!f.scene.busy()&&f.initializer.failed()&&w.display.vram()==video&&
      w.scratch.bytes==buffer&&w.palette.staged==palette&&w.fade.state()==fade&&
      w.clock.disabled_transitions==transitions&&f.display.native.audio.master_clocks()==clocks,
      "Abandoned initializer was admitted by its already bound ending owner");
}
void ending_initializer_clock_loss(const GameAssets &input,const session::Content &content) {
  context=input.title+" ending active initializer clock loss";
  EndingLifecycle f(input,content);auto &w=f.display.native.world;
  f.display.native.work->clear_objects();auto operation=f.scene.begin();unsigned advances{};
  // Stop after the actual frame-palette helper's first retained counter store.
  // It is still active, with its shift/reads/stores ahead; no caller phase or
  // helper completion is supplied by the test.
  while(!f.initializer.busy()||f.initializer_state.memcpy_words_left!=32) {
    require(operation->advance(1)!=dialogue::Progress::Finished,"Ending returned before the real initializer atom");
    if(++advances>200000)throw std::runtime_error(context+": actual frame-palette helper was not reached");
  }
  const auto video=w.display.vram(),buffer=w.scratch.bytes;const auto text=f.display.state.text_tiles;
  const auto palette=w.palette.staged,displayed=w.palette.displayed;const auto fade=w.fade.state();
  const auto counter=f.initializer_state.memcpy_words_left;
  const auto clocks=f.display.native.audio.master_clocks(),publications=w.clock.publications,input_polls=w.clock.input_polls;
  f.display.native.work.reset();bool rejected{};
  try{operation->advance(1);}catch(const std::logic_error &){rejected=true;}
  require(rejected&&w.display.vram()==video&&w.scratch.bytes==buffer&&f.display.state.text_tiles==text&&
      w.palette.staged==palette&&w.palette.displayed==displayed&&w.fade.state()==fade&&
      f.initializer_state.memcpy_words_left==counter&&f.display.native.audio.master_clocks()==clocks&&
      w.clock.publications==publications&&w.clock.input_polls==input_polls,
      "Lost clock advanced an active ending helper or changed palette/text/video/timeline");
}
void ending_timed_callback_dispatch(const GameAssets &input,const session::Content &content) {
  context=input.title+" ending callback/dispatcher actual NMI handshake";
  EndingLifecycle f(input,content);auto &w=f.display.native.world;
  // Native integration only: both the original callback body and the complete
  // handler have independent leaf proofs. This case checks their actual owner
  // handoff through Ending Scene; it makes no whole-PLAY_CREDITS timing claim.
  w.runtime->restore_world_interrupt_callback();
  SourceWorldCallbackWork world_callback(*w.runtime,w.scheduler);
  ending::SourceCallbackDispatcher callbacks(*w.runtime,world_callback);
  f.display.native.nmi->bind_callback_work(callbacks);
  f.scene.bind_source_callbacks(callbacks);
  f.display.native.work->clear_objects();
  auto operation=f.scene.begin();unsigned advances{};
  while(operation->phase()!=10) {
    require(operation->advance(1)!=dialogue::Progress::Finished,
        "Ending returned before installing its actual credits callback");
    if(++advances>200000)throw std::runtime_error(context+": actual callback installation was not reached");
  }
  require(operation->text()&&!operation->runtime_operation()&&
      w.runtime->uses_interrupt_callback(*operation)&&!world_callback.uses(*w.runtime)&&callbacks.uses(*w.runtime),
      "Dispatcher did not follow the installed credits owner before foreground WAIT");
  const auto before=operation->text()->state();const auto actual_callbacks=f.state.callbacks;
  const auto input_state=w.input.state;const auto random=w.random;
  const auto publications=w.clock.publications,completed=f.display.native.work->completed_source_interrupts();
  const auto polls=w.clock.input_polls;const auto frame_counter=w.clock.frame_counter;
  // Retire genuine foreground NOP atoms; the peripheral boundary requests NMI
  // and SourceWorkClock executes its installed handler. No publication reply,
  // source flag, callback result or completion is supplied by this test.
  unsigned atoms{};
  while(f.display.native.work->completed_source_interrupts()==completed) {
    f.display.native.work->retire_source_work({2,1,0,0});
    if(++atoms>100000)throw std::runtime_error(context+": genuine next NMI did not complete");
  }
  const auto after=operation->text()->state();
  require(f.state.callbacks==actual_callbacks+1&&after.ticks==before.ticks+1&&
      after.scroll_position==before.scroll_position+0x4000u,
      "Actual timed NMI skipped or repeated the installed credits callback/quarter-scroll");
  require(w.clock.publications==publications+1&&f.display.native.work->completed_source_interrupts()==completed+1&&
      w.clock.publications==f.display.native.work->completed_source_interrupts()&&
      w.clock.frame_counter==std::uint8_t(frame_counter+1)&&w.clock.input_polls==polls&&
      w.input.state==input_state&&w.random==random&&operation->phase()==10&&!operation->runtime_operation()&&
      w.runtime->uses_interrupt_callback(*operation)&&callbacks.uses(*w.runtime),
      "Credits owner handoff duplicated publication, consumed input or started a foreground WAIT");
}
struct ActualCreditsCallback final : InterruptCallback {
  cutscenes::CreditsTextScene &text;
  party::State &party;
  std::uint64_t calls{};
  std::function<void()> during_callback;
  ActualCreditsCallback(cutscenes::CreditsTextScene &text,party::State &party):text(text),party(party) {}
  void validate_publication() const override {
    require(text.pending_rows()<126,"Reusable credits callback exceeded its actual row queue");
  }
  void after_publication() override {
    validate_publication();if(during_callback)during_callback();
    text.advance_callback(party.name_field(party::NameField::EarthBoundPlayer));++calls;
  }
  bool changes_display_registers() const noexcept override {return true;}
};
void ending_callback_revoke_reuse(const GameAssets &input,const session::Content &content) {
  context=input.title+" retained credits callback revocation/reuse";
  EndingLifecycle f(input,content),foreign(input,content);auto &w=f.display.native.world;
  // Native callback lifecycle only. The same revocation seam is called at
  // PLAY_CREDITS' permanent callback reset, but this test does not force a
  // private Scene phase or claim complete timed ending/foreground parity.
  w.runtime->restore_world_interrupt_callback();
  SourceWorldCallbackWork world_callback(*w.runtime,w.scheduler);
  ending::SourceCallbackDispatcher callbacks(*w.runtime,world_callback);
  f.display.native.nmi->bind_callback_work(callbacks);f.display.native.work->clear_objects();
  const auto name=[&w]{return w.party.name_field(party::NameField::EarthBoundPlayer);};
  const auto boundaries=[&w] {
    ending::NameBoundaryOwners result;
    result.after_encoded_name=[&w]{return std::optional<std::uint8_t>(w.party.name_field(party::NameField::Pet).front());};
    return result;
  };
  cutscenes::CreditsTextScene first_text(f.resources.credits());
  ending::CreditsWork first_work(first_text,w.trail,f.display.state.text_tiles,w.display,boundaries());
  ActualCreditsCallback first(first_text,w.party);
  ending::SourceCreditsCallbackWork first_source(*w.runtime,first,first_work,name);
  callbacks.bind_credits(first_source);
  const auto admission_clocks=f.display.native.work->master_clocks(),admission_publications=w.clock.publications;
  bool rejected{};
  try{callbacks.revoke_credits(first_source);}catch(const std::logic_error &){rejected=true;}
  require(rejected&&world_callback.uses(*w.runtime)&&callbacks.uses(*w.runtime)&&
      f.display.native.work->master_clocks()==admission_clocks&&w.clock.publications==admission_publications,
      "Uninstalled credits revocation mutated or released its registered owner");
  w.runtime->set_interrupt_callback(first);
  cutscenes::CreditsTextScene foreign_text(foreign.resources.credits());auto &other=foreign.display.native.world;
  ending::CreditsWork foreign_work(foreign_text,other.trail,foreign.display.state.text_tiles,other.display);
  ActualCreditsCallback foreign_callback(foreign_text,other.party);
  ending::SourceCreditsCallbackWork foreign_source(*other.runtime,foreign_callback,foreign_work,
      [&other]{return other.party.name_field(party::NameField::EarthBoundPlayer);});
  rejected=false;try{callbacks.revoke_credits(foreign_source);}catch(const std::logic_error &){rejected=true;}
  require(rejected&&first_source.uses(*w.runtime)&&callbacks.uses(*w.runtime)&&
      f.display.native.work->master_clocks()==admission_clocks&&w.clock.publications==admission_publications,
      "Foreign credits revocation mutated the actual registered callback");
  auto foreign_parent=other.runtime->begin_publication();rejected=false;
  try{callbacks.revoke_credits(first_source,foreign_parent.get());}catch(const std::logic_error &){rejected=true;}
  require(rejected&&first_source.uses(*w.runtime)&&callbacks.uses(*w.runtime)&&
      f.display.native.work->master_clocks()==admission_clocks&&w.clock.publications==admission_publications,
      "Foreign parent revocation changed the actual runtime or dispatcher slot");
  unsigned active_rejections{};
  first.during_callback=[&] {
    bool active_rejected{};
    try{callbacks.revoke_credits(first_source);}catch(const std::logic_error &){active_rejected=true;}
    require(active_rejected&&first_source.uses(*w.runtime)&&callbacks.uses(*w.runtime),
        "Running credits callback revoked or detached its actual owner");
    ++active_rejections;
  };
  const auto one_interrupt=[&] {
    const auto completed=f.display.native.work->completed_source_interrupts(),publications=w.clock.publications;
    const auto input_state=w.input.state;const auto random=w.random;const auto polls=w.clock.input_polls;
    const auto counter=w.clock.frame_counter;unsigned atoms{};
    while(f.display.native.work->completed_source_interrupts()==completed) {
      f.display.native.work->retire_source_work({2,1,0,0});
      if(++atoms>100000)throw std::runtime_error(context+": genuine callback NMI did not complete");
    }
    require(f.display.native.work->completed_source_interrupts()==completed+1&&w.clock.publications==publications+1&&
        w.clock.publications==f.display.native.work->completed_source_interrupts()&&
        w.clock.frame_counter==std::uint8_t(counter+1)&&w.clock.input_polls==polls&&w.input.state==input_state&&w.random==random,
        "Callback reuse repeated publication, fabricated input or altered RNG");
  };
  one_interrupt();
  require(first.calls==1&&active_rejections==1&&first_text.state().ticks==1&&first_text.state().scroll_position==0x4000,
      "Initial installed callback did not execute its actual timed body exactly once");
  const auto retained_first=first_text.state();
  const auto revoke_clocks=f.display.native.work->master_clocks(),revoke_publications=w.clock.publications;
  callbacks.revoke_credits(first_source);
  require(w.runtime->uses_default_interrupt_callback()&&!first_source.uses(*w.runtime)&&!callbacks.uses(*w.runtime)&&
      f.display.native.work->master_clocks()==revoke_clocks&&w.clock.publications==revoke_publications&&first_text.state()==retained_first,
      "Permanent callback revocation advanced time/text or retained its installed identity");
  // A genuine next initializer clears the shared composition bytes before the
  // replacement text owner binds. The old text/work/result objects stay alive.
  auto clear=f.initializer.begin_text_clear({0xd4,false});unsigned advances{};
  while(clear->advance(1)!=dialogue::Progress::Finished)
    if(++advances>10000)throw std::runtime_error(context+": replacement text initialization did not complete");
  cutscenes::CreditsTextScene second_text(f.resources.credits());
  ending::CreditsWork second_work(second_text,w.trail,f.display.state.text_tiles,w.display,boundaries());
  ActualCreditsCallback second(second_text,w.party);
  ending::SourceCreditsCallbackWork second_source(*w.runtime,second,second_work,name);
  callbacks.bind_credits(second_source);w.runtime->set_interrupt_callback(second);
  callbacks.clear_credits(first_source);rejected=false;
  try{callbacks.revoke_credits(first_source);}catch(const std::logic_error &){rejected=true;}
  require(rejected&&second_source.uses(*w.runtime)&&callbacks.uses(*w.runtime),
      "Retained old callback cleanup or revocation detached the replacement owner");
  one_interrupt();
  require(first.calls==1&&first_text.state()==retained_first&&second.calls==1&&second_text.state().ticks==1&&
      second_text.state().scroll_position==0x4000&&!second_work.failed(),
      "Reused dispatcher executed a stale callback or repeated the replacement text body");
  callbacks.revoke_credits(second_source);w.runtime->restore_world_interrupt_callback();
  callbacks.clear_credits(first_source);
  require(world_callback.uses(*w.runtime)&&callbacks.uses(*w.runtime)&&!w.runtime->failed(),
      "Retained credits objects prevented actual world callback restoration");
}
void display_pin(const GameAssets &assets,const session::Content &content,bool destroy_clock) {
  Original source(assets,0,true);Native native(assets,content,source,true);auto &w=native.world;
  w.runtime->reset_interrupt_callback();w.palette.upload_mode=0;w.fade.force_blank(true);
  session::BattleContent battle_content(assets.image,assets.version);
  session::Battle battle(battle_content,w,assets.image);
  cutscenes::DisplayState state;
  cutscenes::Display display(assets.version,state,{*w.runtime,w.interactions,w.actors,
      *w.map_load,w.map_state,w.windows,*w.window_graphics,w.party,w.clock,
      w.presentation,w.visual,w.music,w.music_state,w.palette,w.scratch,w.display,
      w.frame_display,w.fade,battle.background,battle.loader,battle.video,battle.blank,
      battle.frame,battle.frame_state,content.layers,w.layer,native.audio});
  display.bind_source_work(*native.work);
  native.physical->nmi_enabled(true);
  auto operation=display.blank(battle::DisplayBlankKind::Reset);
  require(operation->advance(1)==dialogue::Progress::BudgetExhausted&&operation->runtime_operation(),
      "Timed display blank lacks its actual logical publication child");
  bool unrelated{};
  try{auto other=w.runtime->begin(TickKind::Frame);}catch(const std::logic_error &){unrelated=true;}
  require(unrelated&&!w.runtime->failed()&&!w.clock.publications,"Timed blank admitted unrelated logical work");
  if(destroy_clock) {
    native.work.reset();bool lost{};
    try{operation->advance(1);}catch(const std::logic_error &){lost=true;}
    require(lost&&w.runtime->failed(),"Clock loss continued an unpinned blank or dereferenced the lost owner");
    return;
  }
  unsigned advances{};
  while(operation->advance(1)!=dialogue::Progress::Finished)
    if(++advances>100000)throw std::runtime_error("Timed display blank did not complete its actual child");
  require(!w.runtime->failed()&&!w.runtime->scene().busy()&&!w.clock.input_polls&&
      w.clock.publications==native.work->completed_source_interrupts(),
      "Timed blank duplicated publication, polled input or retained its logical child");
}
}
int main(int argc,char **argv) {try {
  if(argc<2)return 77;
  for(int i=1;i<argc;++i) {
    const auto assets=load_game_assets(argv[i],asset_profiles());blank_run(assets);
    const session::Content content(assets.image,assets.version);
    display_pin(assets,content,false);display_pin(assets,content,true);
    reload_clock_loss(assets,content);ordinary_finish_during_source_blank(assets,content);
    ending_busy_initializer(assets,content);ending_initializer_clock_loss(assets,content);
    ending_timed_callback_dispatch(assets,content);
    ending_callback_revoke_reuse(assets,content);
  }
  std::cout<<"PASS source blank checks="<<checks<<'\n';
}catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}}
