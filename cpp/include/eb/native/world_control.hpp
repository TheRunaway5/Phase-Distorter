#pragma once

#include "eb/native/battle/encounter_state.hpp"
#include "eb/native/camera_refresh.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/party_trail.hpp"
#include "eb/native/story/input.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native/world_party.hpp"
#include <stdexcept>
#include <variant>

namespace eb::native {
// An authored scene role survives the lifetime of its current host actor.
// Host-only camera targets instead retain their strict ActorId lifetime.
class AuthoredRoleRef {
public:
  explicit AuthoredRoleRef(unsigned value) : value_(value) {
    if (value >= 30)
      throw std::out_of_range("Camera target is outside authored scene roles");
  }
  unsigned value() const noexcept { return value_; }
  bool operator==(const AuthoredRoleRef &) const = default;

private:
  unsigned value_;
};
using CameraTarget = std::variant<AuthoredRoleRef, ActorId>;

// Whole XY, facing, walking style and input/collision mode already belong to
// InteractionState. This owner holds only the remaining world controller
// fields, not another set of party positions or input words.
struct WorldControlState {
  std::uint16_t x_fraction{}, y_fraction{}, moved_this_tick{}, automatic_mode{};
  // Persistent ground under the party; InteractionState::surface_flags is
  // the distinct shared temporary query result and can change during refresh.
  std::uint16_t trodden_surface_flags{};
  bool camera_moved{}; // Source write-only UNREAD_7E4DD4.
  std::uint16_t automatic_ticks{}, automatic_restore_style{};
  std::uint16_t direction_interval_ticks{}, direction_interval_previous_mode{};
  std::optional<CameraTarget> camera_focus;
  std::uint16_t bicycle_turn_frames{};
  // BATTLE_MODE is the outer encounter request/debug mode. The independent
  // BATTLE_MODE_FLAG remains in WindowHost::prompt_state().battle_mode.
  battle::EncounterState encounter{0, 0, 0, 0, 0};
};
enum class WorldControlService {
  Walk,
  Bicycle,
  Escalator,
  Automatic,
  RefreshCamera
};
struct WorldControlRequest {
  WorldControlService kind{};
  std::uint16_t previous_movement{}; // Bicycle coasting input only.
  CameraPosition camera{};
  bool operator==(const WorldControlRequest &) const = default;
};
// C07C5B changes only live reserved-party sprite blink flags. It does not
// clear window/meter selection, consume intangibility or advance a frame.
void clear_party_sprite_blink(ActorWorld &);

// C04C45's exact per-tick control dispatch, terrain/trail publication and
// camera boundary. The four movement modes remain typed services until their
// real reducers finish. A camera response means actual map/activation refresh
// has completed. No input poll, actor tick, RNG draw or rendering happens on
// yield.
class WorldControl {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance();
    const std::optional<WorldControlRequest> &request() const {
      return request_;
    }
    void respond();
    bool complete() const { return complete_; }

  private:
    friend class WorldControl;
    explicit Operation(WorldControl &);
    WorldControl &owner_;
    unsigned phase_{}, point_{};
    std::uint16_t previous_movement_{};
    std::optional<WorldControlRequest> request_;
    bool complete_{};
  };
  WorldControl(ActorWorld &, WorldPartyState &, PartyTrail &,
               npcs::InteractionState &, WorldControlState &,
               dialogue::PromptState &, story::InputState &, story::TickState &,
               const WorldCollision &, const WorldMapArea &);
  WorldControl(const WorldControl &) = delete;
  WorldControl &operator=(const WorldControl &) = delete;
  std::unique_ptr<Operation> begin();
  bool failed() const { return failed_; }
  bool busy() const { return active_ != nullptr; }
  bool uses(const ActorWorld &, const dialogue::PromptState &,
            const story::InputState &, const story::TickState &,
            const WorldCollision &, const WorldMapArea &) const noexcept;
  // Borrowed authoritative inputs for the outer maintenance reducer.
  const npcs::InteractionState &leader_state() const { return leader_; }
  const WorldControlState &state() const { return state_; }
  WorldPartyState &formation() const { return party_; }
  const PartyTrail &trail() const { return trail_; }
  const ActorWorld &actors() const { return actors_; }
  const dialogue::PromptState &prompt_state() const { return prompt_; }

private:
  friend class WorldMaintenance;
  void check() const;
  ActorWorld &actors_;
  WorldPartyState &party_;
  PartyTrail &trail_;
  npcs::InteractionState &leader_;
  WorldControlState &state_;
  dialogue::PromptState &prompt_;
  story::InputState &input_;
  story::TickState &clock_;
  const WorldCollision &collision_;
  const WorldMapArea &area_;
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
