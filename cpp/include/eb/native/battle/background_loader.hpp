#pragma once
#include "eb/native/battle/frame.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/world_layers.hpp"

namespace eb::native::battle {
// Actual retained BGMODE/BGxSC/BGxNBA mirrors. Four-bit LOAD deliberately
// inherits these bases; two-bit LOAD installs all four and zeros staged scroll.
struct BackgroundDisplayState {
  std::uint8_t mode{};
  std::array<std::uint8_t, 4> maps{};
  std::array<std::uint8_t, 2> graphics{};
  bool operator==(const BackgroundDisplayState &) const = default;
};
// Complete LOAD_BATTLE_BG in its ordinary startup forced-blank domain. Exact
// imported output extents overwrite shared scratch; fixed source copies retain
// the remaining bytes. Existing queue records remain pending for real NMI.
// The same stable background owner is replaced only after admission succeeds.
class BackgroundLoader {
  friend class Frame;
  friend class StartupGraphics;
public:
  BackgroundLoader(const BattleBackgroundScenes &, BattleBackgroundScene &,
      BackgroundDisplayState &, PaletteBankState &, PsiScratch &,
      PsiDisplayState &, FrameDisplay &, const WorldDisplayFade &,
      const story::TickState &, const FrameState &, WorldSwirlState &,
      WorldEncounterVisualState &, const WorldLayerConfigurations &,
      WorldLayerSelection &);
  void load(unsigned group);
  BattleBackgroundPair selection(unsigned group) const { return resources_.selection(group); }
  void load(BattleBackgroundPair, BattleArtworkPublication = BattleArtworkPublication::Ordinary);
  bool failed() const noexcept { return failed_; }
  bool uses(const BattleBackgroundScene &, const PaletteBankState &,
            const PsiScratch &, const PsiDisplayState &, const FrameDisplay &) const noexcept;
private:
  const BattleBackgroundScenes &resources_;
  BattleBackgroundScene &background_;
  BackgroundDisplayState &layout_;
  PaletteBankState &colors_;
  PsiScratch &scratch_;
  PsiDisplayState &display_;
  FrameDisplay &frames_;
  const WorldDisplayFade &fade_;
  const story::TickState &clock_;
  const FrameState &state_;
  WorldSwirlState &swirl_;
  WorldEncounterVisualState &visual_;
  const WorldLayerConfigurations &layers_;
  WorldLayerSelection &selection_;
  bool active_{}, failed_{};
};
// C08726 clears the HDMA mirror and (US only) fade step. C08744 preserves
// both. Each begins with a fresh pending byte and finishes only after a real
// NMI publication; neither helper polls or consumes input.
enum class DisplayBlankKind { Reset, Retain };
class DisplaySetup {
  friend class Frame;
public:
  // C08726/C08744's actual instruction-time continuation. The retained
  // publication pin is the same one used by the ordinary blank helper.
  class SourceOperation {
  public:
    ~SourceOperation();
    SourceOperation(const SourceOperation &) = delete;
    bool advance(unsigned work_budget = 4096);
    bool complete() const noexcept { return complete_; }
  private:
    friend class DisplaySetup;
    SourceOperation(DisplaySetup &, story::SourceWorkService &);
    DisplaySetup &owner_;
    story::SourceWorkService &work_;
    std::uint64_t source_receipt_{};
    unsigned phase_{};
    std::uint8_t observed_flag_{};
    bool complete_{}, executing_{};
  };
  DisplaySetup(GameVersion, WorldDisplayFade &, FrameDisplay &, story::TickState &,
               WorldEncounterVisualState &, const story::Scene &);
  void begin(DisplayBlankKind, story::Scene::Operation *parent = nullptr);
  std::unique_ptr<SourceOperation> begin_source(story::SourceWorkService &, DisplayBlankKind,
                                              story::Scene::Operation *parent = nullptr);
  void finish();
  bool pending() const noexcept { return pending_; }
  bool uses(const WorldDisplayFade&, const story::TickState&, const story::Scene&) const noexcept;
private:
  void admit(DisplayBlankKind, story::Scene::Operation *) const;
  void reset_rows();
  void finish_source(SourceOperation &);
  void finish_publication();
  GameVersion version_;
  WorldDisplayFade &fade_;
  FrameDisplay &frames_;
  story::TickState &clock_;
  WorldEncounterVisualState &visual_;
  const story::Scene &scene_;
  std::uint64_t receipt_{};
  SourceOperation *source_active_{};
  bool pending_{}, reset_{};
};
} // namespace eb::native::battle
