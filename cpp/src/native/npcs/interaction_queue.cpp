#include "eb/native/npcs/interaction_queue.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::npcs {
namespace {
void require(bool value, const char *message) { if (!value) throw std::logic_error(message); }
}
dialogue::ReferenceKey dad_message_reference(GameVersion version) {
    // Linked MSG_SYS_PAPA_2H content labels: US C7D33E, JP C9319E.
    // These are data references only; authored text remains in imported packs.
    if (version == GameVersion::US) return {0x3e, 0xd3, 0xc7, 0};
    if (version == GameVersion::JP) return {0x9e, 0x31, 0xc9, 0};
    throw std::invalid_argument("Unsupported Dad-phone content region");
}
struct InteractionQueue::Execution {
    GameVersion version;
    InteractionQueueState &state;
    std::uint16_t &intangibility;
    DadPhoneState &phone;
    dialogue::ReferenceKey dad_message;
    bool active{}, poisoned{};
    Execution(GameVersion v, InteractionQueueState &s, std::uint16_t &i, DadPhoneState &p,
              dialogue::ReferenceKey message)
        : version(v), state(s), intangibility(i), phone(p), dad_message(message) {
        if (version != GameVersion::US && version != GameVersion::JP)
            throw std::invalid_argument("Unsupported interaction queue region");
    }
};
struct InteractionQueue::Operation::Execution {
    enum class Phase { Capture, Dispatch, AfterText, Finish };
    InteractionQueue::Execution &owner;
    Phase phase = Phase::Capture;
    QueuedInteraction captured;
    std::optional<InteractionQueueService> pending;
    bool done{};
    explicit Execution(InteractionQueue::Execution &o) : owner(o) {}
    void step() {
        auto &state = owner.state;
        switch (phase) {
        case Phase::Capture:
            captured = state.records.at(state.current);
            state.current_type = captured.type;
            state.current = std::uint16_t((unsigned(state.current) + 1) & 3);
            owner.intangibility &= 0xfffe;
            pending = InteractionQueueService{InteractionQueueServiceKind::ClearPartySpriteBlink, {}};
            phase = Phase::Dispatch;
            return;
        case Phase::Dispatch:
            switch (captured.type) {
            case 0: case 8: case 9: case 10:
                pending = InteractionQueueService{InteractionQueueServiceKind::Text, captured.key};
                phase = Phase::AfterText;
                return;
            case 2:
                pending = InteractionQueueService{InteractionQueueServiceKind::Door, captured.key};
                phase = Phase::Finish;
                return;
            default:
                phase = Phase::Finish;
                return;
            }
        case Phase::AfterText:
            // JP's original compares only the saved low word. US compares
            // the complete captured input DWORD. Service-return values or a
            // newly overwritten queue slot must not replace that input key.
            if (captured.type == 10 &&
                std::equal(captured.key.begin(), captured.key.begin() + (owner.version == GameVersion::JP ? 2 : 4),
                           owner.dad_message.begin())) {
                owner.phone.timer = 1687;
                owner.phone.queued = 0;
            }
            phase = Phase::Finish;
            return;
        case Phase::Finish:
            // Nested script callbacks may have enqueued or changed indices.
            // Source completion compares these live words, not a saved count.
            state.pending = state.current == state.next ? 0 : 1;
            state.current_type = 0xffff;
            owner.active = false;
            done = true;
            return;
        }
    }
};
InteractionQueue::InteractionQueue(GameVersion v, InteractionQueueState &s, std::uint16_t &i, DadPhoneState &p)
    : InteractionQueue(v, s, i, p, dad_message_reference(v)) {}
InteractionQueue::InteractionQueue(GameVersion v, InteractionQueueState &s, std::uint16_t &i,
                                   DadPhoneState &p, dialogue::ReferenceKey message)
    : execution_(std::make_unique<Execution>(v, s, i, p, message)) {}
InteractionQueue::~InteractionQueue() = default;
bool InteractionQueue::shares_world(GameVersion version, const std::uint16_t &intangibility) const noexcept {
    return execution_->version == version && &execution_->intangibility == &intangibility;
}
bool InteractionQueue::failed() const noexcept { return execution_->poisoned; }
bool InteractionQueue::busy() const noexcept { return execution_->active; }
void InteractionQueue::reset_after_restore() {
    auto &e = *execution_;
    require(!e.active && !e.poisoned, "Queue restore requires an idle healthy owner");
    e.state.next = e.state.current = 0;
    e.state.current_type = 0xffff;
}
void InteractionQueue::initialize_world() {
    auto &e = *execution_;
    require(!e.active && !e.poisoned, "World initialization requires an idle healthy queue");
    e.state.pending = 0;
    e.phone.timer = 1687;
}
bool InteractionQueue::enqueue(std::uint16_t type, dialogue::ReferenceKey key) {
    auto &e = *execution_;
    require(!e.poisoned, "Abandoned interaction queue operation invalidated its owner");
    if (type == e.state.current_type) return false;
    e.state.records.at(e.state.next) = {type, key};
    e.state.next = std::uint16_t((unsigned(e.state.next) + 1) & 3);
    e.state.pending = 1;
    return true;
}
std::unique_ptr<InteractionQueue::Operation> InteractionQueue::begin() {
    auto &e = *execution_;
    require(!e.active && !e.poisoned, "Interaction queue already active or abandoned");
    auto operation = std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(e)));
    e.active = true;
    return operation;
}
InteractionQueue::Operation::Operation(std::unique_ptr<Execution> e) : execution_(std::move(e)) {}
InteractionQueue::Operation::~Operation() {
    // A pending text/door operation can already have observable effects.
    // Cancellation cannot restore source state, so further execution rejects.
    if (!execution_->done) execution_->owner.poisoned = true;
}
InteractionQueueProgress InteractionQueue::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.done) return InteractionQueueProgress::Finished;
    require(!e.owner.poisoned, "Abandoned interaction queue operation invalidated its owner");
    if (e.pending) return InteractionQueueProgress::Suspended;
    while (budget--) {
        e.step();
        if (e.pending) return InteractionQueueProgress::Suspended;
        if (e.done) return InteractionQueueProgress::Finished;
    }
    return InteractionQueueProgress::BudgetExhausted;
}
const std::optional<InteractionQueueService> &InteractionQueue::Operation::service() const {
    return execution_->pending;
}
void InteractionQueue::Operation::respond() {
    auto &e = *execution_;
    require(!e.owner.poisoned && e.pending.has_value(), "Interaction queue has no pending service");
    e.pending.reset();
}
bool InteractionQueue::Operation::complete() const { return execution_->done; }
} // namespace eb::native::npcs
