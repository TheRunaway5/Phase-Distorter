// Actual C03C25 source helper and its native suspended EVENT1 service.
#define NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include "native_world_battle_return_reference.cpp"
namespace sector_music_reference {
using namespace world_battle_reference;
void run(const eb::GameAssets &assets,unsigned mode) {
  Rig rig(assets,true);Source source(assets);source.initialize();source.fixed_buttons=0;
  auto snapshot=saved(rig,false);auto archive=saves::SaveArchive::empty(assets.version);
  archive.save(0,snapshot.state,0);auto startup=rig.w.startup->begin(snapshot);
  while(startup->stage()!=WorldStartupStage::ResetWorld) {
    const auto p=startup->advance(1);
    if(p==dialogue::Progress::Suspended)rig.service(*startup->runtime_operation());
  }
  seed(source,rig,archive);
  // The reused encounter helper deliberately starts with recursive-action
  // suppression. This actual world bootstrap fixture admits the same initial
  // guard as the native GAME_INIT owner, before either C0B67F executes.
  source.put(source.jp?0xa56:0xa60,rig.w.clock.action_scripts_disabled);
  near_call(source,source.jp?0xc0b652:0xc0b67f);
  rig.drive(*startup);startup.reset();
  // Explicit source helper entry chooses DEFAULT_IRQ_CALLBACK. The helper's
  // conditional WAIT remains real; this isolated proof does not execute a
  // second parent actor callback from an unrelated world interrupt scheduler.
  source.call(0xc08522);rig.w.runtime->reset_interrupt_callback();
  const unsigned current=source.jp?0x615a:0x5dd4,next=current+2,disabled=current+4,fade=current+6;
  auto &state=rig.w.music_state;state.do_map_fade=1;
  rig.w.music.select(rig.w.interactions.state().leader_x,rig.w.interactions.state().leader_y);
  const unsigned selected=state.next_track;state.do_map_fade=0;
  state.current_map_track=mode&1?selected:0xffff;
  state.disable_changes=mode>=2;state.next_track=selected;
  source.put(current,state.current_map_track);source.put(next,state.next_track);
  source.put(disabled,state.disable_changes);source.put(fade,0);
  std::unique_ptr<WorldRuntime::Operation> parent;
  for(unsigned frames=0;frames<8&&!parent;++frames) {
    auto operation=rig.w.runtime->begin(story::TickKind::WorldFrame);
    for(unsigned work=0;work<1000000;++work) {
      const auto p=operation->advance(1);
      if(p==dialogue::Progress::Finished)break;
      if(p!=dialogue::Progress::Suspended)continue;
      if(operation->maintenance_request()&&operation->maintenance_request()->kind==WorldMaintenanceService::SectorMusic) {
        parent=std::move(operation);break;
      }
      rig.service(*operation);
    }
  }
  check(bool(parent),"Sector music fixture failed to reach its actual EVENT1 request");
  // This helper case explicitly admits an already loaded target in both
  // actual audio owners, separately from CURRENT_MAP_MUSIC_TRACK. Cold pack
  // loading remains a separate source caller test; no NMI count is waived.
  source.call(source.jp?0xc4cf5c:0xc4fbbd,selected);
  rig.audio.change_music(selected,rig.w.clock.disabled_transitions);
  check(source.word(source.jp?0xb6ec:0xb53b)==selected&&rig.audio.current_track()==selected,
      "Sector music audio entry owners differ");
  // The pending frame is an explicit input to WAIT_UNTIL_NEXT_FRAME. The
  // preceding actual audio preparation can leave different consumed flags in
  // the two hosts; this leaf admits the source value before either helper runs.
  // It still requires the real conditional WAIT and its exact publications.
  const auto pending_frame=source.bus->work_ram[0x2b];
  rig.w.clock.new_frame_started=pending_frame;
  const unsigned source_poll=source.polls,source_nmi=source.nmis,first_input=source.raw_inputs.size();
  const unsigned native_poll=rig.w.clock.input_polls,native_nmi=rig.w.clock.publications;
  std::cout<<"entry "<<assets.title<<" mode="<<mode<<" pending="<<unsigned(pending_frame)
      <<" mask_source="<<unsigned(source.bus->work_ram[0x1e])
      <<" mask_native="<<unsigned(rig.w.clock.interrupt_mask)
      <<" hardware_native="<<unsigned(rig.w.clock.effective_interrupt_mask())
      <<" source_phase="<<source.bus->scanline_index()<<':'<<source.bus->scanline_clock()<<'\n';
  bool source_wait{};source.observer=[&](Source &s) {
    if(s.cpu.program_counter==0xc08756)
      std::cout<<"source_wait_entry mode="<<mode<<" pending="<<unsigned(s.bus->work_ram[0x2b])
          <<" nmis="<<s.nmis-source_nmi<<'\n';
    if(s.cpu.program_counter==0xc08496) {
      std::cout<<"source_poll mode="<<mode<<" nmis="<<s.nmis-source_nmi<<'\n';
      source_wait=true;check(s.word(fade)==1,"Original sector music cleared fade before its actual WAIT");
      check(s.word(current)==(mode&1?selected:0xffff),"Original sector music applied track before its actual WAIT");
    }
  };
  near_call(source,source.jp?0xc03e8c:0xc03c25);source.observer={};
  rig.inputs=&source.raw_inputs;rig.cursor=first_input;
  auto transition=world::music::SectorTransition::begin(*rig.w.runtime,rig.w.music,state,
      rig.w.interactions.state(),rig.w.clock,*parent);
  bool duplicate_rejected=false;
  try {auto duplicate=world::music::SectorTransition::begin(*rig.w.runtime,rig.w.music,state,
      rig.w.interactions.state(),rig.w.clock,*parent);}catch(const std::logic_error&){duplicate_rejected=true;}
  check(duplicate_rejected&&state.do_map_fade==0,"Duplicate sector transition mutated its actual music state");
  bool native_wait{};
  for(unsigned work=0;;++work) {
    check(work<1000000,"Sector music source continuation exhausted its budget");
    const auto p=transition->advance(1);
    if(p==dialogue::Progress::Finished)break;
    if(p==dialogue::Progress::Suspended) {
      check(state.do_map_fade==1&&state.current_map_track==(mode&1?selected:0xffff),
          "Native sector music applied track or cleared fade before its actual WAIT");
      native_wait=true;rig.service(*transition->runtime_operation());
    }
  }
  check(native_wait==source_wait&&native_wait==!(mode&1),"Sector music conditional WAIT branch differs");
  check(state.current_map_track==source.word(current)&&state.next_track==source.word(next)&&
      state.disable_changes==source.word(disabled)&&state.do_map_fade==source.word(fade),"Sector music scalar state differs");
  check(rig.w.clock.input_polls-native_poll==source.polls-source_poll&&rig.cursor==source.raw_inputs.size(),
      "Sector music exact input polls differ");
  check(rig.w.clock.publications-native_nmi==source.nmis-source_nmi,
      "Sector music physical NMI count differs native="+std::to_string(rig.w.clock.publications-native_nmi)+
      " source="+std::to_string(source.nmis-source_nmi));
  check(parent->maintenance_request().has_value()&&!state.active_sector_transition&&!state.continuation_abandoned,
      "Sector music lost parent request or continuation reservation");
  transition.reset();parent->respond_maintenance();rig.inputs=nullptr;rig.runtime(*parent);parent.reset();
  std::cout<<"PASS sector music "<<assets.title<<" mode="<<mode<<" target="<<selected
      <<" entry_frame="<<unsigned(pending_frame)<<" waits="<<source.polls-source_poll
      <<" nmis="<<source.nmis-source_nmi<<'\n';
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try {unsigned failed=0;for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
      for(unsigned mode=0;mode<4;++mode) {
        try {sector_music_reference::run(assets,mode);}
        catch(const std::exception &error) {++failed;std::cerr<<"FAIL sector music "<<assets.title
            <<" mode="<<mode<<": "<<error.what()<<'\n';}
      }}return failed?1:0;}
  catch(const std::exception &error){std::cerr<<"FAIL sector music: "<<error.what()<<'\n';return 1;}
}
