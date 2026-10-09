#include "eb/native/cutscenes/ending/photos.hpp"
#include "eb/native/cutscenes/ending/palette.hpp"
#include <algorithm>
#include <bit>
#include <stdexcept>

namespace eb::native::cutscenes::ending {
namespace {
void require(bool ok,const char *message) {if(!ok)throw std::logic_error(message);}
std::uint16_t quotient(std::uint16_t value) {
  return std::uint16_t(std::bit_cast<std::int16_t>(value)/256);
}
}
PhotographSlide::PhotographSlide(const Photograph &photo,const EnemyMovementData &motion,
    battle::PsiDisplayState &video,PeripheralState *peripherals)
    :origin_{video.staged_scroll[0].x,video.staged_scroll[0].y},
      increment_(motion.components(std::uint16_t(unsigned(photo.slide_direction)*1024),256,peripherals)),
      length_(quotient(std::uint16_t(unsigned(photo.slide_distance)<<8))) {}
bool PhotographSlide::advance(battle::PsiDisplayState &video) {
  if(frames_==length_)return false;
  for(unsigned axis=0;axis<2;++axis)progress_[axis]=std::uint16_t(unsigned(progress_[axis])+increment_[axis]);
  const auto x=quotient(progress_[0]),y=quotient(progress_[1]);
  video.staged_scroll[0]={std::uint16_t(unsigned(origin_[0])+x),std::uint16_t(unsigned(origin_[1])+y)};
  video.staged_scroll[1]={x,y};++frames_;return true;
}
Photographs::Photographs(const Resources &resources,Display &display,PhotographDisplay &photographs,
    const EnemyMovementData &motion,PeripheralState *peripherals)
    :resources_(resources),display_(display),photographs_(photographs),motion_(motion),peripherals_(peripherals) {
  require(resources.version()==display.version()&&motion.version()==resources.version()&&
      photographs.uses(resources,display,display.owners().actors,display.owners().runtime),
      "Credits photo playback requires its actual regional display and photograph owners");
}
bool Photographs::supports_current_photographs() const {
  return photographs_.supports_current_photographs();
}
std::unique_ptr<Photographs::Operation> Photographs::begin(CreditsTextScene &text,WorldRuntime::Operation *parent) {
  require(!active_&&!failed_&&!photographs_.busy()&&!photographs_.failed(),"Credits photo playback is failed or busy");
  display_.owners().runtime.require_content_boundary(parent);
  require(display_.owners().clock.disabled_transitions&&supports_current_photographs(),
      "Credits photo playback requires its actual admitted credits caller");
  auto operation=std::unique_ptr<Operation>(new Operation(*this,text,parent));active_=operation.get();return operation;
}
Photographs::Operation::Operation(Photographs &owner,CreditsTextScene &text,WorldRuntime::Operation *parent)
    :owner_(owner),text_(text),parent_(parent) {
  const unsigned count=count_photographs(owner.resources_,owner.display_.owners().windows.state().event_flags);
  state_.interval=std::uint16_t(owner.resources_.credits()->scroll_length()/(count?count:1));
  state_.threshold=state_.interval;
}
Photographs::Operation::~Operation() {
  if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}
}
WorldRuntime::Operation *Photographs::Operation::runtime_operation() noexcept {
  return photograph_?photograph_->runtime_operation():runtime_.get();
}
void Photographs::Operation::row() {
  const auto pending=text_.next_publication();
  if(!pending)return;
  auto &display=owner_.display_;auto &o=display.owners();const auto p=*pending;
  const auto source=p.clear?owner_.resources_.wipe_source():std::span<const std::uint8_t>(display.state().text_tiles);
  transfer_=o.video.begin_transfer({battle::PsiTransferKind::Vram,std::uint16_t(p.clear?0:p.source_row*64),
      std::uint16_t(p.count*2),std::uint16_t(0x6c00+p.destination_row*32+p.column),std::uint8_t(p.clear?3:0),
      source,p.clear?owner_.resources_.wipe_identity():display.version()==GameVersion::JP?0x7e8176u:0x7e7dfeu},o.scratch,o.fade);
}
void Photographs::Operation::frame() {
  auto &runtime=owner_.display_.owners().runtime;
  runtime_=parent_?runtime.begin_nested(story::TickKind::WorldFrame,*parent_):runtime.begin(story::TickKind::WorldFrame);
  ++state_.foreground_frames;
}
void Photographs::Operation::finish_frame() {
  switch(phase_) {
  case 3:++fade_;++state_.fade_in_frames;phase_=2;break;
  case 5:++state_.slide_frames;phase_=4;break;
  case 7:phase_=6;break;
  case 10:++fade_;++state_.fade_out_frames;phase_=9;break;
  case 12:phase_=13;break;
  default:throw std::logic_error("Credits photo frame returned to an invalid source phase");
  }
}
dialogue::Progress Photographs::Operation::advance(unsigned budget) {
  require(!executing_&&!owner_.failed_,"Credits photo playback is failed or reentrant");
  if(done_)return dialogue::Progress::Finished;
  executing_=true;
  try {
    auto &display=owner_.display_;auto &o=display.owners();
    while(budget--) {
      if(photograph_) {
        const auto p=photograph_->advance(1);
        if(p==dialogue::Progress::Suspended){executing_=false;return p;}
        if(p!=dialogue::Progress::Finished)continue;
        const auto rendered=photograph_->result();photograph_.reset();
        if(rendered){++state_.displayed;phase_=1;}else phase_=14;
      }
      if(runtime_) {
        const auto p=runtime_->advance(1);
        if(p==dialogue::Progress::Suspended){executing_=false;return p;}
        if(p!=dialogue::Progress::Finished)continue;
        runtime_.reset();
        if(transfer_&&transfer_->needs_publication())transfer_->respond();
        else finish_frame();
      }
      if(transfer_) {
        if(!transfer_->advance()){runtime_=display.begin_publication(parent_);continue;}
        transfer_.reset();require(text_.publish_next_row(),"Credits photo row disappeared during actual DMA admission");
        ++state_.row_publications;
      }
      if(row_pending_) {row_pending_=false;frame();continue;}
      o.runtime.require_content_boundary(parent_);
      switch(phase_) {
      case 0:
        state_.stage=PhotoPlaybackStage::Try;
        if(state_.index==32){state_.stage=PhotoPlaybackStage::Complete;done_=true;owner_.active_=nullptr;
          executing_=false;return dialogue::Progress::Finished;}
        photograph_=owner_.photographs_.begin(state_.index,parent_);++state_.attempted;break;
      case 1:
        state_.stage=PhotoPlaybackStage::FadeInPrepare;
        prepare_photograph_palette(o.palette,o.scratch,64,0xffff);fade_=0;phase_=2;break;
      case 2:
        state_.stage=PhotoPlaybackStage::FadeIn;
        if(fade_==64){phase_=15;break;}
        advance_photograph_palette(o.palette,o.scratch);row();row_pending_=true;phase_=3;break;
      case 3:case 5:case 7:case 10:case 12:
        throw std::logic_error("Credits photo foreground child vanished before its source return");
      case 15:
        state_.stage=PhotoPlaybackStage::FadeInFinish;
        finish_photograph_palette(o.palette,o.scratch);
        slide_.emplace(owner_.resources_.photographs()[state_.index],owner_.motion_,o.video,owner_.peripherals_);
        phase_=4;break;
      case 4:
        state_.stage=PhotoPlaybackStage::Slide;
        if(!slide_->advance(o.video)) {
          state_.last_slide_scroll={o.video.staged_scroll[0].x,o.video.staged_scroll[0].y,
              o.video.staged_scroll[1].x,o.video.staged_scroll[1].y};
          slide_.reset();phase_=6;break;
        }
        row();row_pending_=true;phase_=5;break;
      case 6:
        state_.stage=PhotoPlaybackStage::Threshold;
        if(std::bit_cast<std::int16_t>(state_.threshold)>std::bit_cast<std::int16_t>(o.video.staged_scroll[2].y)) {
          row();row_pending_=true;phase_=7;
        }else phase_=8;
        break;
      case 8:
        state_.stage=PhotoPlaybackStage::FadeOutPrepare;
        std::fill_n(o.scratch.bytes.begin()+32,480,0);
        prepare_photograph_palette(o.palette,o.scratch,64,0xffff);fade_=0;phase_=9;break;
      case 9:
        state_.stage=PhotoPlaybackStage::FadeOut;
        if(fade_==64){phase_=11;break;}
        advance_photograph_palette(o.palette,o.scratch);row();row_pending_=true;phase_=10;break;
      case 11:
        state_.stage=PhotoPlaybackStage::BlackFrame;
        for(unsigned i=16;i<256;++i)o.palette.staged_color(i)=0;
        o.palette.upload_mode=24;row();row_pending_=true;phase_=12;break;
      case 13:state_.threshold=std::uint16_t(unsigned(state_.threshold)+state_.interval);phase_=14;break;
      case 14:state_.stage=PhotoPlaybackStage::Next;++state_.index;phase_=0;break;
      default:throw std::logic_error("Invalid credits photograph source continuation phase");
      }
    }
    executing_=false;return dialogue::Progress::BudgetExhausted;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
