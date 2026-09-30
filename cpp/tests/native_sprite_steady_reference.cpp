// Paired real-game movement probe. Per-update state equality and physical
// frame cadence are separate contracts; neither is inferred from sprite smoke.
#include "eb/asset_store.hpp"
#include "eb/game_debug.hpp"
#include "eb/input_replay.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "native_sprite_state_contract.hpp"
#include <algorithm>
#include <array>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

namespace {
void require(bool condition, const std::string &message) {
  if (!condition)
    throw std::runtime_error(message);
}
unsigned normalized(unsigned pc) {
  const unsigned bank = pc >> 16;
  return bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000))
             ? pc | 0xc00000
             : pc;
}
std::vector<std::uint8_t> read_save(const std::string &path) {
  std::ifstream input(path, std::ios::binary | std::ios::ate);
  require(bool(input) && input.tellg() == 8192, "Save must contain 8192 bytes");
  std::vector<std::uint8_t> result(8192);
  input.seekg(0);
  input.read(reinterpret_cast<char *>(result.data()), result.size());
  require(bool(input), "Cannot read save " + path);
  return result;
}
struct Core {
  eb::SnesBus bus;
  eb::Spc700AudioCpu apu;
  eb::SnesAudioDsp dsp;
  eb::MainCpu65816 cpu;
  eb::GameDebug debug;
  const eb::SourceProfile &profile;
  bool native;
  std::uint64_t updates{}, completions{}, steps{};
  std::uint64_t last_update_clock{}, last_update_frame{};
  unsigned last_update_line{};
  bool profile_actor_clocks{};
  std::map<unsigned, std::uint64_t> actor_clocks;
  Core(const eb::GameAssets &assets, bool host,
       std::span<const std::uint8_t> save, bool same_clock = false)
      : bus(assets.image, assets.version), apu(bus), dsp(apu), cpu(bus),
        debug(bus, cpu), profile(eb::source_profile(assets.version)),
        native(host) {
    if (native || same_clock)
      bus.set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
    if (native)
      bus.enable_native_sprite_runtime(true);
    std::copy(save.begin(), save.end(), bus.save_ram.begin());
    bus.set_presentation_width(522);
    cpu.reset_from_vector();
    cpu.set_gameplay_timing(true);
  }
  unsigned word(unsigned at) const {
    return unsigned(bus.work_ram.at(at)) | unsigned(bus.work_ram.at(at + 1))
                                               << 8;
  }
  std::array<unsigned, 6> leader() const {
    // The two fractions immediately precede the regional integer fields;
    // leader_direction is the following position-buffer index plus2.
    const auto &p = profile.party_state;
    return {word(p.leader_x - 2), word(p.leader_x),     word(p.leader_y - 2),
            word(p.leader_y),     word(p.leader_y + 4), word(p.walking_style)};
  }
  std::array<unsigned, 2> position() const {
    return {word(profile.party_state.leader_x),
            word(profile.party_state.leader_y)};
  }
  bool main_entry() const {
    return normalized(cpu.program_counter) ==
           profile.gameplay_routines.main_loop;
  }
  void step() {
    require(!cpu.is_stopped, "CPU stopped during steady trajectory probe");
    // Count the enabled body after native admission, not MAIN_LOOP's JSL:
    // that call can be queued at the body until the following tick.
    const bool update =
        normalized(cpu.program_counter) ==
        (bus.game_version() == eb::GameVersion::JP ? 0xc0944fu : 0xc09470u);
    const auto before = cpu.instruction_count;
    const unsigned before_pc = normalized(cpu.program_counter);
    const auto clock = bus.master_clocks(), frame = bus.completed_frames;
    const auto line = bus.scanline_index();
    debug.before_step();
    steps += cpu.advance_gameplay(std::numeric_limits<unsigned>::max());
    if (update && before != cpu.instruction_count) {
      ++updates;
      last_update_clock = clock;
      last_update_frame = frame;
      last_update_line = line;
      actor_clocks.clear();
    }
    if (before != cpu.instruction_count &&
        before_pc ==
            (bus.game_version() == eb::GameVersion::JP ? 0xc094aeu : 0xc094cfu))
      ++completions;
    if (profile_actor_clocks) {
      const auto elapsed = bus.master_clocks() - clock;
      const unsigned key = update && before == cpu.instruction_count &&
                                   normalized(cpu.program_counter) == before_pc
                               ? 0xffffffffu
                               : before_pc & 0xffff00u;
      actor_clocks[key] += elapsed;
    }
    require(steps < 1000000000ull, "Steady probe exceeded instruction budget");
  }
  void frame() {
    const auto before = bus.completed_frames;
    do {
      step();
    } while (bus.completed_frames == before);
    dsp.take_stereo_samples();
  }
  void next_main() {
    const auto deadline = bus.completed_frames + 30;
    do {
      step();
      require(bus.completed_frames < deadline,
              "Normal main loop did not return within30 frames");
    } while (!main_entry());
    dsp.take_stereo_samples();
  }
  void assert_steady() const {
    require(debug.snapshot().ready && !debug.snapshot().busy,
            "Route is not ready for free movement");
    require(bus.work_ram[0x28] == 0 && bus.work_ram[0x0d] == 15,
            "Steady movement crossed an active fade or non-visible scene");
    const auto &g = profile.action_gates;
    for (unsigned at :
         {profile.wram_battle_mode_flag, g.battle_mode,
          g.battle_swirl_countdown, g.enemy_touched, g.teleport_destination,
          g.using_door, g.input_disable_frames, g.pending_interactions})
      require(word(at) == 0, "Steady movement crossed a gameplay gate at " +
                                 std::to_string(at));
    require(word(profile.party_state.walking_style) == 0,
            "Steady route changed normal walking style");
  }
  void bootstrap(const std::string &input_path) {
    eb::InputReplay input(eb::input_script(input_path));
    unsigned phase = 0;
    std::uint64_t phase_start = 0;
    while (bus.completed_frames < 18000) {
      const auto now = bus.completed_frames;
      const auto state = debug.snapshot();
      unsigned buttons = 0;
      if (phase == 0) {
        buttons = input_path.empty() ? (now > 600 && now % 60 < 5 ? 0x1080 : 0)
                                     : input.buttons_for_frame(now);
        if (state.ready) {
          phase = 1;
          phase_start = now;
        }
      } else if (phase == 1 && now >= phase_start + 180) {
        debug.configure({true, true, true, true});
        debug.request({eb::GameDebugRequest::Kind::Teleport, 2, {}});
        phase = 2;
        phase_start = now;
      } else if (phase == 2) {
        buttons =
            state.status.starts_with("Waiting") && now % 30 < 5 ? 0x80 : 0;
        if (now >= phase_start + 300 && !state.busy) {
          const auto targets = eb::debug_destinations();
          const auto target =
              std::find_if(targets.begin(), targets.end(),
                           [](auto place) { return place.id == 2; });
          require(target != targets.end() &&
                      state.status ==
                          std::string("Teleported to ") + target->name + "." &&
                      position() ==
                          std::array<unsigned, 2>{target->x, target->y},
                  "Twoson bootstrap did not reach the authored ready position");
          bus.set_buttons(0);
          while (!main_entry())
            step();
          // Consume any pending bootstrap input before the shared
          // controller schedule. Stop at the same source boundary.
          for (unsigned i = 0; i < 4; ++i)
            next_main();
          assert_steady();
          require(position() == std::array<unsigned, 2>{target->x, target->y},
                  "Pending bootstrap input moved the starting position");
          return;
        }
      }
      bus.set_buttons(buttons);
      frame();
    }
    throw std::runtime_error("Twoson bootstrap exceeded18000 frames");
  }
  void bootstrap_logical(const std::string &input_path) {
    // Preserve the existing new-game/load input script and debug policy.
    // Only this mode settles at source MAIN_LOOP boundaries by completed
    // actor passes, so slow original artwork cannot add extra NPC sleeps.
    eb::InputReplay input(eb::input_script(input_path));
    while (!debug.snapshot().ready) {
      const auto now = bus.completed_frames;
      require(now < 18000,
              "Logical bootstrap did not reach the source ready event");
      bus.set_buttons(input_path.empty()
                          ? (now > 600 && now % 60 < 5 ? 0x1080 : 0)
                          : input.buttons_for_frame(now));
      step();
      if (bus.completed_frames != now)
        dsp.take_stereo_samples();
    }
    bus.set_buttons(0);
    while (!main_entry())
      step();
    require(updates == completions,
            "Initial ready boundary contains an unfinished actor pass");
    const auto first_ready = completions;
    for (unsigned i = 0; i < 180; ++i)
      next_main();
    require(completions - first_ready == 180 && updates == completions,
            "Pre-teleport logical settling did not complete exactly180 actor "
            "passes");
    const auto pre_teleport = completions;
    debug.configure({true, true, true, true});
    debug.request({eb::GameDebugRequest::Kind::Teleport, 2, {}});
    // Process the same authored teleport. Dialogue dismissal remains the
    // existing A-button cadence; no scene, actor or random state is copied.
    while (debug.snapshot().busy) {
      const auto now = bus.completed_frames;
      require(now < 18000, "Logical Twoson teleport did not complete");
      bus.set_buttons(
          debug.snapshot().status.starts_with("Waiting") && now % 30 < 5 ? 0x80
                                                                         : 0);
      step();
      if (bus.completed_frames != now)
        dsp.take_stereo_samples();
    }
    const auto destinations = eb::debug_destinations();
    const auto target = std::find_if(destinations.begin(), destinations.end(),
                                     [](auto place) { return place.id == 2; });
    require(target != destinations.end() &&
                debug.snapshot().status ==
                    std::string("Teleported to ") + target->name + "." &&
                position() == std::array<unsigned, 2>{target->x, target->y},
            "Logical bootstrap did not complete the authored Twoson teleport");
    bus.set_buttons(0);
    while (!main_entry())
      step();
    require(updates == completions,
            "Post-teleport source boundary contains an unfinished actor pass");
    const auto post_teleport = completions;
    // Existing fixture's300 settling updates plus its4 input-drain updates.
    for (unsigned i = 0; i < 304; ++i)
      next_main();
    require(completions - post_teleport == 304 && updates == completions,
            "Post-teleport logical settling did not complete exactly304 actor "
            "passes");
    assert_steady();
    require(position() == std::array<unsigned, 2>{target->x, target->y},
            "Bootstrap controller input moved the starting position");
    std::cout << (native ? "native" : "source")
              << " logical bootstrap completed passes first_ready="
              << first_ready << " pre_teleport=" << pre_teleport
              << " post_teleport=" << post_teleport
              << " route_ready=" << completions
              << " hardware_frame=" << bus.completed_frames << '\n'
              << std::flush;
  }
  void describe(const char *label) const {
    const auto p = leader();
    unsigned actors = 0;
    for (unsigned slot = 0; slot < 60; slot += 2)
      actors += word(profile.wram_entity_script_ids + slot) != 0xffff;
    std::cout << label << " hardware_frame=" << bus.completed_frames
              << " updates=" << updates << " leader=" << p[1] << ':' << p[0]
              << ',' << p[3] << ':' << p[2] << " facing=" << p[4]
              << " style=" << p[5] << " RNG=" << word(0x24) << ',' << word(0x26)
              << " actor_count=" << actors
              << " frame_counter=" << unsigned(bus.work_ram[2]) << '\n';
  }
};
void compare(const Core &source, const Core &host, const char *contract,
             unsigned index) {
  if (source.leader() == host.leader())
    return;
  source.describe("source mismatch");
  host.describe("native mismatch");
  throw std::runtime_error(std::string(contract) + " trajectory differs at " +
                           std::to_string(index));
}
constexpr std::array<unsigned, 5> directions{0x100, 0x200, 0x900, 0x600, 0};
// The finite logical-state contract is derived from common/ram.asm and the
// independently linked US/JP symbols. This is not a whole-WRAM hash. All named
// per-actor tables are compared for every live slot, including unknown fields,
// authored ROM references, visibility bank/flags, overlay timers and callbacks.
// The three omitted per-actor tables are native-replaced allocation transport:
// ENTITY_SPRITEMAP_POINTER_LOW, ENTITY_SPRITEMAP_BEGINNING_INDICES,
// ENTITY_VRAM_ADDRESS. Custom ROM descriptor low words remain semantic and are
// compared separately. ENTITY_DRAW_SORTING and ENTITY_MOVEMENT_PROSPECTIVE_X/Y
// are scratch, not retained actor state. Source OAM/VRAM, DMA/palette queues,
// PPU buffer selectors, CPU stack scratch, FRAME_COUNTER ($0002), TIMER ($00a7)
// and hardware clocks are outside this logical snapshot. Live VM temporary
// values remain raw; the comparator separately validates only the finite
// dead graphics-return continuations described in
// native_sprite_state_contract.hpp.
struct RegionalField {
  const char *name;
  unsigned us, jp;
  unsigned address(bool japanese) const { return japanese ? jp : us; }
};
constexpr RegionalField actor_fields[]{
    {"ENTITY_SCRIPT_TABLE", 0x0a62, 0x0a58},
    {"ENTITY_NEXT_ENTITY_TABLE", 0x0a9e, 0x0a94},
    {"ENTITY_SCRIPT_INDEX_TABLE", 0x0ada, 0x0ad0},
    {"ENTITY_SCREEN_X_TABLE", 0x0b16, 0x0b0c},
    {"ENTITY_SCREEN_Y_TABLE", 0x0b52, 0x0b48},
    {"ENTITY_ABS_X_TABLE", 0x0b8e, 0x0b84},
    {"ENTITY_ABS_Y_TABLE", 0x0bca, 0x0bc0},
    {"ENTITY_ABS_Z_TABLE", 0x0c06, 0x0bfc},
    {"ENTITY_ABS_X_FRACTION_TABLE", 0x0c42, 0x0c38},
    {"ENTITY_ABS_Y_FRACTION_TABLE", 0x0c7e, 0x0c74},
    {"ENTITY_ABS_Z_FRACTION_TABLE", 0x0cba, 0x0cb0},
    {"ENTITY_DELTA_X_TABLE", 0x0cf6, 0x0cec},
    {"ENTITY_DELTA_Y_TABLE", 0x0d32, 0x0d28},
    {"ENTITY_DELTA_Z_TABLE", 0x0d6e, 0x0d64},
    {"ENTITY_DELTA_X_FRACTION_TABLE", 0x0daa, 0x0da0},
    {"ENTITY_DELTA_Y_FRACTION_TABLE", 0x0de6, 0x0ddc},
    {"ENTITY_DELTA_Z_FRACTION_TABLE", 0x0e22, 0x0e18},
    {"ENTITY_SCRIPT_VAR0_TABLE", 0x0e5e, 0x0e54},
    {"ENTITY_SCRIPT_VAR1_TABLE", 0x0e9a, 0x0e90},
    {"ENTITY_SCRIPT_VAR2_TABLE", 0x0ed6, 0x0ecc},
    {"ENTITY_SCRIPT_VAR3_TABLE", 0x0f12, 0x0f08},
    {"ENTITY_SCRIPT_VAR4_TABLE", 0x0f4e, 0x0f44},
    {"ENTITY_SCRIPT_VAR5_TABLE", 0x0f8a, 0x0f80},
    {"ENTITY_SCRIPT_VAR6_TABLE", 0x0fc6, 0x0fbc},
    {"ENTITY_SCRIPT_VAR7_TABLE", 0x1002, 0x0ff8},
    {"ENTITY_DRAW_PRIORITY", 0x103e, 0x1034},
    {"ENTITY_TICK_CALLBACK_LOW", 0x107a, 0x1070},
    {"ENTITY_TICK_CALLBACK_HIGH", 0x10b6, 0x10ac},
    {"ENTITY_ANIMATION_FRAME", 0x10f2, 0x10e8},
    {"ENTITY_SPRITEMAP_POINTER_HIGH", 0x116a, 0x1160},
    {"ENTITY_SCREEN_POSITION_CALLBACK", 0x11a6, 0x119c},
    {"ENTITY_DRAW_CALLBACK", 0x11e2, 0x11d8},
    {"ENTITY_MOVE_CALLBACK", 0x121e, 0x1214},
    {"ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS", 0x1a4a, 0x1a40},
    {"ENTITY_MOVING_DIRECTIONS", 0x1a86, 0x1a7c},
    {"ENTITY_CALLBACK_FLAGS_BACKUP", 0x284c, 0x2c4c},
    {"ENTITY_COLLIDED_OBJECTS", 0x289e, 0x2c9c},
    {"ENTITY_OBSTACLE_FLAGS", 0x28da, 0x2cd8},
    {"ENTITY_SPRITEMAP_SIZES", 0x2916, 0x2d14},
    {"ENTITY_GRAPHICS_PTR_LOW", 0x29ca, 0x2dc8},
    {"ENTITY_GRAPHICS_PTR_HIGH", 0x2a06, 0x2e04},
    {"ENTITY_GRAPHICS_SPRITE_BANK", 0x2a42, 0x2e40},
    {"ENTITY_BYTE_WIDTHS", 0x2a7e, 0x2e7c},
    {"ENTITY_TILE_HEIGHTS", 0x2aba, 0x2eb8},
    {"ENTITY_DIRECTIONS", 0x2af6, 0x2ef4},
    {"ENTITY_MOVEMENT_SPEEDS", 0x2b32, 0x2f30},
    {"ENTITY_SIZES", 0x2b6e, 0x2f6c},
    {"ENTITY_SURFACE_FLAGS", 0x2baa, 0x2fa8},
    {"ENTITY_UPPER_LOWER_BODY_DIVIDES", 0x2be6, 0x2fe4},
    {"ENTITY_WALKING_STYLES", 0x2c22, 0x3020},
    {"ENTITY_PATHFINDING_STATES", 0x2c5e, 0x305c},
    {"ENTITY_NPC_IDS", 0x2c9a, 0x3098},
    {"ENTITY_SPRITE_IDS", 0x2cd6, 0x30d4},
    {"ENTITY_ENEMY_IDS", 0x2d12, 0x3110},
    {"ENTITY_ENEMY_SPAWN_TILES", 0x2d4e, 0x314c},
    {"ENTITY_UNUSED", 0x2d8a, 0x3188},
    {"ENTITY_UNKNOWN_2DC6", 0x2dc6, 0x31c4},
    {"ENTITY_PATH_POINTS", 0x2e02, 0x3200},
    {"ENTITY_PATH_POINT_COUNTS", 0x2e3e, 0x323c},
    {"ENTITY_OVERLAY_FLAGS", 0x2e7a, 0x3278},
    {"ENTITY_MUSHROOMIZED_OVERLAY_PTRS", 0x2eb6, 0x32b4},
    {"ENTITY_MUSHROOMIZED_NEXT_UPDATE_FRAMES", 0x2ef2, 0x32f0},
    {"ENTITY_MUSHROOMIZED_SPRITEMAPS", 0x2f2e, 0x332c},
    {"ENTITY_SWEATING_OVERLAY_PTRS", 0x2f6a, 0x3368},
    {"ENTITY_SWEATING_NEXT_UPDATE_FRAMES", 0x2fa6, 0x33a4},
    {"ENTITY_SWEATING_SPRITEMAPS", 0x2fe2, 0x33e0},
    {"ENTITY_RIPPLE_OVERLAY_PTRS", 0x301e, 0x341c},
    {"ENTITY_RIPPLE_NEXT_UPDATE_FRAMES", 0x305a, 0x3458},
    {"ENTITY_RIPPLE_SPRITEMAPS", 0x3096, 0x3494},
    {"ENTITY_BIG_RIPPLE_OVERLAY_PTRS", 0x30d2, 0x34d0},
    {"ENTITY_BIG_RIPPLE_NEXT_UPDATE_FRAMES", 0x310e, 0x350c},
    {"ENTITY_BIG_RIPPLE_SPRITEMAPS", 0x314a, 0x3548},
    {"ENTITY_WEAK_ENEMY_VALUE", 0x3186, 0x3584},
    {"ENTITY_HITBOX_ENABLED", 0x332a, 0x3728},
    {"ENTITY_HITBOX_UP_DOWN_WIDTHS", 0x3366, 0x3764},
    {"ENTITY_HITBOX_UP_DOWN_HEIGHTS", 0x33a2, 0x37a0},
    {"ENTITY_HITBOX_LEFT_RIGHT_WIDTHS", 0x33de, 0x37dc},
};
constexpr RegionalField actor_global_fields[]{
    {"FIRST_ENTITY", 0x0a50, 0x0a46},
    {"LAST_ENTITY", 0x0a52, 0x0a48},
    {"LAST_ALLOCATED_SCRIPT", 0x0a54, 0x0a4a},
    {"DISABLE_ACTIONSCRIPT", 0x0a60, 0x0a56},
    {"ENTITY_ALLOCATION_MIN_SLOT", 0x0a4c, 0x0a42},
    {"ENTITY_ALLOCATION_MAX_SLOT", 0x0a4e, 0x0a44},
    {"NEW_ENTITY_POS_Z", 0x0a48, 0x0a3e},
    {"NEW_ENTITY_PRIORITY", 0x0a4a, 0x0a40},
    {"CURRENT_ENTITY_DRAW_CALLBACK", 0x0a5e, 0x0a54},
    {"PLAYER_HAS_DONE_SOMETHING_THIS_FRAME", 0x0a34, 0x0a2a},
    {"PLAYER_HAS_MOVED_SINCE_MAP_LOAD", 0x2890, 0x2c8e},
    {"USE_SECOND_SPRITE_FRAME", 0x2892, 0x2c90},
    {"FOOTSTEP_SOUND_IGNORE_ENTITY", 0x2898, 0x2c96},
    {"FOOTSTEP_SOUND_ID", 0x289a, 0x2c98},
    {"FOOTSTEP_SOUND_ID_OVERRIDE", 0x289c, 0x2c9a},
    {"ACTIONSCRIPT_STATE", 0x9641, 0x9939},
    {"BATTLE_MODE_FLAG", 0x9643, 0x993b},
};
constexpr RegionalField actor_background_fields[]{
    {"ENTITY_BG_HORIZONTAL_OFFSET_LOW", 0x1a02, 0x19f8},
    {"ENTITY_BG_VERTICAL_OFFSET_LOW", 0x1a0a, 0x1a00},
    {"ENTITY_BG_HORIZONTAL_OFFSET_HIGH", 0x1a12, 0x1a08},
    {"ENTITY_BG_VERTICAL_OFFSET_HIGH", 0x1a1a, 0x1a10},
    {"ENTITY_BG_HORIZONTAL_VELOCITY_LOW", 0x1a22, 0x1a18},
    {"ENTITY_BG_VERTICAL_VELOCITY_LOW", 0x1a2a, 0x1a20},
    {"ENTITY_BG_HORIZONTAL_VELOCITY_HIGH", 0x1a32, 0x1a28},
    {"ENTITY_BG_VERTICAL_VELOCITY_HIGH", 0x1a3a, 0x1a30},
};
struct SemanticValue {
  std::string name;
  unsigned address, value;
  std::optional<eb::test::SpriteTemporaryState> sprite_temporary;
};
struct SemanticState {
  std::vector<SemanticValue> values;
  unsigned actors{}, tasks{}, npcs{}, enemies{};
};
SemanticState semantic_state(const Core &core) {
  SemanticState result;
  const bool jp = core.bus.game_version() == eb::GameVersion::JP;
  const auto add = [&](std::string name, unsigned at) {
    result.values.push_back({std::move(name), at, core.word(at), {}});
  };
  const auto bytes = [&](const std::string &name, unsigned at, unsigned size) {
    for (unsigned i = 0; i < size; ++i)
      result.values.push_back({name + ".byte[" + std::to_string(i) + "]",
                               at + i,
                               core.bus.work_ram.at(at + i),
                               {}});
  };
  add("RAND_A", 0x24);
  add("RAND_B", 0x26);
  for (const auto &field : actor_global_fields)
    add(field.name, field.address(jp));
  for (unsigned i = 0; i < 8; ++i)
    add("NEW_ENTITY_VAR" + std::to_string(i), (jp ? 0x0a2e : 0x0a38) + i * 2);
  for (const auto &field : actor_background_fields)
    for (unsigned i = 0; i < 4; ++i)
      add(std::string(field.name) + "[" + std::to_string(i) + "]",
          field.address(jp) + i * 2);
  std::array<bool, 70> live_tasks{};
  for (unsigned slot = 0; slot < 30; ++slot) {
    const unsigned offset = slot * 2;
    const auto prefix = "actor[" + std::to_string(slot) + "].";
    add(prefix + "ENTITY_SCRIPT_TABLE",
        core.profile.wram_entity_script_ids + offset);
    add("actor_allocator.NEXT_ENTITY[" + std::to_string(slot) + "]",
        core.profile.wram_entity_next + offset);
    if (core.word(core.profile.wram_entity_script_ids + offset) == 0xffff)
      continue;
    ++result.actors;
    const auto npc_id = core.word((jp ? 0x3098 : 0x2c9a) + offset);
    result.npcs += npc_id && npc_id != 0xffff;
    const auto enemy_id = core.word((jp ? 0x3110 : 0x2d12) + offset);
    result.enemies += enemy_id && enemy_id != 0xffff;
    for (const auto &field : actor_fields)
      if (std::string_view(field.name) != "ENTITY_SCRIPT_TABLE")
        add(prefix + field.name, field.address(jp) + offset);
    add(prefix + "ENTITY_CURRENT_DISPLAYED_SPRITES",
        core.profile.wram_entity_displayed_sprites + offset);
    add(prefix + "ENTITY_ANIMATION_FINGERPRINTS",
        core.profile.wram_entity_displayed_sprites + 60 + offset);
    const unsigned bank =
        core.word(core.profile.wram_entity_spritemap_pointers.high + offset) &
        255;
    if (bank >= 0xc0)
      add(prefix + "authored.ENTITY_SPRITEMAP_POINTER_LOW",
          core.profile.wram_entity_spritemap_pointers.low + offset);
    unsigned task = core.word((jp ? 0x0ad0 : 0x0ada) + offset);
    std::array<bool, 70> chain{};
    while (!(task & 0x8000)) {
      require(task < 140 && !(task & 1),
              prefix + "has invalid script-chain byte offset");
      require(!chain[task / 2] && !live_tasks[task / 2],
              prefix + "has repeated/shared script ownership");
      chain[task / 2] = live_tasks[task / 2] = true;
      task = core.word((jp ? 0x1250 : 0x125a) + task);
    }
  }
  // The full allocator chain order is logical task ownership, including
  // free entries; inactive cursor/temp/stack capacity is not live state.
  for (unsigned task = 0; task < live_tasks.size(); ++task)
    add("task_allocator.NEXT_SCRIPT[" + std::to_string(task) + "]",
        (jp ? 0x1250 : 0x125a) + task * 2);
  // Inspect all linked child tasks, not merely each actor's first script.
  // Only active stack bytes are state; untouched capacity retains dead data.
  constexpr RegionalField task_fields[]{
      {"NEXT_SCRIPT", 0x125a, 0x1250}, {"STACK_OFFSET", 0x12e6, 0x12dc},
      {"SLEEP", 0x1372, 0x1368},       {"CURSOR", 0x13fe, 0x13f4},
      {"BANK", 0x148a, 0x1480},        {"TEMP", 0x1516, 0x150c}};
  for (unsigned task = 0; task < live_tasks.size(); ++task) {
    if (!live_tasks[task])
      continue;
    ++result.tasks;
    const auto prefix = "task[" + std::to_string(task) + "].";
    for (const auto &field : task_fields) {
      add(prefix + field.name, field.address(jp) + task * 2);
      if (std::string_view(field.name) == "TEMP")
        result.values.back().sprite_temporary = eb::test::SpriteTemporaryState{
            core.word((jp ? 0x13f4 : 0x13fe) + task * 2) |
                core.word((jp ? 0x1480 : 0x148a) + task * 2) << 16,
            core.word((jp ? 0x1368 : 0x1372) + task * 2),
            core.word((jp ? 0x12dc : 0x12e6) + task * 2),
            result.values.back().value};
    }
    const unsigned used = core.word((jp ? 0x12dc : 0x12e6) + task * 2);
    require(used <= 16, prefix + "stack exceeds source capacity");
    bytes(prefix + "STACK", (jp ? 0x1598 : 0x15a2) + task * 16, used);
  }
  // Full controller held/pressed/repeat/raw values and replay controller state.
  bytes("PAD_STATE/HELD/PRESS/TIMER/TEMP/RAW", 0x65, 0x7b - 0x65);
  bytes("DEMO_CONTROLLER", 0x7b, 0x8d - 0x7b);
  // Source input, spawn/pathfinding/party histories, interaction and creation
  // queues are retained logical state. These ranges contain no sprite pool.
  bytes("SPAWN_STATE", jp ? 0x4dde : 0x4a58, 0x4a6a - 0x4a58);
  // UNREAD_7E4A6A (JP4df0) has one write, in FIND_FREE_7E4682,
  // recording its descriptor-allocation byte request, and no source reader.
  // This is retired sprite-pool transport, not an enemy/NPC state field.
  bytes("SPAWN_AND_PATHFINDING", jp ? 0x4df2 : 0x4a6c, 0x4dd6 - 0x4a6c);
  bytes("PARTY_MOVEMENT_SPEEDS", jp ? 0x515c : 0x4dd6, 0x5156 - 0x4dd6);
  bytes("PLAYER_POSITION_BUFFER", jp ? 0x54dc : 0x5156, 256 * 12);
  bytes("PLAYER_MOVEMENT_AND_INTERACTIONS", jp ? 0x60dc : 0x5d56,
        0x5e58 - 0x5d56);
  bytes("DOOR_INTERACTIONS", jp ? 0x61de : 0x5e58, jp ? 6 : 20);
  // Full named game and character structures, including their unknown fields
  // and saved timer value. The running hardware TIMER itself is not compared.
  bytes("GAME_STATE", jp ? 0x9aa9 : 0x97f5, jp ? 470 : 473);
  bytes("PARTY_CHARACTERS", core.profile.character_layout.table_address,
        core.profile.character_layout.entry_size * 6);
  bytes("EVENT_FLAGS", jp ? 0x9eb3 : 0x9c08, 128);
  bytes("MAP_AREA_AND_CAMERA", jp ? 0x46f4 : 0x436e, 0x4390 - 0x436e);
  bytes("BG_SCROLL", 0x31, 16);
  bytes("FADE_PARAMETERS", 0x28, 3);
  bytes("INIDISP", 0x0d, 1);
  return result;
}
unsigned compare_semantics(const eb::GameAssets &assets,
                           const SemanticState &source,
                           const SemanticState &host, unsigned update) {
  unsigned typed_equivalences = 0;
  const auto count = std::min(source.values.size(), host.values.size());
  for (std::size_t i = 0; i < count; ++i) {
    const auto &a = source.values[i], &b = host.values[i];
    if (a.name != b.name || a.address != b.address || a.value != b.value) {
      // Retain and inspect the original numeric values. Only the finite,
      // source-validated post-refresh continuations may differ by dead
      // allocation transport; every other temporary and every control field
      // stays raw.
      if (a.name == b.name && a.address == b.address && a.sprite_temporary &&
          b.sprite_temporary &&
          eb::test::equivalent_dead_sprite_temporary(
              assets.image, assets.version, *a.sprite_temporary,
              *b.sprite_temporary)) {
        ++typed_equivalences;
        continue;
      }
      std::ostringstream message;
      message << "Same-clock semantic mismatch after logical update " << update
              << ": source " << a.name << " @$" << std::hex << a.address << "=$"
              << a.value << ", native " << b.name << " @$" << b.address << "=$"
              << b.value;
      if (a.name.starts_with("task[")) {
        const auto prefix = a.name.substr(0, a.name.find('.') + 1);
        std::cerr << "First differing task context:";
        for (std::size_t j = 0; j < count; ++j)
          if (source.values[j].name.starts_with(prefix))
            std::cerr << ' ' << source.values[j].name << '=' << std::hex
                      << source.values[j].value << '/' << host.values[j].value
                      << std::dec;
        std::cerr << '\n';
      }
      unsigned reported = 0;
      for (std::size_t j = 0; j < count && reported < 20; ++j)
        if (source.values[j].name == host.values[j].name &&
            source.values[j].value != host.values[j].value) {
          std::cerr << "Semantic difference " << source.values[j].name << " @$"
                    << std::hex << source.values[j].address << "=$"
                    << source.values[j].value << "/$" << host.values[j].value
                    << std::dec << '\n';
          ++reported;
        }
      throw std::runtime_error(message.str());
    }
  }
  require(source.values.size() == host.values.size(),
          "Same-clock complete owned state vectors have different sizes after "
          "update " +
              std::to_string(update));
  return typed_equivalences;
}
void run_same_clock_state(const eb::GameAssets &assets,
                          const std::string &save_path,
                          const std::string &input_path) {
  const auto save = read_save(save_path);
  auto source = std::make_unique<Core>(assets, false, save, true);
  auto host = std::make_unique<Core>(assets, true, save, true);
  require(!source->bus.native_sprite_runtime() &&
              host->bus.native_sprite_runtime() &&
              source->bus.logical_clock_policy() ==
                  eb::LogicalClockPolicy::ActorFrames &&
              host->bus.logical_clock_policy() ==
                  eb::LogicalClockPolicy::ActorFrames,
          "Same-clock test did not select original/native resources under "
          "ActorFrames");
  source->bootstrap_logical(input_path);
  host->bootstrap_logical(input_path);
  source->describe("source same-clock ready");
  host->describe("native same-clock ready");
  std::cout << "Same-clock state route policy: existing infinite HP/PP, noclip "
               "and enemies-ignore debug "
               "options enabled in both cores; no FRAME_COUNTER/RNG/state "
               "rewriting or cross-core copying.\n"
            << std::flush;
  unsigned typed_equivalences = 0;
  const auto compare_boundary = [&](unsigned update) {
    require(source->main_entry() && host->main_entry(),
            "Semantic snapshot is not at both normal main-loop boundaries");
    require(source->updates == source->completions &&
                host->updates == host->completions,
            "Semantic snapshot has an unmatched admitted actor pass");
    if (source->bus.save_ram != host->bus.save_ram) {
      const auto where =
          std::mismatch(source->bus.save_ram.begin(),
                        source->bus.save_ram.end(), host->bus.save_ram.begin());
      const auto offset =
          std::distance(source->bus.save_ram.begin(), where.first);
      throw std::runtime_error("Same-clock in-memory SRAM differs at byte " +
                               std::to_string(offset) + " after update " +
                               std::to_string(update));
    }
    const auto a = semantic_state(*source), b = semantic_state(*host);
    typed_equivalences += compare_semantics(assets, a, b, update);
    return a;
  };
  auto state = compare_boundary(0);
  const auto source_start = source->updates, host_start = host->updates;
  const auto source_admitted = source->bus.native_actor_tick_count();
  const auto host_admitted = host->bus.native_actor_tick_count();
  const auto source_frame = source->bus.completed_frames,
             host_frame = host->bus.completed_frames;
  unsigned peak_actors = state.actors, peak_tasks = state.tasks,
           peak_npcs = state.npcs, peak_enemies = state.enemies;
  std::set<unsigned> npc_ids, enemy_ids;
  std::array<unsigned, 5> motion_updates{};
  const auto selections_start =
      host->bus.native_sprite_runtime()->diagnostics().selections;
  for (unsigned update = 0; update < 900; ++update) {
    const auto before_position = source->position();
    source->bus.set_buttons(directions[update / 180]);
    host->bus.set_buttons(directions[update / 180]);
    source->next_main();
    host->next_main();
    source->assert_steady();
    host->assert_steady();
    require(source->updates - source_start == update + 1 &&
                host->updates - host_start == update + 1,
            "Logical route iteration did not complete exactly one actual actor "
            "pass in each core");
    state = compare_boundary(update + 1);
    const auto after_position = source->position();
    const int dx =
        int((after_position[0] - before_position[0] + 32768) & 65535) - 32768;
    const int dy =
        int((after_position[1] - before_position[1] + 32768) & 65535) - 32768;
    const bool moved[]{dx > 0, dx < 0, dx > 0 && dy < 0, dx < 0 && dy > 0,
                       dx == 0 && dy == 0};
    motion_updates[update / 180] += moved[update / 180];
    peak_actors = std::max(peak_actors, state.actors);
    peak_tasks = std::max(peak_tasks, state.tasks);
    peak_npcs = std::max(peak_npcs, state.npcs);
    peak_enemies = std::max(peak_enemies, state.enemies);
    const bool jp = assets.version == eb::GameVersion::JP;
    for (unsigned slot = 0; slot < 60; slot += 2) {
      if (source->word(source->profile.wram_entity_script_ids + slot) == 0xffff)
        continue;
      if (const auto id = source->word((jp ? 0x3098 : 0x2c9a) + slot);
          id && id != 0xffff)
        npc_ids.insert(id);
      if (const auto id = source->word((jp ? 0x3110 : 0x2d12) + slot);
          id && id != 0xffff)
        enemy_ids.insert(id);
    }
    if ((update + 1) % 180 == 0)
      std::cout << "Same-clock logical updates=" << update + 1
                << " compared_values=" << state.values.size()
                << " actors/tasks=" << state.actors << '/' << state.tasks
                << " elapsed_frames="
                << source->bus.completed_frames - source_frame << ','
                << host->bus.completed_frames - host_frame << '\n'
                << std::flush;
  }
  require(source->completions - source_start == 900 &&
              host->completions - host_start == 900 &&
              source->bus.native_actor_tick_count() - source_admitted == 900 &&
              host->bus.native_actor_tick_count() - host_admitted == 900,
          "Final boundary does not contain exactly900 matched admitted and "
          "completed passes");
  require(read_save(save_path) == save,
          "Same-clock route modified its source save file");
  require(host->bus.native_sprite_runtime()->diagnostics().selections -
                  selections_start >
              100,
          "Same-clock route did not exercise actual native pose selection "
          "after baseline");
  require(!npc_ids.empty(), "Same-clock route compared no live NPC identity");
  require(std::all_of(motion_updates.begin(), motion_updates.end(),
                      [](auto count) { return count >= 30; }),
          "Same-clock route inputs did not produce both horizontal directions, "
          "both diagonals and stop");
  std::cout << "PASS same-clock Twoson state:900 completed logical updates "
               "plus exact ready baseline; peak actors/tasks/NPCs/enemies="
            << peak_actors << '/' << peak_tasks << '/' << peak_npcs << '/'
            << peak_enemies
            << " exact source-validated dead transport comparisons="
            << typed_equivalences << " unique NPC/enemy IDs=" << npc_ids.size()
            << '/' << enemy_ids.size()
            << " movement-qualified updates=" << motion_updates[0] << ','
            << motion_updates[1] << ',' << motion_updates[2] << ','
            << motion_updates[3] << ',' << motion_updates[4] << " admitted="
            << source->bus.native_actor_tick_count() - source_admitted << '/'
            << host->bus.native_actor_tick_count() - host_admitted
            << " completed=" << source->completions - source_start << '/'
            << host->completions - host_start << " route_native_selections="
            << host->bus.native_sprite_runtime()->diagnostics().selections -
                   selections_start
            << "; original allocator/art and native resources shared "
               "ActorFrames. Source save file unchanged.\n"
               "Coverage excludes battles and obstacle response under the "
               "existing debug route policy; "
               "physical-frame parity with SourceTiming is a separate "
               "unchanged test.\n";
}
void run(const eb::GameAssets &assets, const std::string &save_path,
         const std::string &input_path, bool native_clock_contract) {
  const auto save = read_save(save_path);
  auto source = std::make_unique<Core>(assets, false, save);
  auto host = std::make_unique<Core>(assets, true, save);
  source->bootstrap(input_path);
  host->bootstrap(input_path);
  source->describe("source ready");
  host->describe("native ready");
  compare(*source, *host, "Ready", 0);
  unsigned differing_actor_fields = 0;
  for (unsigned s = 0; s < 60; s += 2)
    for (unsigned at : {source->profile.wram_entity_script_ids,
                        source->profile.wram_entity_world_coordinates.x,
                        source->profile.wram_entity_world_coordinates.y,
                        source->profile.wram_entity_script_variable0,
                        source->profile.wram_entity_script_variable1})
      differing_actor_fields += source->word(at + s) != host->word(at + s);
  std::cout << "Pre-route differences: NPC/script fields="
            << differing_actor_fields << " RNG_equal="
            << (source->word(0x24) == host->word(0x24) &&
                source->word(0x26) == host->word(0x26))
            << " (noclip/enemy-ignore enabled in both; this probe compares "
               "player motion only)\n"
            << std::flush;
  const auto source_start = source->bus.completed_frames,
             host_start = host->bus.completed_frames;
  const auto source_updates = source->updates, host_updates = host->updates;
  std::int64_t largest_frame_drift = 0;
  for (unsigned update = 0; update < 900; ++update) {
    const auto buttons = directions[update / 180];
    source->bus.set_buttons(buttons);
    host->bus.set_buttons(buttons);
    source->next_main();
    host->next_main();
    source->assert_steady();
    host->assert_steady();
    compare(*source, *host, "Logical-update", update + 1);
    const auto elapsed_source = source->bus.completed_frames - source_start;
    const auto elapsed_host = host->bus.completed_frames - host_start;
    const auto drift =
        std::int64_t(elapsed_source) - std::int64_t(elapsed_host);
    largest_frame_drift = std::max(largest_frame_drift, std::abs(drift));
    if ((update + 1) % 180 == 0)
      std::cout << "Logical updates=" << update + 1
                << " elapsed_frames=" << elapsed_source << ',' << elapsed_host
                << " position=" << source->position()[0] << ','
                << source->position()[1] << '\n'
                << std::flush;
  }
  require(source->updates - source_updates == 900 &&
              host->updates - host_updates == 900,
          "Logical route did not run exactly one actor pass per iteration");
  const bool logical_cadence_equal = largest_frame_drift <= 1;
  std::cout << "Logical trajectory equal for900 updates; largest "
               "hardware-frame drift="
            << largest_frame_drift << '\n'
            << std::flush;

  // A second schedule holds each controller state for180 actual PPU frames,
  // independently of whether that core completed an actor update. It must
  // not resynchronize input on a slow core's logical progress.
  source->bus.set_buttons(0);
  host->bus.set_buttons(0);
  source->frame();
  host->frame();
  compare(*source, *host, "Physical-frame start", 0);
  const auto wall_source_updates = source->updates,
             wall_host_updates = host->updates;
  host->profile_actor_clocks = true;
  unsigned physical_differences = 0;
  std::map<unsigned, unsigned> source_frame_histogram, host_frame_histogram;
  for (unsigned frame = 0; frame < 900; ++frame) {
    const auto buttons = directions[frame / 180];
    const auto before_source_updates = source->updates,
               before_host_updates = host->updates;
    source->bus.set_buttons(buttons);
    host->bus.set_buttons(buttons);
    source->frame();
    host->frame();
    ++source_frame_histogram[source->updates - before_source_updates];
    ++host_frame_histogram[host->updates - before_host_updates];
    if (host->updates - before_host_updates != 1) {
      const auto timing = host->cpu.timing_snapshot();
      std::cout
          << "Native physical cadence frame=" << frame + 1
          << " passes=" << host->updates - before_host_updates << ' '
          << host->cpu.describe_registers()
          << " last_start=" << host->last_update_frame << ':'
          << host->last_update_line << " elapsed_clocks="
          << host->bus.master_clocks() - host->last_update_clock
          << " budget_active=" << timing.entity_update_active
          << " budget_instruction=" << timing.instruction_uses_extra_budget
          << " budget_clocks=" << timing.entity_update_master_clocks << " DMA="
          << unsigned(host->bus.work_ram[host->profile.dma_queue.write_index])
          << ','
          << unsigned(
                 host->bus
                     .work_ram[host->profile.dma_queue.last_completed_index])
          << " math_pending=" << host->bus.math_pending()
          << " admitted=" << host->bus.native_actor_tick_count()
          << " retired=" << host->updates
          << " new_frame_started=" << unsigned(host->bus.work_ram[0x2b])
          << '\n';
      std::vector<std::pair<std::uint64_t, unsigned>> top;
      for (const auto &[pc, clocks] : host->actor_clocks)
        top.emplace_back(clocks, pc);
      std::sort(top.rbegin(), top.rend());
      std::cout
          << "Current actor-pass clock attribution (256-byte source regions):";
      for (unsigned i = 0; i < std::min<std::size_t>(top.size(), 20); ++i)
        std::cout << ' ' << std::hex << top[i].second << std::dec << '='
                  << top[i].first;
      std::cout << '\n';
    }
    source->assert_steady();
    host->assert_steady();
    if (source->leader() != host->leader()) {
      if (!physical_differences) {
        std::cout << "First physical-frame difference at" << frame + 1 << '\n';
        source->describe("source physical");
        host->describe("native physical");
      }
      ++physical_differences;
    }
    if ((frame + 1) % 180 == 0) {
      std::cout << "Physical frames=" << frame + 1
                << " actor_updates=" << source->updates - wall_source_updates
                << ',' << host->updates - wall_host_updates
                << " positions=" << source->position()[0] << ','
                << source->position()[1] << '/' << host->position()[0] << ','
                << host->position()[1] << '\n'
                << std::flush;
    }
  }
  std::cout << "Per-physical-frame actor pass histograms: source=";
  for (const auto &[passes, count] : source_frame_histogram)
    std::cout << passes << ':' << count << ',';
  std::cout << " native=";
  for (const auto &[passes, count] : host_frame_histogram)
    std::cout << passes << ':' << count << ',';
  std::cout << '\n';
  require(read_save(save_path) == save,
          "Steady replay modified its source save");
  require(host_frame_histogram.size() == 1 && host_frame_histogram.contains(1),
          "Native steady route did not execute exactly one authored actor pass "
          "in every physical frame");
  require(host->bus.native_actor_tick_count() == host->updates,
          "Native tick admissions and actual retired actor bodies differ");
  require(host->bus.native_sprite_runtime()->diagnostics().selections > 100,
          "Steady comparison did not exercise native artwork selection");
  if (native_clock_contract) {
    std::cout
        << "PASS native fixed-tick Twoson contract:900 exact logical player "
           "states and one actor "
           "pass in each of900 physical frames; source save unchanged.\n"
        << "Legacy wall-clock observation: "
        << source->updates - wall_source_updates
        << " actor passes in900 frames, " << physical_differences
        << " different frame snapshots, largest logical-route frame drift="
        << largest_frame_drift
        << ". This is not legacy wall-clock or NPC/RNG/full-game parity.\n";
    return;
  }
  require(logical_cadence_equal,
          "Native resource cutover changed steady movement's physical cadence");
  require(physical_differences == 0 &&
              source->updates - wall_source_updates == 900 &&
              host->updates - wall_host_updates == 900,
          "Same physical controller duration changed trajectory/update count: "
          "differingframes=" +
              std::to_string(physical_differences));
  std::cout << "PASS steady Twoson player trajectory:900 logical updates "
               "and900 physical frames; "
               "NPC/RNG/full-game parity is outside this bounded contract\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc >= 3 && argc <= 5,
            "native_sprite_steady_reference pack.ebpak save.srm "
            "[new_game.input] [--native-clock-contract|--same-clock-state]");
    bool native_clock_contract = false, same_clock_state = false;
    std::string input;
    for (int i = 3; i < argc; ++i) {
      const std::string argument = argv[i];
      if (argument == "--native-clock-contract") {
        require(!native_clock_contract && !same_clock_state,
                "Duplicate or conflicting steady mode");
        native_clock_contract = true;
      } else if (argument == "--same-clock-state") {
        require(!native_clock_contract && !same_clock_state,
                "Duplicate or conflicting steady mode");
        same_clock_state = true;
      } else {
        require(input.empty() && !argument.starts_with("--"),
                "Unexpected steady probe argument");
        input = argument;
      }
    }
    const auto assets = eb::load_game_assets(argv[1], eb::asset_profiles());
    if (same_clock_state)
      run_same_clock_state(assets, argv[2], input);
    else
      run(assets, argv[2], input, native_clock_contract);
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
