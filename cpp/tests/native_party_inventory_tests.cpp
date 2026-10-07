#include "eb/native/party/inventory.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::party;
using eb::GameVersion;
using eb::native::dialogue::Progress;
unsigned checks{};
void check(bool value, const char *message) {
  ++checks;
  if (!value)
    throw std::runtime_error(message);
}
template <class F> void rejects(F &&f) {
  bool caught{};
  try {
    f();
  } catch (const std::exception &) {
    caught = true;
  }
  check(caught, "Expected domain/ownership rejection");
}
struct Fixture {
  dialogue_substitution_test_assets::Input input;
  std::shared_ptr<const eb::native::dialogue::SubstitutionResources> items;
  std::shared_ptr<const ItemTransformationResources> resources;
  State party;
  ItemTransformationState timers;
  eb::native::story::RandomState random{1, 16};
  std::unique_ptr<Inventory> inventory;
  explicit Fixture(GameVersion version) : input(version), party(version) {
    const auto property = [&](unsigned id, unsigned type, unsigned flags) {
      const auto at = input.items + id * input.item_stride + input.name_size;
      input.image[at] = std::uint8_t(type);
      input.image[at + 3] = std::uint8_t(flags);
      for (unsigned i = 0; i < 4; ++i)
        input.image[at + 6 + i] = std::uint8_t(id * 17 + i);
    };
    property(1, 32, 0);
    property(2, 4, 0);
    property(3, 32, 0x10);
    property(4, 4, 0x10);
    property(5, 32, 0x10);
    const unsigned at = version == GameVersion::US ? 0x15f4bb : 0x15f41b;
    constexpr std::array<std::uint8_t, 20> table{
        3, 7, 2, 8, 50, 4, 9, 0, 0, 0, 7, 11, 15, 9, 44, 0, 99, 98, 97, 96};
    std::copy(table.begin(), table.end(), input.image.begin() + at);
    items = input.load();
    resources = ItemTransformationResources::import(input.image, version);
    inventory =
        std::make_unique<Inventory>(party, items, resources, timers, random);
    party.party_order = {6, 3, 1, 5, 2, 4};
    party.controlled_count = 6;
  }
};
Progress finish(Inventory::Operation &op, unsigned budget = 1) {
  for (unsigned i = 0; i < 100; ++i) {
    const auto p = op.advance(budget);
    if (p != Progress::BudgetExhausted)
      return p;
  }
  throw std::runtime_error("Receipt did not reach boundary");
}
void resources(GameVersion version) {
  Fixture f(version);
  for (unsigned id = 0; id < 254; ++id) {
    const auto at =
        f.input.items + id * f.input.item_stride + f.input.name_size;
    const auto p = f.items->item_properties(id);
    check(p.type == f.input.image[at] && p.flags == f.input.image[at + 3],
          "Property layout mismatch");
    for (unsigned i = 0; i < 4; ++i)
      check(p.parameters[i] == f.input.image[at + 6 + i],
            "Raw item parameter changed");
  }
  check(f.resources->record(0) == ItemTransformation{3, 7, 2, 8, 50},
        "Transformation row decoding");
  check(f.resources->record(3) == ItemTransformation{0, 99, 98, 97, 96},
        "Sentinel fields must remain owned raw bytes");
  std::fill(f.input.image.begin(), f.input.image.end(), 0);
  check(f.items->item_properties(4).type == 4 &&
            f.resources->record(0).item == 3,
        "Imported catalogs borrow mutable image");
  rejects([&] { f.items->item_properties(254); });
  rejects([&] { f.items->item_properties(65535); });
  rejects([&] { f.resources->record(4); });
  rejects([&] { ItemTransformationResources::import({}, version); });
  rejects([&] {
    ItemTransformationResources::import({}, static_cast<GameVersion>(99));
  });
  Fixture other(version == GameVersion::US ? GameVersion::JP : GameVersion::US);
  rejects([&] {
    Inventory bad(f.party, other.items, f.resources, f.timers, f.random);
  });
  rejects([&] {
    Inventory bad(f.party, f.items, other.resources, f.timers, f.random);
  });
  rejects([&] { Inventory bad(f.party, {}, f.resources, f.timers, f.random); });
  const unsigned at = version == GameVersion::US ? 0x15f4bb : 0x15f41b;
  std::vector<std::uint8_t> truncated(at + 19);
  rejects([&] { ItemTransformationResources::import(truncated, version); });
  truncated.resize(at + 20);
  for (unsigned i = 0; i < 4; ++i)
    truncated[at + i * 5] = std::uint8_t(i + 1);
  rejects([&] { ItemTransformationResources::import(truncated, version); });
  truncated[at] = 0;
  auto early = ItemTransformationResources::import(truncated, version);
  check(early->record(1).item == 2,
        "Early sentinel must retain later owned records");
}
void queries_and_receipts(GameVersion version) {
  for (unsigned character = 1; character <= 6; ++character)
    for (unsigned empty = 0; empty <= 14; ++empty) {
      Fixture f(version);
      for (unsigned c = 1; c <= 6; ++c)
        f.party.character(c).items.fill(11);
      if (empty < 14)
        f.party.character(character).items[empty] = 0;
      check(f.inventory->first_empty_index(std::uint16_t(character)) == empty,
            "First empty index is not zero-based");
      check(f.inventory->find_space(std::uint16_t(character)) ==
                (empty == 14 ? 0 : character),
            "Space query must return recipient ID");
      check(f.inventory->find_space(0xff) == (empty == 14 ? 0 : character),
            "FF space search used wrong party list");
      const auto before = f.party.character(character).items;
      auto op = f.inventory->begin_give(std::uint16_t(character), 1);
      check(op->advance(0) == Progress::BudgetExhausted &&
                f.party.character(character).items == before,
            "Zero budget mutated receipt");
      check(finish(*op, empty % 2 ? 1 : 4096) == Progress::Finished,
            "Ordinary item unexpectedly suspended");
      check(op->recipient() == (empty == 14 ? 0 : character),
            "Receipt return mismatch");
      for (unsigned i = 0; i < 14; ++i)
        check(f.party.character(character).items[i] ==
                  (i == empty ? 1 : before[i]),
              "Receipt changed another item");
      check(op->advance(0) == Progress::Finished,
            "Completed receipt changed progress");
    }
  {
    Fixture f(version);
    f.party.controlled_count = 255;
    check(f.inventory->find_space(0xff) == 6,
          "Early success must not prevalidate unused party entries");
    auto op = f.inventory->begin_give(0xff, 1);
    check(finish(*op) == Progress::Finished && op->recipient() == 6,
          "FF did not use membership order");
    check(f.party.character(6).items[0] == 1,
          "FF wrote controlled-index record instead");
  }
  {
    Fixture f(version);
    f.party.controlled_count = 0;
    auto op = f.inventory->begin_give(0xff, 65535);
    check(finish(*op) == Progress::Finished && op->recipient() == 0,
          "Empty list must not read item metadata");
    check(f.inventory->find_space(0xff) == 0, "Empty list space failure");
  }
  {
    Fixture f(version);
    f.party.character(1).items.fill(1);
    auto op = f.inventory->begin_give(1, 65535);
    check(finish(*op) == Progress::Finished && op->recipient() == 0,
          "Full inventory read unowned metadata");
    rejects([&] { f.inventory->first_empty_index(0); });
    rejects([&] { f.inventory->find_space(7); });
  }
  {
    Fixture f(version);
    auto op = f.inventory->begin_give(1, 0);
    check(finish(*op) == Progress::Finished && op->recipient() == 1 &&
              f.inventory->first_empty_index(1) == 0,
          "Item0 is a source receipt, not an invented failure");
  }
  {
    Fixture f(version);
    const auto before = f.party.character(1).items;
    auto op = f.inventory->begin_give(1, 254);
    rejects([&] { finish(*op); });
    check(f.party.character(1).items == before,
          "Unowned metadata partially mutated inventory");
  }
}
void continuation(GameVersion version) {
  Fixture f(version);
  auto op = f.inventory->begin_give(0xff, 4);
  check(finish(*op) == Progress::Suspended &&
            op->service() == InventoryService::TeddyRefresh,
        "Teddy service absent");
  check(f.party.character(6).items[0] == 4 && f.timers.loaded_count == 0,
        "Source insertion/Teddy/timer order changed");
  check(op->advance(4096) == Progress::Suspended && f.timers.loaded_count == 0,
        "Pending Teddy advanced by itself");
  rejects([&] { op->recipient(); });
  rejects([&] { f.inventory->begin_give(1, 1); });
  // Matched host lifecycle callback may alter membership, inventory and RNG.
  f.party.party_order[0] = 2;
  f.party.character(6).items[0] = 0;
  f.random = {1, 32};
  f.timers.loaded_count = 65535;
  op->respond();
  check(finish(*op) == Progress::Finished && op->recipient() == 2,
        "FF caller did not reread membership after callback");
  check(f.timers.loaded_count == 0 && f.timers.next_check == 60,
        "Timer global words did not wrap/update");
  check(f.timers.records[1] == LoadedItemTransformation{9, 0, 1, 0},
        "RAND_MOD2 must use divisor3 and live RNG");
  check(f.random.primary_word == 0x8000 && f.random.secondary_word == 0x018d,
        "Timer consumed wrong RAND transition");
  check(f.party.character(6).items[0] == 0,
        "Receipt rewrote item after lifecycle callback");
  rejects([&] { op->respond(); });
  State other(version);
  check(f.inventory->bound_to(f.party) && !f.inventory->bound_to(other),
        "Inventory identity validation");
  ItemTransformationState other_timers;
  check(f.inventory->uses(f.timers) && !f.inventory->uses(other_timers),
        "Inventory transformation timer identity validation");
  {
    Fixture abandoned(version);
    auto pending = abandoned.inventory->begin_give(1, 2);
    check(finish(*pending) == Progress::Suspended,
          "Expected Teddy suspension before abandonment");
    pending.reset();
    check(abandoned.party.character(1).items[0] == 2,
          "Abandonment rolled back inserted item");
    rejects([&] { abandoned.inventory->begin_give(1, 1); });
    rejects([&] { abandoned.inventory->add_wallet32(1); });
  }
}
void timers(GameVersion version) {
  for (unsigned frequency : {0u, 9u})
    for (unsigned time : {0u, 12u}) {
      Fixture f(version);
      f.timers.records[0] = {77, std::uint8_t(frequency), 88,
                             std::uint8_t(time)};
      f.timers.loaded_count = 5;
      f.timers.next_check = 13;
      const auto random = f.random;
      const auto before = f.timers;
      auto op = f.inventory->begin_give(1, 3);
      check(finish(*op) == Progress::Finished, "Transform receipt failed");
      if (frequency || time)
        check(f.timers == before && f.random == random,
              "Valid timer was restarted");
      else
        check(f.timers.records[0] == LoadedItemTransformation{7, 2, 2, 50} &&
                  f.timers.loaded_count == 6 && f.timers.next_check == 60,
              "Inactive timer did not initialize from imported row");
    }
  for (unsigned jitter = 0; jitter < 3; ++jitter) {
    Fixture f(version);
    f.random = {1, std::uint16_t(jitter * 16)};
    auto op = f.inventory->begin_give(1, 4);
    check(finish(*op) == Progress::Suspended, "Teddy timer path");
    op->respond();
    check(finish(*op) == Progress::Finished &&
              f.timers.records[1].sfx_countdown == std::uint8_t(jitter - 1),
          "Byte countdown underflow/jitter");
  }
  {
    Fixture f(version);
    const auto random = f.random;
    auto op = f.inventory->begin_give(1, 5);
    check(finish(*op) == Progress::Finished && f.random == random &&
              f.timers == ItemTransformationState{},
          "Unlisted transforming item must stop at sentinel");
  }
  {
    Fixture f(version);
    auto op = f.inventory->begin_give(1, 4);
    check(finish(*op) == Progress::Suspended, "Teddy frontier");
    f.timers.records[1] = {9, 1, 55, 0};
    const auto random = f.random;
    op->respond();
    finish(*op);
    check(f.random == random && f.timers.records[1].sfx_countdown == 55,
          "Post-Teddy timer validity was captured too early");
  }
}
void wallet(GameVersion version) {
  Fixture f(version);
  constexpr std::array<std::array<std::uint32_t, 3>, 10> cases{
      {{0, 0, 0},
       {99998, 1, 99999},
       {99999, 1, 99999},
       {100000, 0, 99999},
       {0, 0xffffffff, 0xffffffff},
       {0x7fffffff, 1, 0x80000000},
       {0xffffffff, 1, 0},
       {0xfffffff0, 0x20, 0x10},
       {10, 0xfffffff0, 0xfffffffa},
       {0, 0x7fffffff, 99999}}};
  for (auto c : cases) {
    f.party.money_carried = c[0];
    f.party.bank_balance = 0x12345678;
    check(f.inventory->add_wallet32(c[1]) == c[2] &&
              f.party.money_carried == c[2],
          "Wallet wrapped signed cap mismatch");
    check(f.party.bank_balance == 0x12345678, "Wallet changed bank account");
  }
  constexpr std::array<std::array<std::uint32_t,4>,8> decreases{{
      {10,10,0,0},{10,11,1,10},{0,0,0,0},{0,0xffffffff,0,1},
      {0x80000000,1,0,0x7fffffff},{0x7fffffff,0xffffffff,1,0x7fffffff},
      {0xffffffff,0xfffffffe,0,1},{0,0x80000000,1,0}}};
  for(auto c:decreases) {
    f.party.money_carried=c[0];f.party.bank_balance=0x12345678;
    check(f.inventory->subtract_wallet32(c[1])==c[2] && f.party.money_carried==c[3] &&
        f.party.bank_balance==0x12345678,"Wallet decrease changed wrapped signed comparison or rejected-state preservation");
  }
}
void rescans(GameVersion version) {
  Fixture f(version);
  f.party.controlled_count = 2;
  f.party.party_order = {6, 3, 1};
  f.party.character(6).items[13] = 3; // Search includes slots after zero.
  f.party.character(1).items[0] = 7; // Outside the chosen count.
  f.timers.records = {{{8, 0, 9, 0}, {10, 0, 11, 12},
                       {13, 14, 15, 0}, {16, 17, 18, 19}}};
  f.timers.loaded_count = 2;
  auto expected_random = f.random;
  const auto jitter = eb::native::story::next_random(expected_random) % 3;
  f.inventory->rescan_transformations();
  check(f.timers.records[0] == LoadedItemTransformation{
              7, 2, std::uint8_t(1 + jitter), 50} &&
            f.timers.records[1] == LoadedItemTransformation{10, 0, 11, 0} &&
            f.timers.records[2] == LoadedItemTransformation{13, 0, 15, 0} &&
            f.timers.records[3] == LoadedItemTransformation{16, 17, 18, 19} &&
            f.timers.loaded_count == 1 && f.timers.next_check == 60 &&
            f.random == expected_random,
        "Rescan did not preserve source table/search/stop/RNG semantics");
  const auto timers = f.timers;
  f.inventory->rescan_transformations();
  check(f.timers == timers && f.random == expected_random,
        "Repeated rescan restarted valid timers");
  f.party.controlled_count = 7;
  rejects([&] { f.inventory->rescan_transformations(); });
  check(!f.inventory->failed() && f.timers == timers,
        "Invalid chosen party partially changed rescan state");
  f.party.controlled_count = 2;
  auto receipt = f.inventory->begin_give(6, 1);
  rejects([&] { f.inventory->rescan_transformations(); });
  check(f.inventory->busy() && !f.inventory->failed(),
        "Rescan bypassed an active receipt");
  receipt.reset();
  rejects([&] { f.inventory->rescan_transformations(); });
  check(f.inventory->failed(), "Rescan resumed an abandoned owner");
}
} // namespace
int main() {
  try {
    for (auto version : {GameVersion::US, GameVersion::JP}) {
      resources(version);
      queries_and_receipts(version);
      continuation(version);
      timers(version);
      wallet(version);
      rescans(version);
    }
    std::cout << "native party inventory: " << checks << " checks passed\n";
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
