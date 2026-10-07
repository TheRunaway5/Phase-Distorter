#include "eb/native/world_fade_out.hpp"
#include <stdexcept>
namespace eb::native {
struct WorldFadeOut::Operation::State {
  WorldFadeOut &owner;
  std::uint8_t magnitude;
  std::uint16_t delay, remaining{};
  unsigned phase{};
  bool done{};
  std::unique_ptr<WorldRuntime::Operation> runtime{};
  WorldRuntime::Operation *parent{};
};
WorldFadeOut::WorldFadeOut(WorldRuntime &runtime, WorldDisplayFade &fade,
    battle::FrameDisplay &frames, story::TickState &clock, GameVersion version)
    :runtime_(runtime),fade_(fade),frames_(frames),clock_(clock),version_(version) {
  if(version!=GameVersion::US && version!=GameVersion::JP)
    throw std::invalid_argument("Synchronous fade region");
  const auto *publisher=runtime.scene().publication();
  if(!runtime.scene().uses(clock) || !publisher || publisher->display_fade()!=&fade ||
      !publisher->uses_frame_display(frames))
    throw std::logic_error("Synchronous fade requires its actual publication owners");
}
std::unique_ptr<WorldFadeOut::Operation> WorldFadeOut::begin(std::uint16_t magnitude,
    std::uint16_t delay) {
  runtime_.require_idle();
  if(failed_ || active_ || !(clock_.effective_interrupt_mask()&0x80))
    throw std::logic_error("Synchronous fade requires its healthy idle NMI owner");
  const auto *publisher=runtime_.scene().publication();
  if(!publisher || publisher->display_fade()!=&fade_ || !publisher->uses_frame_display(frames_))
    throw std::logic_error("Synchronous fade publication owners changed");
  if(!std::uint8_t(magnitude))
    throw std::invalid_argument("Zero-step synchronous fade has no finite completion");
  auto result=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::State>(
      Operation::State{*this,std::uint8_t(magnitude),delay})));
  active_=result.get();return result;
}
std::unique_ptr<WorldFadeOut::Operation> WorldFadeOut::begin_nested(std::uint16_t magnitude,
    std::uint16_t delay, WorldRuntime::Operation &parent) {
  runtime_.require_content_boundary(&parent);
  if(failed_ || active_ || !(clock_.effective_interrupt_mask()&0x80))
    throw std::logic_error("Nested synchronous fade requires its healthy NMI owner");
  const auto *publisher=runtime_.scene().publication();
  if(!publisher || publisher->display_fade()!=&fade_ || !publisher->uses_frame_display(frames_))
    throw std::logic_error("Nested synchronous fade publication owners changed");
  if(!std::uint8_t(magnitude)) throw std::invalid_argument("Zero-step synchronous fade has no finite completion");
  auto result=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::State>(
      Operation::State{*this,std::uint8_t(magnitude),delay})));
  result->state_->parent=&parent;
  active_=result.get();return result;
}
WorldFadeOut::Operation::Operation(std::unique_ptr<State> state):state_(std::move(state)) {}
WorldFadeOut::Operation::~Operation() {
  if(state_->owner.active_==this) {state_->owner.active_=nullptr;state_->owner.failed_=true;}
}
WorldRuntime::Operation *WorldFadeOut::Operation::runtime_operation() noexcept {return state_->runtime.get();}
bool WorldFadeOut::Operation::complete() const noexcept {return state_->done;}
dialogue::Progress WorldFadeOut::Operation::advance(unsigned budget) {
  auto &s=*state_;auto &o=s.owner;
  if(o.failed_)throw std::logic_error("Synchronous fade owner failed");
  if(s.done)return dialogue::Progress::Finished;
  try {while(budget--) {
    if(s.runtime) {
      const auto p=s.runtime->advance(1);
      if(p==dialogue::Progress::Suspended)return p;
      if(p!=dialogue::Progress::Finished)continue;
      s.runtime.reset();
    }
    switch(s.phase) {
    case 0:o.fade_.clear_parameters();s.phase=1;break;
    case 1: {
      o.frames_.mosaic=0;
      const auto old=o.fade_.state().brightness;
      const auto next=std::uint8_t(old-s.magnitude);
      if((o.version_==GameVersion::US && (old&0x80)) || (next&0x80)) {
        o.fade_.force_blank();o.frames_.hdma_enable=0;o.clock_.new_frame_started=0;
        s.runtime=s.parent?o.runtime_.begin_nested_publication(*s.parent):o.runtime_.begin_publication();s.phase=4;break;
      }
      o.fade_.write_brightness(std::uint8_t(next&0x8f));s.remaining=s.delay;s.phase=2;break;
    }
    case 2:o.frames_.request_retained_screen();s.runtime=s.parent?o.runtime_.begin_nested(story::TickKind::Frame,*s.parent):o.runtime_.begin(story::TickKind::Frame);s.phase=3;break;
    case 3:--s.remaining;s.phase=s.remaining?2:1;break;
    case 4:
      if(!o.clock_.new_frame_started) {s.runtime=s.parent?o.runtime_.begin_nested_publication(*s.parent):o.runtime_.begin_publication();break;}
      o.frames_.displayed_hdma_enable=0;s.done=true;o.active_=nullptr;
      return dialogue::Progress::Finished;
    default:throw std::logic_error("Invalid synchronous fade phase");
    }
  }return dialogue::Progress::BudgetExhausted;}
  catch(...) {o.failed_=true;throw;}
}
}
