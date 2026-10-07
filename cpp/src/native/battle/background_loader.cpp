#include "eb/native/battle/background_loader.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::battle {
BackgroundLoader::BackgroundLoader(const BattleBackgroundScenes &resources,
    BattleBackgroundScene &background, BackgroundDisplayState &layout,
    PaletteBankState &colors, PsiScratch &scratch, PsiDisplayState &display,
    FrameDisplay &frames, const WorldDisplayFade &fade,
    const story::TickState &clock, const FrameState &state,
    WorldSwirlState &swirl, WorldEncounterVisualState &visual,
    const WorldLayerConfigurations &layers, WorldLayerSelection &selection)
    : resources_(resources), background_(background), layout_(layout), colors_(colors),
      scratch_(scratch), display_(display), frames_(frames), fade_(fade), clock_(clock),
      state_(state), swirl_(swirl), visual_(visual), layers_(layers), selection_(selection) {
  if (!frames.uses(display))
    throw std::invalid_argument("Background loader requires its actual display transport");
  (void)layers.at(1); (void)layers.at(3); (void)layers.at(7);
  background_.bind_display(display_, layout_);
}
bool BackgroundLoader::uses(const BattleBackgroundScene &background,
    const PaletteBankState &colors, const PsiScratch &scratch,
    const PsiDisplayState &display, const FrameDisplay &frames) const noexcept {
  return &background_ == &background && &colors_ == &colors && &scratch_ == &scratch &&
         &display_ == &display && &frames_ == &frames;
}
void BackgroundLoader::load(unsigned group) {
  load(resources_.selection(group), group == 478 ? BattleArtworkPublication::GiygasPrayer
                                                : BattleArtworkPublication::Ordinary);
}
void BackgroundLoader::load(BattleBackgroundPair pair, BattleArtworkPublication publication) {
  if (active_ || failed_ || display_.failed())
    throw std::logic_error("Background loader is active or failed");
  if (!(fade_.state().brightness & 0x80))
    throw std::logic_error("Native background loading requires its actual forced-blank startup phase");
  if (swirl_.hdma_channel_offset >= 2)
    throw std::out_of_range("Background loader swirl channel offset");
  const auto &layers = resources_.layers();
  const unsigned depth = layers.definition(pair.primary).bitdepth;
  BattleBackgroundStart start;
  start.frame_parity = clock_.frame_counter & 1;
  start.previous_alternate = background_.alternate_distortion();
  start.defeated = state_.giygas_phase == 0xffff;
  const auto old = background_.snapshot();
  start.effects = {old.effects.horizontal_offset, old.effects.vertical_offset};
  start.reflect_duration = old.effects.reflect_duration;
  start.green_background_duration = old.effects.green_background_duration;
  start.backdrop = old.effects.backdrop;
  start.inherited_blend = old.blend;
  start.retained_secondary_palette = background_.retained_secondary_palette();
  start.retained_secondary_background = background_.retained_secondary_background();
  start.retained_secondary_metadata = background_.layer_metadata(1);
  start.primary_compression_acceleration_high = std::uint8_t(
      background_.primary().state().distortion.compression_acceleration >> 8);
  if (start.retained_secondary_background)
    start.secondary_compression_acceleration_high = std::uint8_t(
        start.retained_secondary_background->state().distortion.compression_acceleration >> 8);
  start.primary_axis = old.primary.axis;
  start.primary_offsets = old.primary.offsets;
  if (old.secondary) {
    start.secondary_axis = old.secondary->axis;
    start.secondary_offsets = old.secondary->offsets;
  } else if (start.retained_secondary_background) {
    const auto previous = start.retained_secondary_background->snapshot();
    start.secondary_axis = previous.axis;
    start.secondary_offsets = previous.offsets;
  }
  if (depth == 4) {
    start.primary_scroll = publication == BattleArtworkPublication::GiygasPrayer
        ? BattleBackgroundTick::Scroll{} : BattleBackgroundTick::Scroll{
            display_.staged_scroll[1].x, display_.staged_scroll[1].y};
    start.secondary_scroll = {display_.staged_scroll[0].x, display_.staged_scroll[0].y};
  }
  // Catalog and replacement allocation are admitted before LOAD mutates its
  // owners. Unwritten artwork is supplied by this exact retained display;
  // immutable catalog-only callers continue to reject that dependency.
  auto next = resources_.prepare_impl(pair, start, publication, true);
  next.bind_display(display_, layout_);
  const auto copy = [&](std::uint16_t destination, std::uint16_t count, std::uint8_t mode = 0) {
    auto transfer = display_.begin_transfer({PsiTransferKind::Vram, 0, count, destination, mode}, scratch_, fade_);
    if (!transfer->advance())
      throw std::logic_error("Forced-blank background copy unexpectedly suspended");
  };
  const auto decode = [&](std::span<const std::uint8_t> bytes) {
    std::copy(bytes.begin(), bytes.end(), scratch_.bytes.begin());
  };
  const auto configure = [&](unsigned layer, std::uint16_t map, std::uint16_t graphics) {
    layout_.maps[layer] = std::uint8_t((map >> 8) & 0xfc);
    const unsigned pair_index = layer / 2;
    if (layer & 1)
      layout_.graphics[pair_index] = std::uint8_t((layout_.graphics[pair_index] & 15) | ((graphics >> 8) & 0xf0));
    else
      layout_.graphics[pair_index] = std::uint8_t((layout_.graphics[pair_index] & 0xf0) | ((graphics >> 12) & 15));
    display_.staged_scroll[layer] = {};
  };
  const auto arrangement = [&](unsigned layer, unsigned palette, std::uint16_t destination) {
    decode(layers.arrangement(layer));
    for (unsigned i = 1; i < 0x800; i += 2)
      scratch_.bytes[i] = std::uint8_t((scratch_.bytes[i] & 0xdf) | palette);
    copy(destination, 0x800);
  };
  const auto select = [&](unsigned value) {
    selection_.value = value;
    apply_world_layer_configuration(layers_, selection_, visual_);
  };
  const auto publish_layer = [&](const BattleBackground &layer, unsigned base, unsigned ordinal) {
    colors_.staged_palette(base / 16) = layers.palette(ordinal ? pair.secondary : pair.primary);
    if (depth == 4) {
      // GENERATE rotates the staged output from the unrotated working base.
      const auto frame = layer.snapshot();
      // Cycling retains source bit15. Stage through the exact immutable
      // raw palette generator rather than reconstructing from RGB colors.
      auto generated = layers.prepare(ordinal ? pair.secondary : pair.primary);
      generated.set_initial_scroll(ordinal ? start.secondary_scroll.horizontal : start.primary_scroll.horizontal,
                                   ordinal ? start.secondary_scroll.vertical : start.primary_scroll.vertical);
      const auto update = generated.advance({ordinal, start.frame_parity, start.previous_alternate, false, start.defeated,
                         start.effects.horizontal, start.effects.vertical, {}}, colors_.staged_palette(base / 16));
      colors_.upload_mode = 24;
      if (!start.defeated) {
        display_.staged_scroll[ordinal ? 0 : 1] = {frame.horizontal_scroll, frame.vertical_scroll};
        if (update.distortion_installed) frames_.install_background(ordinal);
      }
    }
  };
  active_ = true;
  try {
    decode(layers.graphics(pair.primary));
    if (publication == BattleArtworkPublication::GiygasPrayer) {
      configure(1, 0x5c00, 0x3000);
      copy(0x3000, 0x5000);
    } else copy(0x1000, 0x2000);
    scratch_.bytes[0] = 0;
    copy(0x5800, 0x800, 3);
    copy(0, 0x800, 3);
    layout_.mode = std::uint8_t((layout_.mode & 0xf0) | (depth == 4 ? 9 : 8));
    if (depth == 2) {
      configure(0, 0x7c00, 0x6000);
      configure(1, 0x5800, 0);
      configure(2, 0x5c00, 0x1000);
      configure(3, 0x0c00, 0x3000);
    }
    arrangement(pair.primary, depth == 4 ? 8 : 0, 0x5c00);
    publish_layer(next.primary(), depth == 4 ? 32 : 64, 0);
    if (depth == 4) select(1);
    frames_.letterbox.visible = depth == 4 ? 0x17 : 0x0817;
    frames_.letterbox.nonvisible = depth == 4 ? 0x15 : 0x13;
    if (pair.secondary) {
      if (depth == 2 || (pair.style & 4)) {
        select(depth == 4 ? 7 : 3);
        decode(layers.graphics(pair.secondary));
        copy(depth == 4 ? 0 : 0x3000, depth == 4 ? 0x2000 : 0x1800);
        arrangement(pair.secondary, depth == 4 ? 16 : 0, depth == 4 ? 0x5800 : 0x0c00);
        publish_layer(*next.secondary(), depth == 4 ? 64 : 96, 1);
        if (depth == 4) {
          frames_.letterbox.visible = 0x0215;
          frames_.letterbox.nonvisible = 0x14;
        }
      }
    }
    // Targeted writes stop here; disabled secondary metadata and scratch tails
    // remain exactly the retained incoming values inside the admitted owner.
    background_ = std::move(next);
    frames_.letterbox.top_end = std::uint16_t(background_.effects().top_end);
    frames_.letterbox.bottom_start = std::uint16_t(background_.effects().bottom_start);
    if (frames_.letterbox.top_end) frames_.install_letterbox();
    // C2E9ED preserves retained window programs and bounds, removes only the
    // current alternating swirl channel and resets actual fixed color/masks.
    swirl_.update_in = 0;
    frames_.disable_swirl(swirl_.hdma_channel_offset);
    visual_.fixed_color = {};
    visual_.window_layers.fill(false);
    visual_.window_invert = false;
    active_ = false;
  } catch (...) {
    active_ = false;
    failed_ = true;
    throw;
  }
}
} // namespace eb::native::battle
