#pragma once

#include "eb/native/npcs/interaction_queue.hpp"

namespace eb::native {
// Construct the real queue with one borrowed phone owner and one immutable
// Dad-text key. Maintenance and queue consumption cannot accidentally refer
// to different phone timers/latches or different imported text identities.
// The state/phone/intangibility owners must remain stable for this lifetime.
class WorldInteractionQueue {
public:
  WorldInteractionQueue(GameVersion version, npcs::InteractionQueueState &state,
                        std::uint16_t &intangibility,
                        npcs::DadPhoneState &phone)
      : WorldInteractionQueue(version, state, intangibility, phone,
                              npcs::dad_message_reference(version)) {}
  WorldInteractionQueue(GameVersion version, npcs::InteractionQueueState &state,
                        std::uint16_t &intangibility,
                        npcs::DadPhoneState &phone, dialogue::ReferenceKey key)
      : state_(state), phone_(phone), key_(key),
        queue_(version, state, intangibility, phone, key) {}
  npcs::InteractionQueue &queue() { return queue_; }
  npcs::DadPhoneState &phone() { return phone_; }
  const npcs::DadPhoneState &phone() const { return phone_; }
  dialogue::ReferenceKey dad_message() const { return key_; }
  std::uint16_t pending() const { return state_.pending; }
  bool failed() const noexcept { return queue_.failed(); }
  bool busy() const noexcept { return queue_.busy(); }
  void reset_after_restore() { queue_.reset_after_restore(); }
  void initialize_world() { queue_.initialize_world(); }
  const npcs::InteractionQueueState &state() const { return state_; }
  bool shares_world(GameVersion version,
                    const std::uint16_t &intangibility) const noexcept {
    return queue_.shares_world(version, intangibility);
  }

private:
  npcs::InteractionQueueState &state_;
  npcs::DadPhoneState &phone_;
  const dialogue::ReferenceKey key_;
  npcs::InteractionQueue queue_;
};
} // namespace eb::native
