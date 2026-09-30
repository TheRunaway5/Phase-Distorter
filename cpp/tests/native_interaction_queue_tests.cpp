#include "eb/native/npcs/interaction_queue.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using eb::GameVersion;
using eb::native::dialogue::ReferenceKey;
using namespace eb::native::npcs;
unsigned checks{};
void check(bool value, const char *message) { ++checks; if (!value) throw std::runtime_error(message); }
template<class F> void rejects(F action, const char *message) {
    bool caught = false;
    try { action(); } catch (const std::exception &) { caught = true; }
    check(caught, message);
}
ReferenceKey key(unsigned value) {
    return {std::uint8_t(value), std::uint8_t(value >> 8), std::uint8_t(value >> 16), std::uint8_t(value >> 24)};
}
struct Fixture {
    InteractionQueueState state;
    std::uint16_t intangible = 0xabcd;
    DadPhoneState phone{0x1234, 0x5678};
    InteractionQueue queue;
    explicit Fixture(GameVersion version) : queue(version, state, intangible, phone) {}
};
void drain(InteractionQueue::Operation &op, unsigned budget = 1) {
    for (unsigned i = 0; i < 32; ++i) {
        const auto result = op.advance(budget);
        if (result == InteractionQueueProgress::Finished) return;
        if (result == InteractionQueueProgress::Suspended) op.respond();
    }
    throw std::runtime_error("Pure queue operation failed to complete");
}
void enqueue_semantics(GameVersion version) {
    Fixture f(version);
    f.state.pending = 0xaaaa;
    const auto empty = f.state;
    check(!f.queue.enqueue(0xffff, key(1)) && f.state == empty, "Idle current-type suppression changed state");
    for (unsigned n = 0; n < 12; ++n) {
        const auto old = f.state;
        check(f.queue.enqueue(8, key(0x10000000 + n)), "Equal queued types were incorrectly de-duplicated");
        check(f.state.records[n & 3] == QueuedInteraction{8, key(0x10000000 + n)} &&
                  f.state.current == 0 && f.state.next == ((n + 1) & 3) && f.state.pending == 1,
              "Queue overwrite order, index wrap or pending flag differs");
        for (unsigned slot = 0; slot < 4; ++slot)
            if (slot != (n & 3)) check(f.state.records[slot] == old.records[slot], "Enqueue changed an unrelated record");
    }
    check(f.state.current == f.state.next && f.state.pending == 1, "A full wrap was normalized to an empty queue");
    f.state.current_type = 0x1234; f.state.next = 0xffff;
    const auto before = f.state;
    check(!f.queue.enqueue(0x1234, key(3)) && f.state == before,
          "Suppressed type accessed an invalid index or changed its raw state");
    rejects([&] { f.queue.enqueue(0x1235, key(4)); }, "Unowned record index was silently masked before the write");
    check(f.state == before, "Failed enqueue partially changed the queue");
}
void consume_and_services(GameVersion version) {
    for (unsigned current = 0; current < 4; ++current)
        for (unsigned next = 0; next < 4; ++next)
            for (unsigned type : {0u, 1u, 2u, 3u, 8u, 9u, 10u, 0x100u, 0x800au, 0xffffu}) {
                Fixture f(version);
                f.state.current = std::uint16_t(current); f.state.next = std::uint16_t(next);
                f.state.pending = 0; f.state.current_type = 0x7788;
                f.state.records[current] = {std::uint16_t(type), key(0xef7e1234)};
                const auto before = f.state;
                auto op = f.queue.begin();
                check(op->advance(0) == InteractionQueueProgress::BudgetExhausted && f.state == before &&
                          f.intangible == 0xabcd, "Zero budget started source work");
                rejects([&] { f.queue.begin(); }, "A second consumer acquired the active queue");
                check(op->advance(1) == InteractionQueueProgress::Suspended &&
                          op->service() == InteractionQueueService{InteractionQueueServiceKind::ClearPartySpriteBlink, {}},
                      "Consumer omitted or misidentified the original sprite-blink service");
                check(f.state.current == ((current + 1) & 3) && f.state.current_type == type &&
                          f.state.pending == 0 && f.state.records == before.records && f.intangible == 0xabcc,
                      "Capture did not advance exactly one entry before its service");
                const auto paused = f.state;
                check(op->advance(999) == InteractionQueueProgress::Suspended && f.state == paused,
                      "Pending service was implicitly acknowledged");
                op->respond();
                const bool text = type == 0 || type == 8 || type == 9 || type == 10;
                const auto progress = op->advance();
                if (text || type == 2) {
                    check(progress == InteractionQueueProgress::Suspended &&
                              op->service() == InteractionQueueService{text ? InteractionQueueServiceKind::Text :
                                                                                  InteractionQueueServiceKind::Door,
                                                                      key(0xef7e1234)},
                          "Source type dispatched the wrong service or changed a key byte");
                    op->respond(); drain(*op);
                } else check(progress == InteractionQueueProgress::Finished, "Unknown full-word type did not remain a no-op");
                check(op->complete() && !op->service() && f.state.pending == unsigned(((current + 1) & 3) != next) &&
                          f.state.current_type == 0xffff && f.phone == DadPhoneState{0x1234, 0x5678},
                      "Consumer completion cleared extra state or compared saved indices");
                check(op->advance(0) == InteractionQueueProgress::Finished, "Completed operation restarted");
                rejects([&] { op->respond(); }, "Completed operation accepted a nonexistent service response");
            }
}
void callback_mutations(GameVersion version) {
    Fixture f(version);
    const auto original_key = dad_message_reference(version);
    f.state.records[0] = {10, original_key}; f.state.next = 1;
    auto op = f.queue.begin(); op->advance(); op->respond();
    check(op->advance() == InteractionQueueProgress::Suspended && op->service()->kind == InteractionQueueServiceKind::Text,
          "Phone message did not request text");
    const auto paused = *op->service();
    check(!f.queue.enqueue(10, key(0x11223344)), "Reentrant phone type was not suppressed");
    for (unsigned i = 0; i < 5; ++i) check(f.queue.enqueue(8, key(0x80000000 + i)), "Callback enqueue was blocked");
    check(f.state.records[0].key != original_key && *op->service() == paused,
          "A wrapping callback changed captured pending text");
    f.phone = {0xaaaa, 0xbbbb}; f.intangible = 0xeeee;
    check(op->advance() == InteractionQueueProgress::Suspended && f.phone == DadPhoneState{0xaaaa, 0xbbbb},
          "Phone reset occurred before text completed");
    op->respond(); drain(*op);
    check(f.phone == DadPhoneState{1687, 0} && f.intangible == 0xeeee && f.state.pending == 1,
          "Phone reset used overwritten slot data or restored live callback state");
    auto again = f.queue.begin(); again->advance(); again->respond(); again->advance();
    check(again->service()->kind == InteractionQueueServiceKind::Text, "Queued callback work disappeared");
    f.state.current = 0xbeef; f.state.next = 0xbeef;
    again->respond(); drain(*again);
    check(f.state.pending == 0 && f.state.current == 0xbeef && f.state.next == 0xbeef,
          "Completion normalized raw live indices instead of comparing their words");
}
void phone_identity(GameVersion version) {
    const auto canonical = dad_message_reference(version);
    check(canonical == (version == GameVersion::US ? key(0x00c7d33e) : key(0x00c9319e)),
          "Canonical Dad message does not match its regional data label");
    for (unsigned changed = 0; changed < 5; ++changed) {
        Fixture f(version);
        auto reference = canonical;
        if (changed < 4) reference[changed] ^= 0x80;
        f.state.records[0] = {10, reference};
        auto op = f.queue.begin(); drain(*op, changed & 1 ? 4096 : 1);
        const bool expected = changed == 4 || (version == GameVersion::JP && changed >= 2);
        check(f.phone == (expected ? DadPhoneState{1687, 0} : DadPhoneState{0x1234, 0x5678}),
              "Phone identity failed regional full32 versus low16 comparison");
    }
    for (unsigned type : {0u, 8u, 9u, 2u, 0x10au}) {
        Fixture f(version); f.state.records[0] = {std::uint16_t(type), canonical};
        auto op = f.queue.begin(); drain(*op);
        check(f.phone == DadPhoneState{0x1234, 0x5678}, "Non-phone type reset the Dad phone globals");
    }
    for (unsigned value : {0u, 1u, 2u, 0xffffu}) {
        Fixture f(version); f.intangible = std::uint16_t(value);
        auto op = f.queue.begin(); op->advance();
        check(f.intangible == (value & 0xfffe), "Consumer normalized intangibility beyond source bit0");
        drain(*op);
    }
}
void lifetime(GameVersion version) {
    Fixture f(version);
    std::uint16_t other = f.intangible;
    check(f.queue.shares_world(version, f.intangible) && !f.queue.shares_world(version, other) &&
              !f.queue.shares_world(version == GameVersion::US ? GameVersion::JP : GameVersion::US, f.intangible),
          "Queue binding compared values instead of region and authoritative word identity");
    { auto op = f.queue.begin(); op->advance(); }
    rejects([&] { f.queue.begin(); }, "Abandoned continuation silently resumed a new consumer");
    rejects([&] { f.queue.enqueue(8, {}); }, "Poisoned queue accepted more execution");
    check(f.state.current == 1 && f.state.current_type == 0 && f.intangible == 0xabcc,
          "Abandonment rewound already observable state");
    Fixture bad(version); bad.state.current = 0x8000;
    auto op = bad.queue.begin(); const auto before = bad.state;
    rejects([&] { op->advance(); }, "Consumer silently masked an unowned source record read");
    check(bad.state == before && bad.intangible == 0xabcd, "Invalid read partially changed live state");
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            enqueue_semantics(version); consume_and_services(version); callback_mutations(version);
            phone_identity(version); lifetime(version);
        }
        rejects([] { (void)dad_message_reference(static_cast<GameVersion>(255)); }, "Unknown phone region accepted");
        std::cout << "PASS native interaction queue: " << checks << " checks\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
