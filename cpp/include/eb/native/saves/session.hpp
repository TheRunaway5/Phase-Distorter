#pragma once

#include "eb/native/saves/archive.hpp"
#include <memory>
#include <optional>

namespace eb::native::saves {
struct ContinueResourceLayout {
  std::size_t hotspots, hp_meter_speeds, initial_stats;
};
ContinueResourceLayout continue_resource_layout(GameVersion);
struct Position {
  std::uint16_t x{}, y{};
  bool operator==(const Position &) const = default;
};
struct Hotspot {
  std::uint16_t mode{}, x1{}, y1{}, x2{}, y2{};
  std::uint32_t content_reference{};
  bool operator==(const Hotspot &) const = default;
};
struct TextTiming {
  std::uint16_t selected_speed{}, wait{};
  std::uint32_t hp_meter_speed{};
};
struct MapLoadAnchor {
  Position center{}, scroll{}, top_left_tiles{};
  std::uint16_t sector_x{}, sector_y{};
};
struct NewCharacterRequirements {
  std::uint16_t level{}, additional_experience{};
  std::array<std::uint8_t, 10> starting_items{};
};
struct NewGameRequirements {
  Position respawn{}, prologue_position{2112, 1768};
  std::uint16_t money{};
  std::array<NewCharacterRequirements, 4> characters{};
  // These are authored initialization inputs, not initialized characters.
  // RESET_CHAR_LEVEL_ONE/GAIN_EXP and their RNG/stat-growth owner must run.
};
struct BootstrapDialogue {
  // Imported authored reference keys, resolved by the native dialogue Program.
  // These are content locations, never executable service addresses.
  std::array<std::uint8_t, 4> pre_game_start{}, buzz_buzz{},
      new_game_prologue{};
};

// Imported content only. No generated defaults, source address dispatcher or
// storage emulation. Constructor owns the small tables and retains no assets.
class ContinueResources {
public:
  ContinueResources(std::span<const std::uint8_t> assets, GameVersion);
  GameVersion version() const noexcept { return version_; }
  static constexpr unsigned hotspot_count = 56;
  Hotspot hotspot(std::uint8_t id, std::uint8_t mode,
                  std::uint32_t content_reference) const;
  TextTiming text_timing(std::uint8_t source_speed) const;
  const NewGameRequirements &new_game_requirements() const noexcept {
    return new_game_;
  }
  const BootstrapDialogue &dialogue() const noexcept { return dialogue_; }

private:
  GameVersion version_;
  std::array<std::array<std::uint16_t, 4>, hotspot_count> hotspots_{};
  std::array<std::uint32_t, 3> meter_speeds_{};
  NewGameRequirements new_game_{};
  BootstrapDialogue dialogue_{};
};

// Native owners must complete these in order after consuming the restore
// values. A returned handoff is never a claim that the game is playable.
// CloseWindows and dialogue may yield real frames. No time elapses here.
enum class ContinueStep {
  CloseMenuWindows,
  RebuildTimedItemTransformations,
  ConfigureTextTiming,
  PreGameStartDialogue,
  ResetWorldActorsAndGraphics,
  InitializeWorldControl,
  RebuildPartyActors,
  ResetScenePalettes,
  PrepareMapAndActivateActors,
  BuzzBuzzDialogue,
  RestoreTimedDeliveryActors,
  LoadWindowGraphics,
  PositionAndProjectParty,
  FirstActorTick,
  BeginFadeIn,
  PublishFirstFrame
};
std::span<const ContinueStep> continue_steps() noexcept;
struct ContinueHandoff {
  Position respawn{};
  MapLoadAnchor map{};
  std::uint16_t leader_direction{};
  // RELOAD_HOTSPOTS deliberately leaves an existing entry untouched when
  // its saved mode is zero. Null means no update, not an invented clear.
  std::array<std::optional<Hotspot>, 2> hotspot_updates{};
  TextTiming text{};
  // Exact source queue reset, before hotspot/respawn restoration.
  std::uint16_t next_interaction{}, current_interaction{},
      current_interaction_type = 0xffff;
  // C03A24 visits saved membership in order and stops at the first zero.
  // These authored IDs require the real party creation owner; no actor IDs
  // or graphics are fabricated from the save's obsolete runtime slots.
  std::array<std::uint8_t, 6> party_members{};
  unsigned party_member_count{};
};
ContinueHandoff prepare_continue(const PersistedState &,
                                 const ContinueResources &);

// Snapshot bridges, not duplicate live ownership. Import into the one existing
// party owner at an explicit lifecycle boundary. Capture returns a new save
// value while preserving all fields that this party owner does not own.
void restore_party(const PersistedState &, party::State &);
PersistedState capture_party(const party::State &, PersistedState base);

struct ContinueSnapshot {
  PersistedState state;
  ContinueHandoff handoff;
};
// Owns only persistence bytes and the selected slot. No live party/flags/world
// mirror is retained. The caller receives the restore snapshot by value and
// supplies an explicit current snapshot when saving; no filesystem I/O occurs.
class Session {
public:
  Session(SaveArchive, std::shared_ptr<const ContinueResources>);
  const SaveArchive &archive() const noexcept { return archive_; }
  std::optional<unsigned> selected_slot() const noexcept { return selected_; }
  IntegrityReport repair_integrity() noexcept;
  ContinueSnapshot continue_slot(unsigned slot);
  void save_current(const PersistedState &, std::uint32_t elapsed_timer);
  // Editing the selected destination clears selection: an old live snapshot
  // cannot accidentally overwrite a copied or erased file afterward.
  void copy_slot(unsigned destination, unsigned source);
  void erase_slot(unsigned slot);
  void clear_selection() noexcept { selected_.reset(); }

private:
  SaveArchive archive_;
  std::shared_ptr<const ContinueResources> resources_;
  std::optional<unsigned> selected_;
};
} // namespace eb::native::saves
