#include "eb/native/world_generated_input.hpp"
#include "eb/native/world_walking.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <type_traits>

namespace {
using namespace eb::native;
unsigned checks{};
static_assert(!std::is_copy_assignable_v<GeneratedInputSequence>);
static_assert(!std::is_move_assignable_v<GeneratedInputSequence>);
void check(bool good, const char *message) {
  ++checks;
  if (!good)
    throw std::runtime_error(message);
}
template <class F> void rejects(F &&f, const char *message) {
  bool rejected{};
  try {
    f();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, message);
}
struct Content {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(1024);
  GeneratedInputDataLayout generated{0, 16, 42};
  WalkingDataLayout walking{128, 184, 240, 268};
  void put(unsigned at, unsigned value) {
    bytes.at(at) = value;
    bytes.at(at + 1) = value >> 8;
  }
  Content() {
    const std::array<unsigned, 8> pads{0x800, 0x900, 0x100, 0x500,
                                       0x400, 0x600, 0x200, 0xa00};
    const std::array<unsigned, 13> bases{0x4000, 0x8000, 0,      0xc000, 0x8000,
                                         0xffff, 0,      0xffff, 0x4000, 0xc000,
                                         0xffff, 0xffff, 0};
    const std::array<unsigned, 16> thresholds{13,  38,   64,   92,  121, 153,
                                              190, 232,  282,  345, 427, 541,
                                              715, 1021, 1723, 5181};
    for (unsigned i = 0; i < pads.size(); ++i)
      put(generated.pads + 2 * i, pads[i]);
    for (unsigned i = 0; i < bases.size(); ++i)
      put(generated.angle_bases + 2 * i, bases[i]);
    for (unsigned i = 0; i < thresholds.size(); ++i)
      put(generated.angle_thresholds + 2 * i, thresholds[i]);
    for (unsigned i = 0; i < 14; ++i) {
      put(walking.cardinal + 4 * i, 0x6000);
      put(walking.cardinal + 4 * i + 2, 1);
      put(walking.diagonal + 4 * i, 0xf8e6);
      put(walking.allowed + 2 * i, 255);
    }
  }
};
void run(eb::GameVersion version) {
  Content c;
  GeneratedInputData data(c.bytes, version, c.generated);
  WalkingData walking(c.bytes, version, c.walking);
  const std::array<CollisionPoint, 8> destinations{{{16, 0},
                                                    {32, 0},
                                                    {32, 16},
                                                    {32, 32},
                                                    {16, 32},
                                                    {0, 32},
                                                    {0, 16},
                                                    {0, 0}}};
  for (unsigned i = 0; i < 8; ++i) {
    const auto direction = CollisionDirection(i);
    check(data.direction({16, 16}, destinations[i]) == direction,
          "Cardinal/diagonal angle disagrees with expected facing");
    GeneratedInputBuilder b;
    check(b.route(data, walking, {{16, 16}, destinations[i], {0, 63}}) > 0,
          "Nonempty route produced no frames");
    const auto published = b.publish();
    check(published.runs().back() == GeneratedInputRun{},
          "Published terminator was not empty");
    check(unsigned(walking.raw_delta(0, 0, direction)) ==
              unsigned(walking.adjust(0, 0, 0, direction, 0, 0, 0)),
          "Raw content differs from unscaled walking");
  }
  GeneratedInputBuilder b;
  check(b.publish().runs().size() == 2 && b.publish().runs()[0].frames == 0,
        "Empty reset publication differs from source two zero runs");
  for (unsigned i = 0; i < 257; ++i)
    b.append_pad(0);
  check(b.runs().size() == 1 && b.runs()[0] == GeneratedInputRun{1, 0},
        "Initial zero-pad run must overwrite itself");
  b.append_pad(0x800);
  check(b.runs()[0] == GeneratedInputRun{1, 0x800},
        "First nonzero pad must replace initial zero run");
  for (unsigned i = 1; i < 256; ++i)
    b.append_pad(0x800);
  check(b.runs()[0].frames == 0, "Run frame byte must wrap at 256");
  b.append_pad(0x800);
  check(b.runs()[0].frames == 1, "Wrapped run must continue incrementing");
  b.append_pad(0);
  b.append_pad(0);
  check(b.runs().size() == 2 && b.runs()[1] == GeneratedInputRun{2, 0},
        "Later zero run must increment normally");
  const auto frozen = b.publish();
  b.append_pad(0x400);
  b.reset();
  check(frozen.runs().size() == 3 && frozen.runs()[1].frames == 2,
        "Published sequence aliases builder mutation");
  auto mutable_alias = std::make_shared<GeneratedInputSequence>(
      std::vector<GeneratedInputRun>{{2, 0x800}, {0, 0}});
  std::shared_ptr<const GeneratedInputSequence> installed = mutable_alias;
  GeneratedInputSequence moved(std::move(*mutable_alias));
  check(installed->runs().size() == 2 && installed->runs()[0].frames == 2 &&
            std::ranges::equal(installed->runs(), moved.runs()),
        "Moving a mutable alias invalidated installed immutable content");
  for (unsigned i = 0; i < 63; ++i)
    b.append_pad(1 + i % 2);
  check(b.publish().runs().size() == 64, "Last valid terminator slot rejected");
  b.append_pad(2);
  check(b.runs().size() == 64, "64th data run rejected before source boundary");
  rejects([&] { b.publish(); }, "Out-of-owner terminator overwrite accepted");
  rejects([&] { b.append_pad(1); }, "65th source run accepted");
  b.reset();
  check(b.runs()[0] == GeneratedInputRun{},
        "Reset did not recover full builder");
  b.repeat_direction(data, CollisionDirection::None, 0);
  check(b.runs()[0] == GeneratedInputRun{},
        "Zero repeat consumed invalid direction");
  rejects([&] { b.repeat_direction(data, CollisionDirection::None, 1); },
          "Invalid live direction accepted");
  rejects([&] { GeneratedInputSequence sequence({}); },
          "Empty sequence accepted");
  rejects([&] { GeneratedInputSequence sequence({{1, 0}}); },
          "Missing terminator accepted");
  rejects(
      [&] {
        GeneratedInputData short_data(
            std::span<const std::uint8_t>(c.bytes).first(10), version,
            c.generated);
      },
      "Truncated generated data accepted");
  for (auto start : {CollisionPoint{0, 0}, CollisionPoint{65535, 65535},
                     CollisionPoint{32768, 32768}})
    for (int dx = -1; dx <= 1; ++dx)
      for (int dy = -1; dy <= 1; ++dy) {
        b.reset();
        check(
            b.route(data, walking,
                    {start,
                     {std::uint16_t(start.x + dx), std::uint16_t(start.y + dy)},
                     {0xffff, 0xffff}}) == 0,
            "Inclusive wrapped one-pixel target tolerance differs");
        check(b.runs()[0] == GeneratedInputRun{}, "Zero route appended input");
      }
  b.reset();
  check(b.route(data, walking, {{0, 0}, {32768, 32768}, {0, 63}}) == 0,
        "Source signed absolute-value overflow changed");
  // The prediction is a value operation. It never consults a live actor's
  // fractions; source workspace X can demonstrably alter the generated path.
  b.reset();
  const auto zero = b.route(data, walking, {{256, 256}, {272, 264}, {0, 63}});
  const auto low = b.publish();
  b.reset();
  const auto high =
      b.route(data, walking, {{256, 256}, {272, 264}, {0xaaaa, 63}});
  check(zero != high || !std::ranges::equal(low.runs(), b.publish().runs()),
        "Explicit prediction phase was discarded");
  auto other = version == eb::GameVersion::US ? eb::GameVersion::JP
                                              : eb::GameVersion::US;
  WalkingData other_walking(c.bytes, other, c.walking);
  rejects([&] { b.route(data, other_walking, {{}, {16, 16}, {}}); },
          "Mixed region route accepted");
  // A legitimate long path demonstrates separate returned-count and run-byte
  // wrapping. This synthetic immutable speed does not change the tick clock.
  c.put(c.walking.cardinal, 0x2000);
  c.put(c.walking.cardinal + 2, 0);
  WalkingData slow(c.bytes, version, c.walking);
  b.reset();
  const auto frames = b.route(data, slow, {{0, 0}, {10000, 0}, {0, 63}});
  check(frames == std::uint16_t(79992), "Route count did not wrap at 65536");
  check(b.runs().size() == 1 &&
            b.runs()[0] == GeneratedInputRun{std::uint8_t(79992), 0x100},
        "Long path run byte differs");
  c.put(c.walking.cardinal, 0);
  WalkingData stalled(c.bytes, version, c.walking);
  b.reset();
  rejects([&] { b.route(data, stalled, {{0, 0}, {16, 0}, {0, 63}}); },
          "A nonterminating prediction cycle was accepted");
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
    std::cout << "PASS native generated input: " << checks << " checks\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
