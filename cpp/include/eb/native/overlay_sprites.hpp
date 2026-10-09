#pragma once
#include "eb/native/sprite_fragment.hpp"
#include "eb/native/sprite_resources.hpp"
#include <array>
#include <map>
#include <memory>
#include <optional>
#include <span>

namespace eb::native {
enum class OverlayKind { Mushroom, Sweat, Ripple, BigRipple };
struct OverlayClipStep {
  std::optional<std::uint32_t> frame;
  std::uint16_t duration{};
};
// Immutable imported planar rows for the ordinary map loader. The complete
// bank preserves the source helper's 16-bit cursor wrap between its two rows.
struct OverlayPlanarRow {
  std::span<const std::uint8_t> bank;
  std::uint32_t source_identity{};
  std::uint16_t source_offset{}, byte_count{}, destination{};
};
struct OverlayObjectMap {
  std::uint32_t identity{};
  std::span<const std::uint8_t> bytes;
  int vertical{};
  std::weak_ptr<const void> lifetime;
};
// Imports the four authored overworld overlays and their complete frame maps.
// A lookup is an authored content identity, never a VRAM or allocation address.
class OverlaySprites {
public:
  OverlaySprites(std::span<const std::uint8_t> assets, GameVersion version,
                 SpriteResources &sprites);
  OverlaySprites(const OverlaySprites&)=delete;
  OverlaySprites &operator=(const OverlaySprites&)=delete;
  std::span<const SpriteFragment> frame(std::uint32_t authored_address) const;
  OverlayObjectMap object_map(std::uint32_t authored_address) const;
  std::span<const OverlayClipStep> clip(OverlayKind kind) const;
  // Physical loading requires the original complete banks. Bounded imports
  // remain sufficient for frame/clip rendering and reject this accessor.
  std::vector<OverlayPlanarRow> raw_uploads() const;
  GameVersion version() const noexcept { return version_; }

private:
  std::shared_ptr<const void> lifetime_=std::make_shared<int>(0);
  GameVersion version_;
  const SpriteResources &sprites_;
  struct Selection { unsigned group, pose, destination; };
  std::vector<Selection> selections_;
  std::map<std::uint32_t, std::vector<SpriteFragment>> frames_;
  std::map<std::uint32_t,std::vector<std::uint8_t>> object_maps_;
  std::array<std::vector<OverlayClipStep>, 4> clips_;
};
} // namespace eb::native
