#include "eb/native/dialogue/runtime.hpp"
#include "native_world_control_commands_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool okay, const char *why) {
  ++checks;
  if (!okay)
    throw std::runtime_error(why);
}
template <class F> void rejects(F f, const char *why) {
  bool rejected{};
  try {
    f();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, why);
}
void until_service(dialogue::Runtime &vm, unsigned budget = 1) {
  while (vm.advance(budget) == dialogue::Progress::BudgetExhausted) {
  }
}
auto program(eb::GameVersion region, std::vector<std::uint8_t> bytes) {
  return std::make_shared<dialogue::Program>(
      region, std::vector<dialogue::ContentBlock>{{0, 0, std::move(bytes)}},
      std::vector<dialogue::Location>{{0, 0}});
}
void operand_domains(eb::GameVersion region) {
  for (unsigned selector : {0xeeu, 0xefu})
    for (unsigned byte = 0; byte < 256; ++byte)
      for (unsigned word :
           {byte, byte << 8, byte * 257u, byte | ((255u - byte) << 8)})
        for (unsigned budget : {1u, 4096u}) {
          dialogue::State state;
          state.dummy.active = {0x12345678, 0x87654321, 0xabcd};
          dialogue::Runtime vm(
              program(region, {0x1f, std::uint8_t(selector), std::uint8_t(word),
                               std::uint8_t(word >> 8), 0x41, 2}),
              state);
          vm.start(dialogue::EntryId{0});
          until_service(vm, budget);
          check(
              vm.request() &&
                  vm.request()->kind == dialogue::RequestKind::WorldControl &&
                  vm.request()->world_control ==
                      WorldControlCommand{
                          selector == 0xee
                              ? WorldControlCommandKind::FocusNpc
                              : WorldControlCommandKind::FocusSprite,
                          std::uint16_t(word)} &&
                  vm.request()->source == dialogue::Location{0, 0} &&
                  vm.snapshot().consumed_bytes == 4,
              "Focus command changed literal word, source, or operand extent");
          const auto pending = vm.request();
          for (unsigned stalled : {0u, 1u, 4096u})
            check(vm.advance(stalled) == dialogue::Progress::Suspended &&
                      vm.request() == pending &&
                      vm.snapshot().consumed_bytes == 4,
                  "Pending focus command consumed content again");
          // Parser-only proof: actual application/lifetime behavior below and
          // in the imported-source oracle. This reply tests register semantics.
          vm.respond();
          check(state.dummy.active ==
                    dialogue::Registers{0x12345678, 0x87654321, 0xabcd},
                "World control reply changed dialogue registers");
          until_service(vm, budget);
          check(vm.request()->kind == dialogue::RequestKind::Glyph &&
                    vm.request()->glyph == 0x41,
                "Focus parser swallowed its following glyph");
        }
  for (unsigned selector : {0xe2u, 0xe3u}) {
    dialogue::State state;
    dialogue::Runtime vm(
        program(region, {0x1f, std::uint8_t(selector), 0x41, 2}), state);
    vm.start(dialogue::EntryId{0});
    until_service(vm);
    check(vm.request()->kind == dialogue::RequestKind::UnsupportedCommand &&
              vm.snapshot().consumed_bytes == 2,
          "Focus parser admitted an adjacent unsupported command");
    rejects([&] { vm.respond(); },
            "Unsupported command accepted a fake completion");
  }
}
void application(eb::GameVersion region) {
  control_command_test::Fixture f(region), foreign(region);
  check(f.commands.uses(f.automatic) && f.commands.uses(f.actors) &&
            !f.commands.uses(foreign.automatic) &&
            !f.commands.uses(foreign.actors),
        "Command service accepted a foreign owner");
  const auto late = f.create(10, 1, 43);
  f.create(2, 1, 42);
  f.control.automatic_ticks = 77;
  f.control.moved_this_tick = 9;
  dialogue::State state;
  state.dummy.active = {5, 6, 7};
  dialogue::Runtime vm(
      program(region, {0x1f, 0xee, 42, 0, 0x1f, 0xed, 0x1f, 0xef, 1, 0, 2}),
      state);
  vm.start(dialogue::EntryId{0});
  for (auto expected : {WorldControlCommandKind::FocusNpc,
                        WorldControlCommandKind::StopAutomatic,
                        WorldControlCommandKind::FocusSprite}) {
    until_service(vm);
    check(vm.request()->world_control->kind == expected,
          "Authored command order changed");
    f.commands.apply(*vm.request()->world_control);
    check(
        f.control.camera_focus == CameraTarget{AuthoredRoleRef(2)} &&
            f.control.automatic_mode ==
                (expected == WorldControlCommandKind::StopAutomatic ? 0 : 2),
        "Actual service failed to select the earliest authored actor or stop");
    check(f.control.automatic_ticks == 77 && f.actors.ticks() == 0 &&
              f.leader.leader_x == 128,
          "Producer consumed a frame, moved the leader, or reset countdown");
    if (expected == WorldControlCommandKind::StopAutomatic)
      check(f.control.moved_this_tick == 0,
            "Stop failed to clear movement marker");
    vm.respond();
  }
  check(vm.advance() == dialogue::Progress::Finished &&
            state.dummy.active == dialogue::Registers{5, 6, 7},
        "Applied command sequence did not return without register writes");
  auto operation = f.automatic.begin();
  rejects([&] { f.commands.apply({WorldControlCommandKind::StopAutomatic}); },
          "Command bypassed an active automatic operation");
  check(f.control.automatic_mode == 2 && operation->advance(),
        "Rejected reentry damaged live operation");
  operation.reset();
  f.commands.apply({WorldControlCommandKind::FocusNpc, 0});
  check(!f.control.camera_focus && f.control.automatic_mode == 2,
        "Missing literal-zero focus used a fallback register or old actor");
  f.commands.apply({WorldControlCommandKind::StopAutomatic});
  check(!f.control.camera_focus && f.control.automatic_mode == 0,
        "Stop invented a focus identity");
  rejects(
      [&] { f.commands.apply({static_cast<WorldControlCommandKind>(99), 42}); },
      "Unknown semantic command was silently accepted");
  check(f.actors.actor(late).npc() == 43,
        "Control command changed unrelated actor identity");
}
} // namespace
int main() {
  try {
    for (auto region : {eb::GameVersion::US, eb::GameVersion::JP}) {
      operand_domains(region);
      application(region);
    }
    std::cout << "Native world control commands: " << checks
              << " checks passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
