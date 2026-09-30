#pragma once

#include "eb/game_version.hpp"
#include <algorithm>
#include <cstdint>
#include <initializer_list>
#include <optional>
#include <span>

namespace eb::test {

// Test-only equivalence at six exact authored continuations. Each reaches an
// audited input-independent overwrite before observing the old TEMP, including
// through the two specified short-call contexts. This is not a general boolean
// comparison of VM values, nor permission to change any live task state.
inline std::optional<unsigned> dead_sprite_temporary_sleep_limit(
    std::span<const std::uint8_t> image, GameVersion version,
    std::uint32_t source_cursor, unsigned used_stack_bytes) {
  const bool jp = version == GameVersion::JP;
  if (version != GameVersion::US && !jp)
    return {};
  const auto matches = [&](unsigned at, std::initializer_list<unsigned> bytes) {
    return at <= image.size() && bytes.size() <= image.size() - at &&
           std::equal(bytes.begin(), bytes.end(), image.begin() + at);
  };
  const unsigned animation_loop = jp ? 0x3a06c : 0x3a076;
  if (source_cursor == 0xc00000 + animation_loop + 6) {
    // The unconditional backedge reaches StepEightAnimation, which loads
    // walking style into A before its first branch, call or use of A.
    if (used_stack_bytes == 0 &&
        matches(animation_loop, {0x42, jp ? 0xc2u : 0xe3u, 0xa6, 0xc0, 0x06,
                                 0x01, 0x19, jp ? 0x6cu : 0x76u, 0xa0}) &&
        matches(jp ? 0xa6c2 : 0xa6e3,
                {0xa6, 0x88, 0x8e, jp ? 0x94u : 0x96u, jp ? 0x2cu : 0x28u, 0xbd,
                 jp ? 0x20u : 0x22u, jp ? 0x30u : 0x2cu}))
      return 0;
    return {};
  }
  // C0C6B6's standard prologue changes A to the workspace address; the first
  // body instruction then reads named teleport state. No old TEMP is read.
  const bool area_overwrite =
      matches(jp ? 0xc698 : 0xc6b6,
              {0xc2, 0x31, 0x0b, 0x7b, 0x69, 0xf0, 0xff, 0x5b, 0xad,
               jp ? 0x49u : 0x47u, jp ? 0xa1u : 0x9fu, 0xc9, 0x04, 0x00});
  // C40015 refreshes frame zero, then replaces its graphics return with the
  // independent loading-area predicate before the script's conditional.
  const bool frame_area_overwrite =
      area_overwrite &&
      matches(0x40015, {0xa6, 0x88, 0x9e, jp ? 0xe8u : 0xf2u, 0x10, 0x22,
                        jp ? 0x87u : 0xa8u, 0xa4, 0xc0, 0x22,
                        jp ? 0x98u : 0xb6u, 0xc6, 0xc0, 0x6b});
  const unsigned first_loop = jp ? 0x3a14e : 0x3a15e;
  if (source_cursor == 0xc00000 + first_loop + 19) {
    if (used_stack_bytes == 0 && frame_area_overwrite &&
        matches(first_loop, {0x42,
                             0x23,
                             0x00,
                             0xc4,
                             0x06,
                             0x08,
                             0x20,
                             0x04,
                             0x0b,
                             jp ? 0x5fu : 0x6fu,
                             0xa1,
                             0x3b,
                             0x01,
                             0x42,
                             jp ? 0x91u : 0xb2u,
                             0xa4,
                             0xc0,
                             0x06,
                             0x08,
                             0x42,
                             0x15,
                             0x00,
                             0xc4,
                             0x0b,
                             jp ? 0x52u : 0x62u,
                             0xa1,
                             0x19,
                             jp ? 0xf4u : 0x04u,
                             jp ? 0xa1u : 0xa2u}))
      return 7;
    return {};
  }
  const unsigned slow_loop = jp ? 0x3a1e3 : 0x3a1f3;
  if (source_cursor == 0xc00000 + slow_loop + 10) {
    if (used_stack_bytes == 0 && frame_area_overwrite &&
        matches(slow_loop, {0x06, 0x10, 0x3b, 0x01, 0x42, jp ? 0x91u : 0xb2u,
                            0xa4, 0xc0, 0x06, 0x10, 0x42, 0x15, 0x00, 0xc4,
                            0x0b, jp ? 0xe3u : 0xf3u, 0xa1}))
      return 15;
    return {};
  }
  const unsigned child = jp ? 0x3a21c : 0x3a22c;
  if (source_cursor == 0xc00000 + child + 10) {
    // SelectFourFirst ignores A; it resolves frame zero from named actor
    // state and overwrites TEMP before SHORT_RETURN can expose it anywhere.
    if (used_stack_bytes == 2 &&
        matches(child, {0x06, 0x08, 0x3b, 0x01, 0x42, jp ? 0x91u : 0xb2u, 0xa4,
                        0xc0, 0x06, 0x08, 0x3b, 0x00, 0x42, jp ? 0x87u : 0xa8u,
                        0xa4, 0xc0, 0x1b}) &&
        matches(jp ? 0xa487 : 0xa4a8,
                {0x9c, jp ? 0x90u : 0x92u, jp ? 0x2cu : 0x28u, 0x22,
                 jp ? 0xf3u : 0x11u, jp ? 0xc6u : 0xc7u, 0xc0, 0xd0, 0x11,
                 0x6b}))
      return 7;
    return {};
  }
  const unsigned stationary = jp ? 0x3a2a8 : 0x3a2b8;
  if (source_cursor == 0xc00000 + stationary + 2) {
    if (used_stack_bytes == 0 && area_overwrite &&
        matches(stationary, {0x06, 0x08, 0x42, jp ? 0x98u : 0xb6u, 0xc6, 0xc0,
                             0x0b, jp ? 0xa8u : 0xb8u, 0xa2, 0x42,
                             jp ? 0xffu : 0xf1u, 0x20, 0xc0, 0x00}))
      return 7;
    return {};
  }
  const unsigned path = jp ? 0x3ab49 : 0x3ab59;
  if (source_cursor == 0xc00000 + path + 5) {
    // The path predicate explicitly supplies A=0/X=1 to C47143. Its
    // return is based on current position and authored target coordinates.
    if (used_stack_bytes == 2 &&
        matches(path, {0x1a, jp ? 0x34u : 0x44u, 0xab, 0x06, 0x01, 0x42,
                       jp ? 0xbbu : 0xdcu, 0xa8, 0xc0, 0x0a, jp ? 0x4cu : 0x5cu,
                       0xab, 0x39, 0x1b}) &&
        matches(jp ? 0xa8bb : 0xa8dc,
                {0xa9, 0, 0, 0xa2, 1, 0, 0x22, jp ? 0xc7u : 0x43u,
                 jp ? 0x4eu : 0x71u, 0xc4, 0x6b}))
      return 0;
  }
  return {};
}

inline bool dead_sprite_temporary(std::span<const std::uint8_t> image,
                                  GameVersion version,
                                  std::uint32_t source_cursor,
                                  unsigned used_stack_bytes) {
  return dead_sprite_temporary_sleep_limit(image, version, source_cursor,
                                           used_stack_bytes)
      .has_value();
}

struct SpriteTemporaryState {
  std::uint32_t cursor{};
  unsigned sleep{}, used_stack_bytes{}, value{};
};

inline bool equivalent_dead_sprite_temporary(
    std::span<const std::uint8_t> image, GameVersion version,
    const SpriteTemporaryState &source, const SpriteTemporaryState &native) {
  // The pending source PAUSE has already decremented once. Require matching
  // control state and the separately proven successful-refresh predicate;
  // zero or an arbitrary native scalar must not disappear from this test.
  const auto limit = dead_sprite_temporary_sleep_limit(
      image, version, source.cursor, source.used_stack_bytes);
  return limit && source.cursor == native.cursor &&
         source.sleep == native.sleep && source.sleep <= *limit &&
         source.used_stack_bytes == native.used_stack_bytes &&
         source.value != 0 && source.value <= 0xffff && native.value == 1;
}

} // namespace eb::test
