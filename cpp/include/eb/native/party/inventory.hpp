#pragma once

#include "eb/native/dialogue/runtime.hpp"
#include "eb/native/dialogue/substitution_resources.hpp"
#include "eb/native/party/state.hpp"
#include "eb/native/story/random.hpp"
#include <memory>

namespace eb::native { class CharacterGrowth; }
namespace eb::native::party {
struct ItemTransformation {
  std::uint8_t item{}, sfx{}, frequency{}, target_item{}, time{};
  bool operator==(const ItemTransformation &) const = default;
};
class ItemTransformationResources {
public:
  static std::shared_ptr<const ItemTransformationResources>
      import(std::span<const std::uint8_t>, GameVersion);
  GameVersion version() const { return version_; }
  const ItemTransformation &record(unsigned index) const;

private:
  explicit ItemTransformationResources(GameVersion version)
      : version_(version) {}
  GameVersion version_;
  std::array<ItemTransformation, 4> records_{};
};
struct LoadedItemTransformation {
  std::uint8_t sfx{}, frequency{}, sfx_countdown{}, transformation_countdown{};
  bool operator==(const LoadedItemTransformation &) const = default;
};
struct ItemTransformationState {
  std::array<LoadedItemTransformation, 4> records{};
  std::uint16_t loaded_count{};
  std::uint8_t next_check{};
  bool operator==(const ItemTransformationState &) const = default;
};
enum class InventoryService { TeddyRefresh, TeddyRemove };

// GIVE_ITEM_TO_CHARACTER, the inventory-space helpers and wallet addition.
// This is the sole mutation path into the borrowed party; catalogs are
// immutable. The original teddy reconciliation includes real party/entity
// lifecycle work: acknowledgement requires that service to complete, never an
// invented no-op. All borrowed owners must outlive Inventory, which must
// outlive its operations. Abandonment poisons this owner without undoing
// already-visible item writes. Budget exhaustion never authorizes a world
// callback or party mutation.
class Inventory {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    dialogue::Progress advance(unsigned work_budget = 4096);
    const std::optional<InventoryService> &service() const;
    void respond();
    bool complete() const;
    std::uint16_t recipient() const;
    // REMOVE_ITEM's signed strength-selected authored party member. Its real
    // REMOVE_CHAR wrapper and following Teddy reconciliation must both run.
    std::uint16_t teddy_member() const;

  private:
    friend class Inventory;
    struct Execution;
    explicit Operation(std::unique_ptr<Execution>);
    std::unique_ptr<Execution> execution_;
  };
  Inventory(State &, std::shared_ptr<const dialogue::SubstitutionResources>,
            std::shared_ptr<const ItemTransformationResources>,
            ItemTransformationState &, story::RandomState &);
  ~Inventory();
  Inventory(const Inventory &) = delete;
  Inventory &operator=(const Inventory &) = delete;
  Inventory(Inventory &&) = delete;
  Inventory &operator=(Inventory &&) = delete;
  bool bound_to(const State &) const noexcept;
  bool bound_to(const State &, const story::RandomState &) const noexcept;
  bool bound_to(const State &, const dialogue::SubstitutionResources &) const noexcept;
  bool uses(const ItemTransformationState &) const noexcept;
  GameVersion version() const;
  bool busy() const noexcept;
  bool failed() const noexcept;
  // C3EBCA rebuilds the actual timed-item registrations from the live chosen
  // party, retaining existing valid timers and stopping absent items. Uses
  // this owner's imported table and shared RNG; no item or frame is advanced.
  void rescan_transformations();
  void bind_equipment(const CharacterGrowth &);
  std::uint16_t change_equipment(std::uint16_t character, EquipmentSlot,
                                std::uint16_t position);
  void recalculate_derived_stat(std::uint16_t character, unsigned stat);
  // FF scans live party_order through controlled_count; all other selectors
  // address a character directly. Return the character ID, or zero on failure.
  std::uint16_t find_space(std::uint16_t selector) const;
  // Zero-based first empty slot, or14. Character0 is an unowned source alias,
  // including the unguarded CC1D0E call after failed receipt, and is rejected.
  std::uint16_t first_empty_index(std::uint16_t character) const;
  std::uint32_t add_wallet32(std::uint32_t amount);
  std::uint16_t subtract_wallet32(std::uint32_t amount);
  std::unique_ptr<Operation> begin_give(std::uint16_t selector,
                                        std::uint16_t item);
  std::unique_ptr<Operation> begin_remove(std::uint16_t character,
                                         std::uint16_t position);
  std::unique_ptr<Operation> begin_take(std::uint16_t selector,
                                       std::uint16_t item);
  // C22A3A compacts first, then gives the same item and adjusts equipment.
  // Self-give moves the item to the tail while retaining the equipped slot;
  // it never invokes removal's teddy/timer cancellation paths.
  std::unique_ptr<Operation> begin_transfer(std::uint16_t sender,
      std::uint16_t position, std::uint16_t recipient);

private:
  struct Execution;
  std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::party
