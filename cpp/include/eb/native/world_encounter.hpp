#pragma once

#include "eb/game_version.hpp"
#include "eb/native/palette_transition.hpp"
#include "eb/native/world_control.hpp"
#include <functional>
#include <span>
#include <optional>
#include <vector>

namespace eb::native {
enum class WorldBattleInitiative { Normal, PartyFirst, EnemiesFirst };
struct WorldEncounterGroup {
  std::uint16_t enemy{}, count{};
  bool operator==(const WorldEncounterGroup &) const = default;
};
struct WorldEncounterState {
  WorldBattleInitiative initiative{};
  std::uint16_t group{};
  // Actual contact-selected live identities, not source slots or a fresh collision query.
  std::optional<ActorId> touched;
  // Authored targets retain source role coordinates through actor retirement;
  // host-only targets preserve strict native identity.
  std::optional<std::variant<AuthoredRoleRef, ActorId>> pathfinding_target;
  std::array<WorldEncounterGroup, 4> remaining{};
  // Its size is the authoritative collected roster count.
  std::vector<std::uint16_t> roster;
};
struct WorldSwirlDefinition {
  std::uint8_t interval{}, first_frame{}, frame_count{};
};
struct WorldSwirlData {
  std::array<WorldSwirlDefinition, 7> definitions{};
};
WorldSwirlData import_world_swirl_data(std::span<const std::uint8_t>);

struct EncounterWindowInterval {
  std::uint8_t left{}, right{};
  bool operator==(const EncounterWindowInterval &) const = default;
};
using EncounterWindowRow = std::array<EncounterWindowInterval, 2>;
using EncounterWindowMask = std::array<EncounterWindowRow, 224>;
struct WorldOvalState {
  // Cursor within the immutable step sequence; all arithmetic words retain
  // their authored 16-bit wrapping, including the 8.8 dimensions.
  unsigned next_step{};
  std::uint16_t center_x{}, center_y{}, width{}, height{};
  std::uint16_t center_dx{}, center_dy{}, velocity_x{}, velocity_y{};
  std::uint16_t acceleration_x{}, acceleration_y{};
  bool operator==(const WorldOvalState &) const = default;
};

// Native authored animation state. Frame IDs address imported clip content;
// they are never hardware channel numbers, memory offsets or function pointers.
struct WorldSwirlState {
  std::uint8_t update_in{}, interval{}, frames_left{}, frame{};
  bool invert{}, reverse{};
  // BG1..4, actors and color math, respectively. This is the authored mask's
  // semantic layer selection; it does not address any register.
  std::array<bool, 6> masked_layers{};
  std::uint8_t padding{};
  bool restore_after{}, oval{};
  std::uint8_t next{}, repeat_speed{}, repeats_until_speedup{};
  // Actual alternating clip HDMA channel offset (channels3/4). Oval leaves it.
  std::uint8_t hdma_channel_offset{};
  WorldOvalState oval_state;
  bool operator==(const WorldSwirlState &) const = default;
};
enum class ColorWindowPolicy { Never, Outside, Inside, Always };
struct WorldEncounterVisualState {
  // Palette edits await consumption by the native scene compositor.
  bool palette_dirty{};
  std::array<bool, 5> visible_layers{}; // BG1..4 and actors.
  std::array<bool, 5> subscreen_layers{};
  bool use_subscreen{};
  ColorWindowPolicy clip_colors = ColorWindowPolicy::Never;
  ColorWindowPolicy prevent_math = ColorWindowPolicy::Never;
  PaletteColor fixed_color{};
  bool subtract{}, half_intensity{};
  std::array<bool, 6> color_math_layers{};
  // Inclusive bounds of the two window regions. Setup resets each interval to
  // [255, 0], an empty window, before the next animation update.
  std::array<std::uint8_t, 2> window_left{};
  std::array<std::uint8_t, 2> window_right{};
  // Installed row content. A first-window-only clip keeps the live second
  // interval until an actual frame publication, not merely another advance.
  std::optional<EncounterWindowMask> window_pattern;
  bool writes_second_window{};
  // Installed content survives disabling the display row stream (e.g. fade
  // to black); only a subsequent real clip/oval installation reenables it.
  bool window_rows_enabled{};
  std::array<bool, 6> window_layers{};
  bool window_invert{};
  std::uint64_t window_revision{};
  bool operator==(const WorldEncounterVisualState &) const = default;
};
// Shared complete C4A67E setup. It changes only these actual authored owners;
// no palette, input, clock, audio or animation frame is advanced.
void configure_world_swirl(const WorldSwirlData&, WorldSwirlState&,
                           WorldEncounterVisualState&, unsigned id,
                           std::uint16_t options, std::uint8_t padding = 0);
struct WorldEncounterMusicChange {
  std::uint16_t track{};
  bool operator==(const WorldEncounterMusicChange &) const = default;
};
using WorldEncounterMusic =
    std::function<void(const WorldEncounterMusicChange &)>;

// The complete battle-swirl initialization and general authored swirl setup.
// Borrows scene colors and encounter/effect state; does not publish a frame,
// advance animation, tick actors, or implement audio. The music callback must
// finish the actual existing adapter operation before returning. Encounter
// candidate selection, movement and battle entry are separate continuations.
class WorldEncounter {
public:
  WorldEncounter(const WorldSwirlData &, const WorldEncounterState &,
                 WorldSwirlState &, ScenePalette &, const PaletteColor &backup,
                 WorldEncounterVisualState &, WorldEncounterMusic);
  WorldEncounter(const WorldEncounter &) = delete;
  WorldEncounter &operator=(const WorldEncounter &) = delete;
  void begin_swirl();
  void configure_swirl(unsigned id, std::uint16_t options,
                       std::uint8_t padding = 0);
  bool swirl_active() const noexcept;
  bool failed() const noexcept { return failed_; }
  bool uses(const WorldEncounterState &state) const noexcept {
    return &state == &encounter_;
  }
  bool uses(const WorldEncounterState &state,
            const ScenePalette &colors) const noexcept {
    return uses(state) && &colors == &colors_;
  }
  void palette_changed();
  bool uses_effect_state(const WorldSwirlData &, const WorldSwirlState &,
                        const ScenePalette &, const WorldEncounterVisualState &) const noexcept;
  bool uses(const WorldSwirlData &, const WorldEncounterState &,
            const WorldSwirlState &, const ScenePalette &, const PaletteColor &,
            const WorldEncounterVisualState &) const noexcept;

private:
  void idle() const;
  void configure(unsigned, std::uint16_t, std::uint8_t);
  const WorldSwirlData &data_;
  const WorldEncounterState &encounter_;
  WorldSwirlState &swirl_;
  ScenePalette &colors_;
  const PaletteColor &backup_;
  WorldEncounterVisualState &visual_;
  WorldEncounterMusic music_;
  bool executing_{}, failed_{};
};
} // namespace eb::native
