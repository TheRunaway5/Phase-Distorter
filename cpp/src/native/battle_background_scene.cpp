#include "eb/native/battle_background_scene.hpp"
#include "eb/native/battle/palette_effects.hpp"
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
  GameVersion version;
  BattleBackgrounds layers;
  std::vector<BattleBackgroundPair> pairs;
  std::array<std::uint8_t, 61> quake;
  std::array<std::uint8_t, 256> sine;
  Content(std::span<const std::uint8_t> bytes, GameVersion version)
      : version(version), layers(bytes, battle_background_layout(version)) {
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
GameVersion BattleBackgroundScenes::version() const { return content_->version; }
const BattleBackgrounds &BattleBackgroundScenes::layers() const { return content_->layers; }
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
  const auto &metadata = start.retained_secondary_metadata;
  if (metadata.target_layer > 4 || metadata.freeze_palette_scrolling > 1 ||
      (metadata.palette_base && (*metadata.palette_base > 240 || *metadata.palette_base % 16)))
    throw std::invalid_argument("Invalid retained battle layer metadata");
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
      inactive_secondary_background_(start.retained_secondary_background),
      blend_(start.inherited_blend) {
  const unsigned depth = primary_.definition().bitdepth;
  layer_metadata_[0] = {std::uint8_t(depth == 4 ? 2 : 3), 0, depth == 4 ? 32u : 64u};
  layer_metadata_[1] = start.retained_secondary_metadata;
  layer_metadata_[1].target_layer = 0;
  primary_.state_.distortion.compression_acceleration =
      std::uint16_t(unsigned(start.primary_compression_acceleration_high) << 8);
  primary_.set_initial_raster(start.primary_axis, start.primary_offsets);
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
    secondary_->state_.distortion.compression_acceleration =
        std::uint16_t(unsigned(start.secondary_compression_acceleration_high) << 8);
    secondary_->set_initial_raster(start.secondary_axis, start.secondary_offsets);
    secondary_->set_initial_scroll(start.secondary_scroll.horizontal,
                                   start.secondary_scroll.vertical);
    shared_artwork_ = depth == 4 && !(pair.style & 4);
    layer_metadata_[1] = {std::uint8_t(shared_artwork_ ? 2 : depth == 4 ? 1 : 4),
                          std::uint8_t(shared_artwork_),
                          shared_artwork_ ? std::optional<unsigned>{} :
                          std::optional<unsigned>{depth == 4 ? 64u : 96u}};
    if (shared_artwork_)
      secondary_->clear_palette();
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
  apply_palette_brightness(factor, nullptr);
}
void BattleBackgroundScene::apply_palette_brightness(std::uint16_t factor,
                                                     battle::PaletteBankState *colors) {
  const bool four = primary_.definition().bitdepth == 4;
  const unsigned bank = four ? 2 : 4;
  primary_.apply_palette_brightness(factor, 1, four ? 15 : 3,
      colors ? std::span<std::uint16_t>(colors->staged_palette(bank)) : std::span<std::uint16_t>{});
  if (!four && secondary_)
    secondary_->apply_palette_brightness(factor, 1, 3,
        colors ? std::span<std::uint16_t>(colors->staged_palette(bank + 2)) : std::span<std::uint16_t>{});
  else if (!four && inactive_secondary_background_ && can_brighten_inactive_secondary())
    inactive_secondary_background_->apply_palette_brightness(factor, 1, 3,
        colors ? std::span<std::uint16_t>(colors->staged_palette(*layer_metadata_[1].palette_base / 16)) : std::span<std::uint16_t>{});
}
BattleBackgroundPalette
BattleBackgroundScene::retained_secondary_palette() const {
  return secondary_ ? secondary_->palette_state() :
         inactive_secondary_background_ ? inactive_secondary_background_->palette_state() :
         inactive_secondary_palette_;
}
std::optional<BattleBackground> BattleBackgroundScene::retained_secondary_background() const {
  return secondary_ ? secondary_ : inactive_secondary_background_;
}
const BattleBackgroundLayerMetadata &BattleBackgroundScene::layer_metadata(unsigned ordinal) const {
  return layer_metadata_.at(ordinal);
}
bool BattleBackgroundScene::can_brighten_inactive_secondary() const noexcept {
  return inactive_secondary_background_.has_value() && layer_metadata_[1].palette_base &&
         *layer_metadata_[1].palette_base <= 240 &&
         (*layer_metadata_[1].palette_base % 16) == 0;
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
  if (secondary_)
    secondary_->restore_palette();
  else if (inactive_secondary_background_)
    inactive_secondary_background_->restore_palette();
  else {
    inactive_secondary_palette_.base = inactive_secondary_palette_.backup;
    inactive_secondary_palette_.base_high_bits =
        inactive_secondary_palette_.backup_high_bits;
  }
  const unsigned first = primary_.definition().bitdepth == 4 ? 32 : 64;
  const auto primary = primary_.snapshot();
  std::copy(primary.palette.begin(), primary.palette.end(),
            colors.begin() + first);
  if (secondary_) {
    const auto second = secondary_->snapshot();
    std::copy(second.palette.begin(), second.palette.end(),
              colors.begin() + first + 32);
  }
}
void BattleBackgroundScene::halve_palette(ScenePalette &colors) {
  if (const auto dependency = palette_restoration_dependency())
    throw BattlePaletteRestorationRequired(*dependency);
  primary_.halve_palette();
  if (secondary_)
    secondary_->halve_palette();
  else if (inactive_secondary_background_)
    inactive_secondary_background_->halve_palette();
  else {
    for (auto &c : inactive_secondary_palette_.base) {
      c.red >>= 1;
      c.green >>= 1;
      c.blue >>= 1;
    }
    inactive_secondary_palette_.base_high_bits = 0;
  }
  const unsigned first = primary_.definition().bitdepth == 4 ? 32 : 64;
  const auto primary = primary_.snapshot();
  std::copy(primary.palette.begin(), primary.palette.end(),
            colors.begin() + first);
  if (secondary_) {
    const auto second = secondary_->snapshot();
    std::copy(second.palette.begin(), second.palette.end(),
              colors.begin() + first + 32);
  }
}
void BattleBackgroundScene::restore_palette(battle::PaletteBankState &state) {
  ScenePalette colors{};
  restore_palette(colors);
  const unsigned first = primary_.definition().bitdepth == 4 ? 2 : 4;
  state.staged_palette(first) = primary_.packed_palette_base();
  if (secondary_)
    state.staged_palette(first + 2) = secondary_->packed_palette_base();
}
void BattleBackgroundScene::halve_palette(battle::PaletteBankState &state) {
  ScenePalette colors{};
  halve_palette(colors);
  const unsigned first = primary_.definition().bitdepth == 4 ? 2 : 4;
  state.staged_palette(first) = primary_.packed_palette_base();
  if (secondary_)
    state.staged_palette(first + 2) = secondary_->packed_palette_base();
}
void BattleBackgroundScene::advance(BattleBackgroundSceneTick tick) {
  if (tick.frame_parity > 1)
    throw std::invalid_argument("Invalid battle scene tick phase");
  advance_effects();
  advance_backgrounds(tick);
  advance_flashes();
  advance_letterbox();
}
void BattleBackgroundScene::advance_effects(battle::PaletteBankState *colors) {
  auto &e = effects_;
  if (colors && primary_.definition().bitdepth == 2 && !secondary_ &&
      !can_brighten_inactive_secondary() && (e.darkening || e.reflect_duration || e.green_background_duration))
    throw BattlePaletteRestorationRequired(BattlePaletteDependency::InactiveSecondaryDestination);
  if (e.darkening) {
    e.brightness = std::uint16_t(e.brightness - 0x555);
    if (e.brightness < 0x6000) {
      e.brightness = 0x6000;
      e.darkening = false;
    }
    apply_palette_brightness(e.brightness >> 8, colors);
  }
  if (e.reflect_duration)
    apply_palette_brightness((--e.reflect_duration & 2) ? 0xffff : 0x100, colors);
  if (e.green_background_duration) {
    if (colors) {
      colors->staged_color(0) = e.green_background_duration == 3 ? 0x03e0 : 0;
      if (e.green_background_duration == 3 || e.green_background_duration == 2)
        colors->upload_mode = 24;
    }
    e.backdrop = e.green_background_duration == 3 ? PaletteColor{0, 31, 0}
                                                  : PaletteColor{};
    apply_palette_brightness((--e.green_background_duration & 2) ? 0 : 0x100, colors);
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
}
std::array<BattleBackgroundUpdate, 2> BattleBackgroundScene::advance_backgrounds(BattleBackgroundSceneTick tick,
                                                battle::PaletteBankState *colors) {
  if (tick.frame_parity > 1)
    throw std::invalid_argument("Invalid battle scene tick phase");
  std::array<BattleBackgroundUpdate, 2> updates{};
  const auto &e = effects_;
  const unsigned bank = primary_.definition().bitdepth == 4 ? 2 : 4;
  updates[0] = primary_.advance({0,
                    tick.frame_parity,
                    alternate_,
                    false,
                    tick.defeated,
                    e.horizontal_offset,
                    e.vertical_offset,
                    {}}, colors ? std::span<std::uint16_t>(colors->staged_palette(bank)) : std::span<std::uint16_t>{});
  if (colors && updates[0].palette) colors->upload_mode = 24;
  if (secondary_) {
    const auto first = primary_.snapshot();
    updates[1] = secondary_->advance(
        {1, tick.frame_parity, alternate_, shared_artwork_, tick.defeated,
         e.horizontal_offset, e.vertical_offset,
         shared_artwork_
             ? std::optional<
                   BattleBackgroundTick::Scroll>{{first.horizontal_scroll,
                                                  first.vertical_scroll}}
             : std::nullopt}, colors ? std::span<std::uint16_t>(colors->staged_palette(bank + 2)) : std::span<std::uint16_t>{});
    if (colors && updates[1].palette) colors->upload_mode = 24;
  }
  return updates;
}
void BattleBackgroundScene::advance_flashes() {
  auto &e = effects_;
  const auto flash = [&](std::uint16_t &duration, PaletteColor addition) {
    if (!duration)
      return;
    e.additive_flash = ((--duration / 12) & 1) != 0;
    e.addition = e.additive_flash ? addition : PaletteColor{};
  };
  flash(e.red_duration, {31, 0, 4});
  flash(e.green_duration, {0, 31, 4});
}
void BattleBackgroundScene::advance_letterbox() {
  auto &e = effects_;
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
          effects_,
          primary_.definition().bitdepth};
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
std::shared_ptr<const DirectSceneFrame>
BattleBackgroundSceneFrame::draw_layers(const ScenePalette &displayed,
                                        unsigned width, std::uint64_t frame,
                                        std::uint64_t identity) const {
  if (width < 256 || width > 4096 || width % 2 ||
      (bitdepth != 2 && bitdepth != 4) || !primary.artwork ||
      (secondary && !secondary->artwork))
    throw std::invalid_argument("Invalid layered battle background capture");
  auto out = std::make_shared<DirectSceneFrame>();
  out->width = out->atlas_width = width;
  out->frame = frame;
  out->scene_identity = identity;
  const bool second = secondary.has_value() && !shared_artwork;
  out->atlas_height = 224 * (second ? 2 : 1);
  out->atlas.resize(std::size_t(width) * out->atlas_height);
  out->palette_indices.resize(out->atlas.size(), 256);
  out->motions.push_back({0, 0, 0});
  const int margin = (int(width) - 256) / 2;
  for (unsigned ordinal = 0; ordinal < (second ? 2u : 1u); ++ordinal) {
    const auto &source = ordinal ? *secondary : primary;
    const unsigned palette = (bitdepth == 4 ? 32 : 64) + ordinal * 32;
    for (unsigned y = 0; y < 224; ++y)
      for (unsigned x = 0; x < width; ++x) {
        BattleBackgroundPixel pixel;
        if (!ordinal && shared_artwork && secondary &&
            secondary->axis != BattleDistortionAxis::None) {
          const auto &other = *secondary;
          const unsigned sx =
              (std::uint32_t(int(x) - margin) +
               (other.axis == BattleDistortionAxis::Horizontal
                    ? other.offsets[y]
                : source.axis == BattleDistortionAxis::Horizontal
                    ? source.offsets[y]
                    : source.horizontal_scroll)) &
              255;
          const unsigned sy =
              (y + 1 +
               (other.axis == BattleDistortionAxis::Vertical ? other.offsets[y]
                : source.axis == BattleDistortionAxis::Vertical
                    ? source.offsets[y]
                    : source.vertical_scroll)) &
              255;
          const auto at = sy * 256 + sx;
          pixel.index = source.artwork->indices[at];
          pixel.opaque = source.artwork->opaque[at] != 0;
        } else
          pixel = source.sample(int(x) - margin, y);
        const auto at = std::size_t(ordinal * 224 + y) * width + x;
        if (pixel.opaque) {
          out->atlas[at] = palette_argb(displayed.at(palette + pixel.index));
          out->palette_indices[at] = std::uint16_t(palette + pixel.index);
        }
      }
    const unsigned layer =
        bitdepth == 4 ? (ordinal ? 0 : 1) : (ordinal ? 3 : 2);
    const int priority = bitdepth == 4 ? (ordinal ? 6 : 5) : (ordinal ? 0 : 1);
    out->quads.push_back(
        {0, ordinal * 224, width, 224, 0, 0, priority, 0, false});
    auto &quad = out->quads.back();
    quad.layer = DirectSceneFrame::Layer(layer);
    if (effects.top_end) {
      quad.clip.top = float(effects.top_end);
      quad.clip.bottom = float(effects.bottom_start);
    }
  }
  return out;
}
} // namespace eb::native
