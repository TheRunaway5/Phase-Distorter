#include "eb/native/battle_background.hpp"
#include "eb/native/content_compression.hpp"
#include <map>
#include <stdexcept>

namespace eb::native {
namespace {
struct Reader {
  std::span<const std::uint8_t> bytes;
  unsigned byte(std::size_t at) const {
    if (at >= bytes.size())
      throw std::runtime_error("Truncated battle background content");
    return bytes[at];
  }
  unsigned word(std::size_t at) const { return byte(at) | byte(at + 1) << 8; }
  unsigned pointer(std::size_t at) const {
    const auto value = word(at) | word(at + 2) << 16;
    if (value < 0xc00000 || value >= 0xf00000)
      throw std::runtime_error(
          "Battle background pointer is not asset content");
    return value - 0xc00000;
  }
};
PaletteColor color(unsigned value) {
  return {std::uint8_t(value & 31), std::uint8_t((value >> 5) & 31),
          std::uint8_t((value >> 10) & 31)};
}
std::uint16_t add(unsigned a, unsigned b) { return std::uint16_t(a + b); }
int signed_byte(unsigned value) {
  return value < 128 ? int(value) : int(value) - 256;
}
int scaled_sine(unsigned amplitude, unsigned value) {
  const int product = int(amplitude) * signed_byte(value);
  return product >= 0 ? product / 256 : (product - 255) / 256;
}
} // namespace
struct BattleBackground::Content {
  std::vector<BattleBackgroundDefinition> definitions;
  std::map<unsigned, std::vector<std::uint8_t>> graphics, arrangements;
  std::vector<std::shared_ptr<const BattleBackgroundArtwork>> artwork;
  std::vector<std::array<std::uint16_t, 16>> palettes;
  std::vector<BattleScroll> scrolling;
  std::vector<BattleDistortion> distortions;
  std::array<std::uint8_t, 256> sine;
};
BattleBackgroundLayout battle_background_layout(GameVersion version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unsupported battle background version");
  return {0xadca1,
          0xad7a1,
          0xad93d,
          0xadad9,
          0xaf258,
          0xaf708,
          version == GameVersion::JP ? 0xb404u : 0xb425u};
}
BattleBackgrounds::BattleBackgrounds(std::span<const std::uint8_t> bytes,
                                     BattleBackgroundLayout layout) {
  if (!layout.configuration_count || layout.configuration_count > 327 ||
      !layout.artwork_count || layout.artwork_count > 103 ||
      !layout.palette_count || layout.palette_count > 114 ||
      !layout.scrolling_count || layout.scrolling_count > 120 ||
      !layout.distortion_count || layout.distortion_count > 135)
    throw std::invalid_argument("Invalid battle background catalog size");
  const Reader r{bytes};
  auto out = std::make_shared<BattleBackground::Content>();
  for (unsigned i = 0; i < 256; ++i)
    out->sine[i] = r.byte(std::size_t(layout.sine) + i);
  for (unsigned i = 0; i < layout.scrolling_count; ++i) {
    const auto at = std::size_t(layout.scrolling) + i * 10;
    out->scrolling.push_back(
        {std::uint16_t(r.word(at)), std::uint16_t(r.word(at + 2)),
         std::uint16_t(r.word(at + 4)), std::uint16_t(r.word(at + 6)),
         std::uint16_t(r.word(at + 8))});
  }
  for (unsigned i = 0; i < layout.distortion_count; ++i) {
    const auto at = std::size_t(layout.distortions) + i * 17;
    if (r.byte(at + 2) > 4)
      throw std::runtime_error(
          "Unsupported battle background distortion style");
    out->distortions.push_back(
        {std::uint16_t(r.word(at)), std::uint8_t(r.byte(at + 2)),
         std::uint16_t(r.word(at + 3)), std::uint16_t(r.word(at + 5)),
         std::uint8_t(r.byte(at + 7)), std::uint16_t(r.word(at + 8)),
         std::uint16_t(r.word(at + 10)), std::uint16_t(r.word(at + 12)),
         std::uint8_t(r.byte(at + 14)), std::uint16_t(r.word(at + 15))});
  }
  for (unsigned i = 0; i < layout.palette_count; ++i) {
    const auto at = r.pointer(std::size_t(layout.palettes) + i * 4);
    auto &palette = out->palettes.emplace_back();
    for (unsigned j = 0; j < 16; ++j)
      palette[j] = std::uint16_t(r.word(std::size_t(at) + j * 2));
  }
  std::map<std::pair<unsigned, unsigned>,
           std::shared_ptr<const BattleBackgroundArtwork>>
      images;
  for (unsigned i = 0; i < layout.configuration_count; ++i) {
    const auto at = std::size_t(layout.configurations) + i * 17;
    BattleBackgroundDefinition d{
        r.byte(at),     r.byte(at + 1), r.byte(at + 2),
        r.byte(at + 3), r.byte(at + 4), r.byte(at + 5),
        r.byte(at + 6), r.byte(at + 7), r.byte(at + 8)};
    if (d.artwork >= layout.artwork_count ||
        d.palette >= layout.palette_count ||
        (d.bitdepth != 2 && d.bitdepth != 4) || d.palette_style > 3 ||
        d.first1 > d.last1 || d.last1 >= 16 || d.first2 > d.last2 ||
        d.last2 >= 16)
      throw std::runtime_error("Invalid battle background layer definition");
    for (unsigned j = 0; j < 4; ++j) {
      d.scrolling[j] = r.byte(at + 9 + j);
      d.distortions[j] = r.byte(at + 13 + j);
      if (d.scrolling[j] >= layout.scrolling_count ||
          d.distortions[j] >= layout.distortion_count)
        throw std::runtime_error(
            "Invalid battle background animation reference");
    }
    const auto key = std::pair{d.artwork, d.bitdepth};
    auto found = images.find(key);
    if (found == images.end()) {
      if (!out->graphics.contains(d.artwork)) {
        out->graphics.emplace(d.artwork, decompress_content(
            bytes, r.pointer(std::size_t(layout.graphics) + d.artwork * 4), 0x5000));
        out->arrangements.emplace(d.artwork, decompress_content(
            bytes, r.pointer(std::size_t(layout.arrangements) + d.artwork * 4), 0x800));
      }
      const auto &gfx = out->graphics.at(d.artwork);
      const auto &arr = out->arrangements.at(d.artwork);
      if (arr.size() != 0x800 || gfx.empty() || gfx.size() % (d.bitdepth * 8))
        throw std::runtime_error("Invalid battle background artwork size");
      const Reader pixels{gfx}, arrangement{arr};
      auto image = std::make_shared<BattleBackgroundArtwork>();
      for (unsigned y = 0; y < 256; ++y)
        for (unsigned x = 0; x < 256; ++x) {
          const unsigned entry = arrangement.word(((y / 8) * 32 + x / 8) * 2);
          image->tiles[(y / 8) * 32 + x / 8] = entry & 1023;
          const unsigned tx = (entry & 0x4000) ? 7 - (x & 7) : (x & 7),
                         ty = (entry & 0x8000) ? 7 - (y & 7) : (y & 7);
          const unsigned tile = (entry & 1023) * d.bitdepth * 8;
          unsigned value = 0;
          for (unsigned plane = 0; plane < d.bitdepth; ++plane)
            value |=
                ((pixels.byte(tile + (plane / 2) * 16 + ty * 2 + (plane & 1)) >>
                  (7 - tx)) &
                 1)
                << plane;
          const unsigned index =
              ((entry >> 10) & 7) * (1u << d.bitdepth) + value;
          if (index >= 16)
            throw std::runtime_error(
                "Battle background references an unavailable palette");
          image->indices[y * 256 + x] = index;
          image->opaque[y * 256 + x] = value != 0;
        }
      found = images.emplace(key, std::move(image)).first;
    }
    out->definitions.push_back(d);
    out->artwork.push_back(found->second);
  }
  content_ = std::move(out);
}
unsigned BattleBackgrounds::size() const {
  return content_->definitions.size();
}
const BattleBackgroundDefinition &
BattleBackgrounds::definition(unsigned id) const {
  return content_->definitions.at(id);
}
std::span<const std::uint8_t> BattleBackgrounds::graphics(unsigned layer) const {
  return content_->graphics.at(definition(layer).artwork);
}
std::span<const std::uint8_t> BattleBackgrounds::arrangement(unsigned layer) const {
  return content_->arrangements.at(definition(layer).artwork);
}
const std::array<std::uint16_t, 16> &BattleBackgrounds::palette(unsigned layer) const {
  return content_->palettes.at(definition(layer).palette);
}
BattleBackground BattleBackgrounds::prepare(unsigned id) const {
  (void)definition(id);
  return {content_, id};
}
BattleBackground::BattleBackground(std::shared_ptr<const Content> content,
                                   unsigned id)
    : content_(std::move(content)), definition_(content_->definitions.at(id)),
      original_palette_(content_->palettes.at(definition_.palette)) {
  frame_.artwork = content_->artwork.at(id);
  for (unsigned i = 0; i < 16; ++i)
    frame_.palette[i] = color(original_palette_[i]);
  cycle_palette_ = original_palette_;
}
BattleBackgroundUpdate BattleBackground::advance(BattleBackgroundTick tick,
    std::span<std::uint16_t> publication) {
  if (!publication.empty() && publication.size() != 16)
    throw std::invalid_argument("Battle palette publication must contain sixteen words");
  if (tick.layer_ordinal > 1 || tick.frame_parity > 1)
    throw std::invalid_argument("Invalid battle background phase input");
  BattleBackgroundUpdate update;
  if (!tick.freeze_palette_scrolling) {
    if (state_.palette_remaining && --state_.palette_remaining == 0) {
      state_.palette_remaining = definition_.palette_delay;
      const auto cycle = [&](unsigned first, unsigned last, unsigned &step,
                             bool pingpong) {
        const unsigned count = last - first + 1,
                       period = pingpong ? count * 2 : count;
        for (unsigned j = 0; j < count; ++j) {
          unsigned k =
              pingpong ? (j + step) % period : (j + count - step) % count;
          if (pingpong && k >= count)
            k = period - 1 - k;
          frame_.palette[first + j] = color(cycle_palette_[first + k]);
          if (!publication.empty()) publication[first + j] = cycle_palette_[first + k];
        }
        step = (step + 1) % period;
      };
      if (definition_.palette_style == 2)
        cycle(definition_.first2, definition_.last2, state_.palette_step2,
              false);
      if (definition_.palette_style >= 1 && definition_.palette_style <= 3)
        cycle(definition_.first1, definition_.last1, state_.palette_step1,
              definition_.palette_style == 3);
      update.palette = true;
    }
    if (tick.defeated)
      return update;
    if (state_.scroll.duration && --state_.scroll.duration == 0) {
      state_.scroll_index = (state_.scroll_index + 1) & 3;
      if (!definition_.scrolling[state_.scroll_index])
        state_.scroll_index = 0;
      if (const auto id = definition_.scrolling[state_.scroll_index])
        state_.scroll = content_->scrolling[id];
    }
    state_.scroll.horizontal_velocity =
        add(state_.scroll.horizontal_velocity,
            state_.scroll.horizontal_acceleration);
    state_.scroll.vertical_velocity = add(state_.scroll.vertical_velocity,
                                          state_.scroll.vertical_acceleration);
    state_.horizontal_position =
        add(state_.horizontal_position, state_.scroll.horizontal_velocity);
    state_.vertical_position =
        add(state_.vertical_position, state_.scroll.vertical_velocity);
    frame_.horizontal_scroll =
        add(state_.horizontal_position >> 8, tick.horizontal_effect);
    frame_.vertical_scroll =
        add(state_.vertical_position >> 8, tick.vertical_effect);
  }
  if (tick.shared_scroll) {
    frame_.horizontal_scroll = tick.shared_scroll->horizontal;
    frame_.vertical_scroll = tick.shared_scroll->vertical;
  }
  auto &dist = state_.distortion;
  if (dist.duration && --dist.duration == 0) {
    state_.distortion_index = (state_.distortion_index + 1) & 3;
    if (!definition_.distortions[state_.distortion_index])
      state_.distortion_index = 0;
    if (const auto id = definition_.distortions[state_.distortion_index]) {
      dist = content_->distortions[id];
      update.distortion_installed = true;
      frame_.axis = dist.style == 3 ? BattleDistortionAxis::Vertical
                                    : BattleDistortionAxis::Horizontal;
    }
  }
  if (!dist.style)
    return update;
  dist.frequency = add(dist.frequency, dist.frequency_acceleration);
  dist.amplitude = add(dist.amplitude, dist.amplitude_acceleration);
  dist.speed = std::uint8_t(dist.speed + dist.speed_acceleration);
  dist.compression = add(dist.compression, dist.compression_acceleration);
  if (tick.alternate_distortion && tick.frame_parity != tick.layer_ordinal)
    return update;
  unsigned phase = dist.speed;
  if (dist.style <= 2)
    phase = (phase + frame_.vertical_scroll) & 255;
  std::uint16_t accumulator = phase << 8,
                compression = (frame_.vertical_scroll & 255) << 8;
  for (unsigned y = 0; y < 224; ++y) {
    int wave =
        scaled_sine(dist.amplitude >> 8, content_->sine[accumulator >> 8]);
    if ((dist.style == 2 || dist.style == 4) && (y & 1))
      wave = -wave;
    unsigned base = frame_.horizontal_scroll;
    if (dist.style >= 3) {
      compression = add(compression, dist.compression);
      base = compression >> 8;
    }
    frame_.offsets[y] = std::uint16_t(int(base) + wave);
    accumulator = add(accumulator, dist.frequency);
  }
  update.offsets = true;
  return update;
}
void BattleBackground::set_initial_scroll(std::uint16_t horizontal,
                                          std::uint16_t vertical) {
  frame_.horizontal_scroll = horizontal;
  frame_.vertical_scroll = vertical;
}
void BattleBackground::set_initial_raster(BattleDistortionAxis axis,
    const std::array<std::uint16_t, 224> &offsets) {
  if (axis != BattleDistortionAxis::None && axis != BattleDistortionAxis::Horizontal &&
      axis != BattleDistortionAxis::Vertical)
    throw std::invalid_argument("Invalid battle distortion axis");
  frame_.axis = axis;
  frame_.offsets = offsets;
}
void BattleBackground::apply_palette_brightness(std::uint16_t factor,
                                                unsigned first, unsigned last,
                                                std::span<std::uint16_t> publication) {
  if (!publication.empty() && publication.size() != 16)
    throw std::invalid_argument("Battle palette publication must contain sixteen words");
  if (first > last || last >= 16)
    throw std::invalid_argument("Invalid battle palette brightness range");
  for (unsigned i = first; i <= last; ++i) {
    const auto original = color(original_palette_[i]);
    std::uint16_t adjusted;
    if (!factor || factor == 0xffff)
      adjusted = factor;
    else if (factor == 0x100)
      adjusted = original_palette_[i];
    else {
      const auto scale = [factor](unsigned channel) {
        return ((channel * factor) >> 8) & 255;
      };
      adjusted =
          std::uint16_t(scale(original.red) + (scale(original.green) << 5) +
                        (scale(original.blue) << 10));
    }
    cycle_palette_[i] = adjusted;
    const bool cycling = (definition_.palette_style == 2 &&
                          i >= definition_.first2 && i <= definition_.last2) ||
                         (definition_.palette_style &&
                          i >= definition_.first1 && i <= definition_.last1);
    if (!cycling || factor == 0 || factor == 0x100 || factor == 0xffff) {
      frame_.palette[i] = color(adjusted);
      if (!publication.empty()) publication[i] = adjusted;
    }
  }
}
BattleBackgroundPalette BattleBackground::palette_state() const {
  BattleBackgroundPalette out;
  for (unsigned i = 0; i < 16; ++i) {
    out.base[i] = color(cycle_palette_[i]);
    out.backup[i] = color(original_palette_[i]);
    out.base_high_bits |= std::uint16_t((cycle_palette_[i] >> 15) << i);
    out.backup_high_bits |= std::uint16_t((original_palette_[i] >> 15) << i);
  }
  return out;
}
void BattleBackground::restore_palette() {
  cycle_palette_ = original_palette_;
  for (unsigned i = 0; i < 16; ++i)
    frame_.palette[i] = color(original_palette_[i]);
}
void BattleBackground::halve_palette() {
  for (unsigned i = 0; i < 16; ++i) {
    cycle_palette_[i] = (cycle_palette_[i] >> 1) & 0x3def;
    frame_.palette[i] = color(cycle_palette_[i]);
  }
}
void BattleBackground::clear_palette() {
  original_palette_.fill({});
  cycle_palette_.fill({});
  frame_.palette.fill({});
}
BattleBackgroundPixel BattleBackgroundFrame::sample(int x,
                                                    unsigned visible_y) const {
  if (visible_y >= 224 || !artwork)
    throw std::out_of_range("Invalid battle background sample");
  const unsigned sx =
      (std::uint32_t(x) + (axis == BattleDistortionAxis::Horizontal
                               ? offsets[visible_y]
                               : horizontal_scroll)) &
      255;
  const unsigned sy =
      (visible_y + 1 +
       (axis == BattleDistortionAxis::Vertical ? offsets[visible_y]
                                               : vertical_scroll)) &
      255;
  const auto at = sy * 256 + sx;
  const auto index = artwork->indices[at];
  return {palette[index], index, artwork->opaque[at] != 0};
}
} // namespace eb::native

namespace eb::native {
void BattleBackground::swap_final_distortion() {
  std::swap(definition_.distortions[0], definition_.distortions[3]);
  definition_.distortions[1] = 0;
  state_.distortion.duration = 1;
}
}
