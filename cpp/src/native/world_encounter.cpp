#include "eb/native/world_encounter.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native {
WorldSwirlData import_world_swirl_data(std::span<const std::uint8_t> content) {
  // Both regional content catalogs place the seven authored definitions here.
  constexpr unsigned table = 0xedd41;
  if (content.size() < table + 28)
    throw std::invalid_argument("Truncated native swirl definitions");
  WorldSwirlData data;
  for (unsigned i = 0; i < data.definitions.size(); ++i) {
    const auto at = table + i * 4;
    data.definitions[i] = {content[at], content[at + 1], content[at + 2]};
    if (unsigned(content[at + 1]) + content[at + 2] > 126)
      throw std::invalid_argument("Swirl definition escapes its clip catalog");
  }
  return data;
}
WorldEncounter::WorldEncounter(
    const WorldSwirlData &data, const WorldEncounterState &encounter,
    WorldSwirlState &swirl, ScenePalette &colors, const PaletteColor &backup,
    WorldEncounterVisualState &visual, WorldEncounterMusic music)
    : data_(data), encounter_(encounter), swirl_(swirl), colors_(colors),
      backup_(backup), visual_(visual), music_(std::move(music)) {}
void WorldEncounter::idle() const {
  if (failed_)
    throw std::logic_error("Native encounter owner failed");
  if (executing_)
    throw std::logic_error("Native encounter is already executing");
}
bool WorldEncounter::uses(
    const WorldSwirlData &data, const WorldEncounterState &encounter,
    const WorldSwirlState &swirl, const ScenePalette &colors,
    const PaletteColor &backup, const WorldEncounterVisualState &visual) const noexcept {
  return &data == &data_ && &encounter == &encounter_ && &swirl == &swirl_ &&
         &colors == &colors_ && &backup == &backup_ && &visual == &visual_;
}
void WorldEncounter::configure(unsigned id, std::uint16_t options,
                               std::uint8_t padding) {
  const auto &definition = data_.definitions.at(id);
  swirl_.invert = (options & 2) != 0;
  swirl_.reverse = (options & 1) != 0;
  swirl_.masked_layers.fill((options & 4) == 0);
  swirl_.masked_layers[5] = (options & 4) != 0;
  swirl_.update_in = 1;
  swirl_.interval = definition.interval;
  swirl_.frames_left = definition.frame_count;
  swirl_.frame = std::uint8_t(definition.first_frame +
                             (swirl_.reverse ? definition.frame_count : 0));
  swirl_.oval = id == 0;
  swirl_.oval_state.next_step = 0;
  swirl_.padding = padding;
  swirl_.restore_after = true;
  if (options & 0x80) {
    swirl_.next = std::uint8_t(id);
    swirl_.interval = 4;
    swirl_.repeat_speed = 0;
    swirl_.repeats_until_speedup = 8;
  } else {
    // The repeat counters deliberately retain their prior values.
    swirl_.next = 0;
  }
  visual_.window_left.fill(255);
  visual_.window_right.fill(0);
  ++visual_.window_revision;
}
void WorldEncounter::configure_swirl(unsigned id, std::uint16_t options,
                                     std::uint8_t padding) {
  idle();
  try {
    configure(id, options, padding);
  } catch (...) {
    failed_ = true;
    throw;
  }
}
bool WorldEncounter::swirl_active() const noexcept {
  // CLC; SBC #4 subtracts five. Despite its name, BRANCHLTEQS only tests
  // signed negative here, so zero passes and padding five remains active.
  return swirl_.update_in && swirl_.padding >= 5;
}
bool WorldEncounter::uses_effect_state(const WorldSwirlData &data, const WorldSwirlState &swirl,
                                      const ScenePalette &colors, const WorldEncounterVisualState &visual) const noexcept {
  return &data_ == &data && &swirl_ == &swirl && &colors_ == &colors && &visual_ == &visual;
}
void WorldEncounter::palette_changed() {
  idle();
  visual_.palette_dirty = true;
}
void WorldEncounter::begin_swirl() {
  idle();
  executing_ = true;
  try {
    unsigned id = 1, options = 14, track = 176;
    PaletteColor fixed{4, 4, 0};
    switch (encounter_.initiative) {
    case WorldBattleInitiative::Normal: break;
    case WorldBattleInitiative::PartyFirst:
      fixed = {28, 5, 12};
      options = 6;
      break;
    case WorldBattleInitiative::EnemiesFirst:
      fixed = {0, 31, 31};
      options = 6;
      track = 9;
      break;
    default:
      throw std::invalid_argument("Undefined native battle initiative");
    }
    if (encounter_.group >= 448) {
      id = 3;
      options = 14;
      track = 8;
    }
    if (!music_)
      throw std::logic_error("Battle swirl requires the existing music adapter");
    music_({std::uint16_t(track)});
    colors_[0] = backup_;
    visual_.palette_dirty = true;
    visual_.visible_layers = {true, true, true, false, true};
    visual_.fixed_color = fixed;
    visual_.subtract = true;
    visual_.half_intensity = (options & 8) != 0;
    visual_.use_subscreen = false;
    visual_.clip_colors = ColorWindowPolicy::Never;
    visual_.prevent_math = ColorWindowPolicy::Outside;
    visual_.color_math_layers.fill(true);
    configure(id, std::uint16_t(options), 30);
    swirl_.masked_layers = {false, false, false, false, false, true};
    swirl_.restore_after = false;
    executing_ = false;
  } catch (...) {
    failed_ = true;
    executing_ = false;
    throw;
  }
}
} // namespace eb::native
