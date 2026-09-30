#pragma once

#include "eb/native/world_palettes.hpp"
#include <vector>

namespace eb::native {
struct WorldPaletteAnimationLayout {
  std::uint32_t pointers{};
  unsigned tracks = 31;
};
WorldPaletteAnimationLayout world_palette_animation_layout(GameVersion version);

struct PaletteAnimationFrame {
  // Delay in eligible world logic ticks, not presentation frames. A zero
  // delay terminates the source sequence; zero on frame0 wraps its timer.
  std::uint16_t delay{};
  std::array<std::array<std::uint32_t, 16>, 6> scenery{};
  std::array<std::uint16_t, 6> scenery_zero{};
};
struct PaletteAnimationTrack {
  std::vector<PaletteAnimationFrame> frames;
};

class WorldPaletteAnimations;
// A scene owns its clock and current colors. Copies share immutable imported
// tracks but advance independently. Sampling never changes time. Initial area
// colors remain until delay[0] expires, when source publishes frame1 (not0).
class AreaPaletteAnimation {
public:
  const AreaPalettes &colors() const { return colors_; }
  bool active() const { return bool(track_); }
  unsigned ticks_until_change() const { return remaining_; }
  unsigned next_frame_index() const { return next_; }
  // Exactly one eligible palette tick, scheduled by the world/scene owner.
  // No renderer calls this. True means a frame was published,
  // even if its colors equal the preceding frame. Sprite tint stays fixed.
  bool advance();

private:
  friend class WorldPaletteAnimations;
  AreaPaletteAnimation(AreaPalettes colors,
                       std::shared_ptr<const PaletteAnimationTrack> track);
  AreaPalettes colors_;
  std::shared_ptr<const PaletteAnimationTrack> track_;
  std::uint16_t remaining_{};
  unsigned next_{};
};

class WorldPaletteAnimations {
public:
  // Copies and decompresses palette content only; never reads runtime video
  // memory, palettes, processor state or compatibility framebuffers.
  WorldPaletteAnimations(std::span<const std::uint8_t> assets,
                         WorldPaletteAnimationLayout layout);
  unsigned size() const { return tracks_.size(); }
  const PaletteAnimationTrack &track(unsigned one_based_id) const;
  // Transactionally select the already-resolved area's authored track. Empty
  // table records and selector0 are inactive and preserve its steady colors.
  AreaPaletteAnimation prepare(const AreaPalettes &colors) const;

private:
  std::vector<std::shared_ptr<const PaletteAnimationTrack>> tracks_;
};
} // namespace eb::native
