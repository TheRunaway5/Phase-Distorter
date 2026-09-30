// ActorFrame orchestration only: expected service order and live guard come
// from complete original C03CFD execution. Native scene actor/render callbacks
// have separate tests. Original WAIT runs both hardware polling and actual NMI
// delivery; this probe does not equate either clock to Scene::complete_frame.
// No source calls
// are intercepted. Retail assets remain imported from supplied local packs.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <map>
#include <string>
const std::map<std::string, unsigned> us = {
    {"UNKNOWN_C0A780", 0xc0a780},
    {"RUN_ACTIONSCRIPT_FRAME", 0xc09466},
    {"UPDATE_SCREEN", 0xc08b26},
    {"OAM_CLEAR", 0xc088b1},
    {"WAIT_UNTIL_NEXT_FRAME", 0xc08756},
    {"UNKNOWN_C06A07", 0xc06a07},
    {"UNKNOWN_C068F4", 0xc068f4},
    {"UNKNOWN_C03CFD", 0xc03cfd},
    {"UNKNOWN_C02140", 0xc02140},
    {"CREATE_ENTITY", 0xc01e49},
    {"EVENT_002", 0x2},
    {"NESS_BICYCLE", 0x7},
    {"SET_AUTO_SECTOR_MUSIC_CHANGES", 0xc4fd45},
    {"CHANGE_MUSIC", 0xc4fbbd},
    {"ENABLE_AUTO_SECTOR_MUSIC_CHANGES", 0x7eb549},
    {"CURRENT_MUSIC_TRACK", 0x7eb53b},
    {"PARTY_CHARACTERS", 0x7e99ce},
    {"GAME_STATE", 0x7e97f5},
    {"DO_MAP_MUSIC_FADE", 0x7e5dda},
    {"DISABLE_MUSIC_CHANGES", 0x7e5dd8},
    {"NEXT_MAP_MUSIC_TRACK", 0x7e5dd6},
    {"CURRENT_MAP_MUSIC_TRACK", 0x7e5dd4},
    {"UNREAD_7E5DBA", 0x7e5dba},
    {"PENDING_INTERACTIONS", 0x7e5d9a},
    {"INPUT_DISABLE_FRAME_COUNTER", 0x7e5d74},
    {"BATTLE_MODE", 0x7e4dc2},
    {"ENTITY_CURRENT_DISPLAYED_SPRITES", 0x7e341a},
    {"ENTITY_HITBOX_LEFT_RIGHT_WIDTHS", 0x7e33de},
    {"ENTITY_HITBOX_UP_DOWN_HEIGHTS", 0x7e33a2},
    {"ENTITY_HITBOX_UP_DOWN_WIDTHS", 0x7e3366},
    {"ENTITY_HITBOX_ENABLED", 0x7e332a},
    {"ENTITY_SPRITE_IDS", 0x7e2cd6},
    {"ENTITY_NPC_IDS", 0x7e2c9a},
    {"ENTITY_PATHFINDING_STATES", 0x7e2c5e},
    {"ENTITY_SURFACE_FLAGS", 0x7e2baa},
    {"ENTITY_SIZES", 0x7e2b6e},
    {"ENTITY_MOVEMENT_SPEEDS", 0x7e2b32},
    {"ENTITY_DIRECTIONS", 0x7e2af6},
    {"ENTITY_VRAM_ADDRESS", 0x7e298e},
    {"ENTITY_OBSTACLE_FLAGS", 0x7e28da},
    {"ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS", 0x7e1a4a},
    {"ENTITY_SPRITEMAP_POINTER_LOW", 0x7e112e},
    {"ENTITY_ANIMATION_FRAME", 0x7e10f2},
    {"ENTITY_TICK_CALLBACK_HIGH", 0x7e10b6},
    {"ENTITY_SCRIPT_VAR7_TABLE", 0x7e1002},
    {"ENTITY_SCRIPT_VAR1_TABLE", 0x7e0e9a},
    {"ENTITY_SCRIPT_VAR0_TABLE", 0x7e0e5e},
    {"ENTITY_ABS_Y_TABLE", 0x7e0bca},
    {"ENTITY_ABS_X_TABLE", 0x7e0b8e},
    {"ENTITY_NEXT_ENTITY_TABLE", 0x7e0a9e},
    {"ENTITY_SCRIPT_TABLE", 0x7e0a62},
    {"DISABLE_ACTIONSCRIPT", 0x7e0a60},
    {"CURRENT_ENTITY_DRAW_CALLBACK", 0x7e0a5e},
    {"FIRST_ENTITY", 0x7e0a50},
    {"NEW_ENTITY_VAR1", 0x7e0a3a},
    {"NEW_ENTITY_VAR0", 0x7e0a38},
    {"DMA_COPY_VRAM_DEST", 0x7e0097},
    {"DMA_COPY_RAM_SRC", 0x7e0094},
    {"DMA_COPY_SIZE", 0x7e0092},
    {"NEXT_FRAME_BUF_ID", 0x7e002e},
    {"NEW_FRAME_STARTED", 0x7e002b},
    {"NMITIMEN_MIRROR", 0x7e001e},
};
const std::map<std::string, unsigned> jp = {
    {"UNKNOWN_C0A780", 0xc0a75f},
    {"RUN_ACTIONSCRIPT_FRAME", 0xc09445},
    {"UPDATE_SCREEN", 0xc08b17},
    {"OAM_CLEAR", 0xc088a3},
    {"WAIT_UNTIL_NEXT_FRAME", 0xc0874c},
    {"UNKNOWN_C06A07", 0xc06c35},
    {"UNKNOWN_C068F4", 0xc06b22},
    {"UNKNOWN_C03CFD", 0xc03f64},
    {"UNKNOWN_C02140", 0xc0214e},
    {"CREATE_ENTITY", 0xc01e5f},
    {"EVENT_002", 0x2},
    {"NESS_BICYCLE", 0x7},
    {"SET_AUTO_SECTOR_MUSIC_CHANGES", 0xc4d0e4},
    {"CHANGE_MUSIC", 0xc4cf5c},
    {"ENABLE_AUTO_SECTOR_MUSIC_CHANGES", 0x7eb6fa},
    {"CURRENT_MUSIC_TRACK", 0x7eb6ec},
    {"PARTY_CHARACTERS", 0x7e9c7f},
    {"GAME_STATE", 0x7e9aa9},
    {"DO_MAP_MUSIC_FADE", 0x7e6160},
    {"DISABLE_MUSIC_CHANGES", 0x7e615e},
    {"NEXT_MAP_MUSIC_TRACK", 0x7e615c},
    {"CURRENT_MAP_MUSIC_TRACK", 0x7e615a},
    {"UNREAD_7E5DBA", 0x7e6140},
    {"PENDING_INTERACTIONS", 0x7e6120},
    {"INPUT_DISABLE_FRAME_COUNTER", 0x7e60fa},
    {"BATTLE_MODE", 0x7e5148},
    {"ENTITY_CURRENT_DISPLAYED_SPRITES", 0x7e1ab8},
    {"ENTITY_HITBOX_LEFT_RIGHT_WIDTHS", 0x7e37dc},
    {"ENTITY_HITBOX_UP_DOWN_HEIGHTS", 0x7e37a0},
    {"ENTITY_HITBOX_UP_DOWN_WIDTHS", 0x7e3764},
    {"ENTITY_HITBOX_ENABLED", 0x7e3728},
    {"ENTITY_SPRITE_IDS", 0x7e30d4},
    {"ENTITY_NPC_IDS", 0x7e3098},
    {"ENTITY_PATHFINDING_STATES", 0x7e305c},
    {"ENTITY_SURFACE_FLAGS", 0x7e2fa8},
    {"ENTITY_SIZES", 0x7e2f6c},
    {"ENTITY_MOVEMENT_SPEEDS", 0x7e2f30},
    {"ENTITY_DIRECTIONS", 0x7e2ef4},
    {"ENTITY_VRAM_ADDRESS", 0x7e2d8c},
    {"ENTITY_OBSTACLE_FLAGS", 0x7e2cd8},
    {"ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS", 0x7e1a40},
    {"ENTITY_SPRITEMAP_POINTER_LOW", 0x7e1124},
    {"ENTITY_ANIMATION_FRAME", 0x7e10e8},
    {"ENTITY_TICK_CALLBACK_HIGH", 0x7e10ac},
    {"ENTITY_SCRIPT_VAR7_TABLE", 0x7e0ff8},
    {"ENTITY_SCRIPT_VAR1_TABLE", 0x7e0e90},
    {"ENTITY_SCRIPT_VAR0_TABLE", 0x7e0e54},
    {"ENTITY_ABS_Y_TABLE", 0x7e0bc0},
    {"ENTITY_ABS_X_TABLE", 0x7e0b84},
    {"ENTITY_NEXT_ENTITY_TABLE", 0x7e0a94},
    {"ENTITY_SCRIPT_TABLE", 0x7e0a58},
    {"DISABLE_ACTIONSCRIPT", 0x7e0a56},
    {"CURRENT_ENTITY_DRAW_CALLBACK", 0x7e0a54},
    {"FIRST_ENTITY", 0x7e0a46},
    {"NEW_ENTITY_VAR1", 0x7e0a30},
    {"NEW_ENTITY_VAR0", 0x7e0a2e},
    {"DMA_COPY_VRAM_DEST", 0x7e0097},
    {"DMA_COPY_RAM_SRC", 0x7e0094},
    {"DMA_COPY_SIZE", 0x7e0092},
    {"NEXT_FRAME_BUF_ID", 0x7e002e},
    {"NEW_FRAME_STARTED", 0x7e002b},
    {"NMITIMEN_MIRROR", 0x7e001e},
};

#include <algorithm>
#include <functional>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>
namespace {
using namespace eb::native;

void need(bool b, const std::string &s) {
  if (!b)
    throw std::runtime_error(s);
}
struct Oracle {
  bool jp;
  const std::map<std::string, unsigned> &s;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  std::vector<std::string> trace;
  unsigned steps{}, waits{}, creates{}, deletes{}, uploads{}, frame_calls{},
      nmi_entries{}, irq_callbacks{};
  std::function<void(const std::string &)> event;
  Oracle(const eb::GameAssets &a)
      : jp(a.version == eb::GameVersion::JP), s(jp ? ::jp : us),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram.fill(0);
    bus->work_ram[0x0d] = 0x80;
    put("FIRST_ENTITY", 0xffff);
    for (unsigned i = 0; i < 30; ++i) {
      put("ENTITY_SCRIPT_TABLE", 0xffff, i * 2);
      put("ENTITY_NEXT_ENTITY_TABLE", i == 29 ? 0xffff : (i + 1) * 2, i * 2);
    }
    for (unsigned i = 0; i < 70; ++i)
      put((jp ? 0x1250 : 0x125a) + i * 2, i == 69 ? 0xffff : (i + 1) * 2);
    put(jp ? 0xa48 : 0xa52, 0);
    put(jp ? 0xa4a : 0xa54, 0);
    std::fill_n(bus->work_ram.begin() + (jp ? 0x4a04 : 0x467e), 0x380, 0xff);
    put("NEXT_FRAME_BUF_ID", 1);
    put("DO_MAP_MUSIC_FADE", 1);
    put("DISABLE_MUSIC_CHANGES", 1);
    put("CURRENT_MUSIC_TRACK", 82);
    put("NEXT_MAP_MUSIC_TRACK", 82);
  }
  unsigned at(const std::string &n) const { return s.at(n) & 0x1ffff; }
  unsigned game(unsigned n) const {
    return at("GAME_STATE") + n - (jp ? 3 : 0);
  }
  unsigned get(unsigned p) const {
    return bus->work_ram.at(p) | (unsigned(bus->work_ram.at(p + 1)) << 8);
  }
  unsigned get(const std::string &n, unsigned off = 0) const {
    return get(at(n) + off);
  }
  void put(unsigned p, unsigned v) {
    bus->work_ram.at(p) = v;
    bus->work_ram.at(p + 1) = v >> 8;
  }
  void put(const std::string &n, unsigned v, unsigned off = 0) {
    put(at(n) + off, v);
  }
  void call(const std::string &name, unsigned a = 0, unsigned x = 0,
            unsigned y = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    cpu.execute_instruction<0x22>(s.at(name), 4);
    for (unsigned i = 0; i < 2000000; ++i) {
      unsigned pc = cpu.program_counter;
      if (pc == 0x008170 || pc == 0xc08170)
        ++nmi_entries;
      if (pc == 0x00851b || pc == 0xc0851b)
        ++irq_callbacks;
      if (pc == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
        need(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e, "ABI");
        return;
      }
      for (auto key :
           {"SET_AUTO_SECTOR_MUSIC_CHANGES", "UNKNOWN_C06A07", "CHANGE_MUSIC",
            "UNKNOWN_C02140", "OAM_CLEAR", "RUN_ACTIONSCRIPT_FRAME",
            "UPDATE_SCREEN", "WAIT_UNTIL_NEXT_FRAME", "CREATE_ENTITY",
            "UNKNOWN_C0A780"})
        if (pc == s.at(key)) {
          trace.push_back(key);
          if (event)
            event(key);
          if (std::string(key) == "WAIT_UNTIL_NEXT_FRAME")
            ++waits;
          if (std::string(key) == "CREATE_ENTITY")
            ++creates;
          if (std::string(key) == "UNKNOWN_C02140")
            ++deletes;
          if (std::string(key) == "UNKNOWN_C0A780")
            ++uploads;
          if (std::string(key) == "RUN_ACTIONSCRIPT_FRAME")
            ++frame_calls;
        }
      cpu.step_instruction();
      ++steps;
    }
    throw std::runtime_error(name + " failed: " + cpu.describe_registers());
  }
  void setup(unsigned seed) {
    put(0x1e0e, 0x7231 + seed * 53);
    put(0x1e10, 0x8912 + seed * 91);
    for (unsigned i = 0; i < 8; ++i)
      put("NEW_ENTITY_VAR0", 0x3300 + i, i * 2);
    call("CREATE_ENTITY", 7, 2, 24);
    need(get("ENTITY_SPRITE_IDS", 48) == 7, "bicycle setup");
    put(game(142), 3);
    put(game(146), 6);
    put(game(136), 0x1234);
    put(game(138), seed % 8);
    put("PARTY_CHARACTERS", 0x4567, jp ? 60 : 61);
    put("UNREAD_7E5DBA", 1);
    put("INPUT_DISABLE_FRAME_COUNTER", 0);
    trace.clear();
    steps = waits = creates = deletes = uploads = frame_calls = 0;
  }
  void dump(const std::string &name) {
    std::cout << "{\"region\":\"" << (jp ? "JP" : "US") << "\",\"case\":\""
              << name << "\",\"steps\":" << steps << ",\"waits\":" << waits
              << ",\"creates\":" << creates << ",\"deletes\":" << deletes
              << ",\"uploads\":" << uploads
              << ",\"frame_calls\":" << frame_calls
              << ",\"x\":" << get("ENTITY_ABS_X_TABLE", 48)
              << ",\"y\":" << get("ENTITY_ABS_Y_TABLE", 48)
              << ",\"var7\":" << get("ENTITY_SCRIPT_VAR7_TABLE", 48)
              << ",\"tick\":" << get("ENTITY_TICK_CALLBACK_HIGH", 48)
              << ",\"first\":" << get("FIRST_ENTITY") << ",\"trace\":[";
    for (unsigned i = 0; i < trace.size(); ++i) {
      if (i)
        std::cout << ',';
      std::cout << '"' << trace[i] << '"';
    }
    std::cout << "]}\n";
  }
};
} // namespace

namespace {
struct Native {
  dialogue::State state;
  party::State members;
  std::shared_ptr<const dialogue::FontResources> fonts;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  party::MeterWindows meters;
  story::RandomState random{0x1234, 0xfedc};
  story::TickState clock;
  story::Ticks ticks;
  Native(const eb::GameAssets &a)
      : members(a.version),
        fonts(dialogue::FontResources::import(a.image, a.version)),
        output(fonts, state),
        windows(dialogue::WindowResources::import(a.image, a.version), state,
                output),
        meters(windows, members,
               party::MeterWindowResources::import(a.image, a.version)),
        ticks(windows, members, random, meters, clock) {}
};
std::string context;
unsigned cases{}, source_instructions{}, effects{}, guard_checks{},
    stable_polls{}, nested_cases{};
void run(const eb::GameAssets &a, unsigned battle, unsigned guard,
         int late_guard, bool nested, bool nmi) {
  context = a.title + " battle=" + std::to_string(battle) +
            " guard=" + std::to_string(guard) +
            " late=" + std::to_string(late_guard) +
            " nested=" + std::to_string(nested) + " nmi=" + std::to_string(nmi);
  Oracle source(a);
  source.setup(3);
  source.put("BATTLE_MODE", battle);
  source.put("PENDING_INTERACTIONS", 0);
  source.put("DISABLE_ACTIONSCRIPT", guard);
  source.put("DISABLE_MUSIC_CHANGES", 1);
  source.bus->set_buttons(0xa080);
  source.put(0x20, 0x851b); // Real DEFAULT_IRQ_CALLBACK.
  source.put(2, 0x1291); // Low byte is frame counter; adjacent byte belongs to
                         // OAM_ADDR low.
  source.put("NMITIMEN_MIRROR", nmi ? 0x81 : 0);
  source.bus->write_byte(0x4200, nmi ? 0x81 : 1);
  std::vector<story::TickService> expected;
  std::vector<unsigned> guard_writes;
  source.cpu.observe_memory_write = [&](unsigned at, std::uint8_t value) {
    if ((at & 0xffff) == source.at("DISABLE_ACTIONSCRIPT"))
      guard_writes.push_back(value);
  };
  source.event = [&](const std::string &name) {
    if (name == "OAM_CLEAR") {
      expected.push_back(story::TickService::ClearObjects);
      if (late_guard >= 0)
        source.put("DISABLE_ACTIONSCRIPT", unsigned(late_guard));
    }
    if (name == "RUN_ACTIONSCRIPT_FRAME" && !source.get("DISABLE_ACTIONSCRIPT"))
      expected.push_back(story::TickService::RunActors);
    if (name == "UPDATE_SCREEN")
      expected.push_back(story::TickService::UpdateScreen);
    if (name == "WAIT_UNTIL_NEXT_FRAME")
      expected.push_back(story::TickService::FrameBoundary);
  };
  source.call("UNKNOWN_C03CFD");
  source_instructions += source.steps;
  need(source.waits == 1 && source.creates == 1 && source.deletes == 1 &&
           source.frame_calls == 1,
       "source quartet missing");
  need(source.bus->work_ram[2] == (nmi ? 0x92u : 0x91u),
       "source NMI frame clock got=" + std::to_string(source.get(2)));
  need(source.get(0x65) == 0xa080 && source.get(0x6d) == 0xa080 &&
           source.get(0x69) == 0xa080,
       "source real frame input");
  need(source.nmi_entries == unsigned(nmi) &&
           source.irq_callbacks == unsigned(nmi),
       "source actual NMI/default callback delivery");
  Native native(a);
  native.clock.action_scripts_disabled = std::uint16_t(guard);
  native.clock.frame_counter = 0x91;
  native.clock.hp_speed = 0x8000;
  native.windows.prompt_state().battle_mode = std::uint16_t(battle);
  native.windows.output().policy().instant = true;
  native.windows.menu_state().early_tick_exit = true;
  native.meters.state().render = 1;
  native.meters.state().area_dirty = 0xabcd;
  native.meters.state().upload = 1;
  native.members.character(1).current_hp = 73;
  native.members.character(1).target_hp = 99;
  std::vector<story::TickCheckpoint> checkpoints;
  native.ticks.observe(
      [&](story::TickCheckpoint c) { checkpoints.push_back(c); });
  std::unique_ptr<story::Ticks::Operation> parent;
  if (nested) {
    native.clock.action_scripts_disabled = 0;
    parent = native.ticks.begin(story::TickKind::ActorFrame);
    need(parent->advance() == dialogue::Progress::Suspended &&
             parent->service() == story::TickService::ClearObjects,
         "parent clear");
    parent->respond();
    need(parent->advance() == dialogue::Progress::Suspended &&
             parent->service() == story::TickService::RunActors,
         "parent guard");
    need(native.clock.action_scripts_disabled == 1, "parent guard not held");
  }
  auto op =
      nested ? native.ticks.begin_nested(story::TickKind::ActorFrame, *parent)
             : native.ticks.begin(story::TickKind::ActorFrame);
  std::vector<story::TickService> actual;
  unsigned active_guard = guard, frame_services = 0;
  while (true) {
    auto result = op->advance(1);
    if (result == dialogue::Progress::Finished)
      break;
    if (result == dialogue::Progress::BudgetExhausted)
      continue;
    auto service = *op->service();
    actual.push_back(service);
    need(op->advance() == dialogue::Progress::Suspended &&
             op->service() == service,
         "pending changed on poll");
    ++stable_polls;
    if (service == story::TickService::ClearObjects && late_guard >= 0) {
      active_guard = unsigned(late_guard);
      native.clock.action_scripts_disabled = std::uint16_t(active_guard);
    }
    if (service == story::TickService::RunActors) {
      need(native.clock.action_scripts_disabled == 1,
           "native actor guard not held");
      ++guard_checks;
    }
    if (service == story::TickService::FrameBoundary)
      ++frame_services;
    op->respond();
    if (service == story::TickService::RunActors) {
      need(native.clock.action_scripts_disabled == 0,
           "native actor guard not released");
      ++guard_checks;
    }
  }
  need(actual == expected,
       "native service sequence differs from whole source C03CFD");
  need(native.clock.action_scripts_disabled ==
           source.get("DISABLE_ACTIONSCRIPT"),
       "final actor guard differs");
  need(frame_services == 1, "frame input boundary count");
  need(native.clock.frame_counter == 0x91, "response fabricated frame clock");
  need(native.random.primary_word == 0x1234 &&
           native.random.secondary_word == 0xfedc,
       "raw tick sampled RNG");
  need(native.members.character(1).current_hp == 73 &&
           native.meters.state().area_dirty == 0xabcd &&
           native.meters.state().render == 1 &&
           native.meters.state().upload == 1,
       "raw tick changed meter state");
  need(native.windows.menu_state().early_tick_exit &&
           native.windows.output().policy().instant,
       "raw tick used dialogue gates");
  for (auto checkpoint : checkpoints)
    need(checkpoint == story::TickCheckpoint::ActorsSuppressed ||
             checkpoint == story::TickCheckpoint::Complete,
         "raw tick entered world/window work");
  need((active_guard ? guard_writes.empty()
                     : guard_writes == std::vector<unsigned>{1, 0}),
       "source guard write order");
  if (parent) {
    need(parent->service() == story::TickService::RunActors,
         "parent resumed early");
    parent->respond();
    while (parent->advance() != dialogue::Progress::Finished) {
      if (parent->service())
        parent->respond();
    }
    ++nested_cases;
  }
  effects += actual.size();
  ++cases;
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int arg = 1; arg < argc; ++arg) {
      auto a = eb::load_game_assets(argv[arg], eb::asset_profiles());
      cases = source_instructions = effects = guard_checks = stable_polls =
          nested_cases = 0;
      for (bool nmi : {false, true})
        for (unsigned battle : {0u, 1u, 0xffffu}) {
          for (unsigned guard : {0u, 1u, 0xffffu})
            for (int late : {-1, 0, 1, 65535})
              run(a, battle, guard, late, false, nmi);
          run(a, battle, 1, -1, true, nmi);
        }
      std::cout
          << "PASS " << a.title << ": " << cases
          << " raw ActorFrame service/guard differentials from whole "
             "original C03CFD, "
          << source_instructions << " original instructions, " << effects
          << " ordered services, " << guard_checks << " native guard checks, "
          << stable_polls << " stable service polls, " << nested_cases
          << " native nested continuations; original "
             "CREATE/delete/OAM/screen/WAIT execute without interception "
             "(39 polling, 39 actual NMI deliveries and real input reads). "
             "No native actor/render or NMI clock "
             "equivalence claimed.\n";
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << ": " << context << '\n';
    return 1;
  }
}
