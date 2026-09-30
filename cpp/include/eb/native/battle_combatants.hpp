#pragma once

#include "eb/direct_scene.hpp"
#include "eb/game_version.hpp"
#include "eb/native/palette_transition.hpp"
#include <array>
#include <optional>
#include <span>

namespace eb::native {
namespace battle {
struct PaletteBankState;
}
using BattleCombatantPalette = std::array<PaletteColor, 16>;
struct BattleCombatantArtwork {
  unsigned width{}, height{};
  int left{}, top{}; // Authored anchor offsets, before final Y registration.
  std::vector<std::uint8_t> indices;
};
struct BattleCombatantResource {
  unsigned enemy{}, sprite{}, palette_id{};
  // Sprite0 is an authored absent-artwork entry (for example Giygas).
  // It may remain prepared but cannot satisfy a visible object draw.
  std::shared_ptr<const BattleCombatantArtwork> artwork;
  BattleCombatantPalette palette;
};
struct BattleCombatantLayout {
  unsigned pictures{}, palettes{}, enemies{}, groups{}, group_begin{},
      group_end{};
  unsigned enemy_stride{}, sprite_offset{}, palette_offset{};
  unsigned picture_count = 110, palette_count = 32, enemy_count = 231,
           group_count = 484;
};
BattleCombatantLayout battle_combatant_layout(GameVersion);
// Borrowed presentation inputs; the gameplay owner retains formation, RNG,
// enemy records and lifecycle. Slot is the authored enemy slot (8..31).
// artwork_enabled is the caller's complete nonzero sprite-presence gate.
struct BattleCombatantPresentation {
  unsigned slot{}, resource{}, row{};
  std::uint64_t identity{};
  std::uint8_t x{}, y{};
  bool conscious = true, incapacitated{}, enemy = true, artwork_enabled = true;
  std::uint8_t blink{}, alternate_flash{};
  bool alternate{}, targeted{};
  bool operator==(const BattleCombatantPresentation &) const = default;
};
struct BattleCombatantTick {
  std::uint16_t horizontal_offset{}, vertical_offset{};
  std::uint8_t frame_phase{};
  bool targeting_flash{};
};
struct BattleCombatantDraw {
  unsigned slot{}, resource{};
  std::uint64_t identity{};
  int x{}, y{};
  bool alternate{};
  bool operator==(const BattleCombatantDraw &) const = default;
};
class BattleCombatantScene;
class BattleCombatantFrame {
public:
  std::span<const BattleCombatantDraw> commands() const { return commands_; }
  // Object-only draw data, transparent around artwork. Repeated sampling is
  // immutable. Background, PSI, UI and display effects compose separately.
  std::shared_ptr<const DirectSceneFrame>
  draw(unsigned width = 256, std::uint64_t frame = 0,
       std::uint64_t scene_identity = 0) const;

private:
  friend class BattleCombatantScene;
  std::shared_ptr<const std::vector<BattleCombatantResource>> resources_;
  std::array<std::optional<BattleCombatantPalette>, 4> alternate_{};
  std::vector<BattleCombatantDraw> commands_;
};
class BattleCombatants;
class BattleCombatantScene {
public:
  std::span<const BattleCombatantResource> resources() const {
    return *resources_;
  }
  // Borrow the effect owner's four alternate banks (physical banks12..15).
  // It must outlive this scene and any copies of the scene. Rebinding to a
  // different owner is rejected. Captured frames never borrow this owner.
  // Binding takes effect at the next explicit publication.
  void bind_palette_state(const battle::PaletteBankState &);
  // Unbound callers may stage alternate colors explicitly. Once bound, the
  // shared palette state is the sole authority and this setter is rejected.
  // Source preparation initializes only the four normal banks (8..11).
  void set_alternate_palette(unsigned resource, BattleCombatantPalette);
  // Exactly one authored row0 then row1 pass. Only the two visual timers are
  // written back, after every input and required palette has been validated.
  // Preparation failure leaves the timers and the previous publication intact.
  void publish(std::span<BattleCombatantPresentation>,
               BattleCombatantTick = {});
  // Capture palette effects that run after object selection, without replaying
  // rows or timers. This does not advance effects or acknowledge palette DMA.
  void publish_palettes();
  // A retained snapshot owns its commands and palettes across later
  // publications or scene destruction; immutable artwork remains shared.
  BattleCombatantFrame snapshot() const { return frame_; }

private:
  friend class BattleCombatants;
  explicit BattleCombatantScene(
      std::shared_ptr<const std::vector<BattleCombatantResource>>);
  std::array<std::optional<BattleCombatantPalette>, 4>
  capture_alternate_palettes() const;
  std::shared_ptr<const std::vector<BattleCombatantResource>> resources_;
  const battle::PaletteBankState *palette_state_{};
  std::array<std::optional<BattleCombatantPalette>, 4> alternate_{};
  BattleCombatantFrame frame_;
};
class BattleCombatants {
public:
  BattleCombatants(std::span<const std::uint8_t>, GameVersion);
  BattleCombatants(std::span<const std::uint8_t>, BattleCombatantLayout);
  unsigned size() const;
  std::shared_ptr<const BattleCombatantArtwork> artwork(unsigned sprite) const;
  BattleCombatantResource enemy(unsigned enemy) const;
  // Includes every authored group record, even count0, as C2EEE7 does.
  BattleCombatantScene prepare(unsigned battle) const;

private:
  struct Content;
  std::shared_ptr<const Content> content_;
};
} // namespace eb::native
