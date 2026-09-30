#include "eb/native/visible_character_growth.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool okay, const char *message) {
  if (!okay)
    throw std::runtime_error(message);
}
template <class F> void rejects(F f) {
  bool threw = false;
  try {
    f();
  } catch (const std::exception &) {
    threw = true;
  }
  require(threw, "Invalid visible growth operation accepted");
}
void put(std::vector<std::uint8_t> &a, std::size_t p, unsigned value) {
  a.at(p) = value;
  a.at(p + 1) = value >> 8;
}
std::vector<std::uint8_t> content(eb::GameVersion version) {
  const auto l = character_growth_layout(version);
  std::vector<std::uint8_t> a(l.initial_stats + 80);
  for (unsigned i = 0; i < 28; ++i)
    a[l.coefficients + i] = 18;
  const std::array<std::uint8_t, 4> cadence{8, 4, 4, 4};
  std::copy(cadence.begin(), cadence.end(), a.begin() + l.cadence);
  for (unsigned c = 0; c < 4; ++c) {
    put(a, l.initial_stats + c * 20 + 6, 1);
    for (unsigned level = 0; level < 100; ++level)
      put(a, l.experience + (c * 100 + level) * 4, level * 10);
  }
  const auto psi = version == eb::GameVersion::JP ? 0x159a06u : 0x158a50u;
  for (unsigned i = 1; i <= 2; ++i) {
    a[psi + i * 15] = i;
    a[psi + i * 15 + 6] = 8;
    a[psi + i * 15 + 7] = 9;
    a[psi + i * 15 + 8] = 10;
  }
  return a;
}
void initial(party::Character &c) {
  c = {};
  c.level = 7;
  c.experience = 70;
  c.base_offense = c.base_defense = c.base_speed = c.base_guts =
      c.base_vitality = c.base_iq = c.base_luck = 2;
  c.offense = c.defense = c.speed = c.guts = c.vitality = c.iq = c.luck = 2;
  c.maximum_hp = c.current_hp = c.target_hp = 30;
  c.maximum_pp = c.current_pp = c.target_pp = 10;
}
void run(eb::GameVersion version) {
  auto assets = content(version);
  auto growth = std::make_shared<CharacterGrowth>(assets, version);
  party::State party(version);
  auto &c = party.character(1);
  initial(c);
  auto name = party.name_field(1);
  std::fill(name.begin(), name.end(), 42);
  name[1] = 0;
  story::RandomState random{0x1234, 0x5678};
  unsigned context_reads = 0;
  bool fail_context = false;
  VisibleCharacterGrowth visible(
      growth, assets, party, random, [&](unsigned id) {
        require(id == 1, "Wrong live character context");
        if (fail_context)
          throw std::runtime_error("Unavailable owner context");
        ++context_reads;
        return CharacterGrowthContext{};
      });
  std::fill(assets.begin(), assets.end(), 0); // No borrowed content lifetime.
  auto op = visible.begin_level_up(1);
  require(c.level == 7 && context_reads == 0 && visible.busy(),
          "Begin applied gameplay work");
  rejects([&] { op->respond(); });
  rejects([&] { visible.begin_experience(1, 0); });
  const auto before = random;
  require(op->advance() == GrowthProgress::AwaitingRequest,
          "Missing level title");
  const auto &title = *op->request();
  require(title.message == GrowthMessage::Level && title.prompt_mode == 1 &&
              title.number == 8 &&
              title.timing == GrowthRequestTiming::MaySuspend &&
              title.target_name && title.target_name->length == name.size() &&
              title.target_name->bytes[1] == 0 &&
              title.target_name->clear_enemy_id ==
                  (version == eb::GameVersion::US) &&
              c.level == 8 && c.base_offense == 2 && random == before &&
              context_reads == 0,
          "Level title applied stats ahead of its pause");
  op->advance();
  require(random == before && c.base_offense == 2,
          "Pending title advanced growth");
  op->respond();
  require(op->advance() == GrowthProgress::AwaitingRequest &&
              op->request()->prompt_mode == 2 &&
              op->request()->timing == GrowthRequestTiming::Immediate &&
              random == before,
          "Prompt2 ordering");
  op->respond();
  fail_context = true;
  rejects([&] { op->advance(); });
  require(!op->request() && c.base_offense == 2 && random == before,
          "Failed context consumed growth");
  fail_context = false;
  require(op->advance() == GrowthProgress::AwaitingRequest &&
              op->request()->message == GrowthMessage::Offense &&
              c.base_offense > 2 && c.base_defense == 2,
          "Stat mutation was not phase-local");
  unsigned psi_count = 0;
  bool clear = false;
  while (!op->complete()) {
    if (op->request()) {
      if (op->request()->message == GrowthMessage::PSI) {
        require(op->request()->psi == ++psi_count, "PSI source table order");
        require(!op->request()->number,
                "PSI must retain prior numeric substitution");
      }
      clear |= op->request()->kind == GrowthRequestKind::PromptMode &&
               op->request()->prompt_mode == 0;
      op->respond();
    }
    op->advance();
  }
  require(psi_count == 2 && clear && op->levels_gained() == 1 &&
              !visible.busy(),
          "Visible completion or PSI coverage");
  rejects([&] { op->respond(); });
  initial(c);
  auto next = visible.begin_experience(1, 30);
  op.reset(); // Old completed handles cannot release a newer operation's lease.
  require(visible.busy(), "Old completed handle released new operation");
  const auto rng_before = random;
  require(next->advance() == GrowthProgress::AwaitingRequest &&
              next->request()->kind == GrowthRequestKind::LevelUpMusic &&
              c.experience == 100 && c.level == 7 && random == rng_before,
          "Music must precede first level mutation");
  unsigned songs = 0, titles = 0;
  while (!next->complete()) {
    if (next->request()) {
      songs += next->request()->kind == GrowthRequestKind::LevelUpMusic;
      titles += next->request()->message == GrowthMessage::Level;
      next->respond();
    }
    next->advance();
  }
  require(songs == 1 && titles == 3 && c.level == 10 &&
              next->levels_gained() == 3,
          "Repeated EXP thresholds/music ordering");
  next.reset();
  c.level = 99;
  c.experience = 0xffffffff;
  const auto final_rng = random;
  auto max = visible.begin_experience(1, 2);
  require(max->advance() == GrowthProgress::Complete && c.experience == 1 &&
              random == final_rng && !visible.busy(),
          "Max-level EXP should wrap without requests or RNG");
  rejects([&] { visible.begin_level_up(1); });
  rejects([&] { visible.begin_level_up(5); });
  c.level = 7;
  c.equipment[0] = 15;
  rejects([&] { visible.begin_level_up(1); });
  require(!visible.busy(), "Rejected operation retained owner lease");
  c.equipment[0] = 0;
  {
    auto abandoned = visible.begin_level_up(1);
    abandoned->advance();
  }
  require(
      !visible.busy() && c.level == 8,
      "Destroying operation must release lease without pretending rollback");
  auto fresh = content(version);
  const auto psi = version == eb::GameVersion::JP ? 0x159a06u : 0x158a50u;
  rejects([&] {
    VisibleCharacterGrowth bad(
        growth, std::span<const std::uint8_t>(fresh).first(psi + 15), party,
        random, [](unsigned) { return CharacterGrowthContext{}; });
  });
  for (unsigned i = 1; i < 256; ++i)
    fresh[psi + i * 15] = 1;
  rejects([&] {
    VisibleCharacterGrowth bad(growth, fresh, party, random, [](unsigned) {
      return CharacterGrowthContext{};
    });
  });
  rejects([&] {
    VisibleCharacterGrowth bad({}, fresh, party, random, [](unsigned) {
      return CharacterGrowthContext{};
    });
  });
  rejects(
      [&] { VisibleCharacterGrowth bad(growth, fresh, party, random, {}); });
  party::State other(version == eb::GameVersion::US ? eb::GameVersion::JP
                                                    : eb::GameVersion::US);
  rejects([&] {
    VisibleCharacterGrowth bad(growth, fresh, other, random, [](unsigned) {
      return CharacterGrowthContext{};
    });
  });
  std::cout << (version == eb::GameVersion::JP ? "JP" : "US")
            << " visible growth unit PASS\n";
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
