#include "native_world_map_load_fixture.hpp"
#include "eb/native/world_screen_transition.hpp"
#include <functional>
#include <iostream>

namespace {
using namespace eb::native;
unsigned checks;
void check(bool value,const char *message) {++checks;if(!value)throw std::runtime_error(message);}
template<class F> void rejects(F fn) {bool caught{};try{fn();}catch(const std::exception&){caught=true;}check(caught,"Invalid screen-transition admission accepted");}
std::vector<std::uint8_t> resources(unsigned fade=0,unsigned animation=0,unsigned speed=0) {
  std::vector<std::uint8_t> bytes(0x160000);
  const unsigned at=0x101400+12;
  bytes[at]=20;bytes[at+1]=std::uint8_t(animation);bytes[at+3]=std::uint8_t(fade);
  bytes[at+4]=7;bytes[at+5]=std::uint8_t(speed);bytes[at+6]=std::uint8_t(speed>>8);bytes[at+8]=20;
  bytes[0x101400]=0;bytes[0x101400+8]=0;
  return bytes;
}
struct Fixture {
  startup_test::Resources content;
  battle::PaletteBankState colors;
  battle::PsiScratch scratch;
  battle::PsiDisplayState display;
  battle::FrameDisplay frames{display};
  WorldDisplayFade fade{WorldDisplayFadeState{15,0,0,0}};
  WorldSwirlData definitions{};
  WorldEncounterEffectData effect_data{{},{},{}};
  WorldSwirlState swirl;
  WorldNavigationState navigation;
  WorldScreenTransitionState state;
  std::uint16_t giygas_phase=4;
  std::unique_ptr<WorldEncounterEffects> effects;
  std::unique_ptr<map_load_test::Fixture> world;
  explicit Fixture(eb::GameVersion version):content(version) {
    world=std::make_unique<map_load_test::Fixture>(content);
    auto &w=*world;
    effects=std::make_unique<WorldEncounterEffects>(definitions,effect_data,swirl,w.scene_colors,w.visual,w.presentation);
    w.presentation.bind_display_fade(fade);w.presentation.bind_frame_display(frames);
    w.presentation.bind_palette_transport(colors);w.runtime->bind_encounter_effects(*effects);
    for(unsigned i=0;i<256;++i)colors.staged_color(i)=std::uint16_t(0x8000|(i&31)|((31-(i&31))<<5)|((i%17)<<10));
    colors.upload_mode=24;colors.publish_pending();
    w.runtime->refresh_world_capture();
    w.actors.scene().camera_x=0xff20;w.actors.scene().camera_y=0x120;
    w.clock.frame_counter=0xfc;w.clock.new_frame_started=0;
    swirl.update_in=200;
    navigation.ladder_stairs={17,31};state={1,2,3,4,5,6,7,8};
  }
  ~Fixture(){world.reset();}
  WorldScreenTransitionOwners owners() {
    auto &w=*world;
    return {*w.runtime,w.actors,colors,scratch,display,frames,fade,w.clock,w.visual,*effects,navigation,giygas_phase,nullptr};
  }
};
std::shared_ptr<const dialogue::Program> program(eb::GameVersion version) {
  return std::make_shared<dialogue::Program>(version,std::vector<dialogue::ContentBlock>{{0,0,{0x1f,0x21,1,2}}},
      std::vector<dialogue::Location>{{0,0}});
}
struct Counts {unsigned frames{},publications{};};
Counts drive(WorldScreenTransition::Operation &operation,Fixture &f,
             const std::function<void(unsigned)> &before_frame={}) {
  Counts count;
  for(unsigned work=0;work<100000;++work) {
    const auto progress=operation.advance(1);
    if(progress==dialogue::Progress::Finished)return count;
    if(progress!=dialogue::Progress::Suspended)continue;
    auto *runtime=operation.runtime_operation();
    check(runtime!=nullptr,"Transition suspended without its real runtime child");
    check(operation.advance(1)==dialogue::Progress::Suspended,"Repeated advance acknowledged a child");
    if(runtime->service()==story::SceneService::Frame) {
      ++count.frames;
      if(before_frame)before_frame(count.frames);
      runtime->complete_frame({0x20,0x40});
    } else if(runtime->service()==story::SceneService::Publication) {
      ++count.publications;runtime->complete_publication();
    } else throw std::runtime_error("Transition fabricated or lost a real service");
    check(!f.world->runtime->failed(),"Actual child service poisoned the runtime");
  }
  throw std::runtime_error("Transition did not finish");
}
void finish(WorldRuntime::Operation &operation) {
  for(unsigned i=0;i<1000;++i)if(operation.advance(1)==dialogue::Progress::Finished)return;
  throw std::runtime_error("Parent completion stalled");
}
void sequence(eb::GameVersion version,bool suppressed,std::uint16_t giygas_phase=4) {
  Fixture f(version);auto &w=*f.world;
  f.giygas_phase=giygas_phase;
  auto input=resources();WorldTeleportResources catalog(input,version);
  WorldScreenTransition transition(catalog,f.state,f.owners());
  auto spec=w.actors.prepare_actor(1,0,w.spawn.prepared);
  spec.action.position[0]=0x12345678;spec.action.position[1]=0x4321abcd;
  const auto actor=w.actors.create_authored(spec,{0,1});check(actor.has_value(),"Actor fixture creation failed");
  w.actors.actor(*actor).tick_callback_enabled=false;
  w.clock.action_scripts_disabled=suppressed?7:0;
  dialogue::Conversation conversation(program(version),w.windows);conversation.start(dialogue::EntryId{0});
  auto parent=w.runtime->begin(conversation);check(parent->advance()==dialogue::Progress::Suspended,"Actual TELEPORT request missing");
  const auto request=*parent->dialogue_event();const auto old_frame=w.runtime->frame();const auto old_pixels=old_frame->atlas;
  const auto ticks=w.actors.ticks();const auto polls=w.clock.input_polls;const auto publications=w.clock.publications;
  auto out=transition.begin(1,true,*parent);
  check(w.actors.actor(*actor).scripts_and_physics_enabled&&f.state.x_fraction==1,"begin mutated before execution");
  const auto out_counts=drive(*out,f,[&](unsigned n){
    // The child owns Scene while WAIT is suspended. Read the parent's retained
    // conversation metadata rather than invoking its blocked service accessor.
    check(*conversation.event()==request,"Transition consumed its suspended parent");
    check(!w.actors.actor(*actor).scripts_and_physics_enabled&&!w.actors.actor(*actor).tick_callback_enabled,
          "Out transition failed to pause the actual actor list");
    check(f.swirl.update_in==200-(n>2?n-2:0),"Swirl ran at a warmup or wrong frame boundary");
    check(f.frames.pending(),"UPDATE_SCREEN failed to retain an actual publication request");
    check(w.clock.input_polls==polls+n-1,"Transition polled input outside WAIT");
    check(f.display.staged_scroll[0]==battle::PsiScroll{0xff20,0x120}&&
          f.display.staged_scroll[1]==f.display.staged_scroll[0],"World origin was not latched into both planes");
  });
  check(out_counts.frames==22&&out_counts.publications==1,"Out transition lost two warmup frames or final blank NMI");
  check(w.clock.input_polls==polls+22&&w.clock.publications==publications+23&&w.clock.new_frame_started==1,
        "Out timing or pending-byte consumption differs");
  check(w.clock.frame_counter==std::uint8_t(0xfc+23),"Real byte clock did not wrap");
  check(f.fade.state().brightness==0x80&&f.frames.hdma_enable==0&&f.frames.displayed_hdma_enable==0,
        "C08726 failed to establish actual blank display state");
  check(w.actors.actor(*actor).scripts_and_physics_enabled&&w.actors.actor(*actor).tick_callback_enabled,
        "Final actor enable restored stale pause flags");
  check(w.actors.ticks()==ticks+(suppressed?0:22)&&w.clock.action_scripts_disabled==(suppressed?7:0),
        "Transition changed action-script suppression or scheduled extra ticks");
  check(f.state==WorldScreenTransitionState{0,0,0,0,0xff20,0x120,0,0}&&
        f.navigation.ladder_stairs==CollisionCell{0,0},"Source transition retained geometry was not initialized");
  check(old_frame->atlas==old_pixels,"Transition mutated an immutable retained frame");
  check(f.swirl.update_in==(giygas_phase<4?0:180),"Pre-prayer window cleanup was skipped or ran while praying");
  // A completed Operation may remain alive while its owner starts its next call.
  const auto in_polls=w.clock.input_polls;const auto in_publications=w.clock.publications;
  auto in=transition.begin(1,false,*parent);
  const auto in_counts=drive(*in,f,[&](unsigned n){
    check(w.actors.actor(*actor).scripts_and_physics_enabled==(n<=2),"Secondary actor pause occurred at the wrong frame");
    check(f.swirl.update_in==(giygas_phase<4?0:180-n),"Secondary swirl phase did not run once before each WAIT");
  });
  check(in_counts.frames==20&&in_counts.publications==0&&w.clock.input_polls==in_polls+20&&
        w.clock.publications==in_publications+19,"Incoming WAIT failed to consume the existing pending frame");
  check(f.fade.state().brightness==9&&w.actors.actor(*actor).tick_callback_enabled,
        "Secondary fade or final actor enable differs");
  parent->respond_dialogue({});finish(*parent);check(!w.runtime->failed(),"Completed transition lost parent ownership");
}
void top_level_motion_and_white(eb::GameVersion version) {
  Fixture f(version);auto &w=*f.world;
  auto bytes=resources(0,0,0x1000);
  const unsigned sine=version==eb::GameVersion::US?0xb425:0xb404;
  // The packed record's direction7 maps to phases156/92.
  bytes[sine+156]=0x81;bytes[sine+92]=127;
  WorldTeleportResources content(bytes,version);
  const auto delta=content.motion(7,0x1000);
  check(delta==std::array<std::uint16_t,2>{0xf810,0x07f0},"Signed source slide products differ");
  auto owners=f.owners();owners.map_state=&w.load_state;
  WorldScreenTransition transition(content,f.state,owners);
  const auto camera=CameraPosition{w.actors.scene().camera_x,w.actors.scene().camera_y};
  auto operation=transition.begin(1,true);
  drive(*operation,f);
  const auto expected_x=std::uint32_t((std::uint32_t(camera.x)<<16)+std::uint32_t(std::int32_t(-2032)*256)*20);
  const auto expected_y=std::uint32_t((std::uint32_t(camera.y)<<16)+std::uint32_t(2032*256)*20);
  check(f.state.x==std::uint16_t(expected_x>>16)&&f.state.y==std::uint16_t(expected_y>>16)&&
        f.state.x_remainder==std::uint16_t(expected_x)&&f.state.y_remainder==std::uint16_t(expected_y),
        "Sliding transition lost signed fraction carry or moved during warmup");
  check(w.actors.scene().camera_x==f.state.x&&w.actors.scene().camera_y==f.state.y,
        "Slide did not update the actual map sampler camera");
  bytes=resources(100);WorldTeleportResources white_content(bytes,version);
  WorldScreenTransition white(white_content,f.state,owners);
  f.fade.write_brightness(15);
  auto out=white.begin(1,true);drive(*out,f);
  check(w.load_state.wipe_palettes&&f.fade.state().brightness==15,"White fade blanked or lost map wipe ownership");
  for(unsigned i=0;i<256;++i) {
    check(f.colors.staged_color(i)==0xffff,"White primary did not finish all raw palette words");
    w.load_state.map_palette_scratch[i]=std::uint16_t(0x8000|((i*73)&0x7fff));
  }
  auto in=white.begin(1,false);drive(*in,f);
  for(unsigned i=0;i<256;++i)check(f.colors.staged_color(i)==w.load_state.map_palette_scratch[i],
      "White secondary failed to restore exact target palette including bit15");
  check(w.runtime->scene().uses(w.actors)&&!w.runtime->failed(),"Top-level transition lost native world ownership");
}

void admission(eb::GameVersion version) {
  Fixture f(version);auto &w=*f.world;
  dialogue::Conversation conversation(program(version),w.windows);conversation.start(dialogue::EntryId{0});
  auto parent=w.runtime->begin(conversation);check(parent->advance()==dialogue::Progress::Suspended,"Actual admission parent missing");
  for(const auto parameters:{std::array<unsigned,3>{50,0,0},{0,1,0}}) {
    auto bytes=resources(parameters[0],parameters[1],parameters[2]);WorldTeleportResources data(bytes,version);
    WorldScreenTransition transition(data,f.state,f.owners());
    const auto old_state=f.state;const auto colors=f.colors.staged;const auto scratch=f.scratch.bytes;
    rejects([&]{transition.begin(1,true,*parent);});
    check(f.state==old_state&&f.colors.staged==colors&&f.scratch.bytes==scratch&&w.clock.input_polls==0,
          "Unsupported transition mutated its borrowed owners");
  }
  auto bytes=resources(49);WorldTeleportResources data(bytes,version);
  WorldScreenTransition transition(data,f.state,f.owners());
  transition.validate_begin(1,true,*parent);transition.validate_begin(1,false,*parent);
  f.giygas_phase=3;transition.validate_begin(1,true,*parent);f.giygas_phase=4;
  w.clock.interrupt_mask=0;rejects([&]{transition.begin(1,true,*parent);});w.clock.interrupt_mask=0x80;
  // Reference aggregate members cannot be rebound by assignment; verify a
  // foreign frame owner independently without disturbing the actual clock.
  battle::PsiDisplayState other_display;battle::FrameDisplay other_frames(other_display);
  auto wrong=f.owners();
  WorldScreenTransitionOwners foreign{wrong.runtime,wrong.actors,wrong.colors,wrong.scratch,wrong.display,
      other_frames,wrong.fade,wrong.clock,wrong.visual,wrong.effects,wrong.navigation,wrong.giygas_phase,nullptr};
  rejects([&]{WorldScreenTransition rejected(data,f.state,foreign);});
  parent->respond_dialogue({});finish(*parent);
}
}
int main(){try{for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
  top_level_motion_and_white(version);sequence(version,false);sequence(version,true);sequence(version,false,0);sequence(version,false,3);admission(version);
}std::cout<<"Native screen transitions: "<<checks<<" checks passed\n";return 0;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
