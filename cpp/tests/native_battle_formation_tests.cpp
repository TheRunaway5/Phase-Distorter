#include "eb/native/battle_formation.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
using namespace eb::native;
void require(bool value, const char *why) {
  if (!value)
    throw std::runtime_error(why);
}
template <class F> void rejects(F f) {
  bool rejected = false;
  try {
    f();
  } catch (const std::exception &) {
    rejected = true;
  }
  require(rejected, "Invalid formation operation accepted");
}
BattleCombatants catalog() {
  std::vector<std::uint8_t> bytes(1100);
  const auto word = [&](unsigned at, unsigned v) {
    bytes.at(at) = v;
    bytes.at(at + 1) = v >> 8;
  };
  const auto pointer = [&](unsigned at, unsigned v) {
    word(at, v);
    word(at + 2, 0xc0);
  };
  BattleCombatantLayout layout{0, 64, 128, 256, 320, 400, 4, 0, 2, 1, 1, 2, 1};
  pointer(0, 500);
  bytes[4] = 1;
  for (unsigned i = 0; i < 16; ++i)
    word(64 + i * 2, i);
  word(128, 1);
  word(132, 1);
  pointer(256, 320);
  bytes[320] = 1;
  word(321, 0);
  bytes[323] = 1;
  word(324, 1);
  bytes[326] = 255;
  unsigned at = 500;
  for (unsigned chunk = 0; chunk < 16; ++chunk) {
    bytes[at++] = 31;
    for (unsigned j = 0; j < 32; ++j)
      bytes[at++] = j < 16 ? 255 : 0;
  }
  bytes[at] = 255;
  return {bytes, layout};
}
struct Record {
  BattleFormationRecord presentation;
  std::array<unsigned, 13> combat_stats{};
  static inline int copies_before_throw = -1;
  Record() = default;
  Record(const Record &r)
      : presentation(r.presentation), combat_stats(r.combat_stats) {
    if (copies_before_throw == 0)
      throw std::runtime_error("Injected whole-record copy failure");
    if (copies_before_throw > 0)
      --copies_before_throw;
  }
  Record &operator=(const Record &) = default;
  Record(Record &&) noexcept = default;
  Record &operator=(Record &&) noexcept = default;
  bool operator==(const Record &) const = default;
};
BattleFormationRecord project(const Record &r) { return r.presentation; }
void patch(Record &r, const BattleFormationRecord &v) noexcept {
  r.presentation = v;
}
std::array<Record, 24> records(unsigned n) {
  std::array<Record, 24> out;
  for (unsigned i = 0; i < n; ++i) {
    out[i].presentation = {
        i + 1, 0,    1,   std::uint8_t(i), std::uint8_t(i % 2), 9, 77,
        88,    true, true};
    for (unsigned j = 0; j < 13; ++j)
      out[i].combat_stats[j] = (i + 1) * 100 + j;
  }
  out[23].combat_stats.fill(0xabcdef);
  return out;
}
BattleFormationRecords projections(const std::array<Record, 24> &r) {
  BattleFormationRecords p;
  for (unsigned i = 0; i < 24; ++i)
    p[i] = project(r[i]);
  return p;
}
void test() {
  auto content = catalog();
  auto scene = content.prepare(0);
  auto owner = records(5);
  const auto before = owner;
  story::RandomState random{17, 733};
  const auto initial_random = random;
  auto plan =
      prepare_battle_formation(eb::GameVersion::US, 0, 5, projections(owner),
                               content, scene.resources(), random);
  require(!plan.applied() && owner == before && random == initial_random &&
              plan.random_draws() > 0,
          "Preparation mutated authoritative owner/RNG");
  rejects([&] {
    plan.apply(std::span<Record, 24>(owner), 4, 0, random, project, patch);
  });
  rejects([&] {
    plan.apply(std::span<Record, 24>(owner), 5, 1, random, project, patch);
  });
  owner[1].presentation.identity += 10;
  const auto drifted = owner;
  rejects([&] {
    plan.apply(std::span<Record, 24>(owner), 5, 0, random, project, patch);
  });
  require(owner == drifted && random == initial_random,
          "Identity rejection partially committed");
  owner = before;
  ++random.primary_word;
  const auto changed_random = random;
  rejects([&] {
    plan.apply(std::span<Record, 24>(owner), 5, 0, random, project, patch);
  });
  require(random == changed_random && owner == before,
          "RNG rejection consumed or rewound caller state");
  random = initial_random;
  Record::copies_before_throw = 3;
  rejects([&] {
    plan.apply(std::span<Record, 24>(owner), 5, 0, random, project, patch);
  });
  Record::copies_before_throw = -1;
  require(!plan.applied() && owner == before && random == initial_random,
          "Failed candidate copy committed record/RNG state");
  auto moved = std::move(plan);
  rejects([&] {
    plan.apply(std::span<Record, 24>(owner), 5, 0, random, project, patch);
  });
  moved.apply(std::span<Record, 24>(owner), 5, 0, random, project, patch);
  require(moved.applied() && random != initial_random,
          "Successful application did not commit exactly once");
  for (unsigned i = 0; i < 5; ++i)
    require(owner[i].combat_stats ==
                before[moved.record_order()[i]].combat_stats,
            "Formation detached combat state from record identity");
  require(owner[23] == Record{}, "Completed formation retained scratch record");
  const auto committed = owner;
  const auto committed_random = random;
  rejects([&] {
    moved.apply(std::span<Record, 24>(owner), 5, 0, random, project, patch);
  });
  require(owner == committed && random == committed_random,
          "Repeated apply replayed plan");
  owner = before;
  random = initial_random;
  rejects([&] {
    moved.apply(std::span<Record, 24>(owner), 5, 0, random, project, patch);
  });
  auto crowded = records(17);
  const auto crowded_before = crowded;
  auto prefix =
      prepare_battle_formation(eb::GameVersion::US, 0, 17, projections(crowded),
                               content, scene.resources(), random);
  require(prefix.outcome() == BattleFormationOutcome::RowsFull &&
              prefix.random_draws() == 0,
          "Row capacity failure crossed into placement/RNG");
  prefix.apply(std::span<Record, 24>(crowded), 17, 0, random, project, patch);
  require(random == initial_random && crowded[23] == crowded_before[23] &&
              crowded[0].presentation.resource == 0 &&
              crowded[16].presentation.resource == 9,
          "Capacity prefix lost its partial mutations or cleared scratch");
  for (unsigned i = 0; i < 17; ++i)
    require(crowded[i].presentation.x == 77 &&
                crowded[i].presentation.y == 88 &&
                crowded[i].combat_stats == crowded_before[i].combat_stats,
            "Row capacity failure performed later placement/permutation");
  auto bad = projections(before);
  bad[1].identity = bad[0].identity;
  rejects([&] {
    prepare_battle_formation(eb::GameVersion::US, 0, 5, bad, content,
                             scene.resources(), random);
  });
  bad = projections(before);
  bad[0].sprite = 2;
  rejects([&] {
    prepare_battle_formation(eb::GameVersion::US, 0, 5, bad, content,
                             scene.resources(), random);
  });
  bad = projections(before);
  bad[0].enemy = 99;
  rejects([&] {
    prepare_battle_formation(eb::GameVersion::US, 0, 5, bad, content,
                             scene.resources(), random);
  });
  rejects([&] {
    prepare_battle_formation(eb::GameVersion::US, 0, 24, projections(before),
                             content, scene.resources(), random);
  });
  auto foreign_resources = std::vector<BattleCombatantResource>(
      scene.resources().begin(), scene.resources().end());
  std::swap(foreign_resources[0], foreign_resources[1]);
  rejects([&] {
    prepare_battle_formation(eb::GameVersion::US, 0, 5, projections(before),
                             content, foreign_resources, random);
  });
  unsigned nonconvergent = 0;
  for (unsigned seed = 0; seed < 32; ++seed) {
    auto tied = records(2);
    tied[1].presentation.label = 0;
    tied[1].presentation.row = 0;
    story::RandomState rng{std::uint16_t(seed), 19};
    const auto original = rng;
    try {
      auto tie =
          prepare_battle_formation(eb::GameVersion::JP, 0, 2, projections(tied),
                                   content, scene.resources(), rng);
      (void)tie;
    } catch (const std::domain_error &) {
      ++nonconvergent;
    }
    require(rng == original, "Rejected ordering consumed RNG");
  }
  require(nonconvergent > 0,
          "JP equal-label nontermination guard was not exercised");
}
} // namespace
int main() {
  try {
    test();
    std::cout << "PASS native battle formation transactional ownership, prefix "
                 "and retry contracts\n";
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
