#pragma once

#include "eb/native/saves/session.hpp"
#include "eb/native/world_interaction_queue.hpp"

namespace eb::native {
struct AppearanceSceneContext;
namespace npcs {
struct InteractionState;
}
namespace story {
struct TickState;
}

// Live rectangles and the distinct persisted metadata. Source reload
// deliberately leaves a live rectangle alone when its saved mode is zero.
struct WorldHotspotState {
  std::array<saves::Hotspot, 2> live{};
  std::array<std::uint8_t, 2> saved_modes{}, saved_ids{};
  std::array<std::uint32_t, 2> saved_references{};
  bool operator==(const WorldHotspotState &) const = default;
};
class WorldHotspots {
public:
  WorldHotspots(GameVersion, WorldHotspotState &, npcs::InteractionState &,
                story::TickState &, AppearanceSceneContext &,
                WorldInteractionQueue &);
  bool uses(const npcs::InteractionState &, const story::TickState &,
            const AppearanceSceneContext &,
            const WorldInteractionQueue &) const noexcept;
  // C073C0 has no active-mode gate itself: mode1 fires outside an inclusive
  // rectangle; every other mode fires strictly inside. Walking applies its
  // separate active gate and frame parity through evaluate_tick(). A true
  // result means it fired, even when current-type suppression discards enqueue.
  bool evaluate(unsigned zero_based_slot);
  bool evaluate_tick();
  void activate(unsigned one_based_slot, unsigned table_id,
                std::uint32_t content_reference,
                const saves::ContinueResources &);
  void disable(unsigned one_based_slot);
  void reload(const saves::ContinueResources &);
  void capture(saves::GameState &) const;
  void restore(const saves::GameState &, const saves::ContinueResources &);

private:
  void check() const;
  void validate(const saves::ContinueResources &) const;
  GameVersion version_;
  WorldHotspotState &state_;
  npcs::InteractionState &leader_;
  story::TickState &clock_;
  AppearanceSceneContext &appearance_;
  WorldInteractionQueue &queue_;
};
} // namespace eb::native
