// Authored-role position/lifetime differential. All source CREATE, deletion,
// movement and formation-coordinate helpers execute their original bodies.
// C03F1E/C039E5 compare only their coordinate effects to the native public
// role-position API; this is not a claim that their other party effects or
// the complete bicycle lifecycle are ported. Retail content is imported.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/actor_creation.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>
namespace {
using namespace eb::native;
std::string context;
void need(bool okay, const std::string &why) {
  if (!okay)
    throw std::runtime_error(why + ": " + context);
}
struct Counts {
  unsigned long long instructions{}, calls{}, snapshots{}, position_words{},
      lifecycles{}, role_writers{}, motions{}, allocations{},
      allocation_failures{}, appearances{}, replacements{}, implicit_erases{},
      seed_inputs{};
} counts;
const std::map<std::string, unsigned> us = {
    {"UNKNOWN_C09FAE_ENTRY2", 0xc09fc8},
    {"UNKNOWN_C09CD7", 0xc09cd7},
    {"UNKNOWN_C09C35", 0xc09c35},
    {"MOVEMENT_CODE_2D", 0xc098bc},
    {"MOVEMENT_CODE_2C", 0xc098ae},
    {"MOVEMENT_CODE_2B", 0xc098a0},
    {"MOVEMENT_CODE_2A", 0xc09703},
    {"MOVEMENT_CODE_29", 0xc096f3},
    {"MOVEMENT_CODE_28", 0xc096e3},
    {"INIT_ENTITY_UNKNOWN1", 0xc093f9},
    {"INIT_ENTITY", 0xc09321},
    {"UNKNOWN_C03F1E", 0xc03f1e},
    {"UNKNOWN_C039E5", 0xc039e5},
    {"UNKNOWN_C02140", 0xc02140},
    {"UNKNOWN_C020F1", 0xc020f1},
    {"CREATE_ENTITY", 0xc01e49},
    {"UNKNOWN_C46C87", 0xc46c87},
    {"PARTY_CHARACTERS", 0x7e99ce},
    {"GAME_STATE", 0x7e97f5},
    {"CHOSEN_FOUR_PTRS", 0x7e4dc8},
    {"ENTITY_SPRITE_IDS", 0x7e2cd6},
    {"CURRENT_ENTITY_SLOT", 0x7e1a42},
    {"ENTITY_SCRIPT_NEXT_SCRIPTS", 0x7e125a},
    {"ENTITY_SCRIPT_VAR0_TABLE", 0x7e0e5e},
    {"ENTITY_DELTA_Z_FRACTION_TABLE", 0x7e0e22},
    {"ENTITY_DELTA_Y_FRACTION_TABLE", 0x7e0de6},
    {"ENTITY_DELTA_X_FRACTION_TABLE", 0x7e0daa},
    {"ENTITY_DELTA_Z_TABLE", 0x7e0d6e},
    {"ENTITY_DELTA_Y_TABLE", 0x7e0d32},
    {"ENTITY_DELTA_X_TABLE", 0x7e0cf6},
    {"ENTITY_ABS_Z_FRACTION_TABLE", 0x7e0cba},
    {"ENTITY_ABS_Y_FRACTION_TABLE", 0x7e0c7e},
    {"ENTITY_ABS_X_FRACTION_TABLE", 0x7e0c42},
    {"ENTITY_ABS_Z_TABLE", 0x7e0c06},
    {"ENTITY_ABS_Y_TABLE", 0x7e0bca},
    {"ENTITY_ABS_X_TABLE", 0x7e0b8e},
    {"ENTITY_NEXT_ENTITY_TABLE", 0x7e0a9e},
    {"ENTITY_SCRIPT_TABLE", 0x7e0a62},
    {"LAST_ALLOCATED_SCRIPT", 0x7e0a54},
    {"LAST_ENTITY", 0x7e0a52},
    {"FIRST_ENTITY", 0x7e0a50},
    {"ENTITY_ALLOCATION_MAX_SLOT", 0x7e0a4e},
    {"ENTITY_ALLOCATION_MIN_SLOT", 0x7e0a4c},
    {"NEW_ENTITY_PRIORITY", 0x7e0a4a},
    {"NEW_ENTITY_POS_Z", 0x7e0a48},
    {"NEW_ENTITY_VAR0", 0x7e0a38},
};
const std::map<std::string, unsigned> jp = {
    {"UNKNOWN_C09FAE_ENTRY2", 0xc09fa7},
    {"UNKNOWN_C09CD7", 0xc09cb6},
    {"UNKNOWN_C09C35", 0xc09c14},
    {"MOVEMENT_CODE_2D", 0xc0989b},
    {"MOVEMENT_CODE_2C", 0xc0988d},
    {"MOVEMENT_CODE_2B", 0xc0987f},
    {"MOVEMENT_CODE_2A", 0xc096e2},
    {"MOVEMENT_CODE_29", 0xc096d2},
    {"MOVEMENT_CODE_28", 0xc096c2},
    {"INIT_ENTITY_UNKNOWN1", 0xc093d8},
    {"INIT_ENTITY", 0xc09300},
    {"UNKNOWN_C03F1E", 0xc0419b},
    {"UNKNOWN_C039E5", 0xc03c2b},
    {"UNKNOWN_C02140", 0xc0214e},
    {"UNKNOWN_C020F1", 0xc020ff},
    {"CREATE_ENTITY", 0xc01e5f},
    {"UNKNOWN_C46C87", 0xc44a0b},
    {"PARTY_CHARACTERS", 0x7e9c7f},
    {"GAME_STATE", 0x7e9aa9},
    {"CHOSEN_FOUR_PTRS", 0x7e514e},
    {"ENTITY_SPRITE_IDS", 0x7e30d4},
    {"CURRENT_ENTITY_SLOT", 0x7e1a38},
    {"ENTITY_SCRIPT_NEXT_SCRIPTS", 0x7e1250},
    {"ENTITY_SCRIPT_VAR0_TABLE", 0x7e0e54},
    {"ENTITY_DELTA_Z_FRACTION_TABLE", 0x7e0e18},
    {"ENTITY_DELTA_Y_FRACTION_TABLE", 0x7e0ddc},
    {"ENTITY_DELTA_X_FRACTION_TABLE", 0x7e0da0},
    {"ENTITY_DELTA_Z_TABLE", 0x7e0d64},
    {"ENTITY_DELTA_Y_TABLE", 0x7e0d28},
    {"ENTITY_DELTA_X_TABLE", 0x7e0cec},
    {"ENTITY_ABS_Z_FRACTION_TABLE", 0x7e0cb0},
    {"ENTITY_ABS_Y_FRACTION_TABLE", 0x7e0c74},
    {"ENTITY_ABS_X_FRACTION_TABLE", 0x7e0c38},
    {"ENTITY_ABS_Z_TABLE", 0x7e0bfc},
    {"ENTITY_ABS_Y_TABLE", 0x7e0bc0},
    {"ENTITY_ABS_X_TABLE", 0x7e0b84},
    {"ENTITY_NEXT_ENTITY_TABLE", 0x7e0a94},
    {"ENTITY_SCRIPT_TABLE", 0x7e0a58},
    {"LAST_ALLOCATED_SCRIPT", 0x7e0a4a},
    {"LAST_ENTITY", 0x7e0a48},
    {"FIRST_ENTITY", 0x7e0a46},
    {"ENTITY_ALLOCATION_MAX_SLOT", 0x7e0a44},
    {"ENTITY_ALLOCATION_MIN_SLOT", 0x7e0a42},
    {"NEW_ENTITY_PRIORITY", 0x7e0a40},
    {"NEW_ENTITY_POS_Z", 0x7e0a3e},
    {"NEW_ENTITY_VAR0", 0x7e0a2e},
};
struct Source {
  bool jp;
  const std::map<std::string, unsigned> &symbols;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  explicit Source(const eb::GameAssets &a)
      : jp(a.version == eb::GameVersion::JP), symbols(jp ? ::jp : us),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram.fill(0);
    bus->work_ram[0x0d] = 0x80;
    put("FIRST_ENTITY", 0xffff);
    put("LAST_ENTITY", 0);
    put("LAST_ALLOCATED_SCRIPT", 0);
    for (unsigned role = 0; role < 30; ++role) {
      put("ENTITY_SCRIPT_TABLE", 0xffff, role * 2);
      put("ENTITY_NEXT_ENTITY_TABLE", role == 29 ? 0xffff : (role + 1) * 2,
          role * 2);
    }
    for (unsigned i = 0; i < 70; ++i)
      put("ENTITY_SCRIPT_NEXT_SCRIPTS", i == 69 ? 0xffff : (i + 1) * 2, i * 2);
    std::fill_n(bus->work_ram.begin() + (jp ? 0x4a04 : 0x467e), 0x380, 0xff);
  }
  unsigned at(const std::string &name) const {
    return symbols.at(name) & 0x1ffff;
  }
  unsigned game(unsigned offset) const {
    return at("GAME_STATE") + offset - (jp ? 3 : 0);
  }
  unsigned get(unsigned at) const {
    return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8);
  }
  unsigned get(const std::string &name, unsigned off = 0) const {
    return get(at(name) + off);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void put(const std::string &name, unsigned value, unsigned off = 0) {
    put(at(name) + off, value);
  }
  void call(const std::string &name, unsigned a = 0, unsigned x = 0,
            unsigned y = 0, bool far = true) {
    const unsigned address = symbols.at(name);
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = address & 0xff0000;
    cpu.program_counter |= 0xff00;
    const auto stop = cpu.program_counter + (far ? 4 : 3);
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    if (far)
      cpu.execute_instruction<0x22>(address, 4);
    else
      cpu.execute_instruction<0x20>(address & 65535, 3);
    ++counts.calls;
    for (unsigned i = 0; i < 2'000'000; ++i) {
      if (cpu.program_counter == stop && cpu.stack_pointer == 0x1fff) {
        need(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
             "Source caller ABI");
        return;
      }
      cpu.step_instruction();
      ++counts.instructions;
    }
    throw std::runtime_error("Source did not return " + name + " " +
                             cpu.describe_registers());
  }
  static constexpr std::array<const char *, 3> whole{
      "ENTITY_ABS_X_TABLE", "ENTITY_ABS_Y_TABLE", "ENTITY_ABS_Z_TABLE"};
  static constexpr std::array<const char *, 3> fraction{
      "ENTITY_ABS_X_FRACTION_TABLE", "ENTITY_ABS_Y_FRACTION_TABLE",
      "ENTITY_ABS_Z_FRACTION_TABLE"};
  AuthoredActorPosition position(unsigned role) const {
    AuthoredActorPosition out{};
    for (unsigned axis = 0; axis < 3; ++axis)
      out[axis] =
          (get(whole[axis], role * 2) << 16) | get(fraction[axis], role * 2);
    return out;
  }
  // Explicit matched test input, never used to implement an expected lifecycle.
  void seed_position(unsigned role, const AuthoredActorPosition &p) {
    for (unsigned axis = 0; axis < 3; ++axis) {
      put(whole[axis], p[axis] >> 16, role * 2);
      put(fraction[axis], p[axis] & 65535, role * 2);
    }
  }
  void prepare(const PreparedActorState &p) {
    put("NEW_ENTITY_POS_Z", p.height);
    put("NEW_ENTITY_PRIORITY", 1);
    for (unsigned i = 0; i < 8; ++i)
      put("NEW_ENTITY_VAR0", p.variables[i], i * 2);
  }
  void create(unsigned role, const PreparedActorState &p) {
    prepare(p);
    put(0x1e0e, p.x);
    put(0x1e10, p.y);
    call("CREATE_ENTITY", 1, 2, role);
    need(cpu.accumulator == role, "Source create returned another role");
  }
  std::optional<unsigned> allocate(unsigned first, unsigned end,
                                   const PreparedActorState &p) {
    prepare(p);
    put("ENTITY_ALLOCATION_MIN_SLOT", first);
    put("ENTITY_ALLOCATION_MAX_SLOT", end);
    call("INIT_ENTITY", 2, p.x, p.y);
    if (cpu.status_register & eb::MainCpu65816::Carry)
      return std::nullopt;
    return cpu.accumulator;
  }
  void formation_write(unsigned role, unsigned x, unsigned y, bool reset) {
    put(game(174), 1);
    put(game(150), 1);
    put(game(162), role);
    put("CHOSEN_FOUR_PTRS", at("PARTY_CHARACTERS"));
    put(game(130), x);
    put(game(134), y);
    call(reset ? "UNKNOWN_C03F1E" : "UNKNOWN_C039E5");
  }
  void opcode(unsigned role, unsigned opcode, unsigned value) {
    const std::array names{"MOVEMENT_CODE_28", "MOVEMENT_CODE_29",
                           "MOVEMENT_CODE_2A", "MOVEMENT_CODE_2B",
                           "MOVEMENT_CODE_2C", "MOVEMENT_CODE_2D"};
    put(0x10100, value);
    put(0x1e80, 0x0100);
    put(0x1e82, 0x007f);
    put(0x1e88, role * 2);
    call(names.at(opcode - 0x28), 0, 0, 0, false);
  }
};
struct Resources {
  const eb::GameAssets &assets;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  explicit Resources(const eb::GameAssets &a)
      : assets(a), sprites(std::make_shared<SpriteResources>(
                       a.image, sprite_catalog_layout(a.version))),
        scripts(import_action_scripts(a.image, a.version)) {}
};
struct Pair {
  Resources &r;
  Source source;
  ActorWorld world;
  explicit Pair(Resources &resources,
                std::shared_ptr<const ActionScriptData> scripts = {})
      : r(resources), source(r.assets),
        world(r.sprites, scripts ? scripts : r.scripts, r.assets.version) {}
  WorldActorSpec spec(const PreparedActorState &p) {
    return world.prepare_actor(1, 2, p);
  }
  ActorId create(unsigned role, const PreparedActorState &p) {
    source.create(role, p);
    auto id = world.create_authored(spec(p), {role, role + 1});
    need(id.has_value(), "Native create rejected free role");
    compare();
    return *id;
  }
  void compare() {
    for (unsigned role = 0; role < 30; ++role) {
      need(world.authored_position(role) == source.position(role),
           "Role XYZ/fractions differ at " + std::to_string(role));
      const auto id = world.actor_for_role(role);
      need(id.has_value() ==
               (source.get("ENTITY_SCRIPT_TABLE", role * 2) != 0xffff),
           "Role lifetime differs");
      if (id)
        need(world.actor(*id).action().position ==
                 world.authored_position(role),
             "Public role position is stale while live");
      counts.position_words += 6;
    }
    ++counts.snapshots;
  }
  void seed(unsigned role, const AuthoredActorPosition &p) {
    source.seed_position(role, p);
    world.set_authored_position(role, p);
    ++counts.seed_inputs;
    compare();
  }
  void erase(unsigned role, bool graphics = true) {
    auto id = world.actor_for_role(role);
    need(id.has_value(), "Erase input role absent");
    source.call(graphics ? "UNKNOWN_C02140" : "UNKNOWN_C09C35", role);
    need(world.erase(*id), "Native erase failed");
    compare();
  }
  void write(unsigned role, unsigned x, unsigned y, bool reset) {
    source.formation_write(role, x, y, reset);
    world.set_authored_coordinate(role, 0, std::uint16_t(x));
    world.set_authored_coordinate(role, 1, std::uint16_t(y));
    compare();
    ++counts.role_writers;
  }
};
PreparedActorState prepared(unsigned seed) {
  PreparedActorState p;
  p.x = std::uint16_t(0xff21 + seed * 53);
  p.y = std::uint16_t(0x0013 + seed * 91);
  p.height = std::uint16_t(0x8001 + seed * 17);
  p.direction = seed % 8;
  for (unsigned i = 0; i < 8; ++i)
    p.variables[i] = std::uint16_t(0x3300 + i + seed);
  return p;
}
AuthoredActorPosition input(unsigned seed) {
  return {0xffff0000u | (0x1357 + seed), 0x00002468u + seed,
          0x8000deadu + seed};
}
void lifecycle(Resources &r, unsigned role, unsigned seed, bool reset) {
  context = r.assets.title + " lifetime role=" + std::to_string(role) +
            " seed=" + std::to_string(seed) + " reset=" + std::to_string(reset);
  Pair p(r);
  p.compare();
  p.seed(role, input(seed));
  p.write(role, 0x1111, 0xeeee, reset);
  auto id = p.create(role, prepared(seed));
  // A source-native existing helper writes live state outside the new API.
  p.seed(role, input(seed));
  p.source.put("CURRENT_ENTITY_SLOT", role);
  p.source.put("ENTITY_SCRIPT_VAR0_TABLE", 0x8000 + seed, 6 * 60 + role * 2);
  p.source.put("ENTITY_SCRIPT_VAR0_TABLE", 0x7fff - seed, 7 * 60 + role * 2);
  auto &actor = p.world.actor(id);
  actor.action().variables[6] = 0x8000 + seed;
  actor.action().variables[7] = 0x7fff - seed;
  p.source.call("UNKNOWN_C46C87");
  BoundAction binding;
  binding.operation = NativeAction::RestoreTargetPosition;
  const auto effect =
      apply_action(binding, 0, actor.action(), actor.behavior, p.world.scene());
  need(effect.handled, "Existing native position restore unsupported");
  p.compare();
  p.write(role, 0xff00 + seed, 0x20 + seed, reset);
  const auto value_before_erase = p.world.authored_position(role);
  p.erase(role);
  need(p.world.authored_position(role) == value_before_erase,
       "Generic erase did not retain latest live state");
  p.write(role, 0x0050 + seed, 0xff80 + seed, reset);
  p.source.call("UNKNOWN_C09C35", role);
  need(!p.world.erase(id), "Repeated erased ActorId unexpectedly active");
  p.compare();
  const auto reused = p.create(role, prepared(seed + 3));
  need(reused != id, "Host actor identity reused across lifetime");
  p.erase(role);
  p.create((role + 1) % 30, prepared(seed + 7));
  p.compare();
  ++counts.lifecycles;
}
void allocator(Resources &r) {
  context = r.assets.title + " allocator";
  Pair p(r);
  p.compare();
  const auto allocate = [&](unsigned first, unsigned end, unsigned seed) {
    auto original = p.source.allocate(first, end, prepared(seed));
    auto native = p.world.create_authored(p.spec(prepared(seed)), {first, end});
    need(original.has_value() == native.has_value(),
         "Allocation success differs");
    if (original) {
      need(*p.world.actor(*native).authored_role() == *original,
           "Free-list allocation order differs");
      ++counts.allocations;
    } else
      ++counts.allocation_failures;
    p.compare();
    return original;
  };
  for (unsigned role = 30; role-- > 0;)
    need(allocate(role, role + 1, role) == role,
         "Explicit range did not allocate role");
  need(!allocate(0, 30, 35), "Full allocator accepted another actor");
  for (unsigned role : {12u, 24u, 7u})
    p.erase(role, false);
  for (unsigned role : {7u, 24u, 12u})
    need(allocate(0, 30, role + 40) == role, "Release-head reuse order");
  for (unsigned role : {3u, 29u, 18u})
    p.erase(role, false);
  p.source.call("UNKNOWN_C09CD7");
  p.world.order_free_authored_roles();
  p.compare();
  for (unsigned role : {3u, 18u, 29u})
    need(allocate(0, 30, role + 80) == role, "Sorted free-role reuse order");
}
void appearance_and_script(Resources &r, unsigned role) {
  context = r.assets.title + " appearance/script role=" + std::to_string(role);
  Pair p(r);
  const auto id = p.create(role, prepared(role));
  p.seed(role, input(role));
  p.source.put("CURRENT_ENTITY_SLOT", role);
  p.source.call("UNKNOWN_C020F1");
  need(p.world.release_appearance(id), "Native appearance release failed");
  p.compare();
  need(p.world.actor_for_role(role) == id &&
           !p.world.actor(id).has_appearance(),
       "Appearance release changed actor lifetime");
  ++counts.appearances;
  const auto entry = r.scripts->entry(2) | 0xc00000;
  p.source.call("INIT_ENTITY_UNKNOWN1", entry & 65535, role, entry >> 16);
  p.world.replace_script(id, r.scripts->entry(2));
  p.compare();
  ++counts.replacements;
  p.erase(role, false);
}
void motion(Resources &r, unsigned role, bool end_script) {
  context = r.assets.title + " motion role=" + std::to_string(role) +
            " end=" + std::to_string(end_script);
  const std::array<unsigned, 6> values{0xffff, 0x8000, 0, 2, 0x8000, 0xffff};
  std::vector<std::uint8_t> bytes;
  for (unsigned i = 0; i < 6; ++i) {
    bytes.push_back(std::uint8_t(0x28 + i));
    bytes.push_back(std::uint8_t(values[i]));
    bytes.push_back(std::uint8_t(values[i] >> 8));
  }
  if (end_script)
    bytes.push_back(0);
  else {
    bytes.push_back(6);
    bytes.push_back(1);
    bytes.push_back(9);
  }
  auto scripts = std::make_shared<ActionScriptData>(
      bytes, 0, std::vector<std::uint32_t>{0, 0, 0});
  Pair p(r, scripts);
  const auto id = p.create(role, prepared(role));
  p.seed(role, input(role));
  for (unsigned i = 0; i < 6; ++i)
    p.source.opcode(role, 0x28 + i, values[i]);
  if (end_script)
    p.source.call("UNKNOWN_C09C35", role);
  need(p.world.advance_tick() == WorldTickResult::Complete,
       "Native position script required unrelated service");
  p.compare();
  if (end_script) {
    need(!p.world.actor_for_role(role) && !p.world.erase(id),
         "Implicit end retained live actor");
    ++counts.implicit_erases;
    return;
  }
  const std::array<std::uint32_t, 3> velocity{0x00018001, 0xffff8001,
                                              0x34561234};
  const std::array whole{"ENTITY_DELTA_X_TABLE", "ENTITY_DELTA_Y_TABLE",
                         "ENTITY_DELTA_Z_TABLE"};
  const std::array fraction{"ENTITY_DELTA_X_FRACTION_TABLE",
                            "ENTITY_DELTA_Y_FRACTION_TABLE",
                            "ENTITY_DELTA_Z_FRACTION_TABLE"};
  for (unsigned axis = 0; axis < 3; ++axis) {
    p.source.put(whole[axis], velocity[axis] >> 16, role * 2);
    p.source.put(fraction[axis], velocity[axis] & 65535, role * 2);
  }
  p.world.actor(id).action().velocity = velocity;
  p.source.put(0x1e88, role * 2);
  p.source.call("UNKNOWN_C09FAE_ENTRY2", 0, 0, 0, false);
  need(p.world.advance_tick() == WorldTickResult::Complete,
       "Native motion required unrelated service");
  p.compare();
  p.erase(role);
  ++counts.motions;
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int arg = 1; arg < argc; ++arg) {
      auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
      Resources r(assets);
      counts = {};
      for (unsigned role = 0; role < 30; ++role)
        for (bool reset : {false, true})
          for (unsigned seed : {0u, 7u})
            lifecycle(r, role, seed, reset);
      allocator(r);
      for (unsigned role : {0u, 24u, 29u}) {
        appearance_and_script(r, role);
        motion(r, role, false);
        motion(r, role, true);
      }
      std::cout
          << "PASS " << assets.title << ": " << counts.lifecycles
          << " native/source lifetime chains, " << counts.role_writers
          << " real source role-writer coordinate comparisons, "
          << counts.allocations << " allocator successes, "
          << counts.allocation_failures << " original allocation failures, "
          << counts.appearances << " appearance releases, "
          << counts.replacements << " script replacements, " << counts.motions
          << " script/physics motion chains, " << counts.implicit_erases
          << " implicit script erasures, " << counts.snapshots
          << " all30-role snapshots (" << counts.position_words
          << " coordinate words), " << counts.calls
          << " complete original helper calls, " << counts.instructions
          << " original instructions; " << counts.seed_inputs
          << " explicit matched position inputs. Coordinate/lifetime contract "
             "only; no complete native formation/bicycle claim.\n";
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
