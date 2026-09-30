#include "eb/native/battle_background_scene.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
void validate_color(PaletteColor c) {
  if (c.red > 31 || c.green > 31 || c.blue > 31)
    throw std::invalid_argument("Invalid battle backdrop color");
}
PaletteColor combine(PaletteColor a, PaletteColor b, bool half) {
  const auto channel = [half](unsigned x, unsigned y) {
    return std::uint8_t(std::min(31u, (x + y) >> (half ? 1 : 0)));
  };
  return {channel(a.red, b.red), channel(a.green, b.green),
          channel(a.blue, b.blue)};
}
int signed_byte(unsigned value) {
  return value < 128 ? int(value) : int(value) - 256;
}
} // namespace
struct BattleBackgroundScene::Content {
  BattleBackgrounds layers;
  std::vector<BattleBackgroundPair> pairs;
  std::array<std::uint8_t, 61> quake;
  std::array<std::uint8_t, 256> sine;
  Content(std::span<const std::uint8_t> bytes, GameVersion version)
      : layers(bytes, battle_background_layout(version)) {
    const auto byte = [&](std::size_t at) -> unsigned {
      if (at >= bytes.size())
        throw std::runtime_error("Truncated battle scene content");
      return bytes[at];
    };
    const auto word = [&](std::size_t at) {
      return byte(at) | byte(at + 1) << 8;
    };
    for (unsigned i = 0; i < 484; ++i) {
      BattleBackgroundPair p{word(0xbd89a + i * 4), word(0xbd89c + i * 4),
                             byte(0x10c614 + i * 8)};
      if (p.primary >= layers.size() || p.secondary >= layers.size() ||
          p.style > 7)
        throw std::runtime_error("Invalid battle background selection");
      pairs.push_back(p);
    }
    const unsigned q = version == GameVersion::JP ? 0x479fa : 0x4a591;
    for (unsigned i = 0; i < quake.size(); ++i)
      quake[i] = byte(q + i);
    const unsigned s = battle_background_layout(version).sine;
    for (unsigned i = 0; i < sine.size(); ++i)
      sine[i] = byte(s + i);
  }
};
BattleBackgroundScenes::BattleBackgroundScenes(
    std::span<const std::uint8_t> bytes, GameVersion version)
    : content_(
          std::make_shared<BattleBackgroundScene::Content>(bytes, version)) {}
unsigned BattleBackgroundScenes::size() const { return content_->pairs.size(); }
BattleBackgroundPair BattleBackgroundScenes::selection(unsigned battle) const {
  return content_->pairs.at(battle);
}
std::optional<BattleBackgroundArtworkDependency>
BattleBackgroundScenes::artwork_dependency(
    BattleBackgroundPair pair, BattleArtworkPublication publication) const {
  if (pair.style > 7)
    throw std::invalid_argument("Invalid battle background style");
  const auto &primary = content_->layers.definition(pair.primary);
  (void)content_->layers.definition(pair.secondary);
  if (publication != BattleArtworkPublication::Ordinary &&
      publication != BattleArtworkPublication::GiygasPrayer)
    throw std::invalid_argument("Invalid battle artwork publication context");
  if (publication == BattleArtworkPublication::GiygasPrayer &&
      primary.bitdepth != 4)
    throw std::invalid_argument(
        "Extended prayer artwork requires a four-bit layer");
  const auto missing = [&](unsigned id, unsigned layer, unsigned published)
      -> std::optional<BattleBackgroundArtworkDependency> {
    const auto artwork = content_->layers.prepare(id).snapshot().artwork;
    unsigned first = 1024;
    for (const auto tile : artwork->tiles)
      if (tile >= published)
        first = std::min(first, unsigned(tile));
    if (first < 1024)
      return BattleBackgroundArtworkDependency{layer, first};
    return std::nullopt;
  };
  if (auto needed =
          missing(pair.primary, 0,
                  publication == BattleArtworkPublication::GiygasPrayer ? 640
                  : primary.bitdepth == 2                               ? 512
                                                                        : 256))
    return needed;
  if (pair.secondary && !(primary.bitdepth == 4 && !(pair.style & 4)))
    return missing(pair.secondary, 1, primary.bitdepth == 2 ? 384 : 256);
  return std::nullopt;
}
BattleBackgroundScene
BattleBackgroundScenes::prepare(unsigned battle,
                                BattleBackgroundStart start) const {
  return prepare(selection(battle), start,
                 battle == 478 ? BattleArtworkPublication::GiygasPrayer
                               : BattleArtworkPublication::Ordinary);
}
BattleBackgroundScene
BattleBackgroundScenes::prepare(BattleBackgroundPair pair,
                                BattleBackgroundStart start,
                                BattleArtworkPublication publication) const {
  if (pair.primary >= content_->layers.size() ||
      pair.secondary >= content_->layers.size() || pair.style > 7 ||
      start.frame_parity > 1 ||
      (start.inherited_blend != BattleBackgroundBlend::Opaque &&
       start.inherited_blend != BattleBackgroundBlend::HalfAdd))
    throw std::invalid_argument("Invalid battle background scene setup");
  validate_color(start.backdrop);
  if (pair.secondary &&
      (content_->layers.definition(pair.primary).bitdepth == 2 ||
       (pair.style & 4)) &&
      content_->layers.definition(pair.primary).bitdepth !=
          content_->layers.definition(pair.secondary).bitdepth)
    throw std::invalid_argument(
        "Battle artwork pair has incompatible pixel depth");
  if (auto dependency = artwork_dependency(pair, publication))
    throw BattleBackgroundArtworkRequired(*dependency);
  return {content_, pair, start};
}
BattleBackgroundScene::BattleBackgroundScene(
    std::shared_ptr<const Content> content, BattleBackgroundPair pair,
    BattleBackgroundStart start)
    : content_(std::move(content)), pair_(pair),
      primary_(content_->layers.prepare(pair.primary)),
      inactive_secondary_palette_(start.retained_secondary_palette),
      blend_(start.inherited_blend) {
  const unsigned depth = primary_.definition().bitdepth;
  primary_.set_initial_scroll(start.primary_scroll.horizontal,
                              start.primary_scroll.vertical);
  effects_.reflect_duration = start.reflect_duration;
  effects_.green_background_duration = start.green_background_duration;
  effects_.backdrop = start.backdrop;
  effects_.horizontal_offset = start.effects.horizontal;
  effects_.vertical_offset = start.effects.vertical;
  if (const unsigned style = pair.style & 3) {
    const unsigned size = 38 + style * 10;
    effects_.top_end = size - 1;
    effects_.bottom_start = 224 - size;
  }
  if (pair.secondary) {
    secondary_.emplace(content_->layers.prepare(pair.secondary));
    secondary_->set_initial_scroll(start.secondary_scroll.horizontal,
                                   start.secondary_scroll.vertical);
    shared_artwork_ = depth == 4 && !(pair.style & 4);
    if (shared_artwork_) secondary_->clear_palette();
    alternate_ = secondary_->definition().distortions[0] != 0;
  }
  if (depth == 4) {
    blend_ = secondary_ && !shared_artwork_ ? BattleBackgroundBlend::HalfAdd
                                            : BattleBackgroundBlend::Opaque;
    primary_.advance({0,
                      start.frame_parity,
                      start.previous_alternate,
                      false,
                      start.defeated,
                      start.effects.horizontal,
                      start.effects.vertical,
                      {}});
    if (secondary_ && !shared_artwork_)
      secondary_->advance({1,
                           start.frame_parity,
                           start.previous_alternate,
                           false,
                           start.defeated,
                           start.effects.horizontal,
                           start.effects.vertical,
                           {}});
  } else if (secondary_)
    blend_ = BattleBackgroundBlend::HalfAdd;
}
void BattleBackgroundScene::quake(unsigned duration, std::uint16_t hold) {
  if (duration > 60)
    throw std::invalid_argument("Battle quake exceeds authored track");
  effects_.vertical_duration = duration;
  effects_.vertical_hold = hold;
}
void BattleBackgroundScene::apply_palette_brightness(std::uint16_t factor) {
  const bool four = primary_.definition().bitdepth == 4;
  primary_.apply_palette_brightness(factor, 1, four ? 15 : 3);
  if (!four && secondary_)
    secondary_->apply_palette_brightness(factor, 1, 3);
}
BattleBackgroundPalette BattleBackgroundScene::retained_secondary_palette() const {
  return secondary_ ? secondary_->palette_state() : inactive_secondary_palette_;
}
std::optional<BattlePaletteDependency>
BattleBackgroundScene::palette_restoration_dependency() const {
  return shared_artwork_
             ? std::optional{BattlePaletteDependency::ResetSceneAndFrameState}
             : std::nullopt;
}
void BattleBackgroundScene::restore_palette(ScenePalette &colors) {
  if (const auto dependency = palette_restoration_dependency())
    throw BattlePaletteRestorationRequired(*dependency);
  primary_.restore_palette();
  if (secondary_) secondary_->restore_palette();
  else inactive_secondary_palette_.base = inactive_secondary_palette_.backup;
  const unsigned first = primary_.definition().bitdepth == 4 ? 32 : 64;
  const auto primary = primary_.snapshot();
  std::copy(primary.palette.begin(), primary.palette.end(), colors.begin() + first);
  if (secondary_) {
    const auto second = secondary_->snapshot();
    std::copy(second.palette.begin(), second.palette.end(), colors.begin() + first + 32);
  }
}
void BattleBackgroundScene::advance(BattleBackgroundSceneTick tick) {
  if (tick.frame_parity > 1)
    throw std::invalid_argument("Invalid battle scene tick phase");
  auto &e = effects_;
  if (e.darkening) {
    e.brightness = std::uint16_t(e.brightness - 0x555);
    if (e.brightness < 0x6000) {
      e.brightness = 0x6000;
      e.darkening = false;
    }
    apply_palette_brightness(e.brightness >> 8);
  }
  if (e.reflect_duration)
    apply_palette_brightness((--e.reflect_duration & 2) ? 0xffff : 0x100);
  if (e.green_background_duration) {
    e.backdrop = e.green_background_duration == 3 ? PaletteColor{0, 31, 0}
                                                  : PaletteColor{};
    apply_palette_brightness((--e.green_background_duration & 2) ? 0 : 0x100);
  }
  e.vertical_offset = 0;
  if (e.vertical_duration) {
    e.vertical_offset =
        std::uint16_t(signed_byte(content_->quake[60 - e.vertical_duration]));
    if (!--e.vertical_duration && e.vertical_hold) {
      --e.vertical_hold;
      e.vertical_duration = 10;
    }
  }
  e.horizontal_offset = 0;
  if (e.wobble_duration) {
    const unsigned remainder = e.wobble_duration % 72;
    --e.wobble_duration;
    // The source shifts into a signed 16-bit dividend before DIVISION16S.
    const unsigned phase = (remainder << 8) / 72;
    e.horizontal_offset = std::uint16_t(signed_byte(content_->sine[phase]) / 4);
  }
  if (e.shake_duration) {
    const auto phase = e.shake_duration-- & 3;
    e.horizontal_offset = phase == 1 ? 2 : phase == 3 ? 0xfffe : 0;
  }
  if (e.minimum_wait)
    --e.minimum_wait;
  primary_.advance({0,
                    tick.frame_parity,
                    alternate_,
                    false,
                    tick.defeated,
                    e.horizontal_offset,
                    e.vertical_offset,
                    {}});
  if (secondary_) {
    const auto first = primary_.snapshot();
    secondary_->advance(
        {1, tick.frame_parity, alternate_, shared_artwork_, tick.defeated,
         e.horizontal_offset, e.vertical_offset,
         shared_artwork_
             ? std::optional<
                   BattleBackgroundTick::Scroll>{{first.horizontal_scroll,
                                                  first.vertical_scroll}}
             : std::nullopt});
  }
  const auto flash = [&](std::uint16_t &duration, PaletteColor addition) {
    if (!duration)
      return;
    e.additive_flash = ((--duration / 12) & 1) != 0;
    e.addition = e.additive_flash ? addition : PaletteColor{};
  };
  flash(e.red_duration, {31, 0, 4});
  flash(e.green_duration, {0, 31, 4});
  if (e.opening_letterbox && e.top_end) {
    if (e.opening_top < 0x3bb) {
      e.opening_top = 0;
      e.opening_bottom = 224;
      e.opening_letterbox = false;
    } else {
      e.opening_top -= 0x3bb;
      e.opening_bottom = std::uint16_t(e.opening_bottom + 0x3bb);
    }
    e.top_end = std::min(e.top_end, unsigned(e.opening_top >> 8));
    e.bottom_start = std::max(e.bottom_start, unsigned(e.opening_bottom >> 8));
  }
}
BattleBackgroundSceneFrame BattleBackgroundScene::snapshot() const {
  return {pair_,
          primary_.snapshot(),
          secondary_ ? std::optional{secondary_->snapshot()} : std::nullopt,
          shared_artwork_,
          primary_.definition().bitdepth == 4 && !shared_artwork_ &&
              secondary_.has_value(),
          blend_,
          effects_};
}
PaletteColor BattleBackgroundSceneFrame::sample(int x, unsigned y) const {
  if (y >= 224)
    throw std::out_of_range("Battle scene sample exceeds display height");
  if (!primary.artwork || (secondary && !secondary->artwork))
    throw std::invalid_argument("Battle scene has no owned artwork");
  validate_color(effects.backdrop);
  validate_color(effects.addition);
  const bool visible =
      !effects.top_end || (y >= effects.top_end && y < effects.bottom_start);
  PaletteColor color = effects.backdrop;
  if (visible) {
    const auto &first = primary;
    if (shared_artwork && secondary &&
        secondary->axis != BattleDistortionAxis::None) {
      // A later source distortion channel wins only its own axis; preserve the
      // other channel when the two tracks target different scroll directions.
      const auto &second = *secondary;
      unsigned sx =
          (std::uint32_t(x) + (second.axis == BattleDistortionAxis::Horizontal
                                   ? second.offsets[y]
                               : first.axis == BattleDistortionAxis::Horizontal
                                   ? first.offsets[y]
                                   : first.horizontal_scroll)) &
          255;
      unsigned sy =
          (y + 1 +
           (second.axis == BattleDistortionAxis::Vertical ? second.offsets[y]
            : first.axis == BattleDistortionAxis::Vertical
                ? first.offsets[y]
                : first.vertical_scroll)) &
          255;
      const auto at = sy * 256 + sx;
      if (first.artwork->opaque[at])
        color = first.palette[first.artwork->indices[at]];
    } else {
      const auto p = first.sample(x, y);
      const auto q =
          secondary ? secondary->sample(x, y) : BattleBackgroundPixel{};
      const bool four = secondary_main;
      const auto main = four ? q : p, sub = four ? p : q;
      color = main.opaque ? main.color : effects.backdrop;
      if (!effects.additive_flash && blend == BattleBackgroundBlend::HalfAdd &&
          sub.opaque)
        color = combine(color, sub.color, true);
    }
  }
  if (effects.additive_flash)
    color = combine(color, effects.addition, false);
  return color;
}
std::shared_ptr<const DirectSceneFrame>
BattleBackgroundSceneFrame::draw(unsigned width, std::uint64_t frame,
                                 std::uint64_t identity) const {
  if (width < 256 || width > 4096 || (width & 1))
    throw std::invalid_argument("Invalid native battle scene width");
  auto result = std::make_shared<DirectSceneFrame>();
  result->width = result->atlas_width = width;
  result->atlas_height = 224;
  result->frame = frame;
  result->scene_identity = identity;
  result->atlas.resize(std::size_t(width) * 224);
  const int origin = (int(width) - 256) / 2;
  for (unsigned y = 0; y < 224; ++y)
    for (unsigned x = 0; x < width; ++x)
      result->atlas[std::size_t(y) * width + x] =
          palette_argb(sample(int(x) - origin, y));
  result->motions.push_back({identity, 0, 0});
  result->quads.push_back({0, 0, width, 224, 0, 0, 0, 0, false});
  return result;
}
} // namespace eb::native
