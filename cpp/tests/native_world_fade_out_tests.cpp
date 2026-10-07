#define main prior_runtime_main
#include "native_world_runtime_tests.cpp"
#undef main
#include "eb/native/world_fade_out.hpp"
namespace {
void synchronous_fade(eb::GameVersion version, unsigned brightness, unsigned magnitude, unsigned delay) {
  Fixture f(version);f.start();
  std::vector<std::uint8_t> bytes(0xb100);
  const unsigned at=version==eb::GameVersion::US?0xaff1:0xafd0;
  for(unsigned i=0;i<10;++i)bytes[at+i]=23;
  WorldLayerConfigurations configs(bytes,version);WorldLayerSelection selected;
  ScenePalette colors{};WorldEncounterVisualState visual;
  WorldScenePresentation publisher(colors,visual,configs,selected);
  WorldDisplayFade fade({std::uint8_t(brightness),2,3,99});
  battle::PsiDisplayState display;battle::FrameDisplay frames(display);
  frames.hdma_enable=frames.displayed_hdma_enable=0x64;frames.mosaic=0xab;
  publisher.bind_display_fade(fade);publisher.bind_frame_display(frames);
  f.runtime->bind_presentation(publisher);
  f.runtime->refresh_world_capture();
  WorldFadeOut helper(*f.runtime,fade,frames,f.clock,version);
  const auto random=f.random;const auto actors=f.actors.ticks();
  auto op=helper.begin(magnitude,delay);
  check(op->advance(0)==dialogue::Progress::BudgetExhausted && fade.state().step==2,
        "Zero-budget fade changed the live display");
  unsigned waits{},publications{};
  while(!op->complete()) {
    const auto p=op->advance(1);
    if(p!=dialogue::Progress::Suspended)continue;
    auto *child=op->runtime_operation();
    check(child && child->service(),"Fade lost its actual runtime child");
    const auto state=fade.state();const auto request=frames.display_request();
    check(op->advance(7)==dialogue::Progress::Suspended && fade.state()==state && frames.display_request()==request,
          "Suspended fade repeated a brightness write or display request");
    if(child->service()==story::SceneService::Frame) {++waits;child->complete_frame({0x80,0});}
    else {check(child->service()==story::SceneService::Publication,"Fade ran world or battle work");++publications;child->complete_publication();}
  }
  unsigned expected{},value=brightness;
  while(!(version==eb::GameVersion::US && (value&0x80))) {
    value=std::uint8_t(value-magnitude);if(value&0x80)break;value&=0x8f;++expected;
  }
  check(waits==expected*delay && publications==1 && f.clock.publications==waits+1 &&
        f.clock.input_polls==waits && f.clock.new_frame_started==1,
        "Synchronous fade changed actual WAIT versus fresh NMI counts");
  if(version==eb::GameVersion::JP && brightness==128 && magnitude==1 && delay==1)
    check(waits==16,"Japanese SET_INIDISP mask lost the exact sixteen WAITs from initial forced blank");
  check(fade.state()==WorldDisplayFadeState{0x80,0,0,99} && !frames.hdma_enable &&
        !frames.displayed_hdma_enable && !frames.display_request() && !frames.mosaic,
        "Synchronous fade lost source display/fade final state");
  check(f.random==random && f.actors.ticks()==actors,"Synchronous fade advanced actors or RNG");
  op.reset();f.runtime.reset();
}
}
int main(){try {
  for(auto version:{eb::GameVersion::US,eb::GameVersion::JP})
    for(unsigned brightness:{0u,1u,7u,15u,128u,143u,255u})
      // The source masks each successful write through SET_INIDISP. Large
      // wrapping decrements such as255 can therefore cycle forever; they are
      // not terminating fade fixtures. Authored encounter callers use1.
      for(unsigned magnitude:{1u,2u,15u,127u,128u})
        for(unsigned delay:{1u,2u})synchronous_fade(version,brightness,magnitude,delay);
  std::cout<<"PASS native synchronous fade: "<<checks<<" checks\n";
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
