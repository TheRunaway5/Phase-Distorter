// Reuse the real synthetic world owners; original code stays outside this test.
#define main retained_world_runtime_test_main
#include "native_world_runtime_tests.cpp"
#undef main
#include "eb/native/world_display_fade.hpp"
namespace {
void actor_dma_counter(eb::GameVersion version) {
  const auto actions=std::make_shared<ActionScriptData>(
      std::vector<std::uint8_t>{0x1e,0x99,0,0x1f,1,0x06,1,0x09},0,
      std::vector<std::uint32_t>{0});
  Fixture f(version,false,actions);f.start({},256);
  std::vector<std::uint8_t> content(0xb100);
  const auto base=version==eb::GameVersion::US?0xaff1u:0xafd0u;
  std::fill_n(content.begin()+base,10,23);
  WorldLayerConfigurations configurations(content,version);
  WorldLayerSelection selected;
  ScenePalette colors{};
  WorldEncounterVisualState visual;
  WorldScenePresentation presentation(colors,visual,configurations,selected);
  battle::PsiScratch scratch;
  battle::PsiDisplayState video;
  battle::PaletteBankState palette;
  battle::FrameDisplay objects(video);
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  std::array<std::uint16_t,256> backup{};
  presentation.bind_display_fade(fade);
  presentation.bind_frame_display(objects);
  presentation.bind_palette_transport(palette);
  presentation.bind_video_transport(video,scratch);
  f.runtime->bind_presentation(presentation);
  f.runtime->bind_map_palette_backup(backup,video);
  for(unsigned i=0;i<31;++i) {
    auto copy=video.begin_transfer({battle::PsiTransferKind::Vram,0,32,
        std::uint16_t(i*16),0},scratch,fade);
    check(copy->advance()&&copy->complete(),"Actual DMA counter fixture failed admission");
  }
  auto held=video.begin_transfer({battle::PsiTransferKind::Vram,0,32,1024,0},scratch,fade);
  check(!held->advance()&&held->needs_publication()&&video.pending_bytes()==1024&&
      video.pending().size()==31,"Full DMA ring did not retain the credited unpublished descriptor");
  const auto read=[&](std::uint16_t expected) {
    const auto id=f.actors.create(actor());
    f.actors.actor(id).appearance.select_four(0,0,0);
    const auto publications=f.clock.publications,polls=f.clock.input_polls;
    auto operation=f.runtime->begin(story::TickKind::WorldFrame);
    frame(*operation);
    check(f.actors.actor(id).action().variables[1]==expected&&
        f.clock.publications==publications&&f.clock.input_polls==polls,
        "Actor DMA read fabricated zero, summed descriptors or advanced a frame");
    check(operation->frame_requirement()==story::FrameRequirement::NmiPublication,
        "Actor DMA scalar read consumed its actual following WAIT");
    operation->complete_frame({0,0});finish(*operation);operation.reset();
    f.actors.erase(id);
  };
  read(1024);
  check(video.pending().empty()&&!video.pending_bytes()&&held->needs_publication(),
      "Actual NMI consumed an unpublished held descriptor or retained stale DMA credit");
  held->respond();
  check(held->advance()&&held->complete()&&video.pending().size()==1&&
      !video.pending_bytes(),"Resumed held descriptor invented new DMA byte credit");
  read(0);
  check(video.pending().empty()&&f.clock.publications==2&&f.clock.input_polls==2,
      "DMA read and its actual caller WAIT changed publication/input counts");
  f.runtime.reset();
  Fixture missing(version,false,actions);
  const auto id=missing.actors.create(actor());missing.start({},256);
  auto operation=missing.runtime->begin(story::TickKind::WorldFrame);
  rejects([&]{next(*operation);},"Unbound actor DMA counter silently returned zero");
  check(missing.actors.actor(id).action().variables[1]==0&&
      missing.clock.publications==0&&missing.clock.input_polls==0,
      "Rejected unbound counter mutated its actor or frame");
}
void cinematic_interrupt(eb::GameVersion version) {
  Fixture f(version); f.start({},256);
  struct Callback final : story::InterruptCallback {
    Fixture &fixture;
    std::uint64_t prior{};
    unsigned calls{};
    bool reject{};
    explicit Callback(Fixture &f):fixture(f){}
    void validate_publication() const override {
      if(reject)throw std::logic_error("Missing callback publication prerequisite");
    }
    void after_publication() override {
      check(fixture.clock.publications==prior+1 && fixture.runtime->published_frame(),
            "Cinematic callback preceded its actual immutable display publication");
      prior=fixture.clock.publications;++calls;
    }
  } callback(f);
  f.runtime->set_interrupt_callback(callback);
  check(f.runtime->uses_interrupt_callback(callback),"Cinematic callback did not replace the real owner");
  auto operation=f.runtime->begin_publication();
  check(next(*operation)==dialogue::Progress::Suspended &&
        operation->service()==story::SceneService::Publication,
        "Cinematic publication added an input wait");
  const auto input=f.input;
  for(unsigned query=0;query<3;++query) {
    check(next(*operation)==dialogue::Progress::Suspended && !callback.calls &&
          f.input==input,"Suspended cinematic work replayed callback or input");
  }
  operation->complete_publication();finish(*operation);operation.reset();
  check(callback.calls==1&&f.clock.publications==1&&f.clock.input_polls==0&&f.input==input,
        "Publication-only cinematic wait consumed input or lost interrupt work");
  f.runtime->interrupt_publication();
  check(callback.calls==2&&f.clock.publications==2&&f.clock.input_polls==0,
        "Physical peripheral publication omitted its cinematic callback");
  operation=f.runtime->begin(story::TickKind::Frame);frame(*operation);
  check(operation->frame_requirement()==story::FrameRequirement::InputOnly,
        "A real pending interrupt was lost before WAIT");
  operation->complete_frame({0x80,0});finish(*operation);operation.reset();
  check(callback.calls==2&&f.clock.input_polls==1&&f.input.held[0]==0x80,
        "Input-only WAIT replayed callback or failed to poll input");
  f.runtime->reset_interrupt_callback();
  f.runtime->interrupt_publication();
  check(callback.calls==2&&f.clock.publications==3&&!f.runtime->uses_interrupt_callback(callback),
        "DEFAULT_IRQ_CALLBACK retained cinematic work");
  callback.prior=f.clock.publications;
  f.runtime->set_interrupt_callback(callback);
  callback.reject=true;
  const auto clock=f.clock.publications;
  rejects([&]{f.runtime->interrupt_publication();},"Invalid interrupt callback published a frame");
  check(f.clock.publications==clock&&callback.calls==2,
        "Rejected callback consumed its publication before admission");
}
void callback_register_capture(eb::GameVersion version) {
  Fixture f(version); f.start({},256);
  struct Publication final : story::ScenePublication {
    unsigned register_value{}, transfers{}, commits{};
    std::shared_ptr<const eb::DirectSceneFrame> capture(const eb::DirectSceneFrame &source) const override {
      auto result=std::make_shared<eb::DirectSceneFrame>(source);
      result->scene_identity=register_value; return result;
    }
    std::shared_ptr<const eb::DirectSceneFrame> capture_next(const eb::DirectSceneFrame &source) override {
      ++transfers; return capture(source);
    }
    void complete_publication() override {++commits;}
  } publication;
  struct Callback final : story::InterruptCallback {
    Publication &publication;
    explicit Callback(Publication &p):publication(p){}
    void validate_publication() const override {}
    void after_publication() override {++publication.register_value;}
    bool changes_display_registers() const noexcept override {return true;}
  } callback(publication);
  f.runtime->coordinator_scene().bind_publication(publication);
  f.runtime->set_interrupt_callback(callback);
  f.runtime->interrupt_publication();
  const auto first=f.runtime->published_frame();
  check(first->scene_identity==1 && first->frame==1 && f.clock.publications==1 &&
        f.clock.input_polls==0 && publication.transfers==1 && publication.commits==1,
        "Direct callback register write missed same-NMI capture or repeated its transport");
  f.runtime->interrupt_publication();
  check(f.runtime->published_frame()->scene_identity==2 && first->scene_identity==1 &&
        first->frame==1 && f.clock.publications==2 && f.clock.input_polls==0 &&
        publication.transfers==2 && publication.commits==2,
        "Callback recapture mutated a prior immutable publication or advanced another frame");
  f.runtime->abandon_interrupt_callback(callback);
  check(!f.runtime->uses_interrupt_callback(callback),"Abandoned callback retains a dangling borrow");
  rejects([&]{f.runtime->interrupt_publication();},"Abandoned callback runtime accepted another frame");
}
}
int main() {
  try {for(const auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
      cinematic_interrupt(version);callback_register_capture(version);actor_dma_counter(version);
    }
    std::cout<<"PASS cinematic interrupt publication/input separation "<<checks<<" checks\n";return 0;
  } catch(const std::exception &error) {std::cerr<<error.what()<<'\n';return 1;}
}
