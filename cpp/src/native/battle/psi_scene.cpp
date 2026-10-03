#include "eb/native/battle/psi_scene.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::battle {
PsiSceneFrame::PsiSceneFrame(const PsiDisplayState &display,
                             const PaletteBankState &palettes,
                             unsigned bitdepth)
    : bitdepth_(bitdepth), graphics_(display.graphics),
      tilemap_(display.tilemap),
      scroll_(display.scroll[bitdepth == 2 ? 1 : 0]) {
  if (bitdepth != 2 && bitdepth != 4)
    throw std::invalid_argument("Invalid PSI background pixel depth");
  for (unsigned bank = 0; bank < 16; ++bank)
    for (unsigned color = 0; color < 16; ++color) {
      const auto value = palettes.displayed_palette(bank)[color];
      colors_[bank * 16 + color] = {std::uint8_t(value & 31),
                                    std::uint8_t((value >> 5) & 31),
                                    std::uint8_t((value >> 10) & 31)};
    }
}
std::shared_ptr<const DirectSceneFrame>
PsiSceneFrame::draw(unsigned width, std::uint64_t frame,
                    std::uint64_t identity) const {
  if (width < 256 || width > 4096 || width % 2)
    throw std::invalid_argument("Invalid PSI scene width");
  auto out = std::make_shared<DirectSceneFrame>();
  out->width = out->atlas_width = width;
  out->atlas_height = 448;
  out->frame = frame;
  out->scene_identity = identity;
  out->atlas.resize(std::size_t(width) * out->atlas_height);
  out->motions.push_back({0, 0, 0});
  const int margin = (int(width) - 256) / 2;
  for (unsigned y = 0; y < 224; ++y)
    for (unsigned x = 0; x < width; ++x) {
      const unsigned sx = (std::uint32_t(int(x) - margin) + scroll_.x) & 255;
      const unsigned sy = (y + 1 + scroll_.y) & 255;
      const auto descriptor = tilemap_[(sy / 8) * 32 + sx / 8];
      const unsigned tile = descriptor & 1023;
      const unsigned tx = descriptor & 0x4000 ? 7 - (sx & 7) : sx & 7;
      const unsigned ty = descriptor & 0x8000 ? 7 - (sy & 7) : sy & 7;
      const unsigned start = tile * bitdepth_ * 8;
      if (start + bitdepth_ * 8 > graphics_.size())
        throw std::out_of_range(
            "PSI tile requires artwork outside its published plane");
      unsigned index = 0;
      for (unsigned plane = 0; plane < bitdepth_; ++plane)
        index |= ((graphics_[start + (plane / 2) * 16 + ty * 2 + (plane & 1)] >>
                   (7 - tx)) &
                  1)
                 << plane;
      if (!index)
        continue;
      const unsigned palette = ((descriptor >> 10) & 7) * (1u << bitdepth_) +
                               (bitdepth_ == 2 ? 32 : 0);
      const unsigned priority = (descriptor >> 13) & 1;
      out->atlas[std::size_t(priority * 224 + y) * width + x] =
          palette_argb(colors_.at(palette + index));
    }
  for (unsigned priority = 0; priority < 2; ++priority) {
    out->quads.push_back(
        {0, priority * 224, width, 224, 0, 0, priority ? 9 : 6, 0, false});
    out->quads.back().layer = layer();
  }
  return out;
}
std::shared_ptr<const DirectSceneFrame>
PsiSceneFrame::compose(const BattleBackgroundSceneFrame &background,
                       const DirectSceneFrame::Effects &policy, unsigned width,
                       std::uint64_t frame, std::uint64_t identity) const {
  if (background.bitdepth != bitdepth_)
    throw std::invalid_argument(
        "PSI and background captures use different pixel modes");
  auto backgrounds = background.draw_layers(colors_, width, frame, identity);
  const auto psi = draw(width, frame, identity);
  auto out = std::make_shared<DirectSceneFrame>(*backgrounds);
  std::erase_if(out->quads,
                [&](const auto &quad) { return quad.layer == layer(); });
  const auto top = out->atlas_height;
  const auto motion = unsigned(out->motions.size());
  out->atlas.insert(out->atlas.end(), psi->atlas.begin(), psi->atlas.end());
  out->atlas_height += psi->atlas_height;
  out->motions.insert(out->motions.end(), psi->motions.begin(),
                      psi->motions.end());
  for (auto quad : psi->quads) {
    quad.v += top;
    quad.motion += motion;
    out->quads.push_back(quad);
  }
  // These colors already belong to the captured display publication. They
  // must not be recolored through a separately staged ScenePalette later.
  out->palette_indices.clear();
  out->effects = policy;
  return out;
}
} // namespace eb::native::battle
