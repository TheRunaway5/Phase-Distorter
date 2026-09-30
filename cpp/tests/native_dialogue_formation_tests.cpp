#include "eb/native/dialogue/runtime.hpp"
#include "eb/native/party/queries.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
namespace party = eb::native::party;
unsigned checks{};
void check(bool condition, const char *message) {
    ++checks;
    if (!condition) throw std::runtime_error(message);
}
template<class Function> void rejects(Function function, const char *message) {
    bool caught = false;
    try { function(); } catch (const std::exception &) { caught = true; }
    check(caught, message);
}
auto program(eb::GameVersion version, std::vector<std::uint8_t> bytes) {
    return std::make_shared<Program>(version, std::vector<ContentBlock>{{1,0,std::move(bytes)}},
                                     std::vector<Location>{{1,0}});
}
void advance(Runtime &runtime, unsigned budget = 1) {
    while (runtime.advance(budget) == Progress::BudgetExhausted) {}
}
void stable(Runtime &runtime) {
    const auto request = runtime.request();
    const auto before = runtime.snapshot();
    for (unsigned budget : {0u,1u,4096u}) {
        check(runtime.advance(budget) == Progress::Suspended && runtime.request() == request,
              "Pending formation service changed or completed without its owner");
        const auto after = runtime.snapshot();
        check(after.frames == before.frames && after.consumed_bytes == before.consumed_bytes,
              "Pending formation service consumed authored bytes");
    }
}
void request_is(const Runtime &runtime, RequestKind kind) {
    check(runtime.request() && runtime.request()->kind == kind &&
          runtime.request()->command == 0x1c && runtime.request()->selector == 0x11 &&
          runtime.request()->source == Location{1,0}, "Formation lost its original command provenance");
}
void sequence() {
    for (unsigned count : {0u,1u,2u,4u,6u,65535u}) for (unsigned budget : {1u,4096u}) {
        State state;
        state.dummy.active = {0xface0123,0xcafe4567,0x89ab};
        const auto original = state.dummy.active;
        Runtime runtime(program(eb::GameVersion::JP,{0x1c,0x11,0x41,2}),state);
        unsigned register_writes = 0;
        runtime.observe([&](const Event &event) { register_writes += event.kind == EventKind::RegisterChanged; });
        runtime.start(EntryId{0});
        advance(runtime,budget); request_is(runtime,RequestKind::RefreshParty); stable(runtime);
        check(runtime.snapshot().consumed_bytes == 2, "JP formation consumed a nonexistent operand");
        runtime.respond(); request_is(runtime,RequestKind::PartyQuery);
        check(runtime.request()->party_query->kind == PartyQueryKind::FirstConscious,
              "Formation chose a name before completing UPDATE_PARTY");
        stable(runtime);
        runtime.respond({4}); request_is(runtime,RequestKind::Substitution);
        check(runtime.request()->count == 4, "Formation substitution lost the selected member");
        // A callback has moved focus and replaced live registers while the
        // name prints. A helper's return is never a register publication.
        state.windows.emplace(WindowId{9},WindowState{});
        state.focus = WindowId{9};
        state.window().active = {0x11223344,0x55667788,0xabcd};
        const auto callback_registers = state.window().active;
        stable(runtime);
        runtime.respond(); request_is(runtime,RequestKind::PartyQuery);
        check(runtime.request()->party_query->kind == PartyQueryKind::ConsciousCount,
              "Formation reused a pre-name conscious count");
        runtime.respond({std::uint16_t(count)});
        if (count > 1) {
            request_is(runtime,RequestKind::Glyph);
            check(runtime.request()->glyph == 0x66, "JP party suffix first glyph differs");
            stable(runtime);
            runtime.respond({0}); // This response is not another count query.
            request_is(runtime,RequestKind::Glyph);
            check(runtime.request()->glyph == 0x76, "JP party suffix was recounted between its two glyphs");
            runtime.respond();
        }
        advance(runtime,budget);
        check(runtime.request()->kind == RequestKind::Glyph && runtime.request()->glyph == 0x41 &&
              runtime.request()->source == Location{1,2}, "Formation consumed the following literal");
        runtime.respond();
        check(runtime.advance(4096) == Progress::Finished && runtime.returned_cursor() == Location{1,4},
              "Formation changed the original stream extent");
        check(state.dummy.active == original && state.window().active == callback_registers && !register_writes,
              "An internal formation query overwrote live or old registers");
    }
}
void nested() {
    State state;
    const auto content = program(eb::GameVersion::JP,{0x1c,0x11,2});
    Runtime parent(content,state); parent.start(EntryId{0}); advance(parent);
    parent.respond(); parent.respond({1}); request_is(parent,RequestKind::Substitution);
    const auto pending = parent.request();
    const auto snapshot = parent.snapshot();
    Runtime child(content,state); child.start(EntryId{0}); advance(child);
    child.respond(); child.respond({2}); child.respond(); child.respond({1});
    check(child.advance() == Progress::Finished, "Nested formation child did not return");
    check(parent.request() == pending && parent.snapshot().frames == snapshot.frames,
          "Nested formation replaced its parent's suspended name continuation");
    parent.respond(); parent.respond({2}); parent.respond(); parent.respond();
    check(parent.advance() == Progress::Finished && state.stream_slot == 0,
          "Nested formation lost the original stream-slot return order");
}
void regions_and_normal_queries() {
    for (unsigned operand : {0u,1u,2u,0x11u,0xffu}) {
        State state;
        state.dummy.active = {0xffffffff,0xabcd0066,0x1234};
        const auto before = state.dummy.active;
        Runtime runtime(program(eb::GameVersion::US,{0x1c,0x11,std::uint8_t(operand),2}),state);
        runtime.start(EntryId{0}); advance(runtime);
        request_is(runtime,RequestKind::WidthHint);
        check(runtime.snapshot().consumed_bytes == 3 && state.dummy.active == before &&
                  runtime.request()->count == (operand ? operand : 0x66),
              "US1C11 acquired JP meaning or lost its resolved width operand");
        stable(runtime);
        runtime.respond();
        check(runtime.advance() == Progress::Finished && state.dummy.active == before,
              "US1C11 acknowledgment changed dialogue registers or stream extent");
    }
    State state;
    Runtime runtime(program(eb::GameVersion::JP,{0x19,0x20,2}),state);
    runtime.start(EntryId{0}); advance(runtime); runtime.respond({6});
    check(state.dummy.active.working == 6 && runtime.advance() == Progress::Finished,
          "Normal authored party queries lost working-register publication");
}
void queries(eb::GameVersion version) {
    party::State state(version);
    party::Queries query(state);
    state.party_count = 255; // These helpers do not search membership.
    state.party_order.fill(0xff);
    state.controlled_order = {5,4,3,2,1,0};
    state.display_order = {6,2,5,1,4,3};
    for (unsigned count = 0; count <= 6; ++count) for (unsigned mask = 0; mask < (1u << count); ++mask) {
        state.controlled_count = std::uint8_t(count);
        for (unsigned i=0;i<6;++i) state.character(i+1).afflictions[0] = 1;
        unsigned first = 0, number = 0;
        for (unsigned i=0;i<count;++i) {
            const bool conscious = (mask >> i) & 1;
            state.character(state.display_order[i]).afflictions[0] = std::uint8_t(conscious ? (i&1 ? 255 : 3) : (i&1 ? 2 : 1));
            if (conscious) { if (!first) first=state.display_order[i]; ++number; }
        }
        check(query.first_conscious() == first && query.conscious_count() == number,
              "Conscious queries used membership/control mappings or combined status flags");
    }
    state.controlled_count = 1;
    for (unsigned status=0;status<256;++status) {
        state.character(6).afflictions[0] = std::uint8_t(status);
        const bool conscious = status != 1 && status != 2;
        check(query.first_conscious() == (conscious?6:0) && query.conscious_count() == unsigned(conscious),
              "Conscious queries normalized a raw affliction byte");
    }
    state.controlled_count = 255;
    state.character(6).afflictions[0] = 0;
    check(query.first_conscious() == 6, "First-conscious rejected an owned early return due to a later invalid count");
    rejects([&] { (void)query.conscious_count(); }, "Conscious count walked beyond owned display storage");
    state.controlled_count = 0;
    state.display_order.fill(0);
    check(query.first_conscious() == 0 && query.conscious_count() == 0, "Empty scan touched an invalid record");
    state.controlled_count = 1;
    for (unsigned member : {0u,7u,255u}) {
        state.display_order[0] = std::uint8_t(member);
        rejects([&] { (void)query.first_conscious(); }, "First-conscious invented an unowned record alias");
        rejects([&] { (void)query.conscious_count(); }, "Conscious count invented an unowned record alias");
    }
}
}
int main() {
    try {
        sequence(); nested(); regions_and_normal_queries();
        queries(eb::GameVersion::US); queries(eb::GameVersion::JP);
        std::cout << "PASS native dialogue formation: " << checks << " checks\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
