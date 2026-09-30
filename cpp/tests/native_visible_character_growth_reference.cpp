// Original LEVEL_UP_CHAR/GAIN_EXP and all numerical/name/prompt helpers run
// unchanged. DISPLAY_TEXT and CHANGE_MUSIC are explicit external boundaries,
// not fake implementations: observe their requests, optionally perturb live
// owners, then return. This proves growth ordering, not dialogue/audio output.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/saves/session.hpp"
#include "eb/native/visible_character_growth.hpp"
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
  unsigned level, gain, game, flags, party, display, music, prompt, clear,
      prompt_state, name, number, item, enemy, random;
};
constexpr Source us{0xc1d109, 0xc1d9e9, 0x97f5,   0x9c08,   0x99ce,
                    0xc186b1, 0xc4fbbd, 0xc10036, 0xc1003c, 0x964d,
                    0x9cf5,   0x9d12,   0x9d11,   0x965a,   0xc08e9a};
constexpr Source jp{0xc1cef2, 0xc1d7e4, 0x9aa9,   0x9eb3,   0x9c7f,
                    0xc18913, 0xc4cf5c, 0xc10032, 0xc10038, 0x9945,
                    0x9f90,   0x9f9d,   0x9f9c,   0,        0xc08e8b};
struct Presentation {
  std::array<std::uint8_t, 8> name{1, 2, 3, 4, 5, 6, 7, 8};
  unsigned prompt = 9, item = 0x67, enemy = 0x3456;
  std::uint32_t number = 0xabcdef12;
  void apply(const GrowthPresentationRequest &request) {
    if (request.prompt_mode)
      prompt = *request.prompt_mode;
    if (request.number)
      number = *request.number;
    if (request.psi)
      item = *request.psi;
    if (request.target_name) {
      const auto &n = *request.target_name;
      std::copy_n(n.bytes.begin(), n.length, name.begin());
      name[n.length] = 0;
      if (n.clear_enemy_id)
        enemy = 0xffff;
    }
  }
};
struct Boundary {
  GrowthRequestKind kind;
  std::uint32_t reference{};
  unsigned prompt{};
};
struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Source l;
  eb::GameVersion version;
  unsigned end{};
  bool suspended{};
  explicit Oracle(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), l(assets.version == eb::GameVersion::JP ? jp : us),
        version(assets.version) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  auto encoded(const saves::PersistedState &state) const {
    auto archive = saves::SaveArchive::empty(version);
    archive.save(0, state, state.game.elapsed_timer);
    return archive;
  }
  void seed(const saves::PersistedState &state, story::RandomState random,
            const Presentation &p, unsigned character,
            std::optional<std::uint32_t> amount) {
    bus->work_ram.fill(0);
    auto archive = encoded(state);
    std::copy_n(archive.bytes().begin() + 32,
                saves::layout(version).persisted_bytes(),
                bus->work_ram.begin() + l.game);
    put(bus->work_ram.data() + 0x24, random.primary_word);
    put(bus->work_ram.data() + 0x26, random.secondary_word);
    std::copy(p.name.begin(), p.name.end(), bus->work_ram.begin() + l.name);
    put(bus->work_ram.data() + l.prompt_state, p.prompt);
    bus->work_ram[l.item] = p.item;
    put(bus->work_ram.data() + l.number, p.number);
    put(bus->work_ram.data() + l.number + 2, p.number >> 16);
    if (l.enemy)
      put(bus->work_ram.data() + l.enemy, p.enemy);
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1d00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc1ff00;
    cpu.accumulator = character;
    cpu.x_index = 1;
    cpu.y_index = 0;
    if (amount) {
      put(bus->work_ram.data() + cpu.direct_page + 14, *amount);
      put(bus->work_ram.data() + cpu.direct_page + 16, *amount >> 16);
      cpu.execute_instruction<0x22>(l.gain, 4);
      end = 0xc1ff04;
    } else {
      cpu.execute_instruction<0x20>(l.level & 0xffff, 3);
      end = 0xc1ff03;
    }
    suspended = false;
  }
  std::optional<Boundary> next() {
    require(!suspended, "Source boundary not acknowledged");
    for (unsigned steps = 0; steps < 1000000; ++steps) {
      const auto pc = cpu.program_counter;
      if (pc == end)
        return {};
      if (pc == l.display) {
        suspended = true;
        return Boundary{GrowthRequestKind::Message,
                        dword(bus->work_ram.data() + cpu.direct_page + 14), 0};
      }
      if (pc == l.music) {
        require(cpu.accumulator == 6, "Unexpected source music request");
        suspended = true;
        return Boundary{GrowthRequestKind::LevelUpMusic, 0, 0};
      }
      if ((pc == l.prompt && cpu.accumulator == 2) || pc == l.clear) {
        const auto stack = cpu.stack_pointer;
        do {
          cpu.step_instruction();
        } while (cpu.stack_pointer != std::uint16_t(stack + 2));
        return Boundary{GrowthRequestKind::PromptMode, 0,
                        word(bus->work_ram.data() + l.prompt_state)};
      }
      cpu.step_instruction();
    }
    throw std::runtime_error("Visible source growth did not yield: " +
                             cpu.describe_registers());
  }
  void respond() {
    if (suspended) {
      cpu.execute_instruction<0x6b>(0, 1);
      suspended = false;
    }
  }
  void perturb(unsigned character, party::State &party,
               saves::PersistedState &state, story::RandomState &random,
               Presentation &p, unsigned sequence) {
    // Independent source RAND execution during a declared external pause.
    const auto pc = cpu.program_counter;
    const auto a = cpu.accumulator;
    cpu.program_counter = 0xc1ff80;
    cpu.execute_instruction<0x22>(l.random, 4);
    while (cpu.program_counter != 0xc1ff84)
      cpu.step_instruction();
    cpu.program_counter = pc;
    cpu.accumulator = a;
    story::next_random(random);
    const unsigned delta = version == eb::GameVersion::JP ? 1 : 0;
    const unsigned at = l.party + (character - 1) * (95 - delta);
    ++party.character(character).base_iq;
    ++bus->work_ram[at + 34 - delta];
    ++state.characters[character - 1].boosted_iq;
    ++bus->work_ram[at + 90 - delta];
    if (sequence % 3 == 0) {
      state.event_flags[9] ^= 2; // one-based flag74
      bus->work_ram[l.flags + 9] ^= 2;
    }
    // External dialogue can overwrite substitution state. Growth must only
    // replace fields that the source explicitly replaces at its next phase.
    p.number ^= 0x87654321;
    put(bus->work_ram.data() + l.number, p.number);
    put(bus->work_ram.data() + l.number + 2, p.number >> 16);
    p.prompt = 7;
    put(bus->work_ram.data() + l.prompt_state, p.prompt);
  }
  void compare(const saves::PersistedState &state, story::RandomState random,
               const Presentation &p, const std::string &label) const {
    auto archive = encoded(state);
    for (unsigned i = 0; i < saves::layout(version).persisted_bytes(); ++i)
      if (archive.bytes()[i + 32] != bus->work_ram[l.game + i]) {
        std::ostringstream s;
        s << label << " payload byte" << i
          << " source=" << unsigned(bus->work_ram[l.game + i])
          << " native=" << unsigned(archive.bytes()[i + 32]);
        throw std::runtime_error(s.str());
      }
    require(word(bus->work_ram.data() + 0x24) == random.primary_word &&
                word(bus->work_ram.data() + 0x26) == random.secondary_word,
            "Visible RNG differs");
    require(word(bus->work_ram.data() + l.prompt_state) == p.prompt &&
                bus->work_ram[l.item] == p.item &&
                dword(bus->work_ram.data() + l.number) == p.number,
            "Visible prompt/PSI/number state differs");
    require(std::equal(p.name.begin(), p.name.end(),
                       bus->work_ram.begin() + l.name),
            "Visible target name differs");
    if (l.enemy)
      require(word(bus->work_ram.data() + l.enemy) == p.enemy,
              "Visible target enemy sentinel differs");
  }
};
void run(const eb::GameAssets &assets) {
  auto growth = std::make_shared<CharacterGrowth>(assets.image, assets.version);
  Oracle source(assets);
  unsigned operations = 0, boundaries = 0, psi_messages = 0, perturbations = 0,
           music = 0;
  auto test = [&](unsigned character, unsigned level, unsigned variant,
                  std::optional<std::uint32_t> amount) {
    auto state =
        saves::SaveArchive(assets.version, fixture(assets.version, 13)).load(0);
    state.event_flags.fill(0);
    auto &c = state.characters[character - 1].values;
    c = {};
    c.level = level;
    c.experience = growth->experience_for_level(character, level);
    c.base_offense = c.base_defense = c.base_speed = c.base_guts = c.base_luck =
        c.base_vitality = c.base_iq = 2;
    c.offense = c.defense = c.speed = c.guts = c.luck = c.vitality = c.iq = 2;
    c.maximum_hp = c.current_hp = c.target_hp = 30;
    c.maximum_pp = c.current_pp = c.target_pp = 10;
    auto &extra = state.characters[character - 1];
    extra.boosted_speed = extra.boosted_guts = extra.boosted_luck =
        extra.boosted_vitality = extra.boosted_iq = 0;
    party::State party(assets.version);
    saves::restore_party(state, party);
    story::RandomState random{std::uint16_t(level * 191),
                              std::uint16_t(level * 373)};
    auto context = [&](unsigned id) {
      const auto &e = state.characters[id - 1];
      return CharacterGrowthContext{
          e.boosted_speed, e.boosted_guts, e.boosted_vitality,
          e.boosted_iq,    e.boosted_luck, bool(state.event_flags[9] & 2)};
    };
    VisibleCharacterGrowth visible(growth, assets.image, party, random,
                                   context);
    auto op = amount ? visible.begin_experience(character, *amount)
                     : visible.begin_level_up(character);
    Presentation presentation;
    source.seed(state, random, presentation, character, amount);
    unsigned sequence = 0;
    while (true) {
      const auto original = source.next();
      const auto progress = op->advance();
      if (!original) {
        require(progress == GrowthProgress::Complete,
                "Native visible growth has extra requests");
        break;
      }
      require(progress == GrowthProgress::AwaitingRequest,
              "Native visible growth ended early");
      const auto request = *op->request();
      require(request.kind == original->kind, "Visible request order differs");
      if (request.kind == GrowthRequestKind::Message) {
        require(dword(request.authored_message.data()) == original->reference,
                "Visible authored message differs");
        psi_messages += request.message == GrowthMessage::PSI;
      } else if (request.kind == GrowthRequestKind::PromptMode) {
        require(request.prompt_mode == original->prompt &&
                    request.timing == GrowthRequestTiming::Immediate,
                "Visible immediate prompt differs");
      } else
        ++music;
      presentation.apply(request);
      auto snapshot = saves::capture_party(party, state);
      const auto label = "character" + std::to_string(character) + " level" +
                         std::to_string(level) + " event" +
                         std::to_string(sequence);
      source.compare(snapshot, random, presentation, label);
      require(op->advance() == GrowthProgress::AwaitingRequest,
              "Pending request advanced work");
      source.compare(saves::capture_party(party, state), random, presentation,
                     label);
      if (variant && request.timing == GrowthRequestTiming::MaySuspend) {
        source.perturb(character, party, state, random, presentation, sequence);
        ++perturbations;
      }
      source.respond();
      op->respond();
      ++boundaries;
      ++sequence;
    }
    source.compare(saves::capture_party(party, state), random, presentation,
                   "final visible state");
    require(!visible.busy(), "Completed visible owner remained busy");
    ++operations;
  };
  for (unsigned character = 1; character <= 4; ++character)
    for (unsigned variant = 0; variant < 2; ++variant) {
      for (unsigned level = 1; level < 99; ++level)
        test(character, level, variant, {});
      test(character, 7, variant, growth->experience_for_level(character, 12));
      test(character, 98, variant, 0xffffffffu);
      test(character, 99, variant, 7);
      test(character, 7, variant, 0);
    }
  require(psi_messages > 0 && perturbations > 0 && music > 0,
          "Visible source coverage missing");
  std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
            << " visible growth source PASS: " << operations << " operations, "
            << boundaries << " exact presentation boundaries, " << psi_messages
            << " PSI messages, " << perturbations
            << " live pause perturbations\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::invalid_argument("Pass asset packs");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
