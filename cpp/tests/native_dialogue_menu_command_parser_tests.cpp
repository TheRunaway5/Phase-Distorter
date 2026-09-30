#include "eb/native/dialogue/runtime.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace {
using namespace eb::native::dialogue;
using eb::GameVersion;
unsigned checks{};

void check(bool valid, const char *message) {
    ++checks;
    if (!valid) throw std::runtime_error(message);
}
template <class F> void rejects(F function, const char *message) {
    bool caught = false;
    try { function(); } catch (const std::exception &) { caught = true; }
    check(caught, message);
}
std::shared_ptr<const Program> program(GameVersion version, std::vector<std::uint8_t> bytes,
                                       std::vector<ContentBlock> extra = {},
                                       std::vector<Location> dictionary = {}) {
    extra.insert(extra.begin(), ContentBlock{0, 0, std::move(bytes)});
    return std::make_shared<Program>(version, std::move(extra), std::vector<Location>{{0, 0}},
                                     std::vector<ReferenceBinding>{}, std::move(dictionary));
}
void stable_pending(Runtime &runtime) {
    const auto request = runtime.request();
    const auto before = runtime.snapshot();
    check(request.has_value(), "Suspended parser has no request");
    for (unsigned budget : {0u, 1u, 4096u}) {
        check(runtime.advance(budget) == Progress::Suspended && runtime.request() == request,
              "Pending menu request changed without acknowledgement");
        const auto after = runtime.snapshot();
        check(after.frames == before.frames && after.returned_cursor == before.returned_cursor &&
                  after.consumed_bytes == before.consumed_bytes &&
                  after.completed_stages == before.completed_stages,
              "Pending menu request advanced parser state");
    }
}
std::vector<Request> finish(Runtime &runtime, unsigned budget) {
    std::vector<Request> requests;
    for (unsigned steps = 0; steps < 4096; ++steps) {
        const auto progress = runtime.advance(budget);
        if (progress == Progress::Finished) return requests;
        if (progress == Progress::Suspended) {
            stable_pending(runtime);
            requests.push_back(*runtime.request());
            check(requests.back().kind != RequestKind::UnsupportedCommand,
                  "Supported authored menu command remained unsupported");
            runtime.respond();
        }
    }
    throw std::runtime_error("Synthetic menu command parser did not terminate");
}
const MenuAppendRequest &append(const Request &request, std::span<const std::uint8_t> expected,
                                std::optional<ReferenceKey> selected = {}) {
    check(request.kind == RequestKind::AppendMenuOption && request.menu_append.has_value() &&
              !request.menu_layout && request.command == 0x19 && request.selector == 2,
          "Append command has the wrong typed payload or provenance");
    const auto &payload = *request.menu_append;
    check(payload.length == expected.size(), "Append extent excludes or duplicates delimiter NUL");
    check(std::equal(expected.begin(), expected.end(), payload.label.begin()),
          "Append payload lost literal or embedded-zero bytes");
    check(payload.selected_text == selected, "Selected-text reference was changed or resolved by parser");
    return payload;
}
void literal_first_and_body(GameVersion version) {
    for (unsigned first : {0u, 1u, 2u, 0x15u, 0x16u, 0x17u, 0x80u, 0xffu}) {
        const std::vector<std::uint8_t> bytes{0x19, 2, std::uint8_t(first), 0, 0x15, 0x16,
                                             0x17, 0x41, 2, 0x55, 2};
        std::vector<Request> baseline;
        for (unsigned budget : {1u, 2u, 4096u}) {
            State state;
            const auto registers = state.dummy;
            Runtime runtime(program(version, bytes), state);
            runtime.start(EntryId{0});
            const auto requests = finish(runtime, budget);
            check(requests.size() == 2 && requests[1].kind == RequestKind::Glyph && requests[1].glyph == 0x55,
                  "Literal first byte or body command byte escaped argument collection");
            const std::array<std::uint8_t, 7> label{std::uint8_t(first), 0, 0x15, 0x16, 0x17, 0x41, 0};
            append(requests[0], label);
            check(requests[0].source == Location{0, 0} && runtime.returned_cursor() == Location{0, 11},
                  "Append consumed bytes beyond its delimiter");
            check(state.dummy == registers && state.windows.empty(), "Parsing append mutated menu or registers");
            if (baseline.empty()) baseline = requests;
            else check(requests == baseline, "Work budget changed authored-menu requests");
        }
    }
}
void raw_references(GameVersion version) {
    for (const ReferenceKey key : {ReferenceKey{}, ReferenceKey{0x15, 0x16, 0x17, 0xff},
                                   ReferenceKey{0, 2, 1, 0x80}}) {
        std::vector<std::uint8_t> bytes{0x19, 2, 0x41, 1};
        for (auto byte : key) bytes.push_back(byte);
        bytes.insert(bytes.end(), {0x56, 2});
        const auto content = program(version, bytes);
        if (key != ReferenceKey{})
            rejects([&] { (void)content->resolve(key); }, "Unmapped reference fixture unexpectedly resolves");
        for (unsigned budget : {1u, 4096u}) {
            State state;
            Runtime runtime(content, state);
            unsigned calls{};
            runtime.observe([&](const Event &event) {
                if (event.kind == EventKind::Call || event.kind == EventKind::Jump) ++calls;
            });
            runtime.start(EntryId{0});
            const auto requests = finish(runtime, budget);
            check(requests.size() == 2 && requests[1].kind == RequestKind::Glyph && requests[1].glyph == 0x56,
                  "Reference gathering consumed fewer or more than four bytes");
            const std::array<std::uint8_t, 2> label{0x41, 0};
            append(requests.front(), label, key);
            check(calls == 0 && runtime.returned_cursor() == Location{0, 10},
                  "Stored selected-text reference was executed during construction");
        }
        State state;
        Runtime partial(content, state);
        partial.start(EntryId{0});
        // Opcode, selector, first byte, delimiter, then the first three key bytes.
        check(partial.advance(7) == Progress::BudgetExhausted && !partial.request(),
              "Reference request emitted before its fourth byte");
        check(partial.advance(1) == Progress::Suspended && partial.request()->menu_append->selected_text == key,
              "Fourth key byte was not the final selected-text byte");
    }
}
void reset_and_retained_scratch(GameVersion version) {
    State state;
    state.dummy.active = {0x12345678, 0xaabbccdd, 0x9012};
    const auto original = state.dummy;
    Runtime runtime(program(version, {0x19, 2, 0x41, 0x42, 0x43, 2,
                                       0x19, 4, 0x19, 2, 0x44, 2, 0x57, 2}), state);
    runtime.start(EntryId{0});
    const auto requests = finish(runtime, 1);
    check(requests.size() == 4, "Reset consumed a nonexistent operand");
    const std::array<std::uint8_t, 4> first{0x41, 0x42, 0x43, 0};
    const std::array<std::uint8_t, 2> second{0x44, 0};
    append(requests[0], first);
    check(requests[1].kind == RequestKind::ResetMenu && requests[1].source == Location{0, 6} &&
              requests[1].command == 0x19 && requests[1].selector == 4 &&
              !requests[1].menu_append && !requests[1].menu_layout,
          "19 04 did not emit the existing immediate reset service");
    const auto &last = append(requests[2], second);
    check(last.label[2] == 0x43 && last.label[3] == 0,
          "Shorter command erased the source-shared label scratch suffix");
    check(requests[3].kind == RequestKind::Glyph && requests[3].glyph == 0x57 &&
              state.dummy == original && runtime.returned_cursor() == Location{0, 14},
          "Menu reset parser performed host mutation or lost following glyph");
}
void layout_operands(GameVersion version) {
    for (unsigned selector : {7u, 12u})
        for (std::uint32_t argument : {0u, 1u, 0x12345678u, 0xffffu, 0x80010000u})
            for (unsigned byte : {0u, 1u, 0x15u, 0xffu}) {
                State state;
                state.focus = WindowId{3};
                state.windows[*state.focus].active = {0x87654321, argument, 0x1357};
                state.dummy.active.argument = 0x7777;
                const auto original = state.windows;
                Runtime runtime(program(version, {0x1c, std::uint8_t(selector), std::uint8_t(byte), 0x58, 2}), state);
                runtime.start(EntryId{0});
                const auto requests = finish(runtime, 1);
                check(requests.size() == 2 && requests[0].kind == RequestKind::LayoutMenu &&
                          requests[0].menu_layout && !requests[0].menu_append,
                      "1C menu layout was treated as printing or selection");
                const auto layout = *requests[0].menu_layout;
                check(layout.columns == (byte ? byte : std::uint16_t(argument)) &&
                          layout.centered == (selector == 7),
                      "Menu layout columns, centering, or argument lowword changed");
                check(requests[0].command == 0x1c && requests[0].selector == selector &&
                          requests[1].kind == RequestKind::Glyph && requests[1].glyph == 0x58 &&
                          state.windows == original && runtime.returned_cursor() == Location{0, 5},
                      "Layout changed registers or consumed an extra operand");
            }
    State state;
    state.dummy.active.argument = 3;
    Runtime late(program(version, {0x1c, 7, 0, 2}), state);
    late.start(EntryId{0});
    check(late.advance(2) == Progress::BudgetExhausted, "Layout operand resolved at selector stage");
    state.dummy.active.argument = 0xabcd1234;
    check(late.advance(1) == Progress::Suspended && late.request()->menu_layout->columns == 0x1234,
          "Layout did not sample argument when its zero operand arrived");
    state.dummy.active.argument = 9;
    stable_pending(late);
    check(late.request()->menu_layout->columns == 0x1234, "Pending layout reread live argument");
}
void page_wrap(GameVersion version) {
    const auto content = std::make_shared<Program>(version,
        std::vector<ContentBlock>{{7, 0xfffc, {0x19, 2, 0x41, 1}},
                                  {7, 0, {0x11, 0x22, 0x33, 0x44, 0x59, 2}}},
        std::vector<Location>{{7, 0xfffc}});
    for (unsigned budget : {1u, 4096u}) {
        State state;
        Runtime runtime(content, state);
        runtime.start(EntryId{0});
        const auto requests = finish(runtime, budget);
        check(requests.size() == 2, "Reference lowword wrap escaped imported content");
        const std::array<std::uint8_t, 2> label{0x41, 0};
        append(requests[0], label, ReferenceKey{0x11, 0x22, 0x33, 0x44});
        check(requests[0].source == Location{7, 0xfffc} && runtime.returned_cursor() == Location{7, 6},
              "Reference cursor carried into another content page");
    }
    const auto body = std::make_shared<Program>(version,
        std::vector<ContentBlock>{{7, 0xfffc, {0x19, 2, 0x41, 0x42}},
                                  {7, 0, {0x43, 2, 2}}}, std::vector<Location>{{7, 0xfffc}});
    State state;
    Runtime runtime(body, state);
    runtime.start(EntryId{0});
    const auto requests = finish(runtime, 1);
    const std::array<std::uint8_t, 4> label{0x41, 0x42, 0x43, 0};
    check(requests.size() == 1, "Wrapped raw label emitted extra service");
    append(requests[0], label);
    check(runtime.returned_cursor() == Location{7, 3}, "Raw label increment did not wrap its lowword");
}
void dictionary_continuations() {
    // Dictionary's first byte enters the command. Its tail includes raw prefix
    // bytes and ends between key bytes: the zero itself is not an argument.
    auto content = program(GameVersion::US, {0x15, 0, 0x33, 0x44, 0x5a, 2},
        {{1, 0, {0x19, 2, 0x41, 0x15, 0x16, 0x17, 1, 0x11, 0x22, 0}}}, {{1, 0}});
    State state;
    Runtime runtime(content, state);
    runtime.start(EntryId{0});
    const auto requests = finish(runtime, 1);
    const std::array<std::uint8_t, 5> label{0x41, 0x15, 0x16, 0x17, 0};
    check(requests.size() == 2, "Dictionary menu command emitted raw prefixes as controls");
    append(requests[0], label, ReferenceKey{0x11, 0x22, 0x33, 0x44});
    check(requests[1].kind == RequestKind::Glyph && requests[1].glyph == 0x5a &&
              runtime.returned_cursor() == Location{0, 6},
          "Dictionary terminator consumed a primary byte or wrong pointer byte");

    // An embedded dictionary terminator hands an in-progress label back to
    // primary data. Primary zero is a literal label byte, unlike dictionary0.
    content = program(GameVersion::US, {0x15, 0, 0, 0x42, 2, 0x5b, 2},
                      {{1, 0, {0x19, 2, 0x41, 0}}}, {{1, 0}});
    State continuation_state;
    Runtime continuation(content, continuation_state);
    continuation.start(EntryId{0});
    const auto continued = finish(continuation, 4096);
    const std::array<std::uint8_t, 4> continued_label{0x41, 0, 0x42, 0};
    check(continued.size() == 2, "Dictionary-to-primary label continuation did not finish");
    append(continued[0], continued_label);

    State wrap_state;
    wrap_state.word_wrap = true;
    Runtime wrapped(program(GameVersion::US, {0x19, 2, 0x15, 0x16, 0x17, 2, 2}), wrap_state);
    wrapped.start(EntryId{0});
    check(wrapped.advance(1) == Progress::Suspended && wrapped.request()->kind == RequestKind::WordWrap,
          "Word-wrap setup fixture did not enter source lookahead");
    wrapped.respond({1});
    check(wrapped.advance(2) == Progress::BudgetExhausted, "Menu selector unexpectedly yielded lookahead");
    wrap_state.upcoming_word_length = 0;
    check(wrapped.advance(4096) == Progress::Suspended && wrapped.request()->kind == RequestKind::AppendMenuOption,
          "Word lookahead ran while raw menu arguments were active");
    const std::array<std::uint8_t, 4> raw_label{0x15, 0x16, 0x17, 0};
    append(*wrapped.request(), raw_label);
}
void bounds_and_unsupported(GameVersion version) {
    for (bool embedded_zero : {false, true}) {
        std::vector<std::uint8_t> bytes{0x19, 2};
        std::vector<std::uint8_t> label(29, 0x41);
        if (embedded_zero) label[0] = 0;
        bytes.insert(bytes.end(), label.begin(), label.end());
        bytes.insert(bytes.end(), {2, 2});
        State state;
        Runtime runtime(program(version, bytes), state);
        runtime.start(EntryId{0});
        const auto requests = finish(runtime, 1);
        label.push_back(0);
        check(requests.size() == 1, "Thirty-byte parser extent was confused with option label capacity");
        append(requests.front(), label);
    }
    std::vector<std::uint8_t> overflow{0x19, 2};
    overflow.insert(overflow.end(), 30, 0x41);
    overflow.insert(overflow.end(), {2, 2});
    State state;
    Runtime runtime(program(version, overflow), state);
    runtime.start(EntryId{0});
    check(runtime.advance(32) == Progress::BudgetExhausted && !runtime.request(),
          "Last in-bounds source label write was rejected early");
    rejects([&] { runtime.advance(1); }, "Delimiter overflow wrote beyond thirty-byte label scratch");
    check(!runtime.request(), "Malformed label emitted an append request");

    for (const std::vector<std::uint8_t> &truncated : {
             std::vector<std::uint8_t>{0x19, 2}, {0x19, 2, 0x41}, {0x19, 2, 0x41, 1, 1, 2, 3}}) {
        State missing;
        Runtime invalid(program(version, truncated), missing);
        invalid.start(EntryId{0});
        rejects([&] { invalid.advance(4096); }, "Truncated menu command acquired an invented terminator");
        check(!invalid.request(), "Truncated raw label/reference emitted a request");
    }
    for (const auto pair : {std::pair{0x19, 5}, std::pair{0x1c, 0xff}}) {
        State unknown;
        Runtime invalid(program(version, {std::uint8_t(pair.first), std::uint8_t(pair.second), 0x41, 2}), unknown);
        invalid.start(EntryId{0});
        check(invalid.advance(4096) == Progress::Suspended &&
                  invalid.request()->kind == RequestKind::UnsupportedCommand,
              "Unknown menu-adjacent selector became a silent no-op");
        check(invalid.snapshot().frames.front().cursor == Location{0, 2},
              "Unsupported selector consumed unknown inline operands");
        stable_pending(invalid);
        rejects([&] { invalid.respond(); }, "Unsupported menu command could be acknowledged");
    }
}
} // namespace

int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            literal_first_and_body(version);
            raw_references(version);
            reset_and_retained_scratch(version);
            layout_operands(version);
            page_wrap(version);
            bounds_and_unsupported(version);
        }
        dictionary_continuations();
        std::cout << "PASS " << checks << " authored menu parser/request checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
