#pragma once

#include "eb/native/npcs/map_text.hpp"
#include "eb/native/world_navigation.hpp"
#include <memory>
#include <optional>

namespace eb::native {
class ActorWorld;
class WorldInteractionQueue;
class WorldDoorTransitions;
struct WorldControlState;
struct WorldMaintenanceState;
namespace npcs {
struct InteractionState;
}
namespace story {
struct InputState;
}

struct WorldDoorEntryRecord {
  dialogue::ReferenceKey text{};
  // Payload+6 packs facing in the upper bits of Y; payload+8 is X.
  std::uint16_t event_word{}, packed_y{}, tile_x{};
  std::uint8_t screen_transition{};
  bool operator==(const WorldDoorEntryRecord &) const = default;
};
struct DoorEventPredicate {
  std::uint16_t flag{};
  bool required_state{};
  bool operator==(const DoorEventPredicate &) const = default;
};
// Payload content only. MapTextResources remains the sole door-directory owner;
// a payload is decoded only after its actual lookup selects door_found.
class WorldDoorResources {
public:
  static std::shared_ptr<const WorldDoorResources>
      import(std::span<const std::uint8_t>, GameVersion);
  GameVersion version() const { return version_; }
  DoorEventPredicate event_predicate(std::uint16_t door_found) const;
  // Read only after the event predicate matches, just as C06A1B does.
  dialogue::ReferenceKey event_text(std::uint16_t door_found) const;
  // C06ACA queues this content key without reading the destination payload.
  static dialogue::ReferenceKey door_key(std::uint16_t door_found);
  WorldDoorEntryRecord entry(dialogue::ReferenceKey) const;
  std::uint16_t entry_direction(const WorldDoorEntryRecord &) const;

private:
  explicit WorldDoorResources(GameVersion version) : version_(version) {}
  GameVersion version_;
  std::vector<std::uint8_t> data_;
  std::array<std::uint16_t,4> entry_directions_{};
};

enum class WorldDoorTransitionKind { Escalator, Stairs };
struct WorldDoorTransitionRequest {
  WorldDoorTransitionKind kind{};
  CollisionCell cell;
  // Authored transition control, not a code pointer: escalator bit15 marks
  // exit and its high byte selects a direction; stairs uses the full word.
  std::uint16_t control{};
  bool operator==(const WorldDoorTransitionRequest &) const = default;
};
// C07526 routing with actual C06A1B/C06A91/C06ACA effects. Type3/4 execute
// their bound native producer or suspend before its first mutation when that
// owner is absent. No generic acknowledgment can bypass input/task publication.
// Source miss/unknown-type returns an uninitialized local and is unsupported.
class WorldDoors {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance();
    bool complete() const { return complete_; }
    bool permission() const;
    const std::optional<WorldDoorTransitionRequest> &request() const {
      return request_;
    }

  private:
    friend class WorldDoors;
    Operation(WorldDoors &, CollisionCell);
    WorldDoors &owner_;
    CollisionCell cell_;
    std::optional<WorldDoorTransitionRequest> request_;
    bool complete_{}, permission_{};
  };
  WorldDoors(std::shared_ptr<const npcs::MapTextResources>,
             std::shared_ptr<const WorldDoorResources>, ActorWorld &,
             npcs::InteractionState &, WorldControlState &,
             WorldNavigationState &, WorldMaintenanceState &,
             story::InputState &, WorldInteractionQueue &);
  WorldDoors(const WorldDoors &) = delete;
  WorldDoors &operator=(const WorldDoors &) = delete;
  std::unique_ptr<Operation> begin(CollisionCell);
  // The service and its scheduler/input owners must outlive these doors.
  void bind_transitions(WorldDoorTransitions &);
  const WorldDoorTransitions *transitions() const noexcept {
    return transitions_;
  }
  bool busy() const { return active_ != nullptr; }
  bool failed() const;
  bool uses(const ActorWorld &, const npcs::InteractionState &,
            const WorldControlState &, const WorldNavigationState &,
            const WorldMaintenanceState &, const story::InputState &,
            const WorldInteractionQueue &) const noexcept;
  const WorldMaintenanceState &maintenance_state() const noexcept {
    return maintenance_;
  }

private:
  void check() const;
  std::shared_ptr<const npcs::MapTextResources> map_;
  std::shared_ptr<const WorldDoorResources> resources_;
  ActorWorld &actors_;
  npcs::InteractionState &leader_;
  WorldControlState &control_;
  WorldNavigationState &navigation_;
  WorldMaintenanceState &maintenance_;
  story::InputState &input_;
  WorldInteractionQueue &queue_;
  WorldDoorTransitions *transitions_{};
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
