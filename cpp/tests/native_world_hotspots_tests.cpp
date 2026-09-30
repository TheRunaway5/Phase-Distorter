#include "eb/native/appearance_service.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native/world_hotspots.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool ok, const char *why) {
  ++checks;
  if (!ok)
    throw std::runtime_error(why);
}
template <class F> void rejects(F call, const char *why) {
  bool rejected = false;
  try {
    call();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, why);
}
struct Fixture {
  WorldHotspotState state;
  npcs::InteractionState leader;
  story::TickState clock;
  AppearanceSceneContext appearance;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  WorldHotspots hotspots;
  explicit Fixture(eb::GameVersion version)
      : queue(version, queued, appearance.intangibility_ticks, phone),
        hotspots(version, state, leader, clock, appearance, queue) {}
};
saves::ContinueResources resources(eb::GameVersion version) {
  std::vector<std::uint8_t> bytes(0x160000);
  const auto at = saves::continue_resource_layout(version).hotspots;
  const std::array<unsigned, 4> words{2, 3, 6, 7};
  for (unsigned i = 0; i < words.size(); ++i)
    bytes[at + i * 2] = words[i];
  return saves::ContinueResources(bytes, version);
}
void run(eb::GameVersion version) {
  auto content = resources(version);
  Fixture f(version);
  f.leader.leader_x = 32;
  f.leader.leader_y = 40;
  f.state.live[1] = {0xffff, 1, 2, 3, 4, 0x11223344};
  f.state.saved_modes[1] = 0;
  f.state.saved_ids[1] = 255; // Inactive saved IDs are not interpreted.
  f.hotspots.activate(1, 0, 0xaabbccdd, content);
  check(
      f.state.live[0] == saves::Hotspot{1, 16, 24, 48, 56, 0xaabbccdd},
      "Activation must derive exit mode from strict current-position interior");
  const auto initial = f.state;
  f.leader.leader_x = 16;
  check(!f.hotspots.evaluate_tick(),
        "Exit mode fired on its inclusive boundary");
  f.leader.leader_x = 15;
  f.appearance.teleport_destination = 1;
  check(!f.hotspots.evaluate_tick() && f.state == initial,
        "Teleport gate changed hotspot state");
  f.appearance.teleport_destination = 0;
  f.queued.pending = 1;
  f.queued.next = 3;
  f.queued.current = 1;
  check(f.hotspots.evaluate_tick() && f.queued.next == 0 &&
            f.queued.records[3] ==
                npcs::QueuedInteraction{9, {0xdd, 0xcc, 0xbb, 0xaa}},
        "Hotspot invented a queue-empty gate or failed queue wrap/key "
        "preservation");
  check(f.state.live[0].mode == 0 && f.state.saved_modes[0] == 0 &&
            f.state.live[1] == initial.live[1] &&
            f.state.saved_references[0] == 0xaabbccdd,
        "Firing changed retained metadata or the other slot");
  auto queued = f.queued;
  check(!f.hotspots.evaluate_tick() && f.queued == queued,
        "Walking parity evaluation retriggered a disabled hotspot");
  f.leader.leader_x = 32;
  check(f.hotspots.evaluate(0),
        "Direct C073C0 mode0 strict-interior behavior lost");
  f.leader.leader_x = 16;
  f.hotspots.activate(1, 0, 0xdeadbeef, content);
  check(
      f.state.live[0].mode == 2 && !f.hotspots.evaluate(0),
      "Activation boundary must choose enter mode without immediately firing");
  f.leader.leader_x = 17;
  f.queued.current_type = 9;
  queued = f.queued;
  check(f.hotspots.evaluate(0) && f.queued == queued && !f.state.saved_modes[0],
        "Suppressed enqueue failed to consume the live and persisted trigger");
  f.hotspots.activate(2, 0, 0x44332211, content);
  const auto second = f.state.live[1];
  f.clock.frame_counter = 0;
  f.leader.leader_x = 15;
  check(!f.hotspots.evaluate_tick() && f.state.live[1] == second,
        "Even frame evaluated odd hotspot");
  f.clock.frame_counter = 255;
  check(f.hotspots.evaluate_tick() && f.clock.frame_counter == 255,
        "Odd hotspot did not fire or advanced the borrowed clock");

  f.hotspots.activate(1, 0, 0x12345678, content);
  auto before = f.state;
  f.hotspots.disable(1);
  before.live[0].mode = 0;
  before.saved_modes[0] = 0;
  check(f.state == before, "Disable changed retained bounds, ID or key");
  f.state.live[0].mode = 0x7fff;
  const auto stale = f.state.live[0];
  f.state.saved_modes[1] = 7;
  f.hotspots.reload(content);
  check(
      f.state.live[0] == stale && f.state.live[1].mode == 7,
      "Reload cleared stale inactive rectangle or normalized an authored mode");
  saves::GameState snapshot;
  snapshot.money_carried = 0xfedcba98;
  f.hotspots.capture(snapshot);
  check(snapshot.money_carried == 0xfedcba98 &&
            snapshot.hotspot_modes == f.state.saved_modes,
        "Save bridge changed unrelated state");
  Fixture restored(version);
  restored.state.live[0] = stale;
  restored.hotspots.restore(snapshot, content);
  check(restored.state == f.state,
        "Restore did not retain zero-mode live state");
  before = f.state;
  rejects([&] { f.hotspots.activate(0, 0, 0, content); },
          "Invalid slot accepted");
  rejects([&] { f.hotspots.activate(1, 56, 0, content); },
          "Invalid content ID accepted");
  rejects([&] { f.hotspots.activate(1, 256, 0, content); },
          "Content ID silently truncated to another hotspot");
  rejects([&] { f.hotspots.evaluate(2); }, "Invalid live index accepted");
  auto other = resources(version == eb::GameVersion::US ? eb::GameVersion::JP
                                                        : eb::GameVersion::US);
  rejects([&] { f.hotspots.reload(other); }, "Mixed-region content accepted");
  snapshot.hotspot_modes[0] = 1;
  snapshot.hotspot_ids[0] = 56;
  rejects([&] { f.hotspots.restore(snapshot, content); },
          "Invalid restored ID accepted");
  check(f.state == before,
        "Invalid lifecycle input partially replaced live owners");
  npcs::InteractionState leader;
  check(f.hotspots.uses(f.leader, f.clock, f.appearance, f.queue) &&
            !f.hotspots.uses(leader, f.clock, f.appearance, f.queue),
        "Hotspot owner identity is not checked");
  AppearanceSceneContext wrong;
  rejects(
      [&] {
        WorldHotspots h(version, f.state, f.leader, f.clock, wrong, f.queue);
      },
      "Hotspots accepted a queue bound to another scene");
  auto consumer = f.queue.queue().begin();
  check(!f.queue.failed(), "Active queue is not a failure");
  consumer.reset();
  before = f.state;
  rejects([&] { f.hotspots.evaluate(0); },
          "Failed queue accepted hotspot evaluation");
  rejects([&] { f.hotspots.activate(1, 0, 0, content); },
          "Failed queue accepted activation");
  rejects([&] { f.hotspots.disable(1); }, "Failed queue accepted disable");
  rejects([&] { f.hotspots.reload(content); }, "Failed queue accepted reload");
  check(f.state == before,
        "Failed queue partially changed live or saved hotspots");
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
    std::cout << "PASS native hotspots: " << checks << " checks\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
