#pragma once

#include "eb/native/world_encounter.hpp"

namespace eb::native {
namespace battle { struct PaletteBankState; class FrameDisplay; struct PsiAnimationState; }
struct WorldEncounterClip {
  EncounterWindowMask rows;
  bool second_window{};
};
struct WorldOvalStep {
  std::uint8_t duration{};
  std::uint16_t center_x{}, center_y{}, width{}, height{};
  std::uint16_t center_dx{}, center_dy{}, velocity_x{}, velocity_y{};
  std::uint16_t acceleration_x{}, acceleration_y{};
};
struct WorldEncounterEffectData {
  const std::array<WorldEncounterClip, 126> clips;
  // The source profile has 256 samples followed by its named zero endpoint.
  const std::array<std::uint8_t, 257> ellipse_profile;
  // Five authored oval sequences, each including its duration-zero endpoint.
  // General swirl setup uses sequence0; prayer opening/closing choose1..4.
  const std::vector<WorldOvalStep> oval_steps;
  unsigned oval_sequence(unsigned sequence) const;
};
WorldEncounterEffectData
import_world_encounter_effect_data(std::span<const std::uint8_t>, GameVersion);

// Native integer row geometry. Radii are the source's high dimension bytes;
// centers are signed words. The two vertical traversal branches are distinct.
std::array<EncounterWindowInterval, 224> encounter_ellipse(
    const std::array<std::uint8_t, 257> &, std::uint16_t center_x,
    std::uint16_t center_y, std::uint8_t radius_x, std::uint8_t radius_y);

// Required real scene operations. Implementations restore both retained battle
// palettes and their published slots, then the selected scene layer policy.
// A callback acknowledgment with no corresponding state change is not a
// restoration. The borrowed implementation and its owners outlive the effect.
class WorldEncounterRestoration {
public:
  virtual ~WorldEncounterRestoration() = default;
  virtual bool uses(const ScenePalette &,
                    const WorldEncounterVisualState &) const noexcept = 0;
  virtual bool uses_battle_palette(const battle::PaletteBankState &,
                    const WorldEncounterVisualState &) const noexcept { return false; }
  virtual void restore_battle_palettes() = 0;
  virtual void restore_selected_layer_configuration() = 0;
};

class WorldEncounterEffects {
public:
  WorldEncounterEffects(const WorldSwirlData &, const WorldEncounterEffectData &,
                        WorldSwirlState &, ScenePalette &,
                        WorldEncounterVisualState &, WorldEncounterRestoration &);
  WorldEncounterEffects(const WorldSwirlData &, const WorldEncounterEffectData &,
                        WorldSwirlState &, battle::PaletteBankState &,
                        WorldEncounterVisualState &, WorldEncounterRestoration &);
  WorldEncounterEffects(const WorldEncounterEffects &) = delete;
  WorldEncounterEffects &operator=(const WorldEncounterEffects &) = delete;
  // One actual C4A7B0 invocation. It installs row content but does not publish
  // a frame, poll input, tick actors, or advance any other effect owner.
  void advance();
  // Optional actual battle display transport, shared by all frame phases.
  void bind_display(battle::FrameDisplay &);
  bool uses_display(const battle::FrameDisplay &display) const noexcept { return display_ == &display; }
  // C2EAAA stops future swirl/oval work and disables channel3/mask selection.
  // Retains installed rows, terminal intervals and all other HDMA channels.
  void clear_battle_window();
  // C2EA15/C2EA74 configure the actual retained oval owner; neither advances
  // animation, publishes a frame, or changes the live PSI animation counter.
  void begin_oval(std::uint16_t mode);
  void close_oval();
  bool animation_active(const battle::PsiAnimationState &) const;
  bool uses_swirl(const WorldSwirlState &state) const noexcept { return &swirl_ == &state; }
  // Read-only materialization for native frame capture. No display samples
  // may change animation or the retained second-window interval.
  // A logical NMI publication resets the second interval before transporting
  // rows; a mode4 clip may then overwrite it. Fade completion can preview a
  // disabled stream without mutating its installed content or enable owner.
  EncounterWindowMask windows(bool reset_second = false,
                              bool disable_rows = false) const;
  // Only after successful publication: retain the terminal displayed bounds
  // and commit the same disable flag used to prepare that picture.
  void complete_publication(bool reset_second = false, bool disable_rows = false);
  // Explicit display owner operation. Keeps content, terminal bounds and mask
  // selection; waits/configuration/termination cannot implicitly reenable it.
  void disable_row_streams();
  bool failed() const noexcept { return failed_; }
  bool uses_visual(const WorldEncounterVisualState &visual) const noexcept { return &visual_ == &visual; }
  bool uses(const WorldSwirlData &, const WorldSwirlState &, const ScenePalette &,
            const WorldEncounterVisualState &) const noexcept;
  bool uses(const WorldSwirlData &, const WorldSwirlState &, const battle::PaletteBankState &,
            const WorldEncounterVisualState &) const noexcept;
  bool uses(const WorldEncounterRestoration &) const noexcept;
  bool uses(const WorldEncounter &encounter) const noexcept {
    return colors_ && encounter.uses_effect_state(definitions_, swirl_, *colors_, visual_);
  }

private:
  void check() const;
  void install(const EncounterWindowMask &, bool second);
  void advance_oval();
  void advance_clip();
  const WorldSwirlData &definitions_;
  const WorldEncounterEffectData &data_;
  WorldSwirlState &swirl_;
  ScenePalette *colors_{};
  battle::PaletteBankState *battle_colors_{};
  bool restoration_matches() const noexcept;
  WorldEncounterVisualState &visual_;
  WorldEncounterRestoration &restoration_;
  battle::FrameDisplay *display_{};
  bool executing_{}, failed_{};
};
} // namespace eb::native
