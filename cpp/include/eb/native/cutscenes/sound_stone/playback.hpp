#pragma once
#include "eb/native/cutscenes/sound_stone/resources.hpp"
#include <optional>

namespace eb::native::cutscenes::sound_stone {
struct MelodyState {
  std::uint16_t state{}, radius_hold{}, orbit_tile_offset{}, orbit_frame{}, radius{}, angle{}, unknown12{};
  bool operator==(const MelodyState &) const = default;
};
struct State {
  std::array<MelodyState,8> melodies{};
  std::array<std::uint8_t,5> large_map{}, small_map{};
  bool operator==(const State &) const = default;
};
struct Sprite {
  std::uint16_t x{}, y{};
  std::uint8_t tile{}, flags{};
  bool large{};
  bool operator==(const Sprite &) const = default;
};
struct SequenceStep {
  bool finished{};
  std::optional<std::uint8_t> music, effect;
  bool operator==(const SequenceStep &) const = default;
};
// USE_SOUND_STONE's local sequence and drawing phases. One actual input WAIT
// precedes sequence(), then real audio calls precede draw(). No timer, input,
// background, audio or display owner is advanced implicitly by this object.
class Playback {
public:
  Playback(const Resources &,State &,std::span<const std::uint8_t> flags);
  SequenceStep sequence();
  std::vector<Sprite> draw();
  unsigned known() const noexcept { return known_; }
  std::uint16_t countdown() const noexcept { return countdown_; }
  std::uint16_t selected() const noexcept { return selected_; }
private:
  const Resources &resources_;
  State &state_;
  std::uint16_t central_hold_=15,central_frame_{},start_delay_=60,finish_delay_{},candidate_{},countdown_{},selected_{};
  unsigned known_{};
  bool draw_pending_{},finished_{};
};
}
