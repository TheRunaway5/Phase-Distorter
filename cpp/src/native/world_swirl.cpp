#include "eb/native/world_encounter.hpp"
#include <stdexcept>

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
void configure_world_swirl(const WorldSwirlData& data, WorldSwirlState& swirl,
                           WorldEncounterVisualState& visual, unsigned id,
                           std::uint16_t options, std::uint8_t padding) {
  const auto &definition = data.definitions.at(id);
  swirl.invert = (options & 2) != 0;
  swirl.reverse = (options & 1) != 0;
  swirl.masked_layers.fill((options & 4) == 0);
  swirl.masked_layers[5] = (options & 4) != 0;
  swirl.update_in = 1;
  swirl.interval = definition.interval;
  swirl.frames_left = definition.frame_count;
  swirl.frame = std::uint8_t(definition.first_frame +
                             (swirl.reverse ? definition.frame_count : 0));
  swirl.oval = id == 0;
  swirl.oval_state.next_step = 0;
  swirl.padding = padding;
  swirl.restore_after = true;
  if (options & 0x80) {
    swirl.next = std::uint8_t(id);
    swirl.interval = 4;
    swirl.repeat_speed = 0;
    swirl.repeats_until_speedup = 8;
  } else {
    // The repeat counters deliberately retain their prior values.
    swirl.next = 0;
  }
  swirl.hdma_channel_offset = 0;
  visual.window_left.fill(255);
  visual.window_right.fill(0);
  ++visual.window_revision;
}
} // namespace eb::native
