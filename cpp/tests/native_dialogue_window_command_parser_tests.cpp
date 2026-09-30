#include "eb/native/dialogue/runtime.hpp"

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
std::string context;

void check(bool value, const char *message) {
    ++checks;
    if (!value)
        throw std::runtime_error(context + ": " + message);
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
void pending(Runtime &runtime) {
    const auto request = runtime.request();
    const auto before = runtime.snapshot();
    check(request.has_value(), "Expected suspended request");
    for (unsigned budget : {0u, 1u, 4096u}) {
        check(runtime.advance(budget) == Progress::Suspended && runtime.request() == request,
              "Pending request changed without acknowledgement");
        const auto after = runtime.snapshot();
        check(after.frames == before.frames && after.returned_cursor == before.returned_cursor &&
                  after.consumed_bytes == before.consumed_bytes &&
                  after.completed_stages == before.completed_stages,
              "Pending request advanced the authored stream");
    }
}
std::vector<Request> finish(Runtime &runtime, unsigned budget) {
    std::vector<Request> result;
    for (unsigned step = 0; step < 4096; ++step) {
        const auto progress = runtime.advance(budget);
        if (progress == Progress::Finished) return result;
        if (progress == Progress::Suspended) {
            pending(runtime);
            result.push_back(*runtime.request());
            check(result.back().kind != RequestKind::UnsupportedCommand,
                  "A supported window command remained unsupported");
            runtime.respond();
        }
    }
    throw std::runtime_error(context + ": Synthetic stream did not terminate");
}
void provenance(const Request &request, RequestKind kind, std::uint8_t command,
                std::uint8_t selector, Location source = {0, 0}) {
    check(request.kind == kind && request.command == command && request.selector == selector &&
              request.source == source,
          "Wrong request kind, command provenance or source location");
    check(!request.menu_append && !request.menu_layout && !request.lookahead,
          "Window request retained an unrelated payload");
}
void position_bytes(GameVersion version) {
    for (std::uint8_t x : {0, 1, 2, 7, 8, 0x15, 0x16, 0x17, 0x80, 0xff})
        for (std::uint8_t y : {0, 1, 2, 0x15, 0x17, 0xff}) {
            std::vector<Request> baseline;
            for (unsigned budget : {1u, 2u, 4096u}) {
                State state;
                state.dummy.active = {0x12345678, 0xffeeddcc, 0x4567};
                const auto original = state.dummy;
                Runtime runtime(program(version, {0x18, 5, x, y, 0x51, 2}), state);
                runtime.start(EntryId{0});
                const auto requests = finish(runtime, budget);
                check(requests.size() == 2, "Raw position byte became a control or compression prefix");
                provenance(requests.front(), RequestKind::PositionText, 0x18, 5);
                check(requests.front().text_position && !requests.front().window_selection &&
                          requests.front().text_position->x == x && requests.front().text_position->y == y,
                      "Position request changed raw x/y or interpreted zero as a register fallback");
                check(requests[1].kind == RequestKind::Glyph && requests[1].glyph == 0x51 &&
                          runtime.returned_cursor() == Location{0, 6},
                      "Position consumed more or fewer than two bytes");
                check(state.dummy == original && state.windows.empty(),
                      "Position parser changed host state or registers");
                if (baseline.empty()) baseline = requests;
                else check(requests == baseline, "Work budget changed position request payloads");
            }
        }
    State state;
    Runtime runtime(program(version, {0x18, 5, 0xff, 0x17, 2}), state);
    runtime.start(EntryId{0});
    check(runtime.advance(0) == Progress::BudgetExhausted &&
              runtime.snapshot().frames.front().cursor == Location{0, 0},
          "Zero work budget fetched a window command byte");
    check(runtime.advance(3) == Progress::BudgetExhausted && !runtime.request() &&
              runtime.snapshot().frames.front().cursor == Location{0, 3},
          "Position emitted before y arrived");
    check(runtime.advance(1) == Progress::Suspended && runtime.request()->text_position->y == 0x17,
          "Position did not emit immediately after its second operand");
    pending(runtime);
}
void single_byte_operands(GameVersion version) {
    // Cover the complete byte domain; 00/02 and 15..17 are literal operands.
    for (unsigned byte = 0; byte < 256; ++byte) {
        for (unsigned selector : {8u, 9u}) {
            State state;
            state.dummy.active = {0xabcdef01, 0x87654321, 0x7654};
            Runtime runtime(program(version, {0x18, std::uint8_t(selector), std::uint8_t(byte),
                                               0x41, 0x42, 0x43, 2}), state);
            runtime.start(EntryId{0});
            check(runtime.advance(3) == Progress::Suspended, "Selection consumed a nonexistent DWORD operand");
            const auto request = *runtime.request();
            provenance(request, RequestKind::SelectInWindow, 0x18, std::uint8_t(selector));
            check(request.window_selection && !request.text_position &&
                      request.window_selection->window == WindowId{byte} &&
                      request.window_selection->allow_cancel == (selector == 9),
                  "Selection target or cancellation policy changed");
            check(state.dummy.active.working == 0xabcdef01 &&
                      runtime.snapshot().frames.front().cursor == Location{0, 3},
                  "Selection result was written before the host returned");
            pending(runtime);
            runtime.respond({0x8001});
            const auto tail = finish(runtime, byte & 1 ? 1 : 4096);
            check(tail.size() == 3 && tail[0].glyph == 0x41 && tail[1].glyph == 0x42 &&
                      tail[2].glyph == 0x43 && state.dummy.active.working == 0x8001 &&
                      state.dummy.active.argument == 0x87654321 &&
                      state.dummy.active.secondary == 0x7654,
                  "Scoped selection consumed following glyphs or reset the menu");
        }
        State state;
        state.dummy.active = {0x88776655, 0x44332211, 0x9876};
        const auto original = state.dummy;
        Runtime padding(program(version, {0x1c, 9, std::uint8_t(byte), 0x44, 2}), state);
        padding.start(EntryId{0});
        check(padding.advance(2) == Progress::BudgetExhausted && !padding.request(),
              "Padding wrongly followed the operand-free source macro");
        check(padding.advance(1) == Progress::Suspended, "Padding did not consume exactly one byte");
        const auto request = *padding.request();
        provenance(request, RequestKind::SetNumberPadding, 0x1c, 9);
        check(request.count == byte && !request.text_position && !request.window_selection,
              "Padding byte was clamped, sign-extended or resolved from a register");
        pending(padding);
        padding.respond();
        const auto tail = finish(padding, byte & 1 ? 1 : 4096);
        check(tail.size() == 1 && tail[0].kind == RequestKind::Glyph && tail[0].glyph == 0x44 &&
                  padding.returned_cursor() == Location{0, 5} && state.dummy == original,
              "Padding swallowed its following glyph or changed a working register");
    }
}
void immediate_boundaries(GameVersion version) {
    for (unsigned budget : {1u, 4096u}) {
        State state;
        state.dummy.active = {0x89abcdef, 0x10203040, 0x789a};
        const auto original = state.dummy;
        Runtime runtime(program(version, {0x1f, 0x30, 0x1f, 0x31, 0x18, 0x0a,
                                           0x1c, 9, 0x80, 0x18, 5, 0, 0, 0x45, 2}), state);
        runtime.start(EntryId{0});
        const auto requests = finish(runtime, budget);
        check(requests.size() == 6, "Immediate command consumed its next command as an operand");
        provenance(requests[0], RequestKind::SetFont, 0x1f, 0x30);
        provenance(requests[1], RequestKind::SetFont, 0x1f, 0x31, {0, 2});
        provenance(requests[2], RequestKind::ShowWallet, 0x18, 0x0a, {0, 4});
        check(requests[0].count == 0 && requests[1].count == 1 &&
                  !requests[0].text_position && !requests[1].window_selection,
              "Font selector did not yield normal0/Saturn1");
        check(requests[3].kind == RequestKind::SetNumberPadding && requests[3].count == 0x80 &&
                  requests[4].kind == RequestKind::PositionText &&
                  requests[4].text_position->x == 0 && requests[4].text_position->y == 0 &&
                  requests[5].kind == RequestKind::Glyph && requests[5].glyph == 0x45,
              "Mixed window-service stream lost a typed boundary");
        check(state.dummy == original && runtime.returned_cursor() == Location{0, 15},
              "Host-only immediate requests changed registers or cursor extent");
    }
    for (const auto pair : {std::pair{0x1f, 0x30}, std::pair{0x1f, 0x31}, std::pair{0x18, 0x0a}}) {
        State state;
        Runtime runtime(program(version, {std::uint8_t(pair.first), std::uint8_t(pair.second)}), state);
        runtime.start(EntryId{0});
        check(runtime.advance(2) == Progress::Suspended, "Immediate request fetched outside its two-byte command");
        pending(runtime);
        runtime.respond();
        rejects([&] { runtime.advance(1); }, "Missing following text became an implicit return");
    }
}
void restored_result_bank(GameVersion version) {
    for (unsigned destination = 0; destination < 5; ++destination)
        for (std::uint16_t result : {0u, 1u, 0x8000u, 0xffffu}) {
            State state;
            state.window_host_managed = true;
            state.focus = WindowId{1};
            state.window_slots[0] = WindowId{1};
            state.window_slots[2] = WindowId{2};
            state.windows[WindowId{1}].active = {0x11111111, 0x12121212, 0x1313};
            state.windows[WindowId{2}].active = {0x22222222, 0x23232323, 0x2424};
            state.retired_window_banks[1].active = {0x33333333, 0x34343434, 0x3535};
            state.dummy.active = {0x44444444, 0x45454545, 0x4646};
            Runtime runtime(program(version, {0x18, 9, 10, 0x46, 2}), state);
            std::vector<Event> events;
            runtime.observe([&](const Event &event) { events.push_back(event); });
            runtime.start(EntryId{0});
            check(runtime.advance(3) == Progress::Suspended && events.empty(),
                  "Selection result event happened before restore/response");
            // Model the host's completed restore. No selection/window host is
            // executed here; this independently tests the VM response seam.
            WindowState *bank{};
            if (destination == 0) {
                state.focus = WindowId{2}; bank = &state.windows.at(*state.focus);
            } else {
                state.focus.reset();
                state.unfocused_register_slot = destination == 1 ? 0 : destination == 2 ? 1 : 0xffff;
                if (destination == 4) state.windows.clear();
                bank = &state.window();
            }
            const auto expected_argument = bank->active.argument;
            const auto expected_secondary = bank->active.secondary;
            const auto prior_windows = state.windows;
            const auto prior_retired = state.retired_window_banks;
            const auto prior_dummy = state.dummy;
            pending(runtime);
            runtime.respond({result, 0x1234, 0x5678});
            check(bank->active.working == std::uint32_t(result) &&
                      bank->active.argument == expected_argument && bank->active.secondary == expected_secondary,
                  "Scoped result was signed or sent to the original/target window");
            check(events.size() == 1 && events[0].kind == EventKind::RegisterChanged &&
                      events[0].reg == RegisterKind::Working && events[0].window == state.focus &&
                      events[0].source == Location{0, 0} && events[0].value == result,
                  "Response lost the current register bank or original command provenance");
            for (const auto &[id, original] : prior_windows)
                if (&state.windows.at(id) != bank)
                    check(state.windows.at(id) == original, "Result changed a different live window");
            for (unsigned i = 0; i < prior_retired.size(); ++i)
                if (&state.retired_window_banks[i] != bank)
                    check(state.retired_window_banks[i] == prior_retired[i], "Result changed another retained bank");
            if (&state.dummy != bank) check(state.dummy == prior_dummy, "Result changed the dummy bank");
            check(!runtime.request() && runtime.advance(1) == Progress::Suspended &&
                      runtime.request()->kind == RequestKind::Glyph && runtime.request()->glyph == 0x46,
                  "Scoped selection introduced the CC11 menu-reset request");
        }
    for (const auto &bytes : {std::vector<std::uint8_t>{0x11, 2}, {0x1a, 4, 2}}) {
        State state;
        Runtime runtime(program(version, bytes), state);
        runtime.start(EntryId{0});
        check(runtime.advance(4096) == Progress::Suspended && runtime.request()->kind == RequestKind::Selection,
              "Existing selection command changed request kind");
        runtime.respond({3});
        check(runtime.request() && runtime.request()->kind == RequestKind::ResetMenu &&
                  state.dummy.active.working == 3,
              "Scoped selection change removed the existing CC11/1A04 reset");
    }
}
void wrapped_stream(GameVersion version) {
    const auto content = std::make_shared<Program>(version,
        std::vector<ContentBlock>{{7, 0xfffd, {0x18, 5, 0x17}},
                                  {7, 0, {0, 0x1c, 9, 0xff, 0x18, 8, 0, 0x1f, 0x31,
                                           0x18, 0x0a, 0x47, 2}}}, std::vector<Location>{{7, 0xfffd}});
    for (unsigned budget : {1u, 4096u}) {
        State state;
        Runtime runtime(content, state);
        runtime.start(EntryId{0});
        const auto requests = finish(runtime, budget);
        check(requests.size() == 6 && requests[0].kind == RequestKind::PositionText &&
                  requests[0].text_position->x == 0x17 && requests[0].text_position->y == 0,
              "Position argument did not wrap inside its content page");
        check(requests[0].source == Location{7, 0xfffd} && requests[1].count == 0xff &&
                  requests[2].window_selection->window == WindowId{0} &&
                  requests[3].kind == RequestKind::SetFont && requests[3].count == 1 &&
                  requests[4].kind == RequestKind::ShowWallet && requests[5].glyph == 0x47 &&
                  runtime.returned_cursor() == Location{7, 13},
              "Wrapped controls consumed the wrong operand or carried to another page");
    }
}
void dictionary_streams() {
    State state;
    Runtime runtime(program(GameVersion::US, {0x15, 0, 0, 0x48, 2},
        {{1, 0, {0x18, 5, 0x17, 0}}}, {{1, 0}}), state);
    runtime.start(EntryId{0});
    const auto requests = finish(runtime, 1);
    check(requests.size() == 2 && requests[0].kind == RequestKind::PositionText &&
              requests[0].text_position->x == 0x17 && requests[0].text_position->y == 0 &&
              requests[1].glyph == 0x48 && runtime.returned_cursor() == Location{0, 5},
          "Dictionary terminator was delivered as y or raw17 expanded recursively");

    State continued;
    Runtime next(program(GameVersion::US, {0x15, 0, 0, 0x49, 2},
        {{1, 0, {0x1c, 9, 0x80, 0x18, 8, 0}}}, {{1, 0}}), continued);
    next.start(EntryId{0});
    const auto sequence = finish(next, 4096);
    check(sequence.size() == 3 && sequence[0].kind == RequestKind::SetNumberPadding &&
              sequence[0].count == 0x80 && sequence[1].kind == RequestKind::SelectInWindow &&
              sequence[1].window_selection->window == WindowId{0} && sequence[2].glyph == 0x49,
          "Dictionary-to-primary continuation lost a single-byte operand");

    State wrapping;
    wrapping.word_wrap = true;
    Runtime raw(program(GameVersion::US, {0x18, 5, 0x15, 0x16, 2}), wrapping);
    raw.start(EntryId{0});
    check(raw.advance(1) == Progress::Suspended && raw.request()->kind == RequestKind::WordWrap,
          "Word-wrap fixture failed to suspend before the command");
    raw.respond({1});
    check(raw.advance(2) == Progress::BudgetExhausted, "Position selector introduced a host effect");
    wrapping.upcoming_word_length = 0;
    check(raw.advance(2) == Progress::Suspended && raw.request()->kind == RequestKind::PositionText &&
              raw.request()->text_position->x == 0x15 && raw.request()->text_position->y == 0x16,
          "Word lookahead or dictionary dispatch ran during position argument gathering");
}
void malformed_and_unknown(GameVersion version) {
    for (const std::vector<std::uint8_t> &bytes : {
             std::vector<std::uint8_t>{0x18, 5}, {0x18, 5, 1}, {0x18, 8}, {0x18, 9}, {0x1c, 9}}) {
        State state;
        Runtime runtime(program(version, bytes), state);
        runtime.start(EntryId{0});
        rejects([&] { runtime.advance(4096); }, "Missing window operand acquired an invented value");
        check(!runtime.request(), "Truncated window command emitted a complete request");
    }
    for (const auto pair : {std::pair{0x18, 0xff}, std::pair{0x18, 0x0d}, std::pair{0x1c, 0xff},
                            std::pair{0x1f, 0x32}, std::pair{0x1a, 0}}) {
        State state;
        Runtime runtime(program(version, {std::uint8_t(pair.first), std::uint8_t(pair.second), 0x4a, 2}), state);
        runtime.start(EntryId{0});
        check(runtime.advance(4096) == Progress::Suspended &&
                  runtime.request()->kind == RequestKind::UnsupportedCommand &&
                  runtime.snapshot().frames.front().cursor == Location{0, 2},
              "Adjacent unsupported selector consumed operands or became a no-op");
        pending(runtime);
        rejects([&] { runtime.respond(); }, "Unknown selector could be silently acknowledged");
    }
}
} // namespace

int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            context = version == GameVersion::US ? "US" : "JP";
            position_bytes(version);
            single_byte_operands(version);
            immediate_boundaries(version);
            restored_result_bank(version);
            wrapped_stream(version);
            malformed_and_unknown(version);
        }
        context = "US dictionary";
        dictionary_streams();
        std::cout << "PASS " << checks << " authored window parser/request checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
