#pragma once
#include "eb/native/sprite_fragment.hpp"
#include "eb/native/sprite_resources.hpp"
#include <array>
#include <map>
#include <optional>
#include <span>

namespace eb::native {
enum class OverlayKind { Mushroom, Sweat, Ripple, BigRipple };
struct OverlayClipStep {
  std::optional<std::uint32_t> frame;
  std::uint16_t duration{};
};
// Imports the four authored overworld overlays and their complete frame maps.
// A lookup is an authored content identity, never a VRAM or allocation address.
class OverlaySprites {
public:
  OverlaySprites(std::span<const std::uint8_t> assets, GameVersion version,
                 SpriteResources &sprites);
  std::span<const SpriteFragment> frame(std::uint32_t authored_address) const;
  std::span<const OverlayClipStep> clip(OverlayKind kind) const;
  GameVersion version() const noexcept { return version_; }

private:
  GameVersion version_;
  std::map<std::uint32_t, std::vector<SpriteFragment>> frames_;
  std::array<std::vector<OverlayClipStep>, 4> clips_;
};
} // namespace eb::native
