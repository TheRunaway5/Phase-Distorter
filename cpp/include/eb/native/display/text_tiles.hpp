#pragma once
#include <array>
#include <cstdint>
#include <memory>
namespace eb::native::cutscenes {
// The actual retained BG2_BUFFER, also borrowed by cinematic initializers.
// Semantic window cells refer to the existing artwork owner; they are not
// a second mutable copy of these descriptor bytes.
struct DisplayState {
  DisplayState() = default;
  DisplayState(const DisplayState &) = delete;
  DisplayState &operator=(const DisplayState &) = delete;
  DisplayState(DisplayState &&) = delete;
  DisplayState &operator=(DisplayState &&) = delete;
  std::array<std::uint8_t,2048> text_tiles{};
  std::weak_ptr<const void> source_lifetime() const noexcept { return lifetime_; }
private:
  std::shared_ptr<const void> lifetime_ = std::make_shared<const unsigned>(0);
};
}
