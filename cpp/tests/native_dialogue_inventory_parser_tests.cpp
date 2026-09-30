#include "eb/native/dialogue/runtime.hpp"
#include <array>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native::dialogue;
using eb::GameVersion;
unsigned checks{};
void check(bool ok, const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F operation, const char* message) {
    bool caught = false;
    try { operation(); } catch (const std::exception&) { caught = true; }
    check(caught, message);
}
std::shared_ptr<const Program> program(GameVersion version, std::vector<std::uint8_t> bytes,
                                     std::vector<ContentBlock> extras = {},
                                     std::vector<Location> dictionary = {}) {
    extras.insert(extras.begin(), {0, 0, std::move(bytes)});
    return std::make_shared<Program>(version, std::move(extras), std::vector<Location>{{0, 0}},
                                    std::vector<ReferenceBinding>{}, std::move(dictionary));
}
void pending(Runtime& runtime) {
    const auto event = runtime.request();
    const auto snapshot = runtime.snapshot();
    check(bool(event), "Inventory parser did not retain its request");
    for (unsigned budget : {0u, 1u, 4096u}) {
        check(runtime.advance(budget) == Progress::Suspended && runtime.request() == event &&
                  runtime.snapshot().frames == snapshot.frames &&
                  runtime.snapshot().consumed_bytes == snapshot.consumed_bytes,
              "Unacknowledged inventory request consumed another byte");
    }
}
std::vector<Request> finish(Runtime& runtime, unsigned budget) {
    std::vector<Request> result;
    for (unsigned n = 0; n < 1024; ++n) {
        const auto status = runtime.advance(budget);
        if (status == Progress::Finished) return result;
        if (status != Progress::Suspended) continue;
        pending(runtime);
        check(runtime.request()->kind != RequestKind::UnsupportedCommand,
              "Inventory script stopped at an unported handler");
        result.push_back(*runtime.request());
        runtime.respond();
    }
    throw std::runtime_error("Inventory parser did not complete");
}
void operands(GameVersion version) {
    for (unsigned byte = 0; byte < 256; ++byte) for (bool varied_window : {false, true}) {
        std::vector<Request> baseline;
        const auto window = std::uint8_t(varied_window ? byte : 1);
        const auto character = std::uint8_t(varied_window ? 0 : byte);
        for (unsigned budget : {1u, 2u, 4096u}) {
            State state;
            state.dummy.active = {0x89abcdef, 0xffff0123, 0x7654};
            const auto initial = state.dummy;
            Runtime runtime(program(version, {0x1a, 5, window, character, 0x41, 0x42, 2}), state);
            runtime.start(EntryId{0});
            const auto slot = runtime.snapshot().frames.front().stream_slot;
            const auto events = finish(runtime, budget);
            check(events.size() == 3 && events[0].kind == RequestKind::Inventory &&
                      events[0].command == 0x1a && events[0].selector == 5 &&
                      events[0].source == Location{0, 0} && events[0].inventory &&
                      *events[0].inventory == InventoryRequest{WindowId{window}, character, slot},
                  "Inventory parser normalized raw window/character bytes or resolved zero early");
            check(!events[0].menu_append && !events[0].window_selection && !events[0].text_position &&
                      !events[0].lookahead,
                  "Inventory request inherited a different command payload");
            check(events[1].kind == RequestKind::Glyph && events[1].glyph == 0x41 &&
                      events[2].glyph == 0x42 && runtime.returned_cursor() == Location{0, 7},
                  "Inventory consumed the wrong operand extent or treated a literal as a command");
            check(state.dummy == initial && state.windows.empty(),
                  "Inventory parser performed host side effects or rewrote a result register");
            if (baseline.empty()) baseline = events;
            else check(events == baseline, "Work budget changed inventory request contents");
        }
    }
}
void exact_boundary_and_slot(GameVersion version) {
    for (unsigned previous = 0; previous < 10; ++previous) {
        State state;
        state.stream_slot = std::uint16_t(previous);
        Runtime runtime(program(version, {0x1a, 5, 0x17, 0, 2}), state);
        runtime.start(EntryId{0});
        const auto slot = runtime.snapshot().frames.front().stream_slot;
        check(slot == (previous == 9 ? 0 : previous + 1), "Fixture did not enter the expected source stream slot");
        check(runtime.advance(0) == Progress::BudgetExhausted &&
                  runtime.snapshot().frames.front().cursor == Location{0, 0},
              "Zero budget fetched inventory bytes");
        check(runtime.advance(3) == Progress::BudgetExhausted && !runtime.request() &&
                  runtime.snapshot().frames.front().cursor == Location{0, 3},
              "Inventory request was published before character operand arrived");
        state.dummy.active.argument = 0x1234ffff;
        check(runtime.advance(1) == Progress::Suspended && runtime.request()->inventory &&
                  runtime.request()->inventory->character == 0 &&
                  runtime.request()->inventory->stream_slot == slot,
              "Parser captured argument fallback or saved the wrong stream attribute owner");
        pending(runtime);
        runtime.respond({0x8765});
        check(finish(runtime, 1).empty() && state.dummy.active.working == 0 &&
                  state.dummy.active.argument == 0x1234ffff,
              "Inventory response installed a selection result or changed argument memory");
    }
}
void wrapping_and_dictionary(GameVersion version) {
    for (unsigned budget : {1u, 4096u}) {
        State state;
        auto image = std::make_shared<Program>(version,
            std::vector<ContentBlock>{{7, 0xfffd, {0x1a, 5, 0x16}}, {7, 0, {0x17, 0x41, 2}}},
            std::vector<Location>{{7, 0xfffd}});
        Runtime runtime(image, state);runtime.start(EntryId{0});
        const auto events = finish(runtime, budget);
        check(events.size() == 2 && events[0].inventory->window == WindowId{0x16} &&
                  events[0].inventory->character == 0x17 && events[0].source == Location{7, 0xfffd} &&
                  runtime.returned_cursor() == Location{7, 3},
              "Inventory operands failed source low-word cursor wrapping");
    }
    if (version != GameVersion::US) return;
    for (unsigned budget : {1u, 4096u}) {
        State state;
        Runtime runtime(program(version, {0x15, 0, 0x41, 2},
            {{1, 0, {0x1a, 5, 0x16, 0x17, 0}}}, {{1, 0}}), state);
        runtime.start(EntryId{0});
        const auto result = finish(runtime, budget);
        check(result.size() == 2 && result[0].inventory->window == WindowId{0x16} &&
                  result[0].inventory->character == 0x17 && result[1].glyph == 0x41 &&
                  runtime.returned_cursor() == Location{0, 4},
              "Dictionary operands recursively expanded prefixes or lost the primary tail");
        State split;
        Runtime split_runtime(program(version, {0x15, 0, 0, 0x41, 2},
            {{1, 0, {0x1a, 5, 0x16, 0}}}, {{1, 0}}), split);
        split_runtime.start(EntryId{0});
        const auto split_result = finish(split_runtime, budget);
        check(split_result.size() == 2 && split_result[0].inventory->character == 0 &&
                  split_result[0].inventory->window == WindowId{0x16} && split_result[1].glyph == 0x41,
              "Dictionary terminator became an operand instead of resuming the primary stream");
    }
}
void malformed(GameVersion version) {
    for (unsigned length : {2u, 3u}) {
        auto bytes = std::vector<std::uint8_t>{0x1a, 5, 0x15, 0x17};bytes.resize(length);
        State state;Runtime runtime(program(version, bytes), state);runtime.start(EntryId{0});
        rejects([&] { finish(runtime, 1); }, "Truncated inventory operands were invented");
    }
    for (unsigned selector : {0u, 1u, 6u, 7u, 0xffu}) {
        State state;Runtime runtime(program(version, {0x1a, std::uint8_t(selector), 0x15, 0x17, 2}), state);
        runtime.start(EntryId{0});
        check(runtime.advance(4096) == Progress::Suspended &&
                  runtime.request()->kind == RequestKind::UnsupportedCommand &&
                  runtime.snapshot().frames.front().cursor == Location{0, 2},
              "Unknown tree1A selector consumed inventory-shaped operands");
        rejects([&] { runtime.respond(); }, "Unsupported tree1A selector was acknowledged as inventory");
    }
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            operands(version);exact_boundary_and_slot(version);wrapping_and_dictionary(version);malformed(version);
        }
        std::cout << "PASS native inventory parser: " << checks << " checks\n";
        return 0;
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
