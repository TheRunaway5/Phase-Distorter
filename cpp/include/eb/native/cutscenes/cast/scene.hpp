#pragma once
#include "eb/native/cutscenes/cast/text.hpp"
#include "eb/native/cutscenes/cast/render.hpp"
#include "eb/native/cutscenes/display.hpp"
#include "eb/native/world_startup.hpp"
namespace eb::native::cutscenes::cast {
// PLAY_CAST_SCENE's actual actor program and regional name continuation.
// DMA contention suspends the real actor frame; capture never advances it.
class Scene {
public:
  class Operation final : public DisplaySource,public story::ActorFrameService {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    dialogue::Progress advance(unsigned budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool bicycle_dismount_pending() const noexcept;
    void respond_bicycle_dismount();
    bool complete() const noexcept {return done_;}
    std::uint16_t result() const;
    unsigned phase() const noexcept {return phase_;}
    std::shared_ptr<const DirectSceneFrame> capture_display(const DisplayView &) const override;
    bool uses(const story::Scene &) const noexcept override;
    void apply(story::ActorFramePhase) override;
  private:
    friend class Scene;
    Operation(Scene &,WorldRuntime::Operation *);
    void cleanup_world();
    void initialize();
    bool command();
    void respond_command(std::uint16_t);
    Scene &owner_;
    WorldRuntime::Operation *parent_{};
    std::unique_ptr<Display::Operation> helper_;
    std::unique_ptr<WorldRuntime::Operation> runtime_,publication_;
    std::unique_ptr<battle::PsiDisplayState::TransferOperation> transfer_;
    std::unique_ptr<battle::Frame::Operation> battle_;
    std::vector<battle::PsiTransfer> copies_;
    std::size_t copy_{};
    std::unique_ptr<WorldPartyCreation::Operation> creation_;
    std::unique_ptr<RawActorCreation::Operation> cast_creation_;
    std::unique_ptr<story::PartyFormation::TailOperation> tail_;
    unsigned phase_{};
    bool done_{},executing_{},distinct_{},party_graphics_publication_{};
  };
  Scene(const Resources &,State &,Display &,WorldStartupOwners);
  void bind_source_work(story::SourceWorkService &);
  std::unique_ptr<Operation> begin(WorldRuntime::Operation *parent=nullptr);
  bool uses(const story::Scene &) const noexcept;
  bool busy() const noexcept {return active_!=nullptr;}
  bool failed() const noexcept {return failed_;}
private:
  const Resources &resources_;
  State &state_;
  Display &display_;
  WorldStartupOwners world_;
  Text text_;
  Operation *active_{};
  bool failed_{};
  story::SourceWorkService *source_work_{};
};
}
