#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/output.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "native_dialogue_test_assets.hpp"
#include <functional>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool condition, const char *message) {
    ++checks;
    if (!condition)
        throw std::runtime_error(message);
}
template <class F> void rejects(F operation, const char *message) {
    bool rejected = false;
    try {
        operation();
    } catch (const std::exception &) {
        rejected = true;
    }
    check(rejected, message);
}
std::shared_ptr<const FontResources> fonts(eb::GameVersion region) {
    dialogue_test_assets::WindowInput fixture(region);
    dialogue_test_assets::add_text_fonts(fixture);
    return FontResources::import(fixture.image, region);
}
void finish(TextOutput &output) {
    for (unsigned step = 0; step < 64; ++step) {
        if (output.advance() == OutputProgress::Complete)
            return;
        check(output.effect().has_value(), "Raw output suspended without a text effect");
        output.respond();
    }
    throw std::runtime_error("Raw output did not complete within the fixture bound");
}
void persistent_pixel_position() {
    State state;
    state.windows.emplace(WindowId{1}, WindowState{});
    state.windows.emplace(WindowId{2}, WindowState{});
    state.focus = WindowId{1};
    TextOutput output(fonts(eb::GameVersion::US), state);
    output.define_window({1}, {16, 6});
    output.define_window({2}, {16, 6});
    check(output.last_pixel_offset_set() == 0, "Cold text output has an invented saved pixel offset");

    // C43D24 saves a nonzero requested fraction; C44B3A glyph progress does
    // not replace it. The distinction drives C43D95 number padding later.
    output.set_cursor({1}, {0, 0}, 3);
    output.begin_glyph(0x61);
    finish(output);
    check(output.fractional_offset() == 7 && output.last_pixel_offset_set() == 3,
          "Glyph advance overwrote the explicit pixel-position history");
    const auto old_frame = output.frame({1});
    const auto frozen_pixels = old_frame->pixels;
    output.set_cursor({1}, {2, 0});
    check(output.fractional_offset() == 0 && output.last_pixel_offset_set() == 3,
          "Aligned cursor positioning cleared the source's retained fraction");
    Request clear;
    clear.kind = RequestKind::ClearLine;
    output.begin(clear);
    finish(output);
    clear.kind = RequestKind::Newline;
    output.begin(clear);
    finish(output);
    check(output.last_pixel_offset_set() == 3 && old_frame->pixels == frozen_pixels,
          "Line clearing or reset changed saved positioning or a sampled frame");

    state.focus = WindowId{2};
    output.set_cursor({2}, {1, 0}, 5);
    state.focus = WindowId{1};
    output.set_cursor({1}, {0, 0});
    check(output.last_pixel_offset_set() == 5,
          "Explicit positioning was incorrectly retained per window instead of shared");
    output.prepare_word({1, 200});
    check(output.indent_pending() && output.last_pixel_offset_set() == 5,
          "Word preparation changed explicit positioning before indent was applied");
    output.begin_glyph(0x61);
    finish(output);
    check(!output.indent_pending() && output.last_pixel_offset_set() == 6,
          "Automatic proportional indentation omitted its source pixel-position update");

    output.set_cursor({1}, {0, 0}, 2);
    output.prepare_word({1, 200});
    output.begin_glyph(0x70); // The source's bullet branch suppresses six-pixel indentation.
    finish(output);
    check(!output.indent_pending() && output.last_pixel_offset_set() == 2,
          "Bullet indentation invented an explicit six-pixel position");
    const auto before = output.composition_snapshot();
    const auto cursor = output.window({1}).cursor;
    rejects([&] { output.set_cursor({1}, {17, 0}, 4); }, "Out-of-domain cursor was accepted");
    rejects([&] { output.set_cursor({1}, {0, 0}, 8); }, "Invalid subcolumn position was accepted");
    check(output.composition_snapshot() == before && output.window({1}).cursor == cursor &&
              output.last_pixel_offset_set() == 2,
          "Rejected cursor positioning changed shared composition or saved position");
    for (unsigned frame = 0; frame < 8; ++frame)
        (void)output.frame({1});
    check(output.composition_snapshot() == before && output.last_pixel_offset_set() == 2,
          "Frame sampling advanced text positioning");

    State jp_state;
    jp_state.windows.emplace(WindowId{1}, WindowState{});
    jp_state.focus = WindowId{1};
    TextOutput jp(fonts(eb::GameVersion::JP), jp_state);
    jp.define_window({1}, {16, 4});
    jp.set_cursor({1}, {3, 0});
    rejects([&] { jp.set_cursor({1}, {3, 0}, 1); }, "Japanese positioning accepted a US pixel fraction");
    check(jp.last_pixel_offset_set() == 0 && jp.window({1}).cursor == TextCursor{3, 0},
          "Japanese fixed positioning mutated US pixel history");
}
struct Resources {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const SubstitutionResources> substitutions;
    explicit Resources(eb::GameVersion version) {
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
        substitutions = dialogue_substitution_test_assets::Input(version).load();
    }
};
const Resources &resources(eb::GameVersion version) {
    static const Resources us(eb::GameVersion::US), jp(eb::GameVersion::JP);
    return version == eb::GameVersion::JP ? jp : us;
}
struct Fixture {
    State state;
    TextOutput output;
    WindowHost windows;
    explicit Fixture(eb::GameVersion version)
        : output(resources(version).fonts, state), windows(resources(version).windows, state, output) {
        WindowCommand command;
        command.action = WindowAction::Open;
        command.id = WindowId{0};
        auto operation = windows.begin(command);
        for (unsigned steps = 0; steps < 64; ++steps) {
            if (operation->advance() == OutputProgress::Complete)
                break;
            operation->respond();
        }
        check(operation->complete(), "Fixture window did not open");
        output.policy().instant = false;
        output.policy().character_padding = 0;
        output.policy().text_speed = 0;
        output.policy().sound_mode = 3;
        windows.metadata({0}).number_padding = 0x80;
        substitutions().configure(resources(version).substitutions);
    }
    TextSubstitutions &substitutions() { return windows.substitutions(); }
};
Progress next(TextSubstitutions::Operation &operation) {
    for (unsigned steps = 0; steps < 4096; ++steps) {
        const auto progress = operation.advance(1);
        if (progress != Progress::BudgetExhausted)
            return progress;
        check(!operation.effect(), "Substitution work yield invented an output effect");
    }
    throw std::runtime_error("Substitution exceeded bounded fixture work");
}
unsigned visible_character(const Fixture &f) {
    if (f.windows.version() == eb::GameVersion::US)
        return f.output.last_character();
    const auto id = *f.state.focus;
    const auto &window = f.output.window(id);
    const auto cursor = window.cursor;
    check(cursor.column != 0, "Fixture cannot identify a glyph before its cursor advanced");
    const auto cells = f.output.cells(id);
    const auto &cell = cells.cells.at(cursor.line * 2 * window.geometry.columns + cursor.column - 1);
    check(cell.fixed_character.has_value() && !cell.lower_half,
          "Japanese fixture did not retain fixed glyph provenance");
    return *cell.fixed_character;
}
void stable(Fixture &f, TextSubstitutions::Operation &operation) {
    const auto effect = operation.effect();
    check(effect.has_value(), "Substitution suspended without a glyph effect");
    const auto cursor = f.output.window(*f.state.focus).cursor;
    const auto composition = f.output.composition_snapshot();
    const auto sample = f.output.frame(*f.state.focus);
    for (unsigned repetition = 0; repetition < 3; ++repetition)
        check(operation.advance(repetition) == Progress::Suspended && operation.effect() == effect &&
                  f.output.window(*f.state.focus).cursor == cursor &&
                  f.output.composition_snapshot() == composition &&
                  f.output.frame(*f.state.focus)->pixels == sample->pixels,
              "Pending substitution or frame sampling advanced text");
}
std::vector<unsigned> finish(Fixture &f, TextSubstitutions::Operation &operation) {
    std::vector<unsigned> characters;
    for (unsigned effects = 0; effects < 1024; ++effects) {
        if (next(operation) == Progress::Finished) {
            check(operation.complete() && !operation.effect(), "Finished substitution retained an event");
            return characters;
        }
        stable(f, operation);
        check(operation.effect()->kind == TextEffectKind::WindowTick,
              "Silent substitution emitted an unexpected sound effect");
        characters.push_back(visible_character(f));
        operation.respond();
    }
    throw std::runtime_error("Substitution exceeded bounded fixture callbacks");
}
SubstitutionCommand number(std::uint32_t value) {
    SubstitutionCommand result;
    result.action = SubstitutionAction::Number;
    result.value = value;
    return result;
}
SubstitutionCommand string(TextReader reader, SubstitutionAction action = SubstitutionAction::String,
                           std::uint16_t maximum = 0xffff) {
    SubstitutionCommand result;
    result.action = action;
    result.text = std::move(reader);
    result.maximum = maximum;
    return result;
}
void live_string_and_limit(eb::GameVersion version) {
    Fixture f(version);
    std::vector<std::uint8_t> bytes{0x61, 0x62, 0x63, 0};
    auto operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return bytes; }));
    check(next(*operation) == Progress::Suspended && visible_character(f) == 0x61,
          "String did not publish its first source byte");
    stable(f, *operation);
    const auto image = f.output.frame({0});
    const auto old_pixels = image->pixels;
    // Force reallocation, then change the unread byte and terminator. The
    // caller's pointer index survives; the old allocation must not be cached.
    bytes = std::vector<std::uint8_t>(100, 0);
    bytes[0] = 0x69;
    bytes[1] = 0x64;
    operation->respond();
    check(finish(f, *operation) == std::vector<unsigned>{0x64},
          "String printing cached mutable bytes across a window callback");
    check(image->pixels == old_pixels, "Later string output mutated an immutable frame sample");
    bytes = {0x65, 0x66, 0x67, 0};
    operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return bytes; },
                                               SubstitutionAction::String, 2));
    check(finish(f, *operation) == std::vector<unsigned>{0x65, 0x66},
          "String maximum did not bound actual emitted bytes");
    const auto before = f.output.composition_snapshot();
    const auto cursor = f.output.window({0}).cursor;
    operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return bytes; },
                                               SubstitutionAction::String, 0));
    check(finish(f, *operation).empty() && f.output.window({0}).cursor == cursor &&
              f.output.composition_snapshot() == before,
          "A zero string maximum emitted or composed a glyph");
}
void nested_decimal_buffer(eb::GameVersion version) {
    Fixture f(version);
    auto parent = f.substitutions().begin(number(123));
    check(next(*parent) == Progress::Suspended, "Parent number did not reach a world callback");
    const unsigned zero = version == eb::GameVersion::JP ? 0x30 : 0x60;
    check(visible_character(f) == zero + 1, "Decimal conversion changed its first digit");
    const auto parent_effect = parent->effect();
    rejects([&] { f.substitutions().begin_nested(number(10000000), *parent); },
            "Invalid nested decimal value acquired a child activation");
    stable(f, *parent);
    auto child = f.substitutions().begin_nested(number(987), *parent);
    const auto before = f.output.composition_snapshot();
    rejects([&] { parent->advance(0); }, "An ancestor advanced while nested number printing owned output");
    rejects([&] { parent->respond(); }, "An ancestor acknowledged its effect before child return");
    rejects([&] { f.substitutions().begin(number(5)); }, "A root formatter bypassed a nested activation");
    rejects([&] { f.output.begin_glyph(0x61); }, "Raw output bypassed formatter ownership");
    check(f.output.composition_snapshot() == before && parent->effect() == parent_effect,
          "Rejected out-of-order execution changed the pending parent");
    check(finish(f, *child) == std::vector<unsigned>{zero + 9, zero + 8, zero + 7},
          "Nested decimal conversion did not print its own digits");
    check(parent->effect() == parent_effect && parent->advance() == Progress::Suspended,
          "Nested return implicitly acknowledged the parent's world callback");
    parent->respond();
    check(finish(f, *parent) == std::vector<unsigned>{zero + 8, zero + 7},
          "Parent number failed to reread the source-shared decimal buffer after nesting");
}
void layout_and_padding(eb::GameVersion version) {
    Fixture f(version);
    std::array<std::uint8_t, 2> one{0x61, 0};
    f.windows.menu_state().center_next_string = true;
    auto operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return one; }));
    check(next(*operation) == Progress::Suspended, "Centered string emitted no glyph");
    if (version == eb::GameVersion::US) {
        check(!f.windows.menu_state().center_next_string && f.output.last_pixel_offset_set() == 6 &&
                  f.output.window({0}).cursor == TextCursor{11, 0} && f.output.fractional_offset() == 2,
              "US centering lost its imported width, one-shot flag or pixel positioning");
    } else {
        check(f.windows.menu_state().center_next_string && f.output.window({0}).cursor == TextCursor{1, 0},
              "Japanese PRINT_STRING consumed the US proportional centering policy");
    }
    operation->respond();
    finish(f, *operation);
    f.windows.menu_state().center_next_string = false;
    f.windows.metadata({0}).number_padding = 3; // Four-character minimum.
    f.output.set_cursor({0}, {1, 0}, version == eb::GameVersion::US ? 5 : 0);
    if (version == eb::GameVersion::US) {
        f.output.begin_glyph(0x68);
        finish(f.output);
        check(f.output.fractional_offset() == 1 && f.output.last_pixel_offset_set() == 5,
              "Padding fixture did not separate the live fraction from saved positioning");
    }
    operation = f.substitutions().begin(number(12));
    check(next(*operation) == Progress::Suspended, "Padded number emitted no output");
    if (version == eb::GameVersion::US) {
        check(visible_character(f) == 0x61 && f.output.last_pixel_offset_set() == 1 &&
                  f.output.window({0}).cursor == TextCursor{6, 0} && f.output.fractional_offset() == 5,
              "US numeric padding did not shift by six pixels plus the retained offset");
        operation->respond();
        check(finish(f, *operation) == std::vector<unsigned>{0x62}, "US padding printed a space glyph");
    } else {
        check(visible_character(f) == 0x20, "Japanese numeric padding omitted its first real space glyph");
        operation->respond();
        check(finish(f, *operation) == std::vector<unsigned>{0x20, 0x31, 0x32},
              "Japanese numeric padding lost space effects or decimal digits");
    }

    f.output.set_cursor({0}, {0, 0});
    std::array<std::uint8_t, 1> empty{};
    operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return empty; },
                                               SubstitutionAction::WrappedString, 0));
    check(finish(f, *operation).empty(), "An empty wrapped string emitted a glyph");
    if (version == eb::GameVersion::US)
        check(f.output.window({0}).cursor == TextCursor{0, 1} && f.output.indent_pending(),
              "C447FB's column-zero subtraction was saturated instead of wrapping as a source word");
    else
        check(f.output.window({0}).cursor == TextCursor{0, 0} && !f.output.indent_pending(),
              "Japanese string output applied a US proportional wrapping rule");
}
std::vector<unsigned> encoded_decimal(std::uint32_t value, eb::GameVersion version) {
    std::vector<unsigned> result;
    for (auto digit : std::to_string(value))
        result.push_back(unsigned(digit - '0') + (version == eb::GameVersion::JP ? 0x30 : 0x60));
    return result;
}
void decimal_boundaries(eb::GameVersion version) {
    Fixture f(version);
    for (const auto value : {0u, 9u, 10u, 65535u, 9999999u}) {
        f.output.set_cursor({0}, {0, 0});
        auto operation = f.substitutions().begin(number(value));
        check(finish(f, *operation) == encoded_decimal(value, version),
              "Decimal boundary conversion changed the glyph sequence");
    }
    const auto cursor = f.output.window({0}).cursor;
    const auto composition = f.output.composition_snapshot();
    for (auto value : {10000000u, 0xffff967fu, 0xffffffffu})
        rejects([&] { f.substitutions().begin(number(value)); },
                "Native decimal formatting silently emulated a focus-corrupting source value");
    check(f.output.window({0}).cursor == cursor && f.output.composition_snapshot() == composition,
          "Rejected root decimal formatting mutated output");
    auto valid = f.substitutions().begin(number(5));
    check(finish(f, *valid) == encoded_decimal(5, version),
          "Rejected decimal formatting stranded the output owner");
    f.state.focus.reset();
    auto absent = f.substitutions().begin(number(0xffffffffu));
    check(next(*absent) == Progress::Finished && !absent->effect(),
          "No-focus number formatting did not take the source's early return");
}
void word_buffer_nesting() {
    Fixture f(eb::GameVersion::US);
    std::array<std::uint8_t, 6> original{0x61, 0x62, 0x50, 0x63, 0x64, 0};
    std::array<std::uint8_t, 3> replacement{0x78, 0x79, 0};
    auto parent = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return original; },
                                                SubstitutionAction::WordSplitString, 1));
    check(next(*parent) == Progress::Suspended && visible_character(f) == 0x61,
          "Split string failed to reach its first glyph callback");
    auto child = f.substitutions().begin_nested(
        string([&]() -> std::span<const std::uint8_t> { return replacement; },
               SubstitutionAction::WordSplitString), *parent);
    check(finish(f, *child) == std::vector<unsigned>{0x78, 0x79},
          "Nested word splitting did not publish the replacement word");
    parent->respond();
    check(finish(f, *parent) == std::vector<unsigned>{0x79, 0x63, 0x64},
          "Word splitting lost shared-buffer overwrite or the caller's independent source pointer");
    f.output.set_cursor({0}, {0, 0});
    parent = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return original; },
                                            SubstitutionAction::WordSplitString, 1));
    check(finish(f, *parent) == std::vector<unsigned>{0x61, 0x62, 0x50, 0x63, 0x64},
          "Word splitting applied its unused source length argument or discarded a delimiter");
}
void money_capture_and_restore(eb::GameVersion version) {
    Fixture f(version);
    WindowCommand open;
    open.action = WindowAction::Open;
    open.id = WindowId{1};
    auto opening = f.windows.begin(open);
    while (opening->advance() == OutputProgress::Suspended)
        opening->respond();
    f.state.focus = WindowId{0};
    const bool us = version == eb::GameVersion::US;
    f.output.policy().instant = false;
    f.output.policy().sound_mode = 3;
    f.output.policy().text_speed = 0;
    f.output.policy().character_padding = 1;
    if (us)
        f.output.prepare_word({1, 2000});
    f.output.set_cursor({0}, {2, 1}, us ? 5 : 0);
    f.windows.menu_state().force_left_alignment = true;
    SubstitutionCommand money;
    money.action = SubstitutionAction::Money;
    money.value = 123;
    auto operation = f.substitutions().begin(money);
    unsigned effects = 0;
    for (; effects < 16; ++effects) {
        if (next(*operation) == Progress::Finished)
            break;
        check(operation->effect()->kind == TextEffectKind::WindowTick,
              "Silent money formatting emitted a non-window event");
        stable(f, *operation);
        if (effects == 0) {
            check(visible_character(f) == (us ? 0x54u : 0x23u),
                  "Money formatting lost its regional opening glyph");
            if (us)
                check(!f.output.indent_pending() && f.output.last_pixel_offset_set() == 3 &&
                          f.windows.menu_state().force_left_alignment,
                      "US money did not clear indent and establish right-aligned pixel/left-policy state");
            // A real callback may focus another live window and alter the
            // physical window the caller captured. Money restores its saved
            // cursor to current focus; its closing US cell uses captured live y.
            f.output.set_cursor({0}, {4, 0});
            f.state.focus = WindowId{1};
            f.output.set_cursor({1}, {0, 2});
        } else if (effects <= 3) {
            check(visible_character(f) == (us ? 0x60u : 0x30u) + effects,
                  "Money digit order changed after a focus callback");
        } else {
            check(effects == 4, "Money emitted an extra glyph footer");
            if (us) {
                const auto cells = f.output.cells({1});
                check(cells.cells[19].fixed_character == 36 && !cells.cells[19].lower_half &&
                          !f.windows.menu_state().force_left_alignment,
                      "US money failed to place its closing fixed cell at the captured live line");
            } else
                check(visible_character(f) == 0x24 && f.windows.menu_state().force_left_alignment,
                      "Japanese money lost its closing marker or changed US alignment policy");
        }
        operation->respond();
    }
    check(effects == 5 && operation->complete() && f.output.window({0}).cursor == TextCursor{4, 0} &&
              f.output.window({1}).cursor == TextCursor{2, 1},
          "Money did not restore captured coordinates on the current focused window");
    if (us)
        check(f.output.indent_pending() && f.output.last_pixel_offset_set() == 3 &&
                  !f.windows.menu_state().force_left_alignment,
              "US money restored the wrong shared indent, saved offset or force-left state");
}
SubstitutionCommand action(SubstitutionAction kind, std::uint32_t value) {
    SubstitutionCommand result;
    result.action = kind;
    result.value = value;
    return result;
}
void catalogs_and_typed_values(eb::GameVersion version) {
    Fixture f(version);
    std::vector<std::uint8_t> name{0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0};
    std::vector<std::uint8_t> favourite(15, 0x71);
    favourite.back() = 0;
    std::vector<StatKey> number_reads, string_reads;
    f.substitutions().configure(resources(version).substitutions,
        {[&](StatKey key) { number_reads.push_back(key); return 0x10001u; },
         [&](StatKey key) -> std::span<const std::uint8_t> {
             string_reads.push_back(key);
             return key.field == StatField::FavouriteThing ? favourite : name;
         }});
    const auto run = [&](SubstitutionAction kind, unsigned value) {
        f.output.set_cursor({0}, {1, 0});
        auto operation = f.substitutions().begin(action(kind, value));
        return finish(f, *operation);
    };
    check(run(SubstitutionAction::Stat, 9) == encoded_decimal(1, version) &&
              number_reads == std::vector<StatKey>{{StatField::Level, 0}},
          "Byte stat substitution lost its typed field or source-width truncation");
    number_reads.clear();
    check(run(SubstitutionAction::Stat, 11) == encoded_decimal(1, version) &&
              number_reads == std::vector<StatKey>{{StatField::CurrentHp, 0}},
          "Word stat substitution lost its typed field or source-width truncation");
    number_reads.clear();
    check(run(SubstitutionAction::Stat, 10) == encoded_decimal(65537, version) &&
              number_reads == std::vector<StatKey>{{StatField::Experience, 0}},
          "Long stat substitution truncated the source experience value");
    string_reads.clear();
    const auto maximum = version == eb::GameVersion::JP ? 4u : 5u;
    const std::vector<unsigned> expected_name(name.begin(), name.begin() + maximum);
    check(run(SubstitutionAction::CharacterName, 1) == expected_name &&
              !string_reads.empty() &&
              std::all_of(string_reads.begin(), string_reads.end(), [](StatKey key) {
                  return key == StatKey{StatField::CharacterName, 0};
              }),
          "Character name did not use the live party field with its regional bound");
    string_reads.clear();
    f.output.set_cursor({0}, {1, 0});
    auto live = f.substitutions().begin(action(SubstitutionAction::CharacterName, 2));
    check(next(*live) == Progress::Suspended && visible_character(f) == 0x61,
          "Live character name did not start at its original byte");
    name.assign({0x67, 0x68, 0});
    live->respond();
    check(finish(f, *live) == std::vector<unsigned>{0x68},
          "Typed live name provider was cached across a glyph callback");
    const auto catalog_word = [](unsigned seed) {
        std::vector<unsigned> result;
        for (unsigned i = 0; i < 4; ++i)
            result.push_back(dialogue_substitution_test_assets::Input::letter(seed + i));
        return result;
    };
    check(run(SubstitutionAction::ItemName, 3) == catalog_word(3), "Item substitution used the wrong imported record");
    check(run(SubstitutionAction::TeleportName, 2) == catalog_word(33),
          "Teleport substitution used the wrong imported record");
    // Selector8's synthetic NPC map points to enemy104, independently of any
    // text routine address or imported source character table implementation.
    check(run(SubstitutionAction::CharacterName, 8) == catalog_word(201),
          "NPC name selection lost its imported enemy indirection");
    auto psi_expected = catalog_word(64); // Ability1: name2, level2.
    psi_expected.push_back(0x72);
    check(run(SubstitutionAction::PsiName, 1) == psi_expected,
          "PSI substitution lost its separate imported name or suffix");
    const auto stat_favourite = run(SubstitutionAction::Stat, 5);
    check(stat_favourite.size() == (version == eb::GameVersion::JP ? 9 : 12),
          "Stat favourite-thing string ignored its declared regional length");
    auto live_psi = run(SubstitutionAction::PsiName, 17); // name1 uses live favourite thing until NUL.
    check(live_psi.size() == 15 && std::all_of(live_psi.begin(), live_psi.end() - 1,
                                             [](unsigned code) { return code == 0x71; }) &&
              live_psi.back() == 0x73,
          "Live PSI favourite name was truncated to the stat field's different maximum");
}
void bounded_live_input(eb::GameVersion version) {
    {
        Fixture f(version);
        const std::array<std::uint8_t, 2> bytes{0x61, 0x62};
        auto operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return bytes; },
                                                       SubstitutionAction::String, 2));
        check(finish(f, *operation) == std::vector<unsigned>{0x61, 0x62},
              "Exactly bounded non-NUL text required a fictitious terminator");
    }
    {
        Fixture f(version);
        const std::array<std::uint8_t, 2> bytes{0x61, 0x62};
        auto operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return bytes; },
                                                       SubstitutionAction::String, 3));
        for (unsigned expected : {0x61u, 0x62u}) {
            check(next(*operation) == Progress::Suspended && visible_character(f) == expected,
                  "Unterminated fixture did not publish its valid bounded prefix");
            operation->respond();
        }
        const auto before = f.output.composition_snapshot();
        rejects([&] { next(*operation); }, "Missing required NUL was silently treated as a terminator");
        check(f.output.composition_snapshot() == before,
              "Rejecting a missing terminator composed an invented trailing glyph");
    }
    {
        Fixture f(version);
        std::vector<std::uint8_t> bytes{0x61, 0x62, 0};
        auto operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return bytes; }));
        check(next(*operation) == Progress::Suspended, "Shrinking-view fixture never reached its callback");
        bytes.clear();
        operation->respond();
        rejects([&] { next(*operation); }, "A shrunk live field fabricated termination after callback");
    }
    if (version == eb::GameVersion::US)
        for (const auto kind : {SubstitutionAction::String, SubstitutionAction::WrappedString}) {
            Fixture f(version);
            f.output.set_cursor({0}, {19, 0}, 4);
            f.windows.menu_state().center_next_string = kind == SubstitutionAction::String;
            const std::array<std::uint8_t, 2> bytes{0x61, 0x62};
            const auto cursor = f.output.window({0}).cursor;
            const auto composition = f.output.composition_snapshot();
            auto operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return bytes; },
                                                           kind, 3));
            rejects([&] { next(*operation); }, "Proportional measurement fabricated a required terminator");
            check(!operation->effect() && f.output.window({0}).cursor == cursor &&
                      f.output.composition_snapshot() == composition && !f.output.indent_pending() &&
                      f.windows.menu_state().center_next_string == (kind == SubstitutionAction::String),
                  "Rejected string measurement mutated layout before its unavailable source byte");
        }
}
std::shared_ptr<const Program> program(eb::GameVersion version, std::vector<std::uint8_t> bytes) {
    return std::make_shared<const Program>(version, std::vector<ContentBlock>{{0, 0, std::move(bytes)}},
                                          std::vector<Location>{{0, 0}});
}
Progress next(Conversation &conversation) {
    for (unsigned work = 0; work < 8192; ++work) {
        const auto progress = conversation.advance(1);
        if (progress != Progress::BudgetExhausted)
            return progress;
    }
    throw std::runtime_error("Conversation did not reach a bounded host effect");
}
void authored_operands(eb::GameVersion version) {
    const std::vector<std::uint8_t> bytes{
        0x1c, 0, 0, 0x1c, 1, 0, 0x1c, 2, 0xff, 0x1c, 3, 0, 0x1c, 5, 3, 0x1c, 6, 0,
        0x1c, 0x0a, 0, 0, 0, 0, 0x1c, 0x0b, 0x44, 0x33, 0x22, 0x11, 0x1c, 0x12, 0, 2};
    State state;
    state.windows.emplace(WindowId{0}, WindowState{});
    state.focus = WindowId{0};
    state.window().active.argument = 0x12345678;
    state.window().saved.working = 0xaabb0003;
    Runtime runtime(program(version, bytes), state);
    runtime.start(EntryId{0});
    const std::array<std::pair<unsigned, std::uint32_t>, 9> expected{{
        {0, 0}, {1, 0x5678}, {2, version == eb::GameVersion::US ? 3 : 255}, {3, 0x5678},
        {5, 3}, {6, 0x5678}, {0x0a, 0x12345678}, {0x0b, 0x11223344}, {0x12, 0x5678}}};
    unsigned requests = 0;
    for (unsigned work = 0; work < 256; ++work) {
        const auto progress = runtime.advance(1);
        if (progress == Progress::Finished)
            break;
        if (progress == Progress::BudgetExhausted)
            continue;
        check(requests < expected.size() && runtime.request()->kind == RequestKind::Substitution &&
                  runtime.request()->selector == expected[requests].first &&
                  runtime.request()->count == expected[requests].second,
              "Authored substitution changed its operand width, regional FF case or zero fallback");
        ++requests;
        runtime.respond();
    }
    check(requests == expected.size() && runtime.snapshot().returned_cursor == Location{0, std::uint16_t(bytes.size())},
          "Authored substitution parser consumed a wrong number of operand bytes");
}
void conversation_bridge(eb::GameVersion version) {
    Fixture f(version);
    f.state.window().active.argument = 0x61;
    f.output.set_style({0}, {0, 6, true, true, true});
    Conversation conversation(program(version, {0x1c, 0, 0, 0x1c, 3, 0,
                                                0x1c, 0x0a, 0, 0, 0, 0, 4, 7, 0, 2}), f.windows);
    conversation.start(EntryId{0});
    check(next(conversation) == Progress::Suspended && conversation.event() &&
              std::holds_alternative<TextEffect>(*conversation.event()) && visible_character(f) == 0x61 &&
              f.output.window({0}).style == TextStyle{0, 0, false, false, false} && !f.state.flag(7),
          "Conversation failed to route native substitutions or treated zero attributes as argument memory");
    const auto pending = conversation.event();
    const auto snapshot = conversation.snapshot();
    auto nested = f.substitutions().begin_nested(number(42), conversation);
    rejects([&] { conversation.advance(0); }, "Conversation bypassed its child formatter owner");
    check(finish(f, *nested) == encoded_decimal(42, version) && conversation.event() == pending &&
              conversation.snapshot().consumed_bytes == snapshot.consumed_bytes,
          "Nested formatter changed its parent's authored cursor or pending effect");
    conversation.respond();
    std::vector<unsigned> remaining;
    for (unsigned events = 0; events < 64; ++events) {
        if (next(conversation) == Progress::Finished)
            break;
        check(conversation.event() && std::holds_alternative<TextEffect>(*conversation.event()),
              "Window-backed Conversation leaked a supported substitution request");
        check(!f.state.flag(7), "Following authored command ran before decimal glyph effects finished");
        remaining.push_back(visible_character(f));
        conversation.respond();
    }
    check(conversation.finished() && remaining == encoded_decimal(97, version) && f.state.flag(7),
          "Substitution continuation failed to acknowledge exactly once before following script commands");

    auto parent = f.substitutions().begin(number(123));
    check(next(*parent) == Progress::Suspended, "Formatter parent emitted no callback for nested DISPLAY");
    Conversation child(program(version, {0x1c, 0x0a, 0xdb, 3, 0, 0, 2}), f.windows);
    child.start_nested(EntryId{0}, *parent);
    std::vector<unsigned> child_digits;
    for (unsigned events = 0; events < 32; ++events) {
        if (next(child) == Progress::Finished)
            break;
        check(child.event() && std::holds_alternative<TextEffect>(*child.event()),
              "Nested DISPLAY leaked a typed substitution");
        child_digits.push_back(visible_character(f));
        child.respond();
    }
    check(child.finished() && child_digits == encoded_decimal(987, version) && parent->effect(),
          "Nested DISPLAY did not use the same host-owned formatter");
    parent->respond();
    const unsigned zero = version == eb::GameVersion::JP ? 0x30 : 0x60;
    check(finish(f, *parent) == std::vector<unsigned>{zero + 8, zero + 7},
          "Nested DISPLAY had a duplicate decimal buffer instead of source-shared storage");
}
void ambient_window_layout() {
    const std::array<std::uint8_t, 2> text{0x61, 0};
    for (bool retired : {false, true}) {
        Fixture f(eb::GameVersion::US);
        f.output.set_cursor({0}, {3, 1}, 5);
        const auto slot = *f.windows.slot_for({0});
        f.state.unfocused_register_slot = slot;
        const auto sampled = f.output.frame({0});
        const auto pixels = sampled->pixels;
        if (retired) {
            WindowCommand close;
            close.action = WindowAction::CloseFocus;
            auto operation = f.windows.begin(close);
            while (operation->advance() == OutputProgress::Suspended)
                operation->respond();
            check(!f.windows.slot(slot).id, "Ambient fixture did not actually retire its physical window");
        } else
            f.state.focus.reset();
        check(!f.state.focus, "Ambient fixture unexpectedly retained focus");
        const auto line = f.windows.slot_output(slot).cursor.line;
        const auto before = f.output.composition_snapshot();
        f.windows.menu_state().center_next_string = true;
        auto operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return text; }));
        check(next(*operation) == Progress::Finished && !operation->effect() &&
                  f.windows.slot_output(slot).cursor == TextCursor{9, line} &&
                  f.output.last_pixel_offset_set() == 6 && f.output.fractional_offset() == 6 &&
                  f.output.composition_snapshot().brush_column == (before.brush_column + 1) % 52 &&
                  !f.windows.menu_state().center_next_string,
              "Unfocused centering failed to position its live or retired ambient source window");
        check(sampled->pixels == pixels, "Ambient metadata positioning mutated a previously sampled image");
    }
    {
        Fixture f(eb::GameVersion::US);
        const auto slot = *f.windows.slot_for({0});
        f.state.unfocused_register_slot = slot;
        f.output.set_cursor({0}, {0, 1});
        f.state.focus.reset();
        auto operation = f.substitutions().begin(string([&]() -> std::span<const std::uint8_t> { return text; },
                                                       SubstitutionAction::WrappedString));
        check(next(*operation) == Progress::Finished && f.output.indent_pending() &&
                  f.windows.slot_output(slot).cursor == TextCursor{0, 1},
              "Unfocused wrapping invented a newline instead of preserving its source no-op and indent");
    }
    {
        Fixture f(eb::GameVersion::US);
        f.output.policy().character_padding = 1;
        f.output.prepare_word({1, 2000});
        f.output.set_cursor({0}, {2, 1}, 5);
        const auto slot = *f.windows.slot_for({0});
        f.state.unfocused_register_slot = slot;
        auto money = f.substitutions().begin(action(SubstitutionAction::Money, 123));
        check(next(*money) == Progress::Suspended && visible_character(f) == 0x54,
              "Money close fixture missed its source glyph callback");
        Conversation close(program(eb::GameVersion::US, {0x18, 0, 2}), f.windows);
        close.start_nested(EntryId{0}, *money);
        for (unsigned events = 0; events < 64; ++events) {
            if (next(close) == Progress::Finished)
                break;
            check(close.event() && std::holds_alternative<WindowEffect>(*close.event()),
                  "Nested close produced an unrelated authored request");
            close.respond();
        }
        check(close.finished() && !f.state.focus && !f.windows.slot(slot).id && money->effect(),
              "Nested close did not leave the source's retired ambient slot and parent effect");
        const auto before = f.output.composition_snapshot();
        money->respond();
        check(next(*money) == Progress::Finished && !money->effect() &&
                  f.windows.slot_output(slot).cursor == TextCursor{2, 1} &&
                  f.output.composition_snapshot().brush_column == (before.brush_column + 2) % 52 &&
                  f.output.last_pixel_offset_set() == 3 && f.output.indent_pending() &&
                  !f.windows.menu_state().force_left_alignment,
              "Money return after nested close omitted its two retained-window positions or shared restoration");
    }
}
} // namespace
int main() {
    try {
        persistent_pixel_position();
        for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            live_string_and_limit(version);
            nested_decimal_buffer(version);
            layout_and_padding(version);
            decimal_boundaries(version);
            money_capture_and_restore(version);
            catalogs_and_typed_values(version);
            bounded_live_input(version);
            authored_operands(version);
            conversation_bridge(version);
        }
        word_buffer_nesting();
        ambient_window_layout();
        std::cout << "PASS " << checks << " native substitution checks\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "FAIL " << error.what() << '\n';
        return 1;
    }
}
