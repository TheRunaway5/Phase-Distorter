// Execute the original routines, including RAND and equipment recalculation.
// No growth helper is intercepted. SaveArchive supplies the independently
// source-verified byte encoding; compare the entire persisted payload, not
// just the fields the native implementation is expected to change.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/character_growth.hpp"
#include "eb/native/saves/session.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_save_test_data.hpp"
#include <iostream>
#include <memory>
#include <sstream>

namespace {
using namespace eb::native;
using namespace save_test;
struct Source {
  unsigned reset, level, experience, game, flags, new_game_begin, new_game_end,
      new_game_index;
};
constexpr Source us{0xc1d8d0, 0xc1d109, 0xc1d9e9, 0x97f5,
                    0x9c08,   0xc1fd09, 0xc1fe1b, 0x1e};
constexpr Source jp{0xc1d6cb, 0xc1cef2, 0xc1d7e4, 0x9aa9,
                    0x9eb3,   0xc1fabc, 0xc1fbda, 0x1a};
struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  eb::GameVersion version;
  Source l;
  unsigned calls = 0;
  explicit Oracle(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), version(assets.version),
        l(version == eb::GameVersion::JP ? jp : us) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  auto encoded(const saves::PersistedState &s) const {
    auto archive = saves::SaveArchive::empty(version);
    archive.save(0, s, s.game.elapsed_timer);
    return archive;
  }
  void seed(const saves::PersistedState &s, story::RandomState random) {
    bus->work_ram.fill(0);
    const auto archive = encoded(s);
    std::copy_n(archive.bytes().begin() + 32,
                saves::layout(version).persisted_bytes(),
                bus->work_ram.begin() + l.game);
    put(bus->work_ram.data() + 0x24, random.primary_word);
    put(bus->work_ram.data() + 0x26, random.secondary_word);
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1d00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc1ff00;
    cpu.accumulator = cpu.x_index = cpu.y_index = 0;
  }
  void until(unsigned end) {
    unsigned steps = 0;
    while (cpu.program_counter != end) {
      if (++steps > 3000000)
        throw std::runtime_error("Source growth did not finish: " +
                                 cpu.describe_registers());
      cpu.step_instruction();
    }
    ++calls;
  }
  void near(unsigned pc, unsigned character, unsigned x, unsigned y = 0) {
    cpu.accumulator = character;
    cpu.x_index = x;
    cpu.y_index = y;
    cpu.execute_instruction<0x20>(pc & 0xffff, 3);
    until(0xc1ff03);
  }
  void gain(unsigned character, std::uint32_t amount) {
    cpu.accumulator = character;
    put(bus->work_ram.data() + cpu.direct_page + 14, amount);
    put(bus->work_ram.data() + cpu.direct_page + 16, amount >> 16);
    cpu.execute_instruction<0x22>(l.experience, 4);
    until(0xc1ff04);
  }
  void new_game() {
    put(bus->work_ram.data() + cpu.direct_page + l.new_game_index, 0);
    cpu.program_counter = l.new_game_begin;
    until(l.new_game_end);
  }
  void recalculate(unsigned character) {
    const auto addresses =
        version == eb::GameVersion::US
            ? std::array{0xc21857u, 0xc2192bu, 0xc21aebu, 0xc21ba4u,
                         0xc21c5du, 0xc21d65u, 0xc21d7du}
            : std::array{0xc21706u, 0xc217d9u, 0xc21996u, 0xc21a48u,
                         0xc21afau, 0xc21bfau, 0xc21c12u};
    for (const auto address : addresses) {
      cpu.program_counter = 0xc1ff00;
      cpu.status_register = eb::MainCpu65816::InterruptDisable;
      cpu.accumulator = character;
      cpu.execute_instruction<0x22>(address, 4);
      until(0xc1ff04);
    }
  }
  void compare(const saves::PersistedState &s, story::RandomState random,
               const std::string &label) const {
    const auto archive = encoded(s);
    const unsigned count = saves::layout(version).persisted_bytes();
    for (unsigned i = 0; i < count; ++i)
      if (archive.bytes()[32 + i] != bus->work_ram[l.game + i]) {
        std::ostringstream message;
        message << label << " payload byte" << i
                << " source=" << unsigned(bus->work_ram[l.game + i])
                << " native=" << unsigned(archive.bytes()[32 + i]);
        throw std::runtime_error(message.str());
      }
    if (word(bus->work_ram.data() + 0x24) != random.primary_word ||
        word(bus->work_ram.data() + 0x26) != random.secondary_word)
      throw std::runtime_error(label + " RNG words differ");
  }
};
CharacterGrowthContext context(saves::PersistedState &state, unsigned character,
                               unsigned variant) {
  auto &saved = state.characters[character - 1];
  auto &c = saved.values;
  c.equipment = variant ? std::array<std::uint8_t, 4>{1, 2, 3, 14}
                        : std::array<std::uint8_t, 4>{};
  c.items = {1, 45, 60, 89, 0, 255, 123, 12, 13, 14, 15, 16, 17, 79};
  if (variant == 2)
    c.items = {255, 127, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253};
  saved.boosted_speed = variant * 127;
  saved.boosted_guts = variant * 103;
  saved.boosted_vitality = variant * 97;
  saved.boosted_iq = variant * 83;
  saved.boosted_luck = variant * 121;
  if (variant % 2)
    state.event_flags[(74 - 1) / 8] |= 1u << ((74 - 1) % 8);
  else
    state.event_flags[(74 - 1) / 8] &= ~(1u << ((74 - 1) % 8));
  return {saved.boosted_speed, saved.boosted_guts, saved.boosted_vitality,
          saved.boosted_iq,    saved.boosted_luck, bool(variant % 2)};
}
void run(const eb::GameAssets &assets) {
  CharacterGrowth growth(assets.image, assets.version);
  Oracle oracle(assets);
  auto initial =
      saves::SaveArchive(assets.version, fixture(assets.version, 67)).load(0);
  initial.event_flags.fill(0);
  unsigned resets = 0, levels = 0, gains = 0, games = 0, equipment_cases = 0;
  for (unsigned character = 1; character <= 4; ++character) {
    for (unsigned item = 0; item < 256; ++item) {
      auto state = initial;
      auto ctx = context(state, character, 2);
      auto &c = state.characters[character - 1].values;
      c.items.fill(item);
      c.equipment = {14, 1, 7, 3};
      c.base_offense = c.base_defense = c.base_speed = c.base_guts =
          c.base_luck = c.base_vitality = c.base_iq = item % 2 ? 255 : 2;
      story::RandomState random{0xa123, 0xc987};
      oracle.seed(state, random);
      oracle.recalculate(character);
      growth.recalculate_stats(c, character, ctx);
      oracle.compare(state, random,
                     "equipment c" + std::to_string(character) + " item" +
                         std::to_string(item));
      ++equipment_cases;
    }
    for (unsigned variant = 0; variant < 3; ++variant) {
      for (const unsigned target : {1u, 2u, 9u, 10u, 11u, 15u, 50u, 99u}) {
        for (bool set_experience : {false, true}) {
          auto state = initial;
          const auto ctx = context(state, character, variant);
          story::RandomState random{std::uint16_t(0x7351 + target),
                                    std::uint16_t(0x87cd + variant)};
          oracle.seed(state, random);
          oracle.near(oracle.l.reset, character, target, set_experience);
          growth.reset_to_level(state.characters[character - 1].values,
                                character, target, set_experience, random, ctx);
          oracle.compare(state, random,
                         "reset c" + std::to_string(character) + " level" +
                             std::to_string(target) + " variant" +
                             std::to_string(variant));
          ++resets;
        }
      }
      for (unsigned level = 1; level < 99; ++level) {
        auto state = initial;
        const auto ctx = context(state, character, variant);
        auto &c = state.characters[character - 1].values;
        c.level = level;
        c.base_offense = c.base_defense = c.base_speed = c.base_guts =
            c.base_luck = c.base_vitality = c.base_iq =
                variant == 2 ? 250 : 2 + level / 3;
        c.maximum_hp = variant == 2 ? 0xffff : level * 17;
        c.maximum_pp = variant == 2 ? 0xffff : level * 7;
        c.target_hp = 0xfffe;
        c.target_pp = 0xffff;
        story::RandomState random{std::uint16_t(level * 113 + 7),
                                  std::uint16_t(level * 47 + variant)};
        oracle.seed(state, random);
        oracle.near(oracle.l.level, character, 0);
        growth.level_up_silent(c, character, random, ctx);
        oracle.compare(state, random,
                       "level c" + std::to_string(character) + " level" +
                           std::to_string(level) + " variant" +
                           std::to_string(variant));
        ++levels;
      }
    }
    for (const unsigned level : {1u, 9u, 14u, 98u, 99u}) {
      const auto threshold =
          growth.experience_for_level(character, std::min(level + 1, 99u));
      for (const auto amount : {0u, threshold - 1, threshold, threshold + 1,
                                0x7fffffffu, 0xffffffffu}) {
        auto state = initial;
        auto ctx = context(state, character, 1);
        auto &c = state.characters[character - 1].values;
        c.level = level;
        c.experience = amount == 0xffffffffu ? 2 : 0;
        story::RandomState random{0xffff, 0xffff};
        oracle.seed(state, random);
        oracle.gain(character, amount);
        growth.gain_experience_silent(c, character, amount, random, ctx);
        oracle.compare(state, random,
                       "gain c" + std::to_string(character) + " level" +
                           std::to_string(level) + " amount" +
                           std::to_string(amount));
        ++gains;
      }
    }
  }
  for (unsigned seed = 0; seed < 24; ++seed) {
    auto state = initial;
    std::array<CharacterGrowthContext, 4> contexts;
    for (unsigned i = 0; i < 4; ++i) {
      if (seed % 2 == 0)
        state.characters[i].values = {};
      contexts[i] = context(state, i + 1, seed % 3);
    }
    party::State live(assets.version);
    saves::restore_party(state, live);
    story::RandomState random{std::uint16_t(seed * 731),
                              std::uint16_t(seed * 1703)};
    oracle.seed(state, random);
    oracle.new_game();
    growth.initialize_new_game_characters(live, random, contexts);
    state = saves::capture_party(live, state);
    oracle.compare(state, random, "new game seed" + std::to_string(seed));
    ++games;
  }
  std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
            << " character growth source PASS: " << resets << " resets, "
            << levels << " level-ups, " << gains << " gains, "
            << equipment_cases << " equipment sets, " << games
            << " actual new-game loops; complete payload and both RNG words\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::invalid_argument("Pass one or more asset packs");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
