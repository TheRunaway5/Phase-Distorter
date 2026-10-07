#include "eb/native/world_encounter_effects.hpp"
#include "eb/native/battle/frame_display.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
std::uint16_t word(unsigned value) { return std::uint16_t(value); }
int signed_word(unsigned value) {
  return value < 0x8000 ? int(value) : int(value) - 0x10000;
}
EncounterWindowInterval horizontal(std::uint16_t center, unsigned radius) {
  auto right = word(center + radius);
  if (right & 0x8000) return {255, 0};
  right = std::min<unsigned>(255, right);
  auto left = word(center - radius);
  if (left & 0x8000) left = 0;
  else if (left >= 256) return {255, 0};
  return {std::uint8_t(left), std::uint8_t(right)};
}
std::uint16_t dimension(std::uint16_t current, std::uint16_t velocity) {
  // CLC; SBC computes -velocity-1. Its signed test, followed by an unsigned
  // magnitude comparison, is intentional (including velocity8000).
  if (!(word(~velocity) & 0x8000) && current < word(0u - velocity))
    return 0;
  return word(current + velocity);
}
} // namespace

WorldEncounterEffectData import_world_encounter_effect_data(
    std::span<const std::uint8_t> bytes, GameVersion version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unknown encounter effect content region");
  const auto byte = [&](std::size_t at) {
    if (at >= bytes.size())
      throw std::invalid_argument("Truncated encounter effect content");
    return bytes[at];
  };
  const auto read_word = [&](std::size_t at) {
    return std::uint16_t(byte(at) | unsigned(byte(at + 1)) << 8);
  };
  std::array<WorldEncounterClip, 126> clips{};
  for (unsigned i = 0; i < clips.size(); ++i) {
    std::size_t at = 0xe0000 + read_word(0xedc45 + i * 2);
    if (at < 0xe6914 || at >= 0xedc45)
      throw std::invalid_argument("Encounter clip escapes authored catalog");
    const auto mode = byte(at++);
    if (mode != 1 && mode != 4)
      throw std::invalid_argument("Unsupported encounter clip interval shape");
    auto &clip = clips[i];
    clip.second_window = mode == 4;
    unsigned row = 0;
    for (;;) {
      if (at >= 0xedc45)
        throw std::invalid_argument("Unterminated encounter clip");
      const unsigned run = byte(at++);
      if (!run) break;
      const unsigned count = (run & 127) ? (run & 127) : 128;
      if (count > 224 - row)
        throw std::invalid_argument("Encounter clip exceeds its 224 rows");
      EncounterWindowRow intervals{};
      for (unsigned line = 0; line < count; ++line) {
        // Descriptor80 holds one value for128rows; decrementing it removes
        // the repeat bit before the second row in the actual source format.
        if (!line || run > 128) {
          const auto bytes_needed = clip.second_window ? 4u : 2u;
          if (at + bytes_needed > 0xedc45)
            throw std::invalid_argument("Truncated encounter interval run");
          intervals[0] = {byte(at), byte(at + 1)};
          intervals[1] = clip.second_window
                             ? EncounterWindowInterval{byte(at + 2), byte(at + 3)}
                             : EncounterWindowInterval{255, 0};
          at += bytes_needed;
        }
        clip.rows[row++] = intervals;
      }
    }
    if (row != 224)
      throw std::invalid_argument("Encounter clip does not cover 224 rows");
  }
  std::array<std::uint8_t, 257> profile{};
  const unsigned profile_at = version == GameVersion::JP ? 0xb2de : 0xb2ff;
  for (unsigned i = 0; i < profile.size(); ++i) profile[i] = byte(profile_at + i);
  std::vector<WorldOvalStep> steps;
  const std::array<unsigned, 5> starts = version == GameVersion::JP
      ? std::array<unsigned, 5>{0x47a37, 0x47a63, 0x47a8f, 0x47abb, 0x3f35e}
      : std::array<unsigned, 5>{0x4a5ce, 0x4a5fa, 0x4a626, 0x4a652, 0x3f819};
  for (auto at : starts) {
    for (;;) {
      WorldOvalStep step;
      step.duration = byte(at);
      if (step.duration) {
        step.center_x = read_word(at + 2); step.center_y = read_word(at + 4);
        step.width = read_word(at + 6); step.height = read_word(at + 8);
        step.center_dx = read_word(at + 10); step.center_dy = read_word(at + 12);
        step.velocity_x = read_word(at + 14); step.velocity_y = read_word(at + 16);
        step.acceleration_x = read_word(at + 18);
        step.acceleration_y = read_word(at + 20);
      }
      steps.push_back(step);
      if (!step.duration) break;
      at += 22;
    }
  }
  return {std::move(clips), std::move(profile), std::move(steps)};
}

unsigned WorldEncounterEffectData::oval_sequence(unsigned sequence) const {
  if (sequence >= 5) throw std::out_of_range("Unknown authored oval sequence");
  unsigned at = 0;
  for (unsigned i = 0; i < sequence; ++i) {
    while (oval_steps.at(at++).duration) {}
  }
  if (at >= oval_steps.size() || !oval_steps.at(at).duration)
    throw std::invalid_argument("Missing authored oval sequence");
  return at;
}

std::array<EncounterWindowInterval, 224> encounter_ellipse(
    const std::array<std::uint8_t, 257> &profile, std::uint16_t center_x,
    std::uint16_t center_y, std::uint8_t radius_x, std::uint8_t radius_y) {
  std::array<EncounterWindowInterval, 224> rows;
  rows.fill({255, 0});
  const auto store = [&](std::uint16_t at, EncounterWindowInterval interval) {
    if (at < 448) rows[at / 2] = interval;
  };
  const auto interval = [&](std::uint16_t distance) {
    unsigned radius = radius_x;
    if (distance) {
      // Radius bytes bound the quotient to the imported endpoint256. A zero
      // vertical radius only reaches distance0 in the source traversal.
      if (!radius_y || distance > radius_y)
        throw std::invalid_argument("Ellipse escaped its authored profile");
      const unsigned divisor = (unsigned(distance) << 8) / radius_y;
      radius = (unsigned(radius_x) * profile[divisor] + 128) >> 8;
    }
    return horizontal(center_x, radius);
  };
  std::uint16_t at{}, distance{};
  if (!(center_y & 0x8000) && center_y >= 112) {
    const auto before = word(center_y - radius_y);
    if (signed_word(before) > 0) {
      at = word(unsigned(before) * 2);
      distance = radius_y;
    } else distance = word(before + radius_y);
    do {
      const auto value = interval(distance);
      store(at, value);
      const auto reflected = word(at + unsigned(distance) * 4);
      if (reflected < 448) store(reflected, value);
      at = word(at + 2);
      distance = word(distance - 1);
    } while (!(distance & 0x8000));
  } else {
    at = 446;
    const auto after = word(224u - center_y - radius_y);
    if (signed_word(after) > 0) {
      at = word(at - unsigned(after) * 2);
      distance = radius_y;
    } else distance = word(after + radius_y);
    do {
      const auto value = interval(distance);
      store(at, value);
      const auto reflected = word(at - unsigned(distance) * 4);
      if (!(reflected & 0x8000)) store(reflected, value);
      at = word(at - 2);
      distance = word(distance - 1);
    } while (!(distance & 0x8000));
  }
  return rows;
}

WorldEncounterEffects::WorldEncounterEffects(
    const WorldSwirlData &definitions, const WorldEncounterEffectData &data,
    WorldSwirlState &swirl, ScenePalette &colors,
    WorldEncounterVisualState &visual, WorldEncounterRestoration &restoration)
    : definitions_(definitions), data_(data), swirl_(swirl), colors_(&colors),
      visual_(visual), restoration_(restoration) {
  if (!restoration_matches())
    throw std::invalid_argument("Encounter restoration owns a different scene");
}
WorldEncounterEffects::WorldEncounterEffects(
    const WorldSwirlData &definitions, const WorldEncounterEffectData &data,
    WorldSwirlState &swirl, battle::PaletteBankState &colors,
    WorldEncounterVisualState &visual, WorldEncounterRestoration &restoration)
    : definitions_(definitions), data_(data), swirl_(swirl), battle_colors_(&colors),
      visual_(visual), restoration_(restoration) {
  if (!restoration_matches())
    throw std::invalid_argument("Encounter restoration owns a different battle palette");
}
bool WorldEncounterEffects::restoration_matches() const noexcept {
  return colors_ ? restoration_.uses(*colors_, visual_)
                 : restoration_.uses_battle_palette(*battle_colors_, visual_);
}
bool WorldEncounterEffects::uses(
    const WorldSwirlData &data, const WorldSwirlState &swirl,
    const battle::PaletteBankState &colors, const WorldEncounterVisualState &visual) const noexcept {
  return &data == &definitions_ && &swirl == &swirl_ && &colors == battle_colors_ &&
         &visual == &visual_ && restoration_matches();
}
void WorldEncounterEffects::check() const {
  if (failed_ || executing_ || !restoration_matches())
    throw std::logic_error("Encounter effects are failed, busy or rebound");
}
bool WorldEncounterEffects::uses(
    const WorldSwirlData &data, const WorldSwirlState &swirl,
    const ScenePalette &colors, const WorldEncounterVisualState &visual) const noexcept {
  return &data == &definitions_ && &swirl == &swirl_ && &colors == colors_ &&
         &visual == &visual_ && restoration_.uses(colors, visual);
}
bool WorldEncounterEffects::uses(const WorldEncounterRestoration &owner) const noexcept {
  return &owner == &restoration_ && restoration_matches();
}
void WorldEncounterEffects::bind_display(battle::FrameDisplay &display) {
  check();
  if (display_ && display_ != &display)
    throw std::logic_error("Encounter effects already bound to another display");
  display_ = &display;
}
void WorldEncounterEffects::clear_battle_window() {
  check();
  if (!display_)
    throw std::logic_error("Battle-window cleanup requires its actual display transport");
  swirl_.update_in = 0;
  swirl_.oval = false;
  display_->disable_swirl(0);
  visual_.window_layers.fill(false);
  visual_.window_invert = false;
  ++visual_.window_revision;
}
void WorldEncounterEffects::begin_oval(std::uint16_t mode) {
  check();
  const auto start = data_.oval_sequence(mode == 2 ? 4 : mode == 1 ? 1 : 0);
  // Validate immutable sequence and definition before the in-place setup.
  (void)definitions_.definitions.at(0);
  configure_world_swirl(definitions_, swirl_, visual_, 0, 0);
  swirl_.active_oval_mode = std::uint8_t(mode);
  swirl_.masked_layers = {true, true, false, false, true, false}; // mask19.
  swirl_.oval_state.next_step = start;
}
void WorldEncounterEffects::close_oval() {
  check();
  const auto start = data_.oval_sequence(swirl_.active_oval_mode ? 3 : 2);
  (void)definitions_.definitions.at(0);
  configure_world_swirl(definitions_, swirl_, visual_, 0, 0);
  swirl_.masked_layers = {true, true, false, false, true, false};
  swirl_.oval_state.next_step = start;
}
bool WorldEncounterEffects::animation_active(const battle::PsiAnimationState &psi) const {
  check();
  return psi.time_until_next_frame != 0 || swirl_.update_in != 0;
}
void WorldEncounterEffects::install(const EncounterWindowMask &mask, bool second) {
  visual_.window_pattern = mask;
  visual_.writes_second_window = second;
  visual_.window_rows_enabled = true;
  visual_.window_layers = swirl_.masked_layers;
  visual_.window_invert = swirl_.invert;
  ++visual_.window_revision;
}
EncounterWindowMask WorldEncounterEffects::windows(bool reset_second, bool disable_rows) const {
  check();
  const bool active = visual_.window_pattern && visual_.window_rows_enabled && !disable_rows;
  EncounterWindowMask rows{};
  if (active) rows = *visual_.window_pattern;
  for (unsigned y = 0; y < rows.size(); ++y)
    for (unsigned i = 0; i < 2; ++i)
      if (!active || (i == 1 && !visual_.writes_second_window))
        rows[y][i] = i == 1 && reset_second ? EncounterWindowInterval{255, 0} :
            EncounterWindowInterval{visual_.window_left[i], visual_.window_right[i]};
  return rows;
}
void WorldEncounterEffects::disable_row_streams() {
  check();
  if (visual_.window_rows_enabled) {
    visual_.window_rows_enabled = false;
    ++visual_.window_revision;
  }
}
void WorldEncounterEffects::complete_publication(bool reset_second, bool disable_rows) {
  const auto last = windows(reset_second, disable_rows).back();
  if (disable_rows) disable_row_streams();
  bool changed = false;
  for (unsigned i = 0; i < 2; ++i) {
    changed |= visual_.window_left[i] != last[i].left || visual_.window_right[i] != last[i].right;
    visual_.window_left[i] = last[i].left;
    visual_.window_right[i] = last[i].right;
  }
  if (changed) ++visual_.window_revision;
}
void WorldEncounterEffects::advance_oval() {
  auto &s = swirl_.oval_state;
  if (!--swirl_.update_in) {
    const auto &step = data_.oval_steps.at(s.next_step);
    swirl_.update_in = step.duration;
    if (!step.duration) { swirl_.oval = false; return; }
    if (step.center_x != 0x8000) s.center_x = step.center_x;
    if (step.center_y != 0x8000) s.center_y = step.center_y;
    if (step.width != 0x8000) s.width = step.width;
    if (step.height != 0x8000) s.height = step.height;
    s.center_dx = step.center_dx; s.center_dy = step.center_dy;
    s.velocity_x = step.velocity_x; s.velocity_y = step.velocity_y;
    s.acceleration_x = step.acceleration_x; s.acceleration_y = step.acceleration_y;
    ++s.next_step;
  }
  s.center_x = word(s.center_x + s.center_dx);
  s.center_y = word(s.center_y + s.center_dy);
  s.velocity_x = word(s.velocity_x + s.acceleration_x);
  s.velocity_y = word(s.velocity_y + s.acceleration_y);
  s.width = dimension(s.width, s.velocity_x);
  s.height = dimension(s.height, s.velocity_y);
  if (!(s.width || s.height)) {
    swirl_.update_in = 0;
    swirl_.oval = false;
    return;
  }
  const auto oval = encounter_ellipse(data_.ellipse_profile, s.center_x, s.center_y,
                                    s.width >> 8, s.height >> 8);
  EncounterWindowMask rows{};
  for (unsigned y = 0; y < rows.size(); ++y) rows[y][0] = oval[y];
  install(rows, false);
  if (display_) display_->install_oval(rows);
}
void WorldEncounterEffects::advance_clip() {
  if (--swirl_.update_in) return;
  // Every supported repeat reload is nonempty. Reject a custom empty repeat
  // explicitly instead of reproducing the original's unbounded inner loop.
  for (;;) {
    if (swirl_.frames_left) {
      swirl_.update_in = swirl_.interval;
      unsigned frame;
      if (swirl_.reverse) frame = --swirl_.frame;
      else frame = swirl_.frame++;
      const auto &clip = data_.clips.at(frame);
      const auto old_offset = swirl_.hdma_channel_offset;
      const auto next_offset = std::uint8_t((old_offset + 1) & 1);
      if (old_offset >= 2)
        throw std::out_of_range("Encounter clip channel offset");
      install(clip.rows, clip.second_window);
      if (display_) display_->replace_swirl(old_offset, next_offset, clip.rows, clip.second_window);
      swirl_.hdma_channel_offset = next_offset;
      --swirl_.frames_left;
      return;
    }
    if (!swirl_.next) break;
    if (--swirl_.repeats_until_speedup) {
      const auto &definition = definitions_.definitions.at(swirl_.next);
      if (!definition.frame_count)
        throw std::invalid_argument("Cannot repeat an empty encounter clip sequence");
      swirl_.frames_left = definition.frame_count;
      swirl_.frame = std::uint8_t(definition.first_frame +
                                 (swirl_.reverse ? definition.frame_count : 0));
      continue;
    }
    switch (++swirl_.repeat_speed) {
    case 1: swirl_.repeats_until_speedup = 4; swirl_.interval = 3; break;
    case 2: swirl_.repeats_until_speedup = 6; swirl_.interval = 2; break;
    case 3: swirl_.repeats_until_speedup = 12; swirl_.interval = 1; break;
    default: break;
    }
    if (!swirl_.repeats_until_speedup) break;
  }
  if (swirl_.padding) {
    swirl_.update_in = 1;
    --swirl_.padding;
    return;
  }
  if (!swirl_.restore_after) return;
  if (display_) display_->disable_swirl(swirl_.hdma_channel_offset);
  visual_.window_pattern.reset();
  visual_.window_rows_enabled = false;
  visual_.window_layers.fill(false);
  visual_.window_invert = false;
  ++visual_.window_revision;
  restoration_.restore_battle_palettes();
  visual_.fixed_color = {};
  restoration_.restore_selected_layer_configuration();
}
void WorldEncounterEffects::advance() {
  check();
  executing_ = true;
  try {
    if (swirl_.update_in) {
      if (swirl_.oval) advance_oval();
      else advance_clip();
    }
    executing_ = false;
  } catch (...) {
    executing_ = false;
    failed_ = true;
    throw;
  }
}
} // namespace eb::native
