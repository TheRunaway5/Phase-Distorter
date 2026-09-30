#pragma once

#include "eb/game_version.hpp"
#include "eb/native/palette_transition.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <vector>

namespace eb::native {
struct BattleBackgroundLayout {
  std::uint32_t configurations{}, graphics{}, arrangements{}, palettes{},
      scrolling{}, distortions{}, sine{};
  unsigned configuration_count = 327, artwork_count = 103, palette_count = 114,
           scrolling_count = 120, distortion_count = 135;
};
BattleBackgroundLayout battle_background_layout(GameVersion);
struct BattleScroll {
  std::uint16_t duration{}, horizontal_velocity{}, vertical_velocity{},
      horizontal_acceleration{}, vertical_acceleration{};
  bool operator==(const BattleScroll &) const = default;
};
struct BattleDistortion {
  std::uint16_t duration{};
  std::uint8_t style{};
  std::uint16_t frequency{}, amplitude{};
  std::uint8_t speed{};
  std::uint16_t compression{}, frequency_acceleration{},
      amplitude_acceleration{};
  std::uint8_t speed_acceleration{};
  std::uint16_t compression_acceleration{};
  bool operator==(const BattleDistortion &) const = default;
};
struct BattleBackgroundDefinition {
  unsigned artwork{}, palette{}, bitdepth{}, palette_style{}, first1{}, last1{},
      first2{}, last2{}, palette_delay{};
  std::array<unsigned, 4> scrolling{}, distortions{};
};
struct BattleBackgroundState {
  unsigned palette_step1{}, palette_step2{}, palette_remaining = 1;
  unsigned scroll_index{}, distortion_index{};
  BattleScroll scroll{1};
  std::uint16_t horizontal_position{}, vertical_position{};
  BattleDistortion distortion{1};
  bool operator==(const BattleBackgroundState &) const = default;
};
// Inputs belong to the scene controller. One call means one authored generator
// update, independent of render sampling. The parity gate only delays
// row-offset publication; distortion parameters still advance on the other
// phase.
struct BattleBackgroundTick {
  unsigned layer_ordinal{}, frame_parity{};
  bool alternate_distortion{}, freeze_palette_scrolling{}, defeated{};
  std::uint16_t horizontal_effect{}, vertical_effect{};
  // A distortion-only second track targets the first artwork and reads its
  // current scroll, without acquiring its palette or advancing its scrolling.
  struct Scroll { std::uint16_t horizontal{}, vertical{}; };
  std::optional<Scroll> shared_scroll;
};
struct BattleBackgroundUpdate {
  bool palette{}, offsets{};
};
enum class BattleDistortionAxis { None, Horizontal, Vertical };
struct BattleBackgroundArtwork {
  // Final arranged indices, including the authored 2bpp subpalette selector.
  // Index zero within each tile remains transparent to the scene compositor.
  std::array<std::uint8_t, 256 * 256> indices{};
  std::array<std::uint8_t, 256 * 256> opaque{};
  std::array<std::uint16_t, 32 * 32> tiles{};
};
struct BattleBackgroundPixel {
  PaletteColor color{};
  std::uint8_t index{};
  bool opaque{};
};
struct BattleBackgroundFrame {
  std::shared_ptr<const BattleBackgroundArtwork> artwork;
  std::array<PaletteColor, 16> palette{};
  std::uint16_t horizontal_scroll{}, vertical_scroll{};
  BattleDistortionAxis axis = BattleDistortionAxis::None;
  std::array<std::uint16_t, 224> offsets{};
  // Visible row0 uses authored vertical pixel1, matching sprite/world raster
  // registration. Signed X wraps the owned 256-pixel background on both edges.
  BattleBackgroundPixel sample(int x, unsigned visible_y) const;
};
class BattleBackgrounds;
struct BattleBackgroundPalette {
  std::array<PaletteColor, 16> base{}, backup{};
  bool operator==(const BattleBackgroundPalette &) const = default;
};
class BattleBackground {
public:
  const BattleBackgroundState &state() const { return state_; }
  const BattleBackgroundDefinition &definition() const { return definition_; }
  BattleBackgroundFrame snapshot() const { return frame_; }
  BattleBackgroundUpdate advance(BattleBackgroundTick);
  // Authored C2DF2E operation: RGB5 channels scale from the immutable backup,
  // while cycling reads the updated base colors. Cycling entries publish on
  // their next palette tick, except the explicit black/white/restore commands.
  void apply_palette_brightness(std::uint16_t factor, unsigned first, unsigned last);
  void set_initial_scroll(std::uint16_t horizontal, std::uint16_t vertical);
  BattleBackgroundPalette palette_state() const { return {cycle_palette_, original_palette_}; }
  // Restore every base and displayed color without advancing palette cycles,
  // scroll or distortion. Scene publication is a separate owner operation.
  void restore_palette();

private:
  friend class BattleBackgrounds;
  friend class BattleBackgroundScene;
  // A distortion-only secondary is initialized without loading any palette.
  void clear_palette();
  struct Content;
  BattleBackground(std::shared_ptr<const Content>, unsigned id);
  std::shared_ptr<const Content> content_;
  BattleBackgroundDefinition definition_;
  BattleBackgroundState state_;
  BattleBackgroundFrame frame_;
  std::array<PaletteColor, 16> original_palette_{}, cycle_palette_{};
};
// Asset-only import. Preparation shares immutable arranged artwork, while each
// layer owns its clocks, palette and published distortion offsets. Pair color
// math, letterboxing and battle-effect controllers are separate scene concerns.
class BattleBackgrounds {
public:
  BattleBackgrounds(std::span<const std::uint8_t>, BattleBackgroundLayout);
  unsigned size() const;
  const BattleBackgroundDefinition &definition(unsigned id) const;
  BattleBackground prepare(unsigned id) const;

private:
  std::shared_ptr<const BattleBackground::Content> content_;
};
} // namespace eb::native
