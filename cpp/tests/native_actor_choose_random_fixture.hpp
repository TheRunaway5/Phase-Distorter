#pragma once
#define main prior_world_runtime_test_main
#include "native_world_runtime_tests.cpp"
#undef main

namespace {
struct RandomScript {
  std::vector<std::uint8_t> bytes;
  unsigned parameter{};
  RandomScript(eb::GameVersion version, unsigned count, unsigned first = 0) {
    const auto helper = version == eb::GameVersion::JP ? 0xc09f61u : 0xc09f82u;
    bytes.resize(65537);
    const auto at = [&](unsigned n) -> std::uint8_t & {
      return bytes[std::uint16_t(first + n)];
    };
    at(0) = 0x42;
    at(1) = std::uint8_t(helper);
    at(2) = std::uint8_t(helper >> 8);
    at(3) = std::uint8_t(helper >> 16);
    parameter = std::uint16_t(first + 4);
    at(4) = std::uint8_t(count);
    const unsigned n = count ? count : 256;
    for (unsigned i = 0; i < n; ++i) {
      // Deliberately non-byte values expose accidental result truncation.
      const auto value = std::uint16_t(0x8000 ^ (i * 251 + count * 17));
      const unsigned pos = std::uint16_t(parameter + 1 + 2 * i);
      bytes[pos] = std::uint8_t(value);
      bytes[pos + 1] = std::uint8_t(value >> 8);
    }
    at(5 + 2 * count) = 6;
    at(6 + 2 * count) = 1;
    at(7 + 2 * count) = 9;
  }
  std::shared_ptr<const ActionScriptData> data(unsigned first = 0) const {
    return std::make_shared<const ActionScriptData>(
        bytes, 0, std::vector<std::uint32_t>{first});
  }
};
std::uint16_t run_random_actor(Fixture &f, ActorId id, unsigned entry,
                               unsigned budget = 1) {
  f.actors.replace_script(id, entry);
  auto op = f.runtime->begin(story::TickKind::ActorFrame);
  const auto before = f.random;
  check(op->advance(0) == dialogue::Progress::BudgetExhausted &&
            f.random == before,
        "Zero work executed a random actor choice");
  check(next(*op, budget) == dialogue::Progress::Suspended &&
            op->service() == story::SceneService::Frame,
        "Actual random actor script did not reach its real frame boundary");
  const auto result = f.actors.actor(id).tasks().at(0).temporary;
  const auto after = f.random;
  check(op->advance(7) == dialogue::Progress::Suspended && f.random == after,
        "Repeated suspended advance consumed a second random choice");
  op->complete_frame({});
  finish(*op);
  check(f.random == after, "Raw actor frame consumed unrelated RNG");
  return result;
}
} // namespace
