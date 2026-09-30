#pragma once

#include "eb/native/dialogue/program.hpp"
#include <memory>

namespace eb::native::npcs {
struct QueuedInteraction {
    std::uint16_t type{};
    // The source union contains either an authored text or door-data key.
    // The consumer service interprets it; enqueue never resolves content.
    dialogue::ReferenceKey key{};
    bool operator==(const QueuedInteraction &) const = default;
};
struct InteractionQueueState {
    std::array<QueuedInteraction, 4> records{};
    std::uint16_t current{}, next{}, pending{}, current_type = 0xffff;
    bool operator==(const InteractionQueueState &) const = default;
};
struct DadPhoneState {
    std::uint16_t timer{}, queued{};
    bool operator==(const DadPhoneState &) const = default;
};
enum class InteractionQueueServiceKind { ClearPartySpriteBlink, Text, Door };
struct InteractionQueueService {
    InteractionQueueServiceKind kind{};
    dialogue::ReferenceKey key{};
    bool operator==(const InteractionQueueService &) const = default;
};
enum class InteractionQueueProgress { BudgetExhausted, Suspended, Finished };
dialogue::ReferenceKey dad_message_reference(GameVersion);

// C064E3 and PROCESS_QUEUED_INTERACTIONS. The four source records deliberately
// overwrite on wrap: equal indices are not an empty check inside this helper.
// The outer world loop owns that gate. Queue/phone/actual appearance-scene
// intangibility are borrowed authoritative state and must outlive this owner;
// this owner in turn must outlive its operations and remain at a stable address.
// Service acknowledgement means the host completed that real service. The
// sprite-blink service is C07C5B, NOT the window/meter selection-clear effect.
// Work-budget yields are scheduling boundaries, not new world callbacks.
class InteractionQueue {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        InteractionQueueProgress advance(unsigned work_budget = 4096);
        const std::optional<InteractionQueueService> &service() const;
        void respond();
        bool complete() const;

      private:
        friend class InteractionQueue;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    InteractionQueue(GameVersion, InteractionQueueState &, std::uint16_t &intangibility, DadPhoneState &);
    // Explicit imported-key binding is available for alternate content and
    // synthetic fixtures. Ordinary game construction uses the regional key.
    InteractionQueue(GameVersion, InteractionQueueState &, std::uint16_t &intangibility,
                     DadPhoneState &, dialogue::ReferenceKey dad_message);
    ~InteractionQueue();
    InteractionQueue(const InteractionQueue &) = delete;
    InteractionQueue &operator=(const InteractionQueue &) = delete;
    InteractionQueue(InteractionQueue &&) = delete;
    InteractionQueue &operator=(InteractionQueue &&) = delete;
    bool shares_world(GameVersion, const std::uint16_t &intangibility) const noexcept;
    // Terminal abandonment only. An active consumer may legitimately retain
    // this queue while nested dialogue performs world updates and enqueues.
    bool failed() const noexcept;
    bool busy() const noexcept;
    void reset_after_restore();
    void initialize_world();
    // Suppress only a type equal to live current_type. No duplicate/full test
    // or drop-oldest adjustment is introduced. May be called during a service.
    bool enqueue(std::uint16_t type, dialogue::ReferenceKey);
    // Always process one record, including when current==next or pending==0.
    std::unique_ptr<Operation> begin();

  private:
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::npcs
