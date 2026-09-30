// Original misc/give_item_to_{specific_,}character.asm,
// find_inventory_space{,2}, C22351, increase_wallet_balance;
// C3EAD0/INITIALIZE_ITEM_TRANSFORMATION.
#include "eb/native/party/inventory.hpp"
#include <algorithm>
#include <bit>
#include <stdexcept>

namespace eb::native::party {
namespace {
void require(bool value, const char *message) {
  if (!value)
    throw std::logic_error(message);
}
bool valid(const LoadedItemTransformation &value) {
  return value.transformation_countdown || value.frequency;
}
} // namespace
std::shared_ptr<const ItemTransformationResources>
ItemTransformationResources::import(std::span<const std::uint8_t> image,
                                    GameVersion version) {
  // Linked TIMED_ITEM_TRANSFORMATION_TABLE: four5-byte records, including
  // its real sentinel. The bytes are imported, never embedded authored data.
  unsigned at;
  switch (version) {
  case GameVersion::US:
    at = 0x15f4bb;
    break;
  case GameVersion::JP:
    at = 0x15f41b;
    break;
  default:
    throw std::invalid_argument("Unsupported item transformation region");
  }
  if (at > image.size() || image.size() - at < 20)
    throw std::invalid_argument("Truncated item transformation table");
  auto result = std::shared_ptr<ItemTransformationResources>(
      new ItemTransformationResources(version));
  bool terminated{};
  for (auto &r : result->records_) {
    r = {image[at], image[at + 1], image[at + 2], image[at + 3], image[at + 4]};
    at += 5;
    terminated |= r.item == 0;
  }
  if (!terminated)
    throw std::invalid_argument(
        "Item transformation table has no owned sentinel");
  return result;
}
const ItemTransformation &
ItemTransformationResources::record(unsigned index) const {
  return records_.at(index);
}

struct Inventory::Execution {
  State &party;
  std::shared_ptr<const dialogue::SubstitutionResources> items;
  std::shared_ptr<const ItemTransformationResources> transformations;
  ItemTransformationState &timers;
  story::RandomState &random;
  bool active{}, poisoned{};
  Execution(State &p, std::shared_ptr<const dialogue::SubstitutionResources> i,
            std::shared_ptr<const ItemTransformationResources> t,
            ItemTransformationState &s, story::RandomState &r)
      : party(p), items(std::move(i)), transformations(std::move(t)), timers(s),
        random(r) {
    require(items && transformations,
            "Inventory requires imported item and transformation resources");
    require(items->version() == party.version() &&
                transformations->version() == party.version(),
            "Inventory resources and party regions differ");
  }
  std::uint16_t empty(std::uint16_t character) const {
    const auto &values = party.character(character).items;
    return std::uint16_t(std::find(values.begin(), values.end(), 0) -
                         values.begin());
  }
  void start_transformation(std::uint16_t item) {
    // C3EAD0 samples the low input byte and stops at the first sentinel;
    // the item metadata path already validated the full source index.
    for (unsigned i = 0; i < 4; ++i) {
      const auto &row = transformations->record(i);
      if (!row.item)
        return;
      if (row.item != std::uint8_t(item))
        continue;
      auto &timer = timers.records[i];
      if (valid(timer))
        return;
      timers.next_check = 60;
      timers.loaded_count = std::uint16_t(timers.loaded_count + 1);
      timer.sfx = row.sfx;
      timer.frequency = row.frequency;
      // RAND_MOD increments the supplied divisor: argument2 is %3.
      const auto jitter = story::next_random(random) % 3;
      timer.sfx_countdown = std::uint8_t(unsigned(row.frequency) + jitter - 1);
      timer.transformation_countdown = row.time;
      return;
    }
  }
};
struct Inventory::Operation::Execution {
  enum class Phase { Find, Write, Teddy, Transform, Finish };
  Inventory::Execution &owner;
  std::uint16_t selector{}, item{}, character{}, position{}, result{};
  unsigned ordinal{};
  Phase phase = Phase::Find;
  std::optional<InventoryService> pending;
  bool done{};
  Execution(Inventory::Execution &o, std::uint16_t s, std::uint16_t i)
      : owner(o), selector(s), item(i) {}
  void finish(std::uint16_t value) {
    result = value;
    done = true;
    owner.active = false;
  }
  void step() {
    auto &o = owner;
    switch (phase) {
    case Phase::Find:
      if (selector == 0xff) {
        if (ordinal >= o.party.controlled_count) {
          finish(0);
          return;
        }
        // Validate only the source entry actually visited, preserving
        // early success even if later raw count/list bytes are invalid.
        character = o.party.party_order.at(ordinal);
      } else
        character = selector;
      position = o.empty(character);
      if (position == 14) {
        if (selector == 0xff)
          ++ordinal;
        else
          finish(0);
        return;
      }
      phase = Phase::Write;
      return;
    case Phase::Write: {
      // Reject an unowned metadata access before an irreversible partial
      // receipt. A full inventory above never reads metadata at all.
      const auto properties = o.items->item_properties(item);
      o.party.character(character).items[position] = std::uint8_t(item);
      phase = properties.type == 4 ? Phase::Teddy : Phase::Transform;
      return;
    }
    case Phase::Teddy:
      pending = InventoryService::TeddyRefresh;
      return;
    case Phase::Transform:
      // Source reloads flags after C216DB; resource ownership stays
      // immutable, while scheduler validity and random words stay live.
      if (o.items->item_properties(item).flags & 0x10)
        o.start_transformation(item);
      phase = Phase::Finish;
      return;
    case Phase::Finish:
      finish(selector == 0xff ? o.party.party_order.at(ordinal) : character);
      return;
    }
  }
};
Inventory::Inventory(State &p,
                     std::shared_ptr<const dialogue::SubstitutionResources> i,
                     std::shared_ptr<const ItemTransformationResources> t,
                     ItemTransformationState &s, story::RandomState &r)
    : execution_(
          std::make_unique<Execution>(p, std::move(i), std::move(t), s, r)) {}
Inventory::~Inventory() = default;
bool Inventory::bound_to(const State &state) const noexcept {
  return &execution_->party == &state;
}
bool Inventory::uses(const ItemTransformationState &timers) const noexcept {
  return &execution_->timers == &timers;
}
bool Inventory::bound_to(const State &state, const dialogue::SubstitutionResources &items) const noexcept {
  return bound_to(state) && execution_->items.get() == &items;
}
bool Inventory::bound_to(const State &state,
                         const story::RandomState &random) const noexcept {
  return bound_to(state) && &execution_->random == &random;
}
GameVersion Inventory::version() const { return execution_->party.version(); }
bool Inventory::busy() const noexcept { return execution_->active; }
bool Inventory::failed() const noexcept { return execution_->poisoned; }
void Inventory::rescan_transformations() {
  auto &e = *execution_;
  require(!e.active && !e.poisoned,
          "Transformation rescan requires idle healthy inventory");
  // A valid chosen-party list is a caller invariant of both source searches.
  // Resolve it before the first source-ordered timer/RNG mutation.
  if (e.party.controlled_count > e.party.party_order.size())
    throw std::invalid_argument("Transformation rescan has invalid chosen count");
  for (unsigned p = 0; p < e.party.controlled_count; ++p)
    (void)e.party.character(e.party.party_order[p]);
  try {
    for (unsigned i = 0; i < 4; ++i) {
      const auto item = e.transformations->record(i).item;
      if (!item)
        return;
      bool present{};
      for (unsigned p = 0; p < e.party.controlled_count && !present; ++p) {
        const auto &items = e.party.character(e.party.party_order[p]).items;
        present = std::find(items.begin(), items.end(), item) != items.end();
      }
      if (present) {
        e.start_transformation(item);
      } else {
        // C3EB1C selects the first matching authored row, then C48F98 clears
        // only frequency/countdown. Its second inventory search necessarily
        // remains absent here: no callback or world tick separates searches.
        unsigned first = 0;
        while (e.transformations->record(first).item != item)
          ++first;
        auto &timer = e.timers.records[first];
        if (valid(timer)) {
          e.timers.loaded_count = std::uint16_t(e.timers.loaded_count - 1);
          timer.frequency = timer.transformation_countdown = 0;
        }
      }
    }
  } catch (...) {
    e.poisoned = true;
    throw;
  }
}
std::uint16_t Inventory::first_empty_index(std::uint16_t character) const {
  return execution_->empty(character);
}
std::uint16_t Inventory::find_space(std::uint16_t selector) const {
  const auto &e = *execution_;
  if (selector != 0xff)
    return e.empty(selector) == 14 ? 0 : selector;
  for (unsigned i = 0; i < e.party.controlled_count; ++i) {
    const auto character = e.party.party_order.at(i);
    if (e.empty(character) != 14)
      return character;
  }
  return 0;
}
std::uint32_t Inventory::add_wallet32(std::uint32_t amount) {
  require(!execution_->poisoned,
          "Abandoned inventory receipt invalidated its owner");
  auto &value = execution_->party.money_carried;
  const std::uint32_t sum = value + amount;
  // The source compares the wrapped result as signed32, not unsigned and
  // not a wider saturating addition. Preserve negative-bit wrapped values.
  value = std::bit_cast<std::int32_t>(sum) > 99999 ? 99999 : sum;
  return value;
}
std::unique_ptr<Inventory::Operation>
Inventory::begin_give(std::uint16_t selector, std::uint16_t item) {
  auto &e = *execution_;
  require(!e.active && !e.poisoned, "Inventory receipt is active or abandoned");
  auto result = std::unique_ptr<Operation>(
      new Operation(std::make_unique<Operation::Execution>(e, selector, item)));
  e.active = true;
  return result;
}
Inventory::Operation::Operation(std::unique_ptr<Execution> e)
    : execution_(std::move(e)) {}
Inventory::Operation::~Operation() {
  if (!execution_->done)
    execution_->owner.poisoned = true;
}
dialogue::Progress Inventory::Operation::advance(unsigned budget) {
  auto &e = *execution_;
  if (e.done)
    return dialogue::Progress::Finished;
  require(!e.owner.poisoned,
          "Abandoned inventory receipt invalidated its owner");
  if (e.pending)
    return dialogue::Progress::Suspended;
  while (budget--) {
    e.step();
    if (e.done)
      return dialogue::Progress::Finished;
    if (e.pending)
      return dialogue::Progress::Suspended;
  }
  return dialogue::Progress::BudgetExhausted;
}
const std::optional<InventoryService> &Inventory::Operation::service() const {
  return execution_->pending;
}
void Inventory::Operation::respond() {
  auto &e = *execution_;
  require(!e.owner.poisoned && e.pending == InventoryService::TeddyRefresh,
          "Inventory has no pending teddy reconciliation");
  e.pending.reset();
  e.phase = Execution::Phase::Transform;
}
bool Inventory::Operation::complete() const { return execution_->done; }
std::uint16_t Inventory::Operation::recipient() const {
  require(execution_->done, "Inventory receipt has not completed");
  return execution_->result;
}
} // namespace eb::native::party
