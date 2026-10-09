#include "eb/native/cutscenes/sound_stone/scene.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::cutscenes::sound_stone {
namespace {
void require(bool ok,const char *message) { if(!ok) throw std::logic_error(message); }
}
Scene::Scene(const Resources &resources,State &state,Display &display,story::InputState &input)
    :resources_(resources),state_(state),display_(display),input_(input) {
  require(resources.version()==display.version()&&display.owners().runtime.scene().uses(input),
          "Sound Stone requires its actual regional display and input owners");
}
bool Scene::uses(const story::Scene &scene) const noexcept { return &display_.owners().runtime.scene()==&scene; }
std::unique_ptr<Scene::Operation> Scene::begin(bool cancel,WorldRuntime::Operation *parent) {
  require(!active_&&!failed_&&!display_.failed()&&!display_.busy(),"Sound Stone scene is failed or busy");
  display_.owners().runtime.require_content_boundary(parent);
  auto result=std::unique_ptr<Operation>(new Operation(*this,cancel,parent)); active_=result.get(); return result;
}
Scene::Operation::Operation(Scene &scene,bool cancel,WorldRuntime::Operation *parent)
    :owner_(scene),parent_(parent),cancel_enabled_(cancel) {}
Scene::Operation::~Operation() {
  if(distinct_) {
    try { owner_.display_.owners().presentation.end_distinct_scene(this); }
    catch(...) { owner_.failed_=true; }
  }
  if(owner_.active_==this) { owner_.active_=nullptr; owner_.failed_=true; }
}
WorldRuntime::Operation *Scene::Operation::runtime_operation() noexcept {
  return display_?display_->runtime_operation():runtime_.get();
}
std::uint16_t Scene::Operation::result() const {
  require(done_,"Sound Stone result requires complete map restoration"); return 0;
}
std::shared_ptr<const DirectSceneFrame> Scene::Operation::capture_display(const DisplayView &view) const {
  const auto &o=owner_.display_.owners();
  const auto objects=view.publishing_objects&&view.display_id>=1&&view.display_id<=2
      ?objects_[view.display_id-1]:published_objects_;
  return render(view,o.background.snapshot(),o.layout,objects?std::span<const Sprite>(*objects):std::span<const Sprite>{});
}
void Scene::Operation::complete_object_publication(std::uint8_t selected_buffer) const noexcept {
  if(selected_buffer>=1&&selected_buffer<=2)published_objects_=objects_[selected_buffer-1];
}
void Scene::Operation::draw() {
  auto &o=owner_.display_.owners();
  const unsigned buffer=o.frames.next_buffer_id();
  require(buffer==1||buffer==2,"Sound Stone lost its actual next OAM buffer");
  objects_[buffer-1]=std::make_shared<const std::vector<Sprite>>(playback_->draw()); o.frames.update_world_screen();
  // UPDATE_SCREEN latches the preceding scrolls. GENERATE then updates each
  // working record and palette in order, for the following selection.
  const bool defeated=o.frame_state.giygas_phase==0xffff;
  const auto changes=o.background.advance_backgrounds({unsigned(o.clock.frame_counter&1),defeated},&o.palette);
  const auto generated=o.background.snapshot(); const unsigned depth=generated.bitdepth;
  if(!defeated) {
    o.video.staged_scroll[depth==4?1:2]={generated.primary.horizontal_scroll,generated.primary.vertical_scroll};
    if(generated.secondary&&!generated.shared_artwork)
      o.video.staged_scroll[depth==4?0:3]={generated.secondary->horizontal_scroll,generated.secondary->vertical_scroll};
  }
  for(unsigned i=0;i<changes.size();++i) if(changes[i].distortion_installed) o.frames.install_background(i);
}
dialogue::Progress Scene::Operation::advance(unsigned budget) {
  require(!executing_,"Sound Stone advancement is recursive");
  if(done_) return dialogue::Progress::Finished;
  require(owner_.active_==this&&!owner_.failed_,"Sound Stone continuation lost its actual owner");
  executing_=true; auto &display=owner_.display_; auto &o=display.owners();
  try {
    while(budget--) {
      if(display_) {
        const auto progress=display_->advance(1);
        if(progress==dialogue::Progress::Suspended) { executing_=false; return progress; }
        if(progress!=dialogue::Progress::Finished) continue;
        display_.reset();
      }
      if(runtime_) {
        const auto progress=runtime_->advance(1);
        if(progress==dialogue::Progress::Suspended) { executing_=false; return progress; }
        if(progress!=dialogue::Progress::Finished) continue;
        runtime_.reset();
      }
      switch(phase_) {
      case 0:display_=display.blank(battle::DisplayBlankKind::Reset,parent_);phase_=1;break;
      case 1:
        o.audio.stop_music();display.load_enemy_battle_sprites();
        std::copy(owner_.resources_.graphics().begin(),owner_.resources_.graphics().end(),o.scratch.bytes.begin());
        display.transfer({battle::PsiTransferKind::Vram,0,0x2c00,0x2000,0});
        o.presentation.publish_scene_palette_range(128,owner_.resources_.palette(),24);
        // C47F87's palette0..31 copy and last upload intent8 occur before
        // LOAD_BATTLE_BG's real palette publication supersedes that intent.
        o.battle_frame.publish_window_palette(o.clock.flavor,o.clock.disabled_transitions!=0);
        o.background_loader.load({228,229,4});
        playback_=std::make_unique<Playback>(owner_.resources_,owner_.state_,o.windows.state().event_flags);
        display_=display.blank(battle::DisplayBlankKind::Retain,parent_);phase_=2;break;
      case 2:
        o.presentation.begin_distinct_scene(*this);distinct_=true;o.fade.begin_in(1,1);phase_=3;break;
      case 3:runtime_=display.begin_frame(parent_);phase_=4;break;
      case 4: {
        const auto step=playback_->sequence();
        if(step.finished) { phase_=6; break; }
        if(step.music) o.audio.change_music(*step.music,o.clock.disabled_transitions);
        if(step.effect) o.audio.driver_effect(*step.effect);
        draw();phase_=cancel_enabled_&&(owner_.input_.pressed[0]&0x80c0)?6:3;break;
      }
      case 6:o.fade.begin_out(1,1);phase_=7;break;
      case 7:
        if(o.fade.active()) { runtime_=display.begin_frame(parent_); break; }
        display_=display.blank(battle::DisplayBlankKind::Reset,parent_);phase_=8;break;
      case 8:
        display.configure_layer(1);o.presentation.end_distinct_scene(this);distinct_=false;
        display_=display.reload_map(parent_);phase_=9;break;
      case 9:o.fade.begin_in(1,1);phase_=99;break;
      case 99:done_=true;owner_.active_=nullptr;executing_=false;return dialogue::Progress::Finished;
      default:throw std::logic_error("Invalid Sound Stone continuation phase");
      }
    }
    executing_=false;return dialogue::Progress::BudgetExhausted;
  } catch(...) { executing_=false;owner_.failed_=true;throw; }
}
}
