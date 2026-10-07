#include "eb/native/world_generated_input.hpp"
#include "eb/native/world_walking.hpp"
#include "eb/native/peripheral_state.hpp"
#include <bit>
#include <limits>
#include <stdexcept>

namespace eb::native {
namespace {
std::uint16_t wrap(unsigned value) { return std::uint16_t(value); }
std::int16_t signed_word(std::uint16_t value) {
  return std::bit_cast<std::int16_t>(value);
}
bool reached(std::uint16_t position, std::uint16_t target) {
  const auto difference = wrap(unsigned(position) - target);
  const auto magnitude =
      signed_word(difference) < 0 ? wrap(0u - difference) : difference;
  // The source's signed comparison also considers -32768 close after its
  // wrapped absolute value. Preserve that boundary rather than widening it.
  return signed_word(magnitude) < 2;
}
} // namespace

GeneratedInputSequence::GeneratedInputSequence(
    std::vector<GeneratedInputRun> runs)
    : runs_(std::move(runs)) {
  if (runs_.empty() || runs_.back().frames != 0)
    throw std::invalid_argument("Generated input requires a final terminator");
}

GeneratedInputDataLayout generated_input_data_layout(GameVersion version) {
  if (version == GameVersion::US)
    return {0x48c59, 0x41fc5, 0x41fdf};
  if (version == GameVersion::JP)
    return {0x462a3, 0x41f11, 0x41f2b};
  throw std::invalid_argument("Unknown generated input content region");
}
GeneratedInputData::GeneratedInputData(std::span<const std::uint8_t> image,
                                       GameVersion version)
    : GeneratedInputData(image, version, generated_input_data_layout(version)) {
}
GeneratedInputData::GeneratedInputData(std::span<const std::uint8_t> image,
                                       GameVersion version,
                                       GeneratedInputDataLayout layout)
    : version_(version) {
  (void)generated_input_data_layout(version);
  const auto import = [&](std::size_t start, auto &destination) {
    if (start > image.size() || destination.size() * 2 > image.size() - start)
      throw std::out_of_range("Truncated generated input content");
    for (unsigned i = 0; i < destination.size(); ++i)
      destination[i] = std::uint16_t(image[start + 2 * i] |
                                     unsigned(image[start + 2 * i + 1]) << 8);
  };
  import(layout.pads, pads_);
  import(layout.angle_bases, angle_bases_);
  import(layout.angle_thresholds, angle_thresholds_);
}
std::uint16_t GeneratedInputData::pad(CollisionDirection direction) const {
  if (unsigned(direction) >= pads_.size())
    throw std::out_of_range("Generated input direction exceeds authored pads");
  return pads_[unsigned(direction)];
}
std::uint16_t GeneratedInputData::angle(CollisionPoint from,
                                        CollisionPoint to, PeripheralState* peripherals) const {
  const auto dx = wrap(unsigned(from.x) - to.x),
             dy = wrap(unsigned(from.y) - to.y);
  unsigned x = signed_word(dx) < 0 ? wrap(0u - dx) : dx;
  unsigned y = signed_word(dy) < 0 ? wrap(0u - dy) : dy;
  while (x >= 256) {
    x >>= 1;
    y >>= 1;
  }
  const unsigned quadrant = (dy == 0               ? 8
                             : signed_word(dy) < 0 ? 0
                                                   : 2) |
                            (dx == 0               ? 4
                             : signed_word(dx) < 0 ? 0
                                                   : 1);
  // PLX/BEQ jumps directly to the divider when X is zero, including a
  // coincident point. Only nonzero X with zero Y takes the cardinal shortcut.
  if (dx != 0 && dy == 0)
    return angle_bases_[quadrant];
  const unsigned numerator = y >= 256 ? 65535 : y << 8;
  if (peripherals) peripherals->divide_word(std::uint16_t(numerator), std::uint8_t(x));
  const unsigned quotient = x ? numerator / x : 65535;
  unsigned step = 0;
  while (step < angle_thresholds_.size() && quotient >= angle_thresholds_[step])
    ++step;
  if (quadrant != 0 && quadrant != 3)
    step = 16 - step;
  return wrap(angle_bases_[quadrant] + step * 1024);
}
CollisionDirection GeneratedInputData::direction(CollisionPoint from,
                                                 CollisionPoint to) const {
  // DIVISION16S_DIVISOR_POSITIVE enters after sign normalization, so this
  // caller divides its wrapped unsigned angle by 0x2000 (domain 0..7).
  return CollisionDirection(wrap(unsigned(angle(from, to)) + 0x1000) / 0x2000);
}
void GeneratedInputBuilder::reset() noexcept {
  runs_ = {};
  index_ = 0;
}
void GeneratedInputBuilder::append_pad(std::uint16_t pad) {
  auto &current = runs_[index_];
  if (index_ == 0 && current.pad == 0) {
    current = {1, pad};
  } else if (current.pad == pad) {
    current.frames = std::uint8_t(unsigned(current.frames) + 1);
  } else {
    if (index_ + 1 == runs_.size())
      throw std::length_error("Generated input exceeds 64 source run records");
    runs_[++index_] = {1, pad};
  }
}
void GeneratedInputBuilder::repeat_direction(const GeneratedInputData &data,
                                             CollisionDirection direction,
                                             std::uint16_t frames) {
  if (!frames)
    return;
  const auto value = data.pad(direction);
  for (unsigned i = 0; i < frames; ++i)
    append_pad(value);
}
std::uint16_t GeneratedInputBuilder::route(const GeneratedInputData &data,
                                           const WalkingData &walking,
                                           GeneratedInputRoute request) {
  if (data.version() != walking.version())
    throw std::invalid_argument("Generated route mixes regional content");
  std::array<std::uint32_t, 2> position{
      std::uint32_t(request.start.x) << 16 | request.fractions[0],
      std::uint32_t(request.start.y) << 16 | request.fractions[1]};
  auto checkpoint = position;
  std::uint64_t checkpoint_period = 1, since_checkpoint = 0;
  std::uint16_t count{};
  for (;;) {
    const CollisionPoint whole{std::uint16_t(position[0] >> 16),
                               std::uint16_t(position[1] >> 16)};
    if (reached(whole.x, request.target.x) &&
        reached(whole.y, request.target.y))
      return count;
    const auto direction = data.direction(whole, request.target);
    append_pad(data.pad(direction));
    position[0] += walking.raw_delta(0, 0, direction);
    position[1] += walking.raw_delta(1, 0, direction);
    count = wrap(unsigned(count) + 1);
    // Detect an actual repeated prediction state, rather than clipping valid
    // long routes at an arbitrary frame budget. Direction and next position
    // depend only on this state and immutable content, so a cycle cannot reach
    // the target. Brent's checkpoint scheme uses constant extra storage.
    if (position == checkpoint)
      throw std::runtime_error("Generated route cycles before its destination");
    if (++since_checkpoint == checkpoint_period) {
      checkpoint = position;
      since_checkpoint = 0;
      if (checkpoint_period <= std::numeric_limits<std::uint64_t>::max() / 2)
        checkpoint_period *= 2;
    }
  }
}
GeneratedInputSequence GeneratedInputBuilder::publish() const {
  if (index_ + 1 == runs_.size())
    throw std::length_error("Generated input terminator exceeds source buffer");
  std::vector<GeneratedInputRun> result(runs_.begin(),
                                        runs_.begin() + index_ + 1);
  result.push_back({});
  return GeneratedInputSequence(std::move(result));
}
} // namespace eb::native
