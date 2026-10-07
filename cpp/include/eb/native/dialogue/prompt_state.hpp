#pragma once

#include <cstdint>

namespace eb::native::dialogue {
// Shared source globals. The world/input adapter updates pressed at actual
// frame boundaries; scheduling yields must neither poll input nor advance time.
// The blinking-prompt mode remains TextOutput::policy().prompt_mode.
// battle_mode is the source BATTLE_MODE_FLAG (rendering/text), not the
// distinct encounter request BATTLE_MODE in WorldControlState::encounter.
struct PromptState {
  std::uint16_t pressed{}, input_lock{}, debug{}, battle_mode{},
      text_speed_based_wait{};
  std::uint8_t rolling_disabled{}, half_meter_speed{};
  bool operator==(const PromptState &) const = default;
};
} // namespace eb::native::dialogue
