#include "eb/native/world_palette_animation.hpp"
#include "eb/native/content_compression.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
struct Content {
  std::span<const std::uint8_t> bytes;
  unsigned byte(std::size_t at) const {
    if (at >= bytes.size())
      throw std::runtime_error("Truncated world palette animation content");
    return bytes[at];
  }
  unsigned pointer(std::size_t at) const {
    const unsigned value =
        byte(at) | byte(at + 1) << 8 | byte(at + 2) << 16 | byte(at + 3) << 24;
    if (value < 0xc00000 || value >= 0xf00000)
      throw std::runtime_error(
          "World palette animation references non-content storage");
    return value - 0xc00000;
  }
};
std::uint32_t color(unsigned value) {
  const auto channel = [](unsigned v) { return (v << 3) | (v >> 2); };
  return 0xff000000u | channel(value & 31) << 16 |
         channel((value >> 5) & 31) << 8 | channel((value >> 10) & 31);
}
} // namespace
WorldPaletteAnimationLayout
world_palette_animation_layout(GameVersion version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unsupported world palette animation version");
  return {version == GameVersion::JP ? 0x1fe4acu : 0x1fe4e1u, 31};
}
WorldPaletteAnimations::WorldPaletteAnimations(
    std::span<const std::uint8_t> assets, WorldPaletteAnimationLayout layout) {
  if (!layout.tracks || layout.tracks > 31)
    throw std::invalid_argument("Invalid world palette animation track count");
  const Content content{assets};
  std::vector<std::shared_ptr<const PaletteAnimationTrack>> tracks;
  for (unsigned index = 0; index < layout.tracks; ++index) {
    const unsigned at =
        content.pointer(std::size_t(layout.pointers) + index * 4);
    const unsigned count = content.byte(std::size_t(at) + 4);
    if (count > 8)
      throw std::runtime_error("Too many world palette animation frames");
    auto imported = std::make_shared<PaletteAnimationTrack>();
    if (count) {
      const auto data =
          decompress_content(assets, content.pointer(at), count * 192);
      if (data.size() != count * 192)
        throw std::runtime_error("Incomplete world palette animation frames");
      for (unsigned frame = 0; frame < count; ++frame) {
        auto &result = imported->frames.emplace_back();
        result.delay = content.byte(std::size_t(at) + 5 + frame);
        for (unsigned p = 0; p < 6; ++p) {
          const unsigned source = frame * 192 + p * 32;
          result.scenery_zero[p] = data[source] | unsigned(data[source + 1]) << 8;
        }
        for (unsigned p = 0; p < 6; ++p)
          for (unsigned i = 1; i < 16; ++i) {
            const unsigned source = frame * 192 + (p * 16 + i) * 2;
            result.scenery[p][i] =
                color(data[source] | unsigned(data[source + 1]) << 8);
            result.scenery_high_bits[p] |= std::uint16_t((data[source + 1] >> 7) << i);
          }
      }
    }
    tracks.push_back(std::move(imported));
  }
  tracks_ = std::move(tracks);
}
const PaletteAnimationTrack &
WorldPaletteAnimations::track(unsigned one_based_id) const {
  if (!one_based_id || one_based_id > tracks_.size())
    throw std::out_of_range("Unknown world palette animation track");
  return *tracks_[one_based_id - 1];
}
AreaPaletteAnimation
WorldPaletteAnimations::prepare(const AreaPalettes &colors) const {
  if (!colors.animation_id)
    return {colors, {}};
  if (track(colors.animation_id).frames.empty())
    return {colors, {}};
  return {colors, tracks_[colors.animation_id - 1]};
}
AreaPaletteAnimation::AreaPaletteAnimation(
    AreaPalettes colors, std::shared_ptr<const PaletteAnimationTrack> track)
    : colors_(std::move(colors)), track_(std::move(track)) {
  if (track_) {
    remaining_ = track_->frames.front().delay;
    next_ = 1;
  }
}
bool AreaPaletteAnimation::advance() {
  if (!track_ || --remaining_ != 0)
    return false;
  if (next_ == track_->frames.size() || !track_->frames[next_].delay)
    next_ = 0;
  const auto &frame = track_->frames[next_++];
  colors_.scenery = frame.scenery;
  colors_.scenery_zero = frame.scenery_zero;
  colors_.scenery_high_bits = frame.scenery_high_bits;
  remaining_ = frame.delay;
  return true;
}
} // namespace eb::native
