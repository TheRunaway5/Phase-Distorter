#pragma once
#include "eb/native/cutscenes/ending/photograph.hpp"
#include "eb/native/world_enemy_movement.hpp"

namespace eb::native::cutscenes::ending {
enum class PhotoPlaybackStage {
  Try, FadeInPrepare, FadeIn, FadeInFinish, Slide, Threshold,
  FadeOutPrepare, FadeOut, BlackFrame, Next, Complete
};
struct PhotoPlaybackState {
  unsigned index{},attempted{},displayed{};
  PhotoPlaybackStage stage=PhotoPlaybackStage::Try;
  std::uint16_t interval{},threshold{};
  unsigned fade_in_frames{},fade_out_frames{},slide_frames{};
  std::uint64_t row_publications{},foreground_frames{};
  // The actual staged registers on return from the last SLIDE helper.
  std::array<std::uint16_t,4> last_slide_scroll{};
};
// SLIDE's wrapped 8.8 accumulation and signed DIVISION16 quotients. The
// imported C41FFF components supply the motion; no trigonometry is invented.
class PhotographSlide {
public:
  PhotographSlide(const Photograph &,const EnemyMovementData &,
      battle::PsiDisplayState &,PeripheralState * = nullptr);
  bool advance(battle::PsiDisplayState &);
  unsigned frames() const noexcept {return frames_;}
  std::uint16_t length() const noexcept {return length_;}
private:
  std::array<std::uint16_t,2> origin_{},increment_{},progress_{};
  std::uint16_t length_{};
  unsigned frames_{};
};
// PLAY_CREDITS' complete saved-photo foreground sequence. Its caller retains
// the installed text interrupt callback throughout real map/actor children,
// palette work, slides and threshold waits. Every authored C1004E is a real
// WorldFrame; queued text rows borrow the live composition until admission.
class Photographs {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    dialogue::Progress advance(unsigned work_budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool complete() const noexcept {return done_;}
    const PhotoPlaybackState &state() const noexcept {return state_;}
  private:
    friend class Photographs;
    Operation(Photographs &,CreditsTextScene &,WorldRuntime::Operation *);
    void row();
    void frame();
    void finish_frame();
    Photographs &owner_;
    CreditsTextScene &text_;
    WorldRuntime::Operation *parent_{};
    PhotoPlaybackState state_;
    std::unique_ptr<PhotographDisplay::Operation> photograph_;
    std::unique_ptr<WorldRuntime::Operation> runtime_;
    std::unique_ptr<battle::PsiDisplayState::TransferOperation> transfer_;
    std::optional<PhotographSlide> slide_;
    unsigned phase_{},fade_{};
    bool done_{},executing_{},row_pending_{};
  };
  Photographs(const Resources &,Display &,PhotographDisplay &,
      const EnemyMovementData &,PeripheralState * = nullptr);
  std::unique_ptr<Operation> begin(CreditsTextScene &,WorldRuntime::Operation *parent=nullptr);
  bool supports_current_photographs() const;
  bool busy() const noexcept {return active_!=nullptr;}
  bool failed() const noexcept {return failed_;}
private:
  const Resources &resources_;
  Display &display_;
  PhotographDisplay &photographs_;
  const EnemyMovementData &motion_;
  PeripheralState *peripherals_{};
  Operation *active_{};
  bool failed_{};
};
}
