#pragma once
#include "eb/native/cutscenes/ending/resources.hpp"
#include "eb/native/cutscenes/ending/render.hpp"
#include "eb/native/cutscenes/ending/photos.hpp"
#include "eb/native/cutscenes/ending/asset_work.hpp"
#include "eb/native/cutscenes/ending/credits_work.hpp"
#include "eb/native/cutscenes/ending/initializer_work.hpp"
#include "eb/native/world_startup.hpp"
namespace eb::native::cutscenes::ending {
struct State {
  // CONVERTED_PLAYER_NAME is retained across INITIALIZE_CREDITS_SCENE.
  std::array<std::uint8_t,24> converted_name{};
  std::uint64_t callbacks{},foreground_frames{},row_publications{},hold_frames{};
  PhotoPlaybackState photographs;
};
// PLAY_CREDITS' authored lifecycle, including INITIALIZE, IRQ text,
// real actor/input/publication frames, the2000-frame final hold, synchronous
// fade and actual controller/party/window restoration. Enabled photographs
// require their separately bound actual map/raw actor/object display owners.
// This owner does not call PLAY_CAST_SCENE or replace the ending story host.
class Scene {
public:
  class Operation final : public DisplaySource,public story::InterruptCallback {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    dialogue::Progress advance(unsigned work_budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool bicycle_dismount_pending() const noexcept;
    void respond_bicycle_dismount();
    bool complete() const noexcept {return done_;}
    std::uint16_t result() const;
    const CreditsTextScene *text() const noexcept {return text_.get();}
    unsigned phase() const noexcept {return phase_;}
    const PhotoPlaybackState &photographs() const noexcept {return owner_.state_.photographs;}
    std::shared_ptr<const DirectSceneFrame> capture_display(const DisplayView &) const override;
    void validate_publication() const override;
    void after_publication() override;
    bool changes_display_registers() const noexcept override {return true;}
  private:
    friend class Scene;
    Operation(Scene &,WorldRuntime::Operation *);
    void cleanup();
    void initialize();
    void initialize_text();
    bool initialize_assets();
    void wait();
    void row();
    Scene &owner_;
    WorldRuntime::Operation *parent_{};
    std::unique_ptr<Display::Operation> helper_;
    std::unique_ptr<WorldRuntime::Operation> runtime_;
    std::unique_ptr<battle::PsiDisplayState::TransferOperation> transfer_;
    std::unique_ptr<CreditsTextScene> text_;
    std::unique_ptr<CreditsWork> text_work_;
    std::unique_ptr<SourceCreditsCallbackWork> callback_work_;
    std::unique_ptr<Photographs::Operation> photographs_;
    std::unique_ptr<AssetWork::Operation> assets_;
    std::unique_ptr<InitializerWork::Operation> initializer_;
    std::unique_ptr<WorldPartyCreation::Operation> creation_;
    std::unique_ptr<story::PartyFormation::TailOperation> tail_;
    unsigned phase_{},hold_{},initialize_stage_{};
    bool done_{},executing_{},distinct_{},callback_{},creation_publication_{};
  };
  Scene(const Resources &,State &,Display &,WorldStartupOwners);
  void bind_actor_graphics(RawActorCreation &);
  void bind_photographs(PhotographDisplay &,const EnemyMovementData &,PeripheralState * = nullptr);
  // Retire actual compressed streams and forced-blank DMA through the bound
  // physical work owner. Other initialization/foreground costs remain separate.
  void bind_asset_work(AssetWork &,AssetCall initializer_call);
  // Actual palette-copy/clear and BG2-clear blocks, sharing the bound asset
  // clock and this display's borrowed palette/text owners. Exact DP low byte
  // and caller code bank are explicit source-call inputs.
  void bind_initializer_work(InitializerWork &,InitializerCall);
  // Bind before beginning; the installed runtime callback selects this body.
  void bind_source_callbacks(SourceCallbackDispatcher &);
  std::unique_ptr<Operation> begin(WorldRuntime::Operation *parent=nullptr);
  bool supports_current_photographs() const;
  bool uses(const story::Scene &) const noexcept;
  bool busy() const noexcept {return active_!=nullptr;}
  bool failed() const noexcept {return failed_;}
private:
  void require_source_work() const;
  const Resources &resources_;
  State &state_;
  Display &display_;
  WorldStartupOwners world_;
  RawActorCreation *actor_graphics_{};
  std::unique_ptr<Photographs> photographs_;
  AssetWork *asset_work_{};
  SourceCallbackDispatcher *source_callbacks_{};
  story::SourceWorkService *source_work_{};
  AssetCall asset_call_{};
  InitializerWork *initializer_work_{};
  InitializerCall initializer_call_{};
  Operation *active_{};
  bool failed_{};
};
}
