#include "eb/native/dialogue/runtime.hpp"

#include <array>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using namespace eb::native::dialogue;
using eb::GameVersion;
unsigned checks{};
void check(bool value, const char *message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char *message) {
    bool caught = false;
    try { operation(); } catch (const std::exception &) { caught = true; }
    check(caught, message);
}
std::shared_ptr<const Program> program(GameVersion version, std::vector<std::uint8_t> bytes,
                                     std::vector<ContentBlock> extra = {},
                                     std::vector<Location> dictionary = {}) {
    extra.insert(extra.begin(), {0, 0, std::move(bytes)});
    return std::make_shared<Program>(version, std::move(extra), std::vector<Location>{{0, 0}},
                                    std::vector<ReferenceBinding>{}, std::move(dictionary));
}
void pending(Runtime &runtime) {
    const auto request = runtime.request();
    const auto before = runtime.snapshot();
    check(bool(request), "Missing parser request");
    for (unsigned budget : {0u, 1u, 4096u}) {
        check(runtime.advance(budget) == Progress::Suspended && runtime.request() == request,
              "Pending parser request changed without response");
        const auto after = runtime.snapshot();
        check(before.frames == after.frames && before.consumed_bytes == after.consumed_bytes &&
                  before.completed_stages == after.completed_stages,
              "Pending parser request consumed authored bytes");
    }
}
std::vector<Request> finish(Runtime &runtime, unsigned budget) {
    std::vector<Request> requests;
    for (unsigned i = 0; i < 1000; ++i) {
        const auto progress = runtime.advance(budget);
        if (progress == Progress::Finished) return requests;
        if (progress == Progress::Suspended) {
            pending(runtime);
            check(runtime.request()->kind != RequestKind::UnsupportedCommand,
                  "Supported comparison/animation stopped as unsupported");
            requests.push_back(*runtime.request());
            runtime.respond();
        }
    }
    throw std::runtime_error("Parser fixture did not terminate");
}
std::vector<std::uint8_t> comparison(std::uint32_t literal, unsigned selector) {
    return {0x18, 7, std::uint8_t(literal), std::uint8_t(literal >> 8),
            std::uint8_t(literal >> 16), std::uint8_t(literal >> 24),
            std::uint8_t(selector), 0x41, 2};
}
void compare_words(GameVersion version) {
    constexpr std::array<std::uint32_t, 11> values{
        0, 1, 0xff, 0xffff, 0x10000, 0x10001, 0x17161502,
        0x7fffffff, 0x80000000, 0xffff0000, 0xffffffff};
    for (unsigned selector : {0u, 1u, 2u, 0xffu})
        for (auto literal : values) for (auto value : values) for (unsigned budget : {1u, 4096u}) {
            State state;
            state.dummy.active = {0xdecafbad, 0x89abcdef, 0x7654};
            auto &registers = state.dummy.active;
            if (!selector) registers.working = value;
            else if (selector == 1) registers.argument = value;
            else registers.secondary = std::uint16_t(value);
            const auto before = registers;
            const std::uint32_t selected = selector > 1 ? std::uint16_t(value) : value;
            const unsigned expected = selected < literal ? 0 : selected == literal ? 1 : 2;
            Runtime runtime(program(version, comparison(literal, selector)), state);
            unsigned writes = 0;
            runtime.observe([&](const Event &event) {
                if (event.kind != EventKind::RegisterChanged) return;
                check(event.reg == RegisterKind::Working && event.value == expected,
                      "Comparison emitted the wrong semantic register write");
                ++writes;
            });
            runtime.start(EntryId{0});
            const auto requests = finish(runtime, budget);
            check(requests.size() == 1 && requests[0].kind == RequestKind::Glyph && requests[0].glyph == 0x41,
                  "Comparison emitted a host request or swallowed its following glyph");
            check(registers.working == expected && registers.argument == before.argument &&
                      registers.secondary == before.secondary && writes == 1,
                  "Unsigned comparison result, zero extension or untouched registers differ");
            check(runtime.returned_cursor() == Location{0, 9}, "Comparison consumed the wrong operand extent");
        }
    // Every selector except zero and one chooses the complete secondary word.
    for (unsigned selector = 2; selector < 256; ++selector) {
        State state;
        state.dummy.active = {0xffffffff, 0, 0xfffe};
        Runtime runtime(program(version, comparison(0xfffe, selector)), state);
        runtime.start(EntryId{0}); finish(runtime, 1);
        check(state.dummy.active.working == 1, "Noncanonical selector did not select secondary16");
    }
}
void comparison_banks(GameVersion version) {
    for (unsigned bank = 0; bank < 4; ++bank) {
        State state;
        state.dummy.active = {0x11223344, 0x10000, 0x5566};
        state.windows[{3}].active = {0x22334455, 0x10000, 0x6677};
        state.retired_window_banks[5].active = {0x33445566, 0x10000, 0x7788};
        if (bank == 0) state.focus = WindowId{3};
        else if (bank > 1) {
            state.window_host_managed = true;
            state.window_slots[0] = WindowId{3};
            state.unfocused_register_slot = bank == 2 ? 5 : 0xffff;
        }
        auto &chosen = state.window().active;
        auto *address = &chosen;
        const auto dummy = state.dummy.active, live = state.windows.at({3}).active,
                   retired = state.retired_window_banks[5].active;
        Runtime runtime(program(version, comparison(0xffff, 1)), state);
        runtime.start(EntryId{0});
        check(runtime.advance(6) == Progress::BudgetExhausted && chosen.working != 2,
              "Comparison changed working memory before its final selector");
        finish(runtime, 1);
        check(chosen.working == 2 && chosen.argument == 0x10000, "Comparison wrote the wrong current bank");
        if (address != &state.dummy.active) check(state.dummy.active == dummy, "Comparison overwrote dummy bank");
        if (address != &state.windows.at({3}).active) check(state.windows.at({3}).active == live, "Comparison overwrote live bank");
        if (address != &state.retired_window_banks[5].active) check(state.retired_window_banks[5].active == retired, "Comparison overwrote retired bank");
    }
}
void animation_operands(GameVersion version) {
    for (unsigned selector = 0; selector < 256; ++selector) {
        std::vector<Request> baseline;
        for (unsigned budget : {1u, 4096u}) {
            State state;
            state.dummy.active = {0x12345678, 0x87654321, 0x9876};
            const auto before = state.dummy;
            Runtime runtime(program(version, {0x1c, 8, std::uint8_t(selector), 0x41, 2}), state);
            runtime.start(EntryId{0});
            check(runtime.advance(0) == Progress::BudgetExhausted &&
                      runtime.snapshot().frames.front().cursor == Location{0, 0},
                  "Zero parser budget read an animation command");
            const auto requests = finish(runtime, budget);
            check(requests.size() == 2 && requests[0].kind == RequestKind::TextAnimation &&
                      requests[0].count == selector && requests[0].command == 0x1c &&
                      requests[0].selector == 8 && requests[0].source == Location{0, 0},
                  "Animation operand was expanded, resolved from a register or dispatched as control");
            check(requests[1].kind == RequestKind::Glyph && requests[1].glyph == 0x41 &&
                      runtime.returned_cursor() == Location{0, 5} && state.dummy == before,
                  "Animation parsing changed state or consumed the wrong byte count");
            if (baseline.empty()) baseline = requests;
            else check(requests == baseline, "Parser budget changed animation request semantics");
        }
    }
}
void wrapping_and_dictionaries(GameVersion version) {
    auto image = std::make_shared<Program>(version,
        std::vector<ContentBlock>{{7, 0xfffc, {0x18, 7, 2, 0x15}},
                                 {7, 0, {0x16, 0x17, 1, 0x1c, 8, 0x17, 0x41, 2}}},
        std::vector<Location>{{7, 0xfffc}});
    State state; state.dummy.active.argument = 0x17161502;
    Runtime runtime(image, state); runtime.start(EntryId{0});
    const auto requests = finish(runtime, 1);
    check(state.dummy.active.working == 1 && requests.size() == 2 &&
              requests[0].kind == RequestKind::TextAnimation && requests[0].count == 0x17 &&
              requests[0].source == Location{7, 3} && runtime.returned_cursor() == Location{7, 8},
          "Low-word wrap carried banks or interpreted comparison/animation operands as prefixes");
    if (version != GameVersion::US) return;
    for (unsigned budget : {1u, 4096u}) {
        State local; local.dummy.active.argument = 0x17161502;
        Runtime dictionary(program(version, {0x15, 0, 0x16, 0x17, 1, 0x1c, 8, 0x15, 0x41, 2},
            {{1, 0, {0x18, 7, 2, 0x15, 0}}}, {{1, 0}}), local);
        dictionary.start(EntryId{0}); const auto events = finish(dictionary, budget);
        check(local.dummy.active.working == 1 && events.size() == 2 &&
                  events[0].kind == RequestKind::TextAnimation && events[0].count == 0x15 &&
                  events[1].glyph == 0x41 && dictionary.returned_cursor() == Location{0, 10},
              "Comparison did not continue operands after dictionary terminator");
        State other;
        Runtime animation(program(version, {0x15, 0, 0x41, 2},
            {{1, 0, {0x1c, 8, 0x17, 0}}}, {{1, 0}}), other);
        animation.start(EntryId{0});const auto tail = finish(animation, budget);
        check(tail.size() == 2 && tail[0].kind == RequestKind::TextAnimation && tail[0].count == 0x17 &&
                  tail[0].source == Location{0, 0} && tail[1].glyph == 0x41,
              "Animation dictionary operand recursively expanded or lost primary tail");
    }
}
void malformed(GameVersion version) {
    for (unsigned operands = 0; operands < 5; ++operands) {
        auto bytes = comparison(0x17161502, 1);bytes.resize(2 + operands);
        State state; Runtime runtime(program(version, bytes), state);runtime.start(EntryId{0});
        rejects([&] { finish(runtime, 1); }, "Truncated comparison silently completed");
    }
    State state; Runtime animation(program(version, {0x1c, 8}), state);animation.start(EntryId{0});
    rejects([&] { finish(animation, 1); }, "Missing animation selector was invented");
    Runtime unknown(program(version, {0x18, 0xff, 0x15, 2}), state);unknown.start(EntryId{0});
    check(unknown.advance(4096) == Progress::Suspended &&
              unknown.request()->kind == RequestKind::UnsupportedCommand &&
              unknown.snapshot().frames.front().cursor == Location{0, 2},
          "Unported selector consumed an unknown operand");
    rejects([&] { unknown.respond(); }, "Unported selector was acknowledged as a no-op");
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            compare_words(version); comparison_banks(version); animation_operands(version);
            wrapping_and_dictionaries(version); malformed(version);
        }
        std::cout << "PASS native text-animation/comparison parser: " << checks << " checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n'; return 1;
    }
}
