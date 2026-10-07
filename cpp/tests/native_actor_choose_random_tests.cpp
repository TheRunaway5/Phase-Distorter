// CPU-free actual ActorWorld -> Scene -> WorldRuntime service acceptance.
#include "native_actor_choose_random_fixture.hpp"

namespace {
void random_choices(eb::GameVersion version) {
  for (unsigned count : {0u, 1u, 2u, 3u, 7u, 127u, 128u, 255u}) {
    RandomScript script(version, count);
    Fixture f(version, false, script.data());
    const auto id = f.actors.create(actor());
    f.start();
    ActionEngineRequest request;
    request.kind = ActionRequestKind::CallEngine;
    request.identifier = version == eb::GameVersion::JP ? 0xc09f61 : 0xc09f82;
    request.parameters = script.parameter;
    const auto binding = ActionBindings(version).compile(request, *script.data());
    const auto &payload = std::get<ChooseRandomOperands>(binding.payload);
    check(binding.parameter_bytes == 1 + count * 2 &&
              binding.temporary_input == ActionTemporaryInput::Independent &&
              payload.choices.size() == (count ? count : 256),
          "Random choice did not retain its complete typed operands");
    auto copied = payload;
    copied.choices[0] ^= 0xffff;
    check(copied != payload, "Copied random choices alias imported content");
    ActorActionContext context;
    ActionActorState model;
    ActionSceneContext scene;
    check(!apply_action(binding, 0xabcd, model, context, scene).handled,
          "Pure actor reducer fabricated shared-RNG service completion");
    for (unsigned random : {0u, 1u, 2u, 7u, 127u, 128u, 254u, 255u}) {
      f.random = {0x8110, std::uint16_t(0x9200 | random)};
      auto expected = f.random;
      const auto draw = story::next_random(expected);
      check(draw == random, "Random-byte coverage fixture lost its chosen sample");
      const auto result = run_random_actor(f, id, 0, random & 1 ? 1 : 4096);
      check(result == payload.choices.at(count ? random % count : random) &&
                f.random == expected,
            "Runtime random choice lost value, unsigned division or shared RNG state");
    }
  }
  ActionEngineRequest request;
  request.kind = ActionRequestKind::CallEngine;
  request.identifier = version == eb::GameVersion::JP ? 0xc09f61 : 0xc09f82;
  const ActionBindings bindings(version);
  for (const auto &bytes : {std::vector<std::uint8_t>{1, 0},
                          std::vector<std::uint8_t>{0, 0, 0}}) {
    const ActionScriptData incomplete(bytes, 0);
    rejects([&] { (void)bindings.compile(request, incomplete); },
            "Truncated random-choice words were accepted");
  }
  RandomScript wrapping(version, 3, 65530);
  Fixture f(version, false, wrapping.data(65530));
  const auto id = f.actors.create(actor());
  f.start();
  f.random = {16, 2};
  check(run_random_actor(f, id, 65530) ==
            std::uint16_t(wrapping.bytes[3] | unsigned(wrapping.bytes[4]) << 8),
        "Random choice did not wrap its source word index and continuation");
}
} // namespace
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
      random_choices(version);
    std::cout << "native actor random choice: " << checks << " checks passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
