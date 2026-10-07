#pragma once

#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle_background_scene.hpp"

namespace eb::native::battle {
// An immutable capture of the actual published plane. Animation activity does
// not control its lifetime: a terminal map clear still displays tile0, and a
// four-bit PSI plane replaces the preceding BG1 background until overwritten.
class PsiSceneFrame {
public:
  PsiSceneFrame(const PsiDisplayState &, const PaletteBankState &,
                unsigned background_bitdepth);
  std::shared_ptr<const DirectSceneFrame>
  draw(unsigned width = 256, std::uint64_t frame = 0,
       std::uint64_t identity = 0) const;
  // Compose source layers, replacing the plane owned by PSI. The caller
  // supplies the real published main/sub/window/color-math policy; neither
  // background color math nor palette publication is performed twice.
  std::shared_ptr<const DirectSceneFrame>
  compose(const BattleBackgroundSceneFrame &,
          const DirectSceneFrame::Effects &published_policy,
          unsigned width = 256, std::uint64_t frame = 0,
          std::uint64_t identity = 0,
          const DirectSceneFrame *published_background_layers = nullptr) const;
  unsigned bitdepth() const noexcept { return bitdepth_; }
  DirectSceneFrame::Layer layer() const noexcept {
    return bitdepth_ == 2 ? DirectSceneFrame::Layer::Background2
                          : DirectSceneFrame::Layer::Background1;
  }

private:
  unsigned bitdepth_;
  std::array<std::uint8_t, 8192> graphics_;
  std::array<std::uint16_t, 1024> tilemap_;
  ScenePalette colors_;
  PsiScroll scroll_;
};
} // namespace eb::native::battle
