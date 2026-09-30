// Synthetic content exercises the real parser, shared prepared owner and
// renderer. Original helper execution belongs to the separate source oracle.
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
using eb::GameVersion;
unsigned checks{};
void check(bool ok, const char *message) {
    ++checks;
    if (!ok) throw std::runtime_error(message);
}
template<class F> void rejects(F call, const char *message) {
    bool rejected{};
    try { call(); } catch (const std::exception &) { rejected = true; }
    check(rejected, message);
}
constexpr std::array<std::uint8_t, 4> capital{0x81, 0x82, 0x83, 0x50};
constexpr std::array<std::uint8_t, 4> lower{0x91, 0x92, 0x93, 0x50};
struct Resources {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const SubstitutionResources> substitutions;
    explicit Resources(GameVersion version) {
        dialogue_test_assets::WindowInput input(version);
        dialogue_test_assets::add_text_fonts(input);
        for (unsigned id = 0; id < input.count; ++id) {
            input.put(input.configs + id * 8, 0);
            input.put(input.configs + id * 8 + 2, 0);
            input.put(input.configs + id * 8 + 4, 22);
            input.put(input.configs + id * 8 + 6, 8);
        }
        fonts = FontResources::import(input.image, version);
        windows = input.import();
        dialogue_substitution_test_assets::Input text(version);
        if (version == GameVersion::US) {
            // Deliberately distinct synthetic capital/lower phrases and raw
            // article bytes exercise imported data, rather than authored text.
            std::copy(capital.begin(), capital.end(), text.image.begin() + 0x20998);
            std::copy(lower.begin(), lower.end(), text.image.begin() + 0x2099c);
            text.image[text.enemies] = 0;
            text.image[text.enemies + text.enemy_stride] = 1;
            text.image[text.enemies + 2 * text.enemy_stride] = 255;
        }
        substitutions = text.load();
    }
};
const Resources &resources(GameVersion version) {
    static const Resources us(GameVersion::US), jp(GameVersion::JP);
    return version == GameVersion::US ? us : jp;
}
struct Fixture {
    State state;
    PreparedMessage prepared;
    TextOutput output;
    WindowHost windows;
    explicit Fixture(GameVersion version, bool bind = true)
        : prepared(version), output(resources(version).fonts, state),
          windows(resources(version).windows, state, output) {
        WindowCommand command;
        command.action = WindowAction::Open;
        command.id = WindowId{0};
        auto operation = windows.begin(command);
        for (unsigned step = 0; step < 64; ++step) {
            if (operation->advance() == OutputProgress::Complete) break;
            operation->respond();
        }
        check(operation->complete(), "Fixture window did not open");
        output.policy().instant = false;
        output.policy().character_padding = 0;
        output.policy().text_speed = 0;
        output.policy().sound_mode = 3;
        windows.metadata({0}).number_padding = 0x80;
        windows.substitutions().configure(resources(version).substitutions);
        if (bind) windows.bind_prepared_message(prepared);
        output.set_cursor({0}, {1, 0});
    }
    void unfocus() {
        state.unfocused_register_slot = *windows.slot_for({0});
        state.focus.reset();
    }
};
std::shared_ptr<const Program> program(GameVersion version, std::vector<std::uint8_t> bytes) {
    return std::make_shared<const Program>(version, std::vector<ContentBlock>{{1, 0, std::move(bytes)}},
                                          std::vector<Location>{{1, 0}});
}
bool same(const Snapshot &a, const Snapshot &b) {
    return a.frames == b.frames && a.returned_cursor == b.returned_cursor &&
           a.consumed_bytes == b.consumed_bytes && a.completed_stages == b.completed_stages;
}
template<class T> Progress next(T &operation, unsigned budget = 1) {
    for (unsigned work = 0; work < 8192; ++work) {
        const auto progress = operation.advance(budget);
        if (progress != Progress::BudgetExhausted) return progress;
    }
    throw std::runtime_error("Prepared fixture exceeded bounded parser/render work");
}
unsigned character(const Fixture &f) {
    if (f.windows.version() == GameVersion::US) return f.output.last_character();
    const auto id = *f.state.focus;
    const auto &window = f.output.window(id);
    check(window.cursor.column != 0, "Japanese fixture glyph has no advanced column");
    const auto cells = f.output.cells(id);
    const auto &cell = cells.cells.at(window.cursor.line * 2 * window.geometry.columns + window.cursor.column - 1);
    check(cell.fixed_character && !cell.lower_half, "Japanese glyph lost fixed provenance");
    return *cell.fixed_character;
}
void stable(Fixture &f, Conversation &conversation) {
    const auto pending = conversation.event();
    const auto snapshot = conversation.snapshot();
    const auto composition = f.output.composition_snapshot();
    const auto frame = f.output.frame({0});
    const auto cursor = f.output.window({0}).cursor;
    for (unsigned budget : {0u, 1u, 4096u})
        check(conversation.advance(budget) == Progress::Suspended && conversation.event() == pending &&
                  same(snapshot, conversation.snapshot()) && f.output.composition_snapshot() == composition &&
                  f.output.window({0}).cursor == cursor && f.output.frame({0})->pixels == frame->pixels,
              "Pending prepared output or frame sampling advanced its continuation");
}
std::vector<unsigned> finish(Fixture &f, Conversation &conversation) {
    std::vector<unsigned> result;
    for (unsigned step = 0; step < 512; ++step) {
        if (next(conversation) == Progress::Finished) {
            check(conversation.finished() && !conversation.event(), "Finished prepared stream retained an event");
            return result;
        }
        check(conversation.event() && std::holds_alternative<TextEffect>(*conversation.event()) &&
                  std::get<TextEffect>(*conversation.event()).kind == TextEffectKind::WindowTick,
              "Bound prepared stream leaked a parser request or invented audio");
        stable(f, conversation);
        result.push_back(character(f));
        conversation.respond();
    }
    throw std::runtime_error("Prepared stream exceeded bounded callbacks");
}
std::vector<unsigned> finish(Fixture &f, TextSubstitutions::Operation &operation) {
    std::vector<unsigned> result;
    for (unsigned step = 0; step < 512; ++step) {
        if (next(operation) == Progress::Finished) {
            check(operation.complete() && !operation.effect(), "Finished formatter retained an event");
            return result;
        }
        check(operation.effect() && operation.effect()->kind == TextEffectKind::WindowTick,
              "Direct formatter emitted an unexpected effect");
        result.push_back(character(f));
        operation.respond();
    }
    throw std::runtime_error("Direct formatter exceeded bounded callbacks");
}
SubstitutionCommand number(std::uint32_t value) {
    SubstitutionCommand result;
    result.action = SubstitutionAction::Number;
    result.value = value;
    return result;
}
std::vector<unsigned> literal(Fixture &f, std::span<const std::uint8_t> bytes, unsigned maximum = 80) {
    SubstitutionCommand command;
    command.action = f.windows.version() == GameVersion::US ? SubstitutionAction::WrappedString : SubstitutionAction::String;
    command.text = [bytes] { return bytes; };
    command.maximum = std::uint16_t(maximum);
    auto operation = f.windows.substitutions().begin(command);
    return finish(f, *operation);
}
void equal_output(const Fixture &actual, const Fixture &expected) {
    check(actual.output.window({0}) == expected.output.window({0}) &&
              actual.output.composition_snapshot() == expected.output.composition_snapshot() &&
              actual.output.indent_pending() == expected.output.indent_pending() &&
              actual.output.last_character() == expected.output.last_character(),
          "Prepared rendering differs from its direct literal/number baseline");
    if (actual.windows.version() == GameVersion::JP)
        check(actual.output.publication_snapshot() == expected.output.publication_snapshot(),
              "Prepared rendering changed Japanese publication history");
    const auto a = actual.output.frame({0}), b = expected.output.frame({0});
    check(a->width == b->width && a->height == b->height && a->pixels == b->pixels && a->priority == b->priority,
          "Prepared rendering changed published artwork or priority");
    const auto ac = actual.output.cells({0}), bc = expected.output.cells({0});
    check(ac.geometry == bc.geometry && ac.cells.size() == bc.cells.size(), "Prepared cell geometry differs");
    for (unsigned i = 0; i < ac.cells.size(); ++i) {
        const auto &x = ac.cells[i], &y = bc.cells[i];
        check(x.style == y.style && x.fixed_character == y.fixed_character && x.lower_half == y.lower_half &&
                  bool(x.image) == bool(y.image) && (!x.image || x.image->pixels == y.image->pixels),
              "Prepared cell provenance or image differs from direct output");
    }
}
void emit(Fixture &f, std::uint8_t code) {
    f.output.begin_glyph(code);
    for (unsigned i = 0; i < 64; ++i) {
        if (f.output.advance() == OutputProgress::Complete) return;
        f.output.respond();
    }
    throw std::runtime_error("Fixture prefix did not complete");
}
std::vector<unsigned> digits(std::uint32_t value, GameVersion version) {
    std::vector<unsigned> result;
    const auto zero = version == GameVersion::US ? 0x60u : 0x30u;
    for (char digit : std::to_string(value)) result.push_back(zero + unsigned(digit - '0'));
    return result;
}
std::uint8_t selector(PreparedName side) { return side == PreparedName::Attacker ? 0x0d : 0x0e; }

void parser_contract(GameVersion version) {
    const std::array<std::uint32_t, 8> values{0, 1, 255, 256, 65535, 65536, 0x80000000, 0xffffffff};
    for (bool focused : {false, true}) for (unsigned budget : {1u, 4096u})
        for (unsigned select : {0x1eu, 0x1fu}) for (auto value : values) {
            State state;
            if (focused) { state.windows[{4}] = {}; state.focus = WindowId{4}; }
            state.window().active = {0x13572468, 0x89abcdef, 0x7654};
            const auto before = state.window().active;
            Runtime runtime(program(version, {0x19, std::uint8_t(select), 0x71, 2}), state);
            unsigned writes{};
            runtime.observe([&](const Event &event) {
                if (event.kind == EventKind::RegisterChanged) {
                    check(event.reg == RegisterKind::Working && event.source == Location{1, 0},
                          "Prepared read emitted an unrelated register write");
                    ++writes;
                }
            });
            runtime.start(EntryId{0});
            const auto initial = runtime.snapshot();
            check(runtime.advance(0) == Progress::BudgetExhausted && same(initial, runtime.snapshot()),
                  "Zero budget consumed prepared read bytes");
            check(next(runtime, budget) == Progress::Suspended && runtime.request()->kind == RequestKind::PreparedValue,
                  "Prepared getter failed to retain its typed external request");
            const auto request = *runtime.request();
            check(request.command == 0x19 && request.selector == select && request.source == Location{1, 0} &&
                      runtime.snapshot().consumed_bytes == 2 && state.window().active == before && writes == 0,
                  "Prepared getter consumed operands or changed registers before its result");
            const auto suspended = runtime.snapshot();
            rejects([&] { runtime.respond({0xbeef}); }, "Prepared getter accepted a truncated untyped result");
            check(runtime.request() == request && same(suspended, runtime.snapshot()) && state.window().active == before,
                  "Rejected prepared result changed the pending request");
            for (unsigned repeat : {0u, 1u, 8192u})
                check(runtime.advance(repeat) == Progress::Suspended && runtime.request() == request &&
                          same(suspended, runtime.snapshot()), "Pending prepared getter consumed later bytes");
            Response response;
            response.prepared_value = value;
            runtime.respond(response);
            check(state.window().active == Registers{select == 0x1f ? std::uint8_t(value) : value,
                                                     before.argument, before.secondary} && writes == 1,
                  "Prepared read lost full32/zero-extension semantics or changed argument/secondary");
            check(next(runtime, budget) == Progress::Suspended && runtime.request()->kind == RequestKind::Glyph &&
                      runtime.request()->glyph == 0x71 && runtime.snapshot().consumed_bytes == 3,
                  "Operandless prepared getter swallowed the following glyph");
            runtime.respond();
            check(next(runtime, budget) == Progress::Finished && runtime.returned_cursor() == Location{1, 4},
                  "Prepared getter did not return after exactly four bytes");
        }
    for (unsigned select : {0x0du, 0x0eu, 0x0fu}) {
        State state;
        state.dummy.active = {0x12345678, 0xabcdef01, 0x4321};
        const auto before = state.dummy.active;
        Runtime runtime(program(version, {0x1c, std::uint8_t(select), 0x71, 2}), state);
        runtime.start(EntryId{0});
        check(next(runtime) == Progress::Suspended && runtime.request()->kind == RequestKind::Substitution &&
                  runtime.request()->command == 0x1c && runtime.request()->selector == select &&
                  runtime.request()->source == Location{1, 0} && runtime.snapshot().consumed_bytes == 2,
              "Prepared output parser changed its selector or operandless extent");
        runtime.respond({0xffff});
        check(state.dummy.active == before && next(runtime) == Progress::Suspended &&
                  runtime.request()->glyph == 0x71, "Prepared output response changed registers or swallowed bytes");
        runtime.respond();
        check(next(runtime) == Progress::Finished && runtime.returned_cursor() == Location{1, 4},
              "Prepared output parser returned at the wrong byte");
    }
}

void unbound_and_binding(GameVersion version) {
    for (bool host : {false, true}) for (unsigned select : {0x0du, 0x0eu, 0x0fu, 0x1eu, 0x1fu}) {
        Fixture f(version, false);
        const auto command = std::uint8_t(select < 0x10 ? 0x1c : 0x19);
        const auto content = program(version, {command, std::uint8_t(select), 2});
        auto conversation = host ? std::make_unique<Conversation>(content, f.windows)
                                 : std::make_unique<Conversation>(content, f.state, f.output);
        conversation->start(EntryId{0});
        check(next(*conversation) == Progress::Suspended && conversation->event() &&
                  std::holds_alternative<Request>(*conversation->event()),
              "Unbound prepared command fabricated a value or started rendering");
        const auto request = std::get<Request>(*conversation->event());
        check(request.kind == (select < 0x10 ? RequestKind::Substitution : RequestKind::PreparedValue) &&
                  request.selector == select && conversation->snapshot().consumed_bytes == 2,
              "Unbound prepared request lost its type or command extent");
        stable(f, *conversation);
        rejects([&] { f.windows.bind_prepared_message(f.prepared); }, "Active output admitted a new shared owner");
        Conversation child(program(version, {2}), f.windows);
        rejects([&] { child.start_nested(EntryId{0}, *conversation); },
                "A typed prepared service request admitted a game callback");
        Response response;
        response.prepared_value = 0xabcdef91;
        conversation->respond(response);
        check(next(*conversation) == Progress::Finished && conversation->snapshot().consumed_bytes == 3,
              "External prepared service did not complete exactly once");
        f.windows.bind_prepared_message(f.prepared);
        f.windows.bind_prepared_message(f.prepared);
        check(f.windows.prepared_message() == &f.prepared, "Window host did not retain the actual stable owner");
    }
    Fixture f(version, false);
    PreparedMessage wrong(version == GameVersion::US ? GameVersion::JP : GameVersion::US);
    rejects([&] { f.windows.bind_prepared_message(wrong); }, "Prepared binding accepted another region");
    check(!f.windows.prepared_message(), "Failed regional binding published an owner");
    f.windows.bind_prepared_message(f.prepared);
    PreparedMessage replacement(version);
    rejects([&] { f.windows.bind_prepared_message(replacement); }, "Prepared binding replaced the shared owner");
    check(f.windows.prepared_message() == &f.prepared, "Rejected rebinding changed identity");
}

void bound_getters(GameVersion version) {
    for (bool focused : {false, true}) for (unsigned select : {0x1eu, 0x1fu})
        for (std::uint32_t value : {0u, 255u, 256u, 65536u, 0x12345678u, 0xffffffffu}) {
            Fixture f(version);
            if (!focused) f.unfocus();
            f.prepared.set_number(value);
            f.prepared.set_item(std::uint8_t(value));
            f.state.window().active = {0x33334444, 0x11223344, 0xabcd};
            unsigned writes{};
            Conversation conversation(program(version, {0x19, std::uint8_t(select), 2}), f.windows);
            conversation.observe([&](const Event &event) {
                if (event.kind == EventKind::RegisterChanged) {
                    check(event.reg == RegisterKind::Working, "Bound prepared read changed an unrelated register");
                    ++writes;
                }
            });
            conversation.start(EntryId{0});
            const auto pixels = f.output.frame({0})->pixels;
            const auto composition = f.output.composition_snapshot();
            check(next(conversation) == Progress::Finished && !conversation.event() &&
                      f.state.window().active == Registers{select == 0x1f ? std::uint8_t(value) : value, 0x11223344, 0xabcd} &&
                      writes == 1 && conversation.snapshot().consumed_bytes == 3 &&
                      f.output.frame({0})->pixels == pixels && f.output.composition_snapshot() == composition,
                  "Bound prepared getter printed, ticked, truncated or changed argument/secondary");
        }
}

void names_and_rendering(GameVersion version) {
    for (auto side : {PreparedName::Attacker, PreparedName::Target})
        for (unsigned column : {0u, 1u, 19u}) for (unsigned length : {0u, 1u, 9u}) {
            Fixture actual(version), expected(version);
            std::vector<std::uint8_t> bytes(length + 1);
            for (unsigned i = 0; i < length; ++i) bytes[i] = std::uint8_t(0x61 + i % 9);
            actual.prepared.copy_name(side, std::span(bytes).first(length));
            actual.output.set_cursor({0}, {std::uint16_t(column), 0});
            expected.output.set_cursor({0}, {std::uint16_t(column), 0});
            const auto registers = actual.state.window().active = {0xdeadbeef, 0x31415926, 0x1234};
            Conversation conversation(program(version, {0x1c, selector(side), 4, 7, 0, 2}), actual.windows);
            conversation.start(EntryId{0});
            check(finish(actual, conversation) == literal(expected, bytes), "Prepared name differs from literal glyphs");
            check(actual.state.flag(7) && actual.state.window().active == registers &&
                      conversation.snapshot().consumed_bytes == 6,
                  "Prepared name continuation omitted its following command or changed registers");
            equal_output(actual, expected);
        }
    for (auto side : {PreparedName::Attacker, PreparedName::Target}) {
        Fixture f(version);
        std::vector<std::uint8_t> full(f.prepared.name(side).size() - 1, 0x61);
        f.prepared.copy_name(side, full);
        Conversation conversation(program(version, {0x1c, selector(side), 2}), f.windows);
        conversation.start(EntryId{0});
        check(finish(f, conversation) == std::vector<unsigned>(full.size(), 0x61),
              "Prepared name was truncated below its actual regional extent");
    }
}

void numbers_and_capture(GameVersion version) {
    for (std::uint32_t value : {0u, 1u, 65535u, 65536u, 1234567u, 9999999u}) {
        Fixture actual(version), expected(version);
        actual.prepared.set_number(value);
        Conversation conversation(program(version, {0x1c, 0x0f, 2}), actual.windows);
        conversation.start(EntryId{0});
        check(finish(actual, conversation) == digits(value, version), "Prepared number lost digits or high word");
        auto baseline = expected.windows.substitutions().begin(number(value));
        check(finish(expected, *baseline) == digits(value, version), "Direct number baseline is invalid");
        equal_output(actual, expected);
    }
    Fixture f(version);
    f.prepared.set_number(123);
    SubstitutionCommand command;
    command.action = SubstitutionAction::PreparedNumber;
    auto operation = f.windows.substitutions().begin(command);
    // Begin is admission; the actual source command captures CNUM at execution.
    f.prepared.set_number(456789);
    check(next(*operation) == Progress::Suspended && character(f) == digits(4, version).front(),
          "Prepared number captured before its command actually executed");
    f.prepared.set_number(0xffffffff);
    operation->respond();
    check(finish(f, *operation) == digits(56789, version) && f.prepared.number() == 0xffffffff,
          "Prepared number reread the mutable owner after a glyph callback");
    f.unfocus();
    auto unfocused = f.windows.substitutions().begin(command);
    check(next(*unfocused) == Progress::Finished && !unfocused->effect(),
          "No-focus prepared number validated unavailable decimal memory or emitted a footer");

    // The source writes into unrelated window memory above seven digits. The
    // native formatter rejects that unsupported domain only when it executes;
    // raw CNUM storage/getters above deliberately retain all32 bits.
    Fixture invalid(version);
    invalid.prepared.set_number(10000000);
    auto bad = invalid.windows.substitutions().begin(command);
    rejects([&] { (void)next(*bad); }, "Focused eight-digit prepared number silently invented formatting");
    check(!bad->effect(), "Rejected numeric domain published a glyph effect");
}

void article_rules() {
    const std::array<std::uint8_t, 3> name{0x61, 0x62, 0};
    for (auto side : {PreparedName::Attacker, PreparedName::Target})
        for (bool uppercase : {false, true}) for (unsigned id : {0u, 1u, 2u, 0xffffu})
            for (unsigned flag : {0u, 1u, 255u}) {
                Fixture actual(GameVersion::US), expected(GameVersion::US);
                actual.prepared.copy_name(side, std::span(name).first(2));
                actual.prepared.metadata(side) = {std::uint16_t(id), std::uint8_t(flag)};
                const auto other = side == PreparedName::Attacker ? PreparedName::Target : PreparedName::Attacker;
                actual.prepared.metadata(other) = {17, 91};
                emit(actual, uppercase ? 0x70 : 0x61);
                emit(expected, uppercase ? 0x70 : 0x61);
                Conversation conversation(program(GameVersion::US, {0x1c, selector(side), 2}), actual.windows);
                conversation.start(EntryId{0});
                std::vector<unsigned> wanted;
                if ((id == 1 || id == 2) && flag == 0) wanted = literal(expected, uppercase ? capital : lower, 4);
                const auto tail = literal(expected, name);
                wanted.insert(wanted.end(), tail.begin(), tail.end());
                check(finish(actual, conversation) == wanted, "Article selection ignored raw flag, enemy ID or live previous glyph");
                check(actual.prepared.metadata(side) == NameMetadata{std::uint16_t(id), std::uint8_t(id == 0xffff ? 0 : flag)} &&
                          actual.prepared.metadata(other) == NameMetadata{17, 91},
                      "Article output set a suppression flag or cleared the other name metadata");
                equal_output(actual, expected);
            }
    Fixture f(GameVersion::US);
    f.prepared.copy_name(PreparedName::Target, std::span(name).first(2));
    f.prepared.metadata(PreparedName::Target) = {1, 0};
    Conversation repeated(program(GameVersion::US, {0x1c, 0x0e, 0x1c, 0x0e, 2}), f.windows);
    repeated.start(EntryId{0});
    std::vector<unsigned> wanted(lower.begin(), lower.end());
    wanted.insert(wanted.end(), {0x61, 0x62});
    const auto once = wanted;
    wanted.insert(wanted.end(), once.begin(), once.end());
    check(finish(f, repeated) == wanted && f.prepared.metadata(PreparedName::Target).article == 0,
          "First article suppressed a later prepared-name invocation");
}

void live_names(GameVersion version) {
    const std::array<std::uint8_t, 3> initial{0x61, 0x62, 0x63}, changed{0x71, 0x72, 0x73};
    for (auto side : {PreparedName::Attacker, PreparedName::Target}) for (bool shorten : {false, true}) {
        Fixture f(version);
        f.prepared.copy_name(side, initial);
        Conversation parent(program(version, {0x1c, selector(side), 4, 7, 0, 2}), f.windows);
        parent.start(EntryId{0});
        check(next(parent) == Progress::Suspended && character(f) == 0x61 && !f.state.flag(7),
              "Prepared name did not pause after its first real glyph");
        const auto old_frame = f.output.frame({0});
        const auto old_pixels = old_frame->pixels;
        f.prepared.copy_name(side, std::span(changed).first(shorten ? 1 : 3));
        stable(f, parent);
        parent.respond();
        check(finish(f, parent) == (shorten ? std::vector<unsigned>{} : std::vector<unsigned>{0x72, 0x73}) &&
                  f.state.flag(7) && old_frame->pixels == old_pixels,
              "Prepared name cached its bytes across callbacks or changed a sampled frame");
    }
    if (version == GameVersion::US) for (auto side : {PreparedName::Attacker, PreparedName::Target}) {
        Fixture f(version);
        f.prepared.copy_name(side, initial);
        f.prepared.metadata(side) = {1, 0};
        emit(f, 0x70);
        Conversation parent(program(version, {0x1c, selector(side), 2}), f.windows);
        parent.start(EntryId{0});
        check(next(parent) == Progress::Suspended && character(f) == capital[0],
              "Prepared article was not emitted before the name");
        // Copy changes the sentinel and the name during the article callback.
        // The already selected phrase finishes, then the live name is loaded.
        f.prepared.copy_name(side, changed);
        f.prepared.metadata(side).article = 255;
        parent.respond();
        check(finish(f, parent) == std::vector<unsigned>{capital[1], capital[2], capital[3], 0x71, 0x72, 0x73} &&
                  f.prepared.metadata(side) == NameMetadata{0xffff, 255},
              "Article continuation reselected metadata or captured the name before its callback");
    }
}

void no_focus_and_japanese(GameVersion version) {
    const std::array<std::uint8_t, 2> name{0x61, 0x62};
    for (auto side : {PreparedName::Attacker, PreparedName::Target})
        for (unsigned id : {1u, 0xffffu}) for (unsigned flag : {0u, 255u}) {
            Fixture f(version);
            f.prepared.copy_name(side, name);
            f.prepared.metadata(side) = {std::uint16_t(id), std::uint8_t(flag)};
            f.unfocus();
            const auto pixels = f.output.frame({0})->pixels;
            Conversation conversation(program(version, {0x1c, selector(side), 2}), f.windows);
            conversation.start(EntryId{0});
            unsigned ticks{};
            for (; ticks < 8; ++ticks) {
                if (next(conversation) == Progress::Finished) break;
                check(conversation.event() && std::holds_alternative<TextEffect>(*conversation.event()) &&
                          std::get<TextEffect>(*conversation.event()).kind == TextEffectKind::WindowTick,
                      "Unfocused prepared name emitted an unrelated service or sound");
                stable(f, conversation);
                conversation.respond();
            }
            // JP PRINT_LETTER reaches its footer even when C10BA1 cannot
            // place a glyph; the US entry returns before its footer.
            check(conversation.finished() && !conversation.event() &&
                      ticks == (version == GameVersion::JP ? name.size() : 0) &&
                      f.output.frame({0})->pixels == pixels && conversation.snapshot().consumed_bytes == 3,
                  "Unfocused prepared name changed pixels, regional footer count or continuation");
            const unsigned expected_flag = version == GameVersion::US && id == 0xffff ? 0 : flag;
            check(f.prepared.metadata(side) == NameMetadata{std::uint16_t(id), std::uint8_t(expected_flag)},
                  "No-focus sentinel processing or Japanese metadata preservation differs");
        }
    if (version == GameVersion::JP) for (unsigned id : {0u, 1u, 231u, 0xffffu}) {
        Fixture f(version);
        f.prepared.copy_name(PreparedName::Target, name);
        f.prepared.metadata(PreparedName::Target) = {std::uint16_t(id), 255};
        Conversation conversation(program(version, {0x1c, 0x0e, 2}), f.windows);
        conversation.start(EntryId{0});
        check(finish(f, conversation) == std::vector<unsigned>{0x61, 0x62} &&
                  f.prepared.metadata(PreparedName::Target) == NameMetadata{std::uint16_t(id), 255},
              "Japanese prepared name read US article data or rewrote unused metadata");
    }
}

void nested_ownership(GameVersion version) {
    Fixture f(version);
    const std::array<std::uint8_t, 3> initial{0x61, 0x62, 0x63}, changed{0x71, 0x72, 0x73};
    f.prepared.copy_name(PreparedName::Target, initial);
    Conversation parent(program(version, {0x1c, 0x0e, 2}), f.windows);
    parent.start(EntryId{0});
    Conversation child(program(version, {0x19, 0x1e, 2}), f.windows);
    rejects([&] { child.start_nested(EntryId{0}, parent); }, "Scheduling-only boundary admitted nested prepared text");
    check(next(parent) == Progress::Suspended && character(f) == 0x61, "Nested fixture has no real parent callback");
    const auto event = parent.event();
    const auto snapshot = parent.snapshot();
    rejects([&] { child.start(EntryId{0}); }, "Independent root bypassed a suspended prepared output owner");
    rejects([&] { f.windows.substitutions().begin(number(42)); }, "Root formatter bypassed prepared callback ownership");
    rejects([&] { f.windows.bind_prepared_message(f.prepared); }, "Active prepared owner was rebound during callback");
    f.prepared.set_number(0xfedcba98);
    f.prepared.copy_name(PreparedName::Target, changed);
    child.validate_start_nested(parent);
    child.start_nested(EntryId{0}, parent);
    rejects([&] { parent.advance(0); }, "Parent advanced while nested prepared getter owned output");
    rejects([&] { parent.respond(); }, "Parent acknowledged a callback while child owned output");
    check(next(child) == Progress::Finished && f.state.window().active.working == 0xfedcba98 &&
              parent.event() == event && same(snapshot, parent.snapshot()),
          "Nested prepared getter invented a tick or consumed its parent's pending event");
    stable(f, parent);
    parent.respond();
    check(finish(f, parent) == std::vector<unsigned>{0x72, 0x73}, "Parent failed to resume exactly once with live bytes");

    // The captured number stays fixed, but the original decimal scratch is
    // shared. A nested real formatter replaces the two remaining digits.
    f.prepared.set_number(123);
    Conversation number_parent(program(version, {0x1c, 0x0f, 2}), f.windows);
    number_parent.start(EntryId{0});
    check(next(number_parent) == Progress::Suspended && character(f) == digits(1, version).front(),
          "Nested prepared number fixture did not publish its first digit");
    f.prepared.set_number(987);
    Conversation number_child(program(version, {0x1c, 0x0f, 2}), f.windows);
    number_child.start_nested(EntryId{0}, number_parent);
    check(finish(f, number_child) == digits(987, version), "Nested prepared number did not capture the current shared value");
    number_parent.respond();
    check(finish(f, number_parent) == digits(87, version), "Prepared formatter introduced a private decimal scratch buffer");
}
} // namespace

int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            parser_contract(version);
            unbound_and_binding(version);
            bound_getters(version);
            names_and_rendering(version);
            numbers_and_capture(version);
            live_names(version);
            no_focus_and_japanese(version);
            nested_ownership(version);
        }
        article_rules();
        std::cout << "native prepared message checks=" << checks << '\n';
    } catch (const std::exception &error) {
        std::cerr << "native prepared message failed after " << checks << " checks: " << error.what() << '\n';
        return 1;
    }
}
