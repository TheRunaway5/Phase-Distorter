// Complete original text handlers, including operand gathering, actual native
// producer calls, and the real focus reducer. Original CPU execution exists
// only in this oracle. Imported-fragment cases explicitly stop at any following
// unsupported service; none manufacture a world/frame/music acknowledgment.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/import.hpp"
#include "eb/native/dialogue/prompt_host.hpp"
#include "eb/native/dialogue/runtime.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_dialogue_test_assets.hpp"
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
struct Layout {
  unsigned tree, npc, sprite, follow, state, focus, counter, storage, npcs,
      sprites, x, y, xf, yf, direction, displacement;
};
Layout layout(eb::GameVersion version) {
  if (version == eb::GameVersion::US)
    return {0xc181bb, 0xc16d62, 0xc16da5, 0xc0476d, 0x97f5, 0x9e33,
            0x97ca,   0x97ba,   0x2c9a,   0x2cd6,   0xb8e,  0xbca,
            0xc42,    0xc7e,    0x2af6,   0};
  return {0xc1841d, 0xc16fe1, 0xc17024, 0xc049f4, 0x9aa9, 0xa039,
          0x9a7e,   0x9a6e,   0x3098,   0x30d4,   0xb84,  0xbc0,
          0xc38,    0xc74,    0x2ef4,   3};
}
struct Original {
  Layout p;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  std::uint64_t instructions{}, calls{};
  explicit Original(const eb::GameAssets &assets)
      : p(layout(assets.version)),
        bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  void word(unsigned at, unsigned value) {
    bus->work_ram.at(at) = std::uint8_t(value);
    bus->work_ram.at(at + 1) = std::uint8_t(value >> 8);
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  unsigned call(unsigned entry, unsigned operand = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.data_bank = 0x7e;
    cpu.accumulator = 0xabcd;
    cpu.x_index = std::uint16_t(operand);
    cpu.y_index = 0x1234;
    cpu.program_counter = (entry & 0xff0000) | 0xff00;
    const auto returned = cpu.program_counter + 3;
    cpu.execute_instruction<0x20>(entry & 0xffff, 3);
    for (unsigned step = 0; step < 2000; ++step) {
      if (cpu.program_counter == returned && cpu.stack_pointer == 0x1fff) {
        check(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
              "Original text/control routine damaged caller page or bank");
        ++calls;
        return cpu.accumulator;
      }
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error("Original control command did not return: " +
                             cpu.describe_registers());
  }
  unsigned game(unsigned offset) const {
    return p.state + offset - p.displacement;
  }
  void seed(const control_command_test::Fixture &f) {
    for (unsigned i = 0; i < 0xc0 - p.displacement; ++i)
      bus->work_ram[p.state + i] = std::uint8_t(i * 13 + 7);
    word(game(0x80), f.control.x_fraction);
    word(game(0x82), f.leader.leader_x);
    word(game(0x84), f.control.y_fraction);
    word(game(0x86), f.leader.leader_y);
    word(game(0x8a), f.leader.leader_direction);
    word(game(0x90), f.control.moved_this_tick);
    word(game(0xb0), f.control.automatic_mode);
    word(game(0xb2), f.control.automatic_ticks);
    word(game(0xb4), f.control.automatic_restore_style);
    word(p.counter, 0);
    word(p.focus,
         f.control.camera_focus
             ? std::get<AuthoredRoleRef>(*f.control.camera_focus).value()
             : 0xffff);
    // Preserve actual semantic selector defaults: pristine sprites are zero,
    // NPC absence is FFFF, and retired/released roles retain their own keys.
    for (unsigned role = 0; role < 30; ++role) {
      word(p.npcs + role * 2, f.actors.authored_npc_selector(role));
      word(p.sprites + role * 2, f.actors.authored_sprite_selector(role));
      if (const auto actor = f.actors.actor_for_role(role)) {
        const auto &a = f.actors.actor(*actor);
        word(p.npcs + role * 2, a.npc().value_or(0xffff));
        word(p.sprites + role * 2, a.appearance.sprite());
        word(p.x + role * 2, a.action().position[0] >> 16);
        word(p.xf + role * 2, a.action().position[0]);
        word(p.y + role * 2, a.action().position[1] >> 16);
        word(p.yf + role * 2, a.action().position[1]);
        word(p.direction + role * 2, a.behavior.direction);
      }
    }
    // Original C02668 writes battle+8000 into NPC_IDS and the spawn cell
    // into its separate table; native actor.npc() owns ordinary NPCs only.
    for (const auto &enemy : f.enemies.actors()) {
      const auto role = *f.actors.actor(enemy.actor).authored_role();
      word(p.npcs + role * 2, enemy.npc_identity().value_or(0xffff));
    }
  }
  void command(const WorldControlCommand &command) {
    const auto selector =
        command.kind == WorldControlCommandKind::FocusNpc      ? 0xeeu
        : command.kind == WorldControlCommandKind::FocusSprite ? 0xefu
                                                               : 0xedu;
    const auto handler = call(p.tree, selector);
    if (selector == 0xed) {
      check(handler == 0, "Stop dispatcher did not finish");
      return;
    }
    const auto entry = selector == 0xee ? p.npc : p.sprite;
    check(handler == (entry & 0xffff),
          "Text tree returned the wrong operand handler");
    const auto previous_mode = word(game(0xb0)), previous_focus = word(p.focus);
    check(call(entry, command.selector & 255) == (entry & 0xffff) &&
              word(p.counter) == 1 &&
              bus->work_ram[p.storage] == (command.selector & 255) &&
              word(game(0xb0)) == previous_mode &&
              word(p.focus) == previous_focus,
          "First operand byte prematurely applied the original command");
    check(call(entry, command.selector >> 8) == 0,
          "Second operand failed to complete original producer");
  }
  void compare(const control_command_test::Fixture &f, bool positions) {
    const auto role =
        f.control.camera_focus
            ? std::get<AuthoredRoleRef>(*f.control.camera_focus).value()
            : 0xffff;
    check(word(p.focus) == role &&
              word(game(0xb0)) == f.control.automatic_mode &&
              word(game(0x90)) == f.control.moved_this_tick &&
              word(game(0xb2)) == f.control.automatic_ticks &&
              word(game(0xb4)) == f.control.automatic_restore_style,
          "Typed producer differs from original focus/mode/movement/countdown "
          "state");
    if (positions)
      check(word(game(0x82)) == f.leader.leader_x &&
                word(game(0x86)) == f.leader.leader_y &&
                word(game(0x80)) == f.control.x_fraction &&
                word(game(0x84)) == f.control.y_fraction &&
                word(game(0x8a)) == f.leader.leader_direction,
            "Actual automatic focus differs from source whole/fractional "
            "position or direction");
  }
};
void until_service(dialogue::Runtime &vm) {
  while (vm.advance(1) == dialogue::Progress::BudgetExhausted) {
  }
}
dialogue::Location fragment(const dialogue::Program &program, unsigned key,
                            std::initializer_list<std::uint8_t> bytes) {
  const auto location = program.resolve(
      {std::uint8_t(key), std::uint8_t(key >> 8), std::uint8_t(key >> 16), 0});
  check(bool(location),
        "Actual authored fragment was absent from imported text content");
  unsigned at{};
  for (auto byte : bytes)
    check(program.byte(dialogue::Program::advance(*location, at++)) == byte,
          "Imported authored fragment bytes changed");
  return *location;
}
void execute_pending(dialogue::Runtime &vm, control_command_test::Fixture &f,
                     Original &source) {
  check(vm.request() &&
            vm.request()->kind == dialogue::RequestKind::WorldControl &&
            vm.request()->world_control,
        "Authored text did not produce a native control command");
  source.seed(f);
  const auto before = source.bus->work_ram;
  source.command(*vm.request()->world_control);
  f.commands.apply(*vm.request()->world_control);
  source.compare(f, true);
  for (unsigned i = 0; i < 0xc0 - source.p.displacement; ++i)
    if (i + source.p.displacement != 0xb0 &&
        i + source.p.displacement != 0xb1 &&
        i + source.p.displacement != 0x90 && i + source.p.displacement != 0x91)
      check(source.bus->work_ram[source.p.state + i] ==
                before[source.p.state + i],
            "Text producer changed unrelated persisted game state");
  vm.respond(); // The real native producer completed above.
}
void domains(const eb::GameAssets &assets, Original &source) {
  control_command_test::Fixture f(assets.version);
  f.create(10, 1, 0x1234);
  f.create(2, 1, 42);
  for (unsigned selector : {0xeeu, 0xefu})
    for (unsigned byte = 0; byte < 256; ++byte)
      for (unsigned value : {byte, byte << 8}) {
        f.control.automatic_mode = 0x4567;
        f.control.moved_this_tick = 0x89ab;
        f.control.automatic_ticks = 0xcdef;
        f.control.automatic_restore_style = 0x4321;
        dialogue::State state;
        state.dummy.active = {0x12345678, 0x87654321, 0xabcd};
        auto program = std::make_shared<dialogue::Program>(
            assets.version,
            std::vector<dialogue::ContentBlock>{
                {0,
                 0,
                 {0x1f, std::uint8_t(selector), std::uint8_t(value),
                  std::uint8_t(value >> 8), 2}}},
            std::vector<dialogue::Location>{{0, 0}});
        dialogue::Runtime vm(program, state);
        vm.start(dialogue::EntryId{0});
        until_service(vm);
        execute_pending(vm, f, source);
        check(
            vm.advance() == dialogue::Progress::Finished &&
                state.dummy.active ==
                    dialogue::Registers{0x12345678, 0x87654321, 0xabcd},
            "Source-equivalent control command failed native text completion");
      }
}
void imported_scene(const eb::GameAssets &assets,
                    const std::shared_ptr<const dialogue::Program> &program,
                    dialogue::Location start, control_command_test::Fixture &f,
                    ActorId focused) {
  dialogue_test_assets::WindowInput input(assets.version);
  dialogue_test_assets::add_text_fonts(input);
  dialogue::State state;
  dialogue::TextOutput output(
      dialogue::FontResources::import(input.image, assets.version), state);
  dialogue::WindowHost windows(input.import(), state, output);
  dialogue::PromptHost prompts(windows);
  party::State party(assets.version);
  party.party_count = party.controlled_count = 1;
  party.party_order[0] = party.display_order[0] = 1;
  party.controlled_order[0] = 0;
  party::MeterWindows meters(
      windows, party,
      party::MeterWindowResources::import(input.image, assets.version));
  story::RandomState random{1, 2};
  story::TickState clock;
  std::array<std::uint8_t, 128> flags{};
  auto area = WorldMap(assets.image, world_map_layout(assets.version))
                  .prepare(0, flags);
  auto palettes =
      WorldPalettes(assets.image, world_palette_layout(assets.version))
          .resolve({0, 0}, flags);
  story::Scene scene(windows, party, random, meters, clock, f.input, f.actors,
                     area, palettes);
  scene.bind_world_control(f.commands);
  f.control.automatic_mode = 0;
  f.control.camera_focus.reset();
  dialogue::Conversation conversation(program, prompts);
  conversation.start(start);
  auto operation = scene.begin(conversation);
  unsigned frames{};
  for (unsigned step = 0; step < 10000; ++step) {
    const auto progress = operation->advance(1);
    if (progress == dialogue::Progress::Finished)
      break;
    if (progress == dialogue::Progress::BudgetExhausted)
      continue;
    // Actual CC10/C100D6 performs one initial WindowTick, then count
    // WorldTicks. Thus authored Pause1 publishes two real frames here.
    if (operation->service() != story::SceneService::Frame || frames >= 2)
      throw std::runtime_error(
          "Imported stage pending service=" +
          std::to_string(operation->service() ? int(*operation->service())
                                              : -1) +
          " completed_frames=" + std::to_string(frames) + " consumed_bytes=" +
          std::to_string(conversation.snapshot().consumed_bytes));
    check(f.control.automatic_mode == 2 &&
              f.control.camera_focus ==
                  CameraTarget{AuthoredRoleRef(
                      *f.actors.actor(focused).authored_role())},
          "Scene did not execute the real imported focus command before the "
          "pause");
    operation->complete_frame({0, 0});
    ++frames;
  }
  check(operation->complete() && frames == 2 && scene.completed_frames() == 2 &&
            conversation.snapshot().consumed_bytes == 7 &&
            f.control.camera_focus ==
                CameraTarget{AuthoredRoleRef(
                    *f.actors.actor(focused).authored_role())} &&
            f.control.automatic_mode == 2,
        "Actual imported stage did not finish through bound Scene and its "
        "initial WindowTick plus one delayed WorldTick");
}
void enemy_identity(const eb::GameAssets &assets, Original &source) {
  auto data = walking_test::empty_enemies();
  data->battles.resize(3, {{1, 0}});
  data->encounters[1].choices.assign(8, 2);
  control_command_test::Fixture f(assets.version, {}, data);
  EnemySpawnState state;
  state.event_flags.resize(128);
  state.bypass_chance = true;
  f.enemies.begin_cell(f.actors, 3, 4, 1, 32, 32, state);
  for (unsigned step = 0; f.enemies.busy(); ++step) {
    check(step < 30 && f.enemies.request(),
          "Native enemy fixture lost its real spawn continuation");
    if (const auto *random =
            std::get_if<EnemyRandomRequest>(&*f.enemies.request())) {
      f.enemies.respond_random(
          f.actors, random->purpose == EnemyRandomPurpose::PositionX   ? 16
                    : random->purpose == EnemyRandomPurpose::PositionY ? 10
                                                                       : 0);
    } else
      f.enemies.respond_terrain(f.actors, 0);
  }
  check(f.enemies.actors().size() == 1,
        "Native enemy fixture did not create one actual actor");
  const auto enemy = f.enemies.actors().front();
  check(enemy.battle == 2 && enemy.spawn_cell != enemy.battle,
        "Enemy identity fixture failed to distinguish battle from cell");
  for (unsigned identity :
       {unsigned(enemy.battle + 0x8000), unsigned(enemy.spawn_cell + 0x8000)}) {
    dialogue::State text;
    auto program = std::make_shared<dialogue::Program>(
        assets.version,
        std::vector<dialogue::ContentBlock>{
            {0,
             0,
             {0x1f, 0xee, std::uint8_t(identity), std::uint8_t(identity >> 8),
              2}}},
        std::vector<dialogue::Location>{{0, 0}});
    dialogue::Runtime vm(program, text);
    vm.start(dialogue::EntryId{0});
    until_service(vm);
    execute_pending(vm, f, source);
    check(f.control.camera_focus ==
                  (identity == enemy.battle + 0x8000
                       ? std::optional<CameraTarget>(AuthoredRoleRef(
                             *f.actors.actor(enemy.actor).authored_role()))
                       : std::nullopt) &&
              vm.advance() == dialogue::Progress::Finished,
          "CC1FEE used spawn-cell identity instead of source battle identity");
  }
}
void imported(const eb::GameAssets &assets, Original &source) {
  const bool us = assets.version == eb::GameVersion::US;
  const auto imported = dialogue::import_program(assets.image, assets.version);
  auto sprites = std::make_shared<SpriteResources>(
      assets.image, sprite_catalog_layout(assets.version));
  control_command_test::Fixture f(assets.version, std::move(sprites));
  const auto late = f.create(10, 106, 374), focused = f.create(2, 106, 373);
  auto &actor = f.actors.actor(focused);
  actor.action().position = {0x12348000, 0x4567ffff, 0};
  actor.action().velocity = {0x18000, 0xffffc000, 0};
  actor.behavior.direction = 6;
  dialogue::State state;
  dialogue::Runtime stage(imported.program, state);
  const auto stage_start = fragment(*imported.program, us ? 0xc79280 : 0xc52843,
                                    {0x1f, 0xef, 0x6a, 0, 0x10, 1, 2});
  stage.start(stage_start);
  until_service(stage);
  execute_pending(stage, f, source);
  check(
      f.control.camera_focus ==
              CameraTarget{
                  AuthoredRoleRef(*f.actors.actor(focused).authored_role())} &&
          focused != f.player && focused != late,
      "Actual stage content failed to select nonleader by authored role order");
  until_service(stage);
  check(stage.request()->kind == dialogue::RequestKind::Pause &&
            stage.snapshot().consumed_bytes == 6,
        "Actual stage content lost its following one-frame pause boundary");
  const auto pause = stage.request();
  // The Runtime integration test owns real frame publication. Here advance
  // only the actual actor and Automatic owners in source order, retaining the
  // pending dialogue pause throughout, with no synthetic pause completion.
  for (unsigned frame = 0; frame < 8; ++frame) {
    source.seed(f);
    source.call(source.p.follow);
    const auto before_ticks = f.actors.ticks();
    auto operation = f.automatic.begin();
    check(operation->advance() && operation->complete() &&
              f.actors.ticks() == before_ticks,
          "Automatic consumer did not finish independently from actor "
          "advancement");
    source.compare(f, true);
    check(stage.advance(4096) == dialogue::Progress::Suspended &&
              stage.request() == pause &&
              f.control.camera_focus ==
                  CameraTarget{AuthoredRoleRef(
                      *f.actors.actor(focused).authored_role())},
          "Consumer tick resumed dialogue or lost actual actor identity");
    const auto x = actor.action().position[0], y = actor.action().position[1];
    check(f.actors.advance_tick() == WorldTickResult::Complete &&
              actor.action().position[0] == x + 0x18000u &&
              actor.action().position[1] == y + 0xffffc000u,
          "Actual nonleader actor physics did not advance once after focus "
          "consumption");
  }
  dialogue::Runtime npc(imported.program, state);
  npc.start(
      fragment(*imported.program, us ? 0xc79be1 : 0xc53184,
               {0x1f, 0xee, 0x75, 1, 0x1f, 0xe8, 0xff, 0x1f, 0x67, 1, 2}));
  until_service(npc);
  execute_pending(npc, f, source);
  until_service(npc);
  check(f.control.camera_focus ==
                CameraTarget{AuthoredRoleRef(
                    *f.actors.actor(focused).authored_role())} &&
            npc.request()->kind == dialogue::RequestKind::WorldControl &&
            npc.request()->selector == 0xe8 &&
            npc.request()->world_control == WorldControlCommand{WorldControlCommandKind::ClearPlayerLock,0xff} &&
            npc.snapshot().consumed_bytes == 7,
        "Actual Twoson bus prefix did not preserve its honest next-service "
        "frontier");
  dialogue::Runtime stop(imported.program, state);
  stop.start(fragment(*imported.program, us ? 0xc78290 : 0xc51989,
                      {0x1f, 0xed, 0x1f, 7, 5}));
  until_service(stop);
  execute_pending(stop, f, source);
  until_service(stop);
  check(f.control.automatic_mode == 0 && f.control.moved_this_tick == 0 &&
            f.control.camera_focus ==
                CameraTarget{AuthoredRoleRef(
                    *f.actors.actor(focused).authored_role())} &&
            stop.request()->kind == dialogue::RequestKind::ScriptMusic &&
            stop.request()->selector == 7 &&
            stop.request()->script_music==dialogue::ScriptMusicRequest{dialogue::ScriptMusicKind::Effect,5,0},
        "Actual stop prefix cleared focus or swallowed its separate music owner");
  imported_scene(assets, imported.program, stage_start, f, focused);
  std::cout << (us ? "US" : "JP")
            << " imported_fragments=3 imported_scene_frames=2 "
               "moving_nonleader_samples=8 source_calls="
            << source.calls << " source_instructions=" << source.instructions
            << '\n';
}
} // namespace
int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "Provide validated US/JP .ebpak files\n";
    return 77;
  }
  try {
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      Original source(assets);
      domains(assets, source);
      enemy_identity(assets, source);
      imported(assets, source);
    }
    std::cout << "Native world control command reference: " << checks
              << " checks passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
