#include "eb/native/npcs/interaction.hpp"
#include "eb/native/story/input.hpp"
#include "eb/native/world_generated_input.hpp"
#include "eb/native/world_input_playback.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native;
std::uint64_t checks{};
void check(bool value, const char *message) {
  ++checks;
  if (!value)
    throw std::runtime_error(message);
}
template <class F> void rejects(F call, const char *message) {
  bool rejected{};
  try {
    call();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, message);
}
auto sequence(std::initializer_list<GeneratedInputRun> runs) {
  return std::make_shared<const GeneratedInputSequence>(
      std::vector<GeneratedInputRun>(runs));
}
void run() {
  const auto route =
      sequence({{2, 0x018f}, {1, 0x0843}, {3, 0x8000}, {0, 0xbeef}});
  const auto empty = sequence({{0, 0x1234}, {7, 0xff00}, {0, 0}});
  npcs::InteractionState leader, other_leader;
  story::InputState input, other_input;
  leader.demo_frames = 0xabcd;
  WorldInputPlayback playback(leader, input,
                              {{0x1234, 0x5678}, 0x2001, 0x4321});
  check(playback.uses(leader, input) && !playback.uses(other_leader, input) &&
            !playback.uses(leader, other_input) && playback.uses(leader) &&
            !playback.uses(other_leader),
        "Playback accepted foreign input/countdown owners");
  const auto before = playback.state();
  rejects([&] { playback.install(nullptr); },
          "Inactive null playback content accepted");
  check(playback.state() == before && leader.demo_frames == 0xabcd,
        "Rejected install mutated the borrowed timer or raw input");
  check(playback.install(empty) == WorldInputInstall::Empty &&
            playback.state() ==
                WorldRawInputState{{0x1234, 0x5678}, 0, 0x4321} &&
            leader.demo_frames == 0xabcd && !playback.sequence(),
        "Empty initial run reset retained words or kept flags");
  check(
      playback.install(route) == WorldInputInstall::Installed &&
          leader.demo_frames == 2 &&
          playback.state() ==
              WorldRawInputState{{0x018f, 0x018f}, 0x4000, 0x018f} &&
          playback.sequence() == route && playback.run_index() == 0,
      "Install did not immediately publish both raw words and real countdown");
  check(playback.install(nullptr) == WorldInputInstall::AlreadyActive &&
            playback.install(empty) == WorldInputInstall::AlreadyActive &&
            leader.demo_frames == 2 && playback.sequence() == route,
        "Active playback inspected/replaced new content");
  playback.poll({0x8000, 0x1000});
  check(leader.demo_frames == 1 && playback.run_index() == 0 &&
            input.state == std::array<std::uint16_t, 2>{0x0180, 0x0180} &&
            input.player_activity == 1 && input.repeat_timer[0] == 20,
        "First installed sample was not consumed once");
  playback.poll({0x8000, 0x1000});
  check(leader.demo_frames == 1 && playback.run_index() == 1 &&
            input.state == std::array<std::uint16_t, 2>{0x0840, 0x0840} &&
            input.player_activity == 2,
        "Next run was delayed or processed twice");
  playback.poll({0x8000, 0x1000});
  check(leader.demo_frames == 3 && playback.run_index() == 2 &&
            input.state[0] == 0x8000,
        "One-frame run did not advance on its next read");
  playback.poll({0x8000, 0x1000});
  playback.poll({0x8000, 0x1000});
  playback.poll({0x040f, 0x0207}, 1);
  check(!playback.active() && leader.demo_frames == 0 &&
            playback.run_index() == 3 &&
            playback.state().raw ==
                std::array<std::uint16_t, 2>{0x040f, 0x0207} &&
            input.state == std::array<std::uint16_t, 2>{0x0400, 0x0200},
        "Terminator did not sample both host controllers in the same poll");
  const auto index = playback.run_index();
  playback.install(empty);
  check(playback.sequence() == route && playback.run_index() == index &&
            playback.state().initial_pad == 0x018f,
        "Empty install cleared previously retained sequence identity/cursor");

  for (unsigned flags : {0u, 1u, 0x3fffu, 0x8000u, 0xbfffu}) {
    npcs::InteractionState world;
    story::InputState processed;
    WorldInputPlayback owner(world, processed,
                             {{0x55, 0xaa}, std::uint16_t(flags), 0x9abc});
    owner.install(sequence({{1, 0x0800}, {0, 0}}));
    check(owner.state().flags == (flags | 0x4000),
          "Install normalized unrelated flags");
    owner.read({0x1234, 0x5678});
    check(owner.state().flags == flags &&
              owner.state().raw == std::array<std::uint16_t, 2>{0x1234, 0x5678},
          "Normal playback completion erased recording or other flags");
    owner.clear_flags();
    check(!owner.state().flags && owner.run_index() == 1 &&
              owner.state().initial_pad == 0x0800 && world.demo_frames == 0,
          "Explicit flag clear erased unrelated state");
  }
  // The countdown belongs to the world. Exercise every possible borrowed word,
  // including active zero wrapping to FFFF rather than prematurely finishing.
  for (unsigned count = 0; count <= 0xffff; ++count) {
    npcs::InteractionState world;
    story::InputState processed;
    WorldInputPlayback owner(world, processed);
    owner.install(route);
    world.demo_frames = std::uint16_t(count);
    owner.read({0xffff, 0x1234});
    check(world.demo_frames == (count == 1 ? 1 : std::uint16_t(count - 1)) &&
              owner.run_index() == (count == 1 ? 1u : 0u) &&
              owner.state().raw[0] == (count == 1 ? 0x0843 : 0x018f) &&
              owner.state().raw[1] == owner.state().raw[0],
          "Borrowed countdown decrement/wrap differs");
  }
  {
    npcs::InteractionState world;
    story::InputState processed;
    processed.repeat_timer = {19, 3};
    WorldInputPlayback owner(world, processed, {{1, 2}, 0x8001, 3});
    owner.install(route);
    const auto raw = owner.state();
    const auto pads = processed;
    const auto count = world.demo_frames;
    rejects([&] { owner.poll({0xffff, 0xffff}); },
            "Recording was silently skipped by poll");
    check(owner.state() == raw && processed == pads &&
              world.demo_frames == count && owner.run_index() == 0,
          "Unported recording consumed an input phase");
    owner.read({0xffff, 0xffff});
    check(world.demo_frames == count - 1 && owner.recording_required(),
          "Raw-only playback lost the independent recording flag");
  }
  rejects([&] { WorldInputPlayback invalid(leader, input, {{}, 0x4000, 0}); },
          "Boot accepted an active flag without owned sequence content");
  {
    npcs::InteractionState world;
    story::InputState processed;
    WorldInputPlayback owner(world, processed);
    std::weak_ptr<const GeneratedInputSequence> weak;
    {
      const auto content = sequence({{1, 0x0100}, {0, 0}});
      weak = content;
      owner.install(content);
    }
    check(!weak.expired(), "Playback borrowed temporary generated content");
    owner.read({0, 0});
    check(!owner.active() && !weak.expired(),
          "Completed playback discarded retained cursor content");
  }
  {
    std::vector<GeneratedInputRun> runs;
    for (unsigned i = 0; i < 129; ++i)
      runs.push_back({1, std::uint16_t(i * 19)});
    runs.push_back({0, 0});
    npcs::InteractionState world;
    story::InputState processed;
    WorldInputPlayback owner(world, processed);
    owner.install(
        std::make_shared<const GeneratedInputSequence>(std::move(runs)));
    for (unsigned i = 1; i < 129; ++i) {
      owner.read({0xffff, 0xffff});
      check(
          owner.active() && owner.run_index() == i &&
              owner.state().raw[0] == i * 19,
          "Playback incorrectly imposed the generated builder's 64-run limit");
    }
    owner.read({0x1234, 0x5678});
    check(!owner.active() && owner.run_index() == 129,
          "Long authored sequence did not reach its own terminator");
  }
}
} // namespace
int main() {
  try {
    run();
    std::cout << "PASS native input playback: " << checks << " checks\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
