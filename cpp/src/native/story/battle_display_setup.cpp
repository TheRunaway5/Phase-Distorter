#include "eb/native/battle/background_loader.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/story/source_work.hpp"
#include <stdexcept>

namespace eb::native::battle {
DisplaySetup::DisplaySetup(GameVersion version, WorldDisplayFade &fade,
                          FrameDisplay &frames, story::TickState &clock,
                          WorldEncounterVisualState &visual,
                          const story::Scene &scene)
    : version_(version), fade_(fade), frames_(frames), clock_(clock),
      visual_(visual), scene_(scene) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Display setup region");
}

bool DisplaySetup::uses(const WorldDisplayFade& fade, const story::TickState& clock,
    const story::Scene& scene) const noexcept {
  return &fade == &fade_ && &clock == &clock_ && &scene == &scene_;
}
void DisplaySetup::admit(DisplayBlankKind kind, story::Scene::Operation *parent) const {
  if (pending_)
    throw std::logic_error("Display setup already awaits publication");
  if (kind != DisplayBlankKind::Reset && kind != DisplayBlankKind::Retain)
    throw std::invalid_argument("Display setup blank kind");
  scene_.require_content_boundary(parent);
  if (!scene_.uses(clock_))
    throw std::logic_error("Display setup requires its actual Scene clock");
  const auto *publication = scene_.publication();
  if (!publication || publication->display_fade() != &fade_ ||
      !publication->uses_frame_display(frames_) ||
      !publication->uses_visual(visual_))
    throw std::logic_error("Display setup requires its actual fade, display and visual publisher");
  if (!(clock_.effective_interrupt_mask() & 0x80))
    throw std::logic_error("Blank helper requires its native NMI owner");
}
void DisplaySetup::reset_rows() {
  frames_.hdma_enable = 0;
  if (visual_.window_rows_enabled) {
    visual_.window_rows_enabled = false;
    ++visual_.window_revision;
  }
}
void DisplaySetup::begin(DisplayBlankKind kind, story::Scene::Operation *parent) {
  admit(kind,parent);
  reset_ = kind == DisplayBlankKind::Reset;
  fade_.force_blank(reset_ && version_ == GameVersion::US);
  if (reset_) reset_rows();
  clock_.new_frame_started = 0;
  receipt_ = clock_.publications;
  pending_ = true;
}

std::unique_ptr<DisplaySetup::SourceOperation> DisplaySetup::begin_source(
    story::SourceWorkService &work,DisplayBlankKind kind,story::Scene::Operation *parent) {
  admit(kind,parent);
  if(!scene_.uses_source_work(work)||work.failed())
    throw std::logic_error("Blank source work requires its actual healthy Scene owner");
  auto result=std::unique_ptr<SourceOperation>(new SourceOperation(*this,work));
  reset_=kind==DisplayBlankKind::Reset;receipt_=clock_.publications;pending_=true;source_active_=result.get();
  return result;
}
DisplaySetup::SourceOperation::SourceOperation(DisplaySetup &owner,story::SourceWorkService &work)
    :owner_(owner),work_(work),source_receipt_(work.completed_source_interrupts()) {}
DisplaySetup::SourceOperation::~SourceOperation() {
  // An incomplete helper keeps its existing publication pin. A later begin
  // cannot pretend this source call returned successfully.
}
bool DisplaySetup::SourceOperation::advance(unsigned budget) {
  if(executing_||!owner_.scene_.uses_source_work(work_)||work_.failed())
    throw std::logic_error("Blank source work is failed, absent or recursive");
  if(complete_)return true;
  executing_=true;
  const auto retire=[&](story::SourceWorkCost cost,const std::function<void()> &effect={}) {
    work_.retire_source_work(cost,effect);
  };
  try {
    while(budget--)switch(phase_) {
    case 0:retire({8,4,3,0});phase_=1;break; // actual upper-bank JSL
    case 1:retire({3,2,0,0});phase_=2;break; // SEP M8
    case 2:retire({2,2,0,0});phase_=3;break; // LDA80
    case 3:retire({4,3,1,0},[&]{owner_.fade_.force_blank();});
      phase_=owner_.reset_?4:6;break; // STA INIDISP_MIRROR
    case 4:retire({4,3,1,0},[&]{owner_.reset_rows();});
      phase_=owner_.version_==GameVersion::US?5:6;break; // STZ HDMAEN_MIRROR
    case 5:retire({4,3,1,0},[&]{owner_.fade_.force_blank(true);});phase_=6;break;
    case 6:retire({4,3,1,0},[&]{owner_.clock_.new_frame_started=0;});phase_=7;break;
    case 7:retire({4,3,1,0},[&]{observed_flag_=owner_.clock_.new_frame_started;});phase_=8;break;
    case 8:retire({observed_flag_?2u:3u,2,0,0});
      phase_=observed_flag_?(owner_.reset_?9:11):7;break;
    case 9:retire({2,2,0,0});phase_=10;break; // LDA0
    case 10:retire({5,4,0,0},[&]{owner_.frames_.displayed_hdma_enable=0;});phase_=11;break;
    case 11:retire({3,2,0,0});phase_=12;break; // REP M/X16
    case 12:retire({6,1,3,0});phase_=13;break; // RTL
    case 13:
      if(work_.completed_source_interrupts()<=source_receipt_)
        throw std::logic_error("Blank source call lacks a fresh completed timed NMI");
      owner_.finish_source(*this);complete_=true;executing_=false;return true;
    default:throw std::logic_error("Invalid blank source continuation");
    }
  }catch(...){executing_=false;throw;}
  executing_=false;return complete_;
}

void DisplaySetup::finish() {
  if(source_active_)throw std::logic_error("Timed blank must finish through its actual source operation");
  finish_publication();
}
void DisplaySetup::finish_source(SourceOperation &operation) {
  if(source_active_!=&operation)throw std::logic_error("Timed blank lost its actual source operation");
  finish_publication();source_active_=nullptr;
}
void DisplaySetup::finish_publication() {
  if (!pending_ || clock_.publications == receipt_ || !clock_.new_frame_started)
    throw std::logic_error("Blank helper has no completed real NMI publication");
  if (reset_)
    frames_.displayed_hdma_enable = 0;
  pending_ = false;
}
} // namespace eb::native::battle
