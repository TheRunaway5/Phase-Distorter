#pragma once

#include "eb/native/world_collision.hpp"
#include <array>
#include <cstdint>
#include <span>
#include <vector>

namespace eb::native {
class WalkingData;
class PeripheralState;

struct GeneratedInputRun {
  std::uint8_t frames{};
  std::uint16_t pad{};
  bool operator==(const GeneratedInputRun &) const = default;
};

// Value content, including its zero-length terminator. Earlier zero-length
// runs are meaningful: the original run counter wraps at 256 frames.
class GeneratedInputSequence {
public:
  explicit GeneratedInputSequence(std::vector<GeneratedInputRun>);
  std::span<const GeneratedInputRun> runs() const noexcept { return runs_; }

private:
  const std::vector<GeneratedInputRun> runs_;
};

struct GeneratedInputDataLayout {
  std::size_t pads, angle_bases, angle_thresholds;
};
GeneratedInputDataLayout generated_input_data_layout(GameVersion);
class GeneratedInputData {
public:
  GeneratedInputData(std::span<const std::uint8_t>, GameVersion);
  GeneratedInputData(std::span<const std::uint8_t>, GameVersion,
                     GeneratedInputDataLayout);
  GameVersion version() const noexcept { return version_; }
  std::uint16_t pad(CollisionDirection) const;
  std::uint16_t angle(CollisionPoint from, CollisionPoint to,
                      PeripheralState* peripherals = nullptr) const;
  CollisionDirection direction(CollisionPoint from, CollisionPoint to) const;

private:
  GameVersion version_;
  std::array<std::uint16_t, 8> pads_{};
  std::array<std::uint16_t, 13> angle_bases_{};
  std::array<std::uint16_t, 16> angle_thresholds_{};
};

struct GeneratedInputRoute {
  CollisionPoint start, target;
  // Explicit prediction phase, not actor movement. The source door callers
  // read uninitialized workspace here; no emulated scratch owner is retained.
  std::array<std::uint16_t, 2> fractions{};
};
class GeneratedInputBuilder {
public:
  void reset() noexcept;
  void append_pad(std::uint16_t);
  void repeat_direction(const GeneratedInputData &, CollisionDirection,
                        std::uint16_t frames);
  std::uint16_t route(const GeneratedInputData &, const WalkingData &,
                      GeneratedInputRoute);
  GeneratedInputSequence publish() const;
  std::span<const GeneratedInputRun> runs() const noexcept {
    return {runs_.data(), index_ + 1};
  }

private:
  std::array<GeneratedInputRun, 64> runs_{};
  std::size_t index_{};
};
} // namespace eb::native
