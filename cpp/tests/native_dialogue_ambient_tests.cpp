#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
std::string context;
void check(bool condition, const char *message) {
    ++checks;
    if (!condition)
        throw std::runtime_error(context + ": " + message);
}
template <class F> void rejects(F operation, const char *message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception &) { rejected = true; }
    check(rejected, message);
}
struct Resources {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const WindowInitializationResources> initialization;
    explicit Resources(eb::GameVersion version) {
        dialogue_test_assets::WindowInput input(version);
        dialogue_test_assets::add_text_fonts(input);
        for (unsigned id = 0; id < input.count; ++id) {
            input.put(input.configs + id * 8, 0);
            input.put(input.configs + id * 8 + 2, 0);
            input.put(input.configs + id * 8 + 4, 22);
            input.put(input.configs + id * 8 + 6, 8);
        }
        if (version == eb::GameVersion::JP) {
            const auto raster = [&](unsigned character, unsigned mapping, unsigned width,
                                    std::uint8_t plane0, std::uint8_t plane1) {
                input.image.at(0x3eaed + character - 16) = std::uint8_t(mapping);
                input.image.at(0x3ebdd + mapping - 1) = std::uint8_t(width);
                const unsigned index = mapping - 1;
                const unsigned start = 0x20209d + (index & 7) * 32 + (index & 0xf8) * 64;
                for (unsigned half = 0; half < 2; ++half)
                    for (unsigned strip = 0; strip < (width > 8 ? 2u : 1u); ++strip)
                        for (unsigned row = 0; row < 8; ++row) {
                            input.image.at(start + half * 256 + strip * 16 + row * 2) =
                                std::uint8_t(plane0 ^ (row & 1 ? 0x11 : 0));
                            input.image.at(start + half * 256 + strip * 16 + row * 2 + 1) =
                                std::uint8_t(plane1 ^ (half ? 0x44 : 0));
                        }
            };
            raster(0x61, 1, 5, 0xf0, 0x0f);
            raster(0x62, 2, 5, 0x33, 0xcc);
            raster(0x64, 3, 12, 0xaa, 0x55);
            raster(26, 4, 2, 0x77, 0xbb);
            raster(27, 5, 3, 0xdd, 0xee);
            raster(30, 6, 1, 0x55, 0xaa);
            input.image.at(0x3eaed + 0x63 - 16) = 1;
            input.image.at(0x3eaed + 0x6b - 16) = 1;
            // The proven wide menu glyph reads one adjacent map/width record,
            // then paints a complete strip even though its advance is zero.
            input.image.at(0x3ec2c) = 169;
            input.image.at(0x3ec85) = 0;
            for (unsigned row = 0; row < 8; ++row) {
                input.image.at(0x204a9d + row * 2) = 0x5a;
                input.image.at(0x204a9e + row * 2) = 0xa5;
                input.image.at(0x204b9d + row * 2) = 0xa5;
                input.image.at(0x204b9e + row * 2) = 0x5a;
            }
        }
        fonts = FontResources::import(input.image, version);
        windows = input.import();
        initialization = WindowInitializationResources::import(input.image, version);
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
    unsigned slot{};
    explicit Fixture(eb::GameVersion version = eb::GameVersion::JP)
        : output(resources(version).fonts, state), windows(resources(version).windows, state, output) {
        window(WindowAction::Open, WindowId{0});
        slot = *windows.slot_for({0});
        output.policy().instant = true;
        output.policy().character_padding = 0;
        output.policy().text_speed = 0;
        output.policy().sound_mode = 3;
        state.word_wrap = false;
    }
    void window(WindowAction action, std::optional<WindowId> id = {}) {
        WindowCommand command;
        command.action = action;
        command.id = id;
        auto operation = windows.begin(command);
        for (unsigned events = 0; events < 64; ++events) {
            if (operation->advance() == OutputProgress::Complete) {
                check(operation->succeeded(), "Fixture window operation did not succeed");
                return;
            }
            operation->respond();
        }
        throw std::runtime_error("Window setup exceeded its event bound");
    }
    void absent(bool retire) {
        state.unfocused_register_slot = slot;
        if (retire)
            window(WindowAction::Close, WindowId{0});
        else
            state.focus.reset();
        check(!state.focus, "Fixture did not remove focus");
    }
};
bool same_cells(const TextCellGrid &a, const TextCellGrid &b) {
    if (a.geometry != b.geometry || a.cells.size() != b.cells.size())
        return false;
    for (unsigned i = 0; i < a.cells.size(); ++i)
        if (a.cells[i].image != b.cells[i].image || a.cells[i].style != b.cells[i].style ||
            a.cells[i].fixed_character != b.cells[i].fixed_character ||
            a.cells[i].lower_half != b.cells[i].lower_half)
            return false;
    return true;
}
std::vector<TextEffectKind> finish(Fixture &f) {
    std::vector<TextEffectKind> effects;
    for (unsigned count = 0; count < 128; ++count) {
        if (f.output.advance() == OutputProgress::Complete)
            return effects;
        const auto event = f.output.effect();
        check(event.has_value(), "Output suspended without an effect");
        const auto composition = f.output.composition_snapshot();
        const auto cursor = f.windows.slot_output(f.slot).cursor;
        const auto frame = f.windows.slot_frame(f.slot);
        for (unsigned sample = 0; sample < 3; ++sample)
            check(f.output.advance() == OutputProgress::Suspended && f.output.effect() == event &&
                      f.output.composition_snapshot() == composition &&
                      f.windows.slot_output(f.slot).cursor == cursor &&
                      f.windows.slot_frame(f.slot)->pixels == frame->pixels,
                  "Unacknowledged footer or frame sample advanced ambient output");
        effects.push_back(event->kind);
        f.output.respond();
    }
    throw std::runtime_error("Ambient footer exceeded its event bound");
}
std::vector<TextEffectKind> glyph(Fixture &f, std::uint16_t value) {
    f.output.begin_glyph(value);
    return finish(f);
}
void request(Fixture &f, RequestKind kind) {
    Request value;
    value.kind = kind;
    f.output.begin(value);
    check(finish(f).empty(), "Layout operation invented a glyph footer");
}
void fixed_absence(bool retired) {
    context = retired ? "JP fixed retired" : "JP fixed live";
    Fixture f;
    glyph(f, 0x61);
    f.output.set_cursor({0}, {4, 1});
    const auto pixels = f.windows.slot_frame(f.slot);
    const auto old_pixels = pixels->pixels;
    const auto cells = f.windows.slot_cells(f.slot);
    f.absent(retired);
    const auto cursor = f.windows.slot_output(f.slot).cursor;
    const auto composition = f.output.composition_snapshot();
    f.output.acknowledge_redraw();
    check(glyph(f, 0xffff).empty(), "An unrendered wide fixed glyph emitted an instant footer");
    check(f.output.redraw_pending() == retired,
          "Absent fixed footer compared focus instead of the explicit ambient slot and live tail");
    f.output.policy().instant = false;
    f.output.policy().text_speed = 2;
    f.output.policy().sound_mode = 2;
    check(glyph(f, 0x61) == std::vector<TextEffectKind>{TextEffectKind::TextSound, TextEffectKind::WindowTick,
                                                      TextEffectKind::WindowTick, TextEffectKind::WindowTick},
          "Absent fixed glyph omitted or reordered its outer sound/tick footer");
    f.output.policy().prompt_mode = 2;
    check(glyph(f, 0x20) == std::vector<TextEffectKind>(3, TextEffectKind::WindowTick),
          "Absent fixed space applied drawing policy or emitted text sound");
    check(f.windows.slot_output(f.slot).cursor == cursor && f.output.composition_snapshot() == composition &&
              same_cells(cells, f.windows.slot_cells(f.slot)) && f.windows.slot_frame(f.slot)->pixels == old_pixels &&
              pixels->pixels == old_pixels,
          "A fixed placement guard changed the ambient canvas, cursor, brush or old sample");
    check(f.windows.draw_order().size() == (retired ? 0u : 1u) && !f.state.focus,
          "Absent fixed output reopened or focused a window");
}
void saturn_arithmetic(bool retired) {
    context = retired ? "JP Saturn retired" : "JP Saturn live";
    Fixture f;
    f.output.set_style({0}, {1, 0, false, false, false});
    f.absent(retired);
    const auto cells = f.windows.slot_cells(f.slot);
    const auto blank = f.windows.slot_frame(f.slot)->pixels;
    check(glyph(f, 0x61).empty() && f.windows.slot_output(f.slot).cursor == TextCursor{0xffff, 0} &&
              f.output.fractional_offset() == 5 && f.output.saturn_composition_active(),
          "Absent Saturn did not compose and decrement x as a source word");
    const auto publication = f.output.publication_snapshot();
    check(glyph(f, 30).empty() && f.windows.slot_output(f.slot).cursor == TextCursor{0xfffe, 0},
          "Sub-32 Saturn character wrongly triggered the unsigned wrap branch");
    const auto before_wrap = f.output.publication_snapshot();
    glyph(f, 0x61);
    check(f.windows.slot_output(f.slot).cursor == TextCursor{0, 1} && f.output.fractional_offset() == 5 &&
              f.output.publication_snapshot().current_column == (before_wrap.current_column + 2) % 48,
          "Printable recovery omitted ambient newline or the source's double composition reset");
    check(same_cells(cells, f.windows.slot_cells(f.slot)) && f.windows.slot_frame(f.slot)->pixels == blank &&
              !f.state.focus && f.windows.draw_order().size() == (retired ? 0u : 1u),
          "Absent Saturn publication inserted descriptors, focused or reopened its ambient window");
    check(publication.columns != f.output.publication_snapshot().columns,
          "Saturn publication diagnostic failed to expose new indexed artwork");
    const auto saved = publication.columns;
    glyph(f, 0x62);
    check(publication.columns == saved, "Publication diagnostic is a live mutable view rather than a deep sample");
}
void saturn_branches() {
    for (const auto x : {14u, 15u}) {
        context = "JP Saturn unsigned boundary x=" + std::to_string(x);
        Fixture f;
        f.output.set_style({0}, {1, 0, false, false, false});
        f.output.set_cursor({0}, {std::uint16_t(x), 1});
        f.absent(false);
        const auto before = f.output.publication_snapshot();
        glyph(f, 0x64); // Twelve-pixel variable glyph; no diacritic.
        const TextCursor expected = x == 14 ? TextCursor{13, 1} : TextCursor{0, 2};
        check(f.windows.slot_output(f.slot).cursor == expected && f.output.fractional_offset() == 4 &&
                  f.output.composition_snapshot().brush_column == 1 &&
                  f.output.publication_snapshot().current_column == (before.current_column + (x == 14 ? 1 : 3)) % 48,
              "Saturn width/boundary path changed cursor, publication span or reset count");
    }
    {
        context = "JP zero-advance ambient";
        Fixture f;
        f.output.set_style({0}, {1, 0, false, false, false});
        f.absent(true);
        const auto before = f.output.composition_snapshot();
        const auto publication = f.output.publication_snapshot();
        glyph(f, 0x14f);
        check(f.windows.slot_output(f.slot).cursor == TextCursor{0xffff, 0} &&
                  f.output.fractional_offset() == 0 && f.output.saturn_composition_active() &&
                  f.output.composition_snapshot().columns != before.columns &&
                  f.output.publication_snapshot().columns != publication.columns &&
                  f.output.publication_snapshot().current_column == publication.current_column,
              "Zero-advance ambient glyph omitted its full raster or final cursor decrement");
    }
    for (const auto character : {0x63u, 0x6bu}) {
        context = "JP ambient diacritic " + std::to_string(character);
        Fixture f;
        f.output.set_style({0}, {1, 0, false, false, false});
        f.output.set_cursor({0}, {3, 0});
        f.absent(true);
        f.output.policy().instant = false;
        const auto before = f.output.publication_snapshot();
        check(glyph(f, std::uint16_t(character)) == std::vector<TextEffectKind>{TextEffectKind::WindowTick} &&
                  f.windows.slot_output(f.slot).cursor == TextCursor{1, 0} &&
                  f.output.fractional_offset() == (character == 0x63 ? 7u : 0u) &&
                  f.output.publication_snapshot().current_column ==
                      (before.current_column + (character == 0x63 ? 0 : 1)) % 48,
              "Diacritic failed to reuse updated ambient state or duplicated the outer footer");
    }
    for (bool active : {false, true}) {
        context = active ? "JP ambient active fallback" : "JP ambient inactive fallback";
        Fixture f;
        f.output.set_style({0}, {1, 0, false, false, false});
        f.output.set_cursor({0}, {5, 0});
        f.absent(false);
        if (active)
            glyph(f, 0x61);
        const auto cursor = f.windows.slot_output(f.slot).cursor;
        const auto before = f.output.publication_snapshot();
        glyph(f, 0x66); // Mapping zero; no diacritic.
        check(f.windows.slot_output(f.slot).cursor == TextCursor{std::uint16_t(cursor.column + (active ? 1 : 0)), 0} &&
                  !f.output.saturn_composition_active() &&
                  f.output.publication_snapshot().current_column == (before.current_column + (active ? 1 : 0)) % 48,
              "Fixed fallback lost the active-Saturn reset/increment before its absent-focus no-op");
    }
}
void retained_scroll(bool retired, unsigned font) {
    context = std::string("JP ambient scroll ") + (retired ? "retired" : "live") + " font=" + std::to_string(font);
    Fixture f;
    for (unsigned line = 0; line < 3; ++line) {
        f.output.set_cursor({0}, {0, std::uint16_t(line)});
        for (unsigned column = 0; column < 3; ++column)
            glyph(f, std::uint16_t(0x61 + line));
    }
    f.output.set_style({0}, {std::uint16_t(font), 0, false, false, false});
    f.output.set_cursor({0}, {4, 2});
    f.windows.draw_windows();
    f.windows.publish_scene();
    const auto scene = f.windows.frame();
    const auto frozen_scene = scene->pixels;
    const auto cells = f.windows.slot_cells(f.slot);
    const auto sample = f.windows.slot_frame(f.slot);
    const auto pixels = sample->pixels;
    f.absent(retired);
    check(same_cells(cells, f.windows.slot_cells(f.slot)), "Closing copied or erased the Japanese canvas cells");
    const auto before = f.output.publication_snapshot();
    request(f, RequestKind::Newline);
    const auto moved = f.windows.slot_cells(f.slot);
    const unsigned width = moved.geometry.columns;
    for (unsigned index = 0; index < width * 4; ++index)
        check(moved.cells[index].image == cells.cells[index + width * 2].image &&
                  moved.cells[index].fixed_character == cells.cells[index + width * 2].fixed_character &&
                  moved.cells[index].lower_half == cells.cells[index + width * 2].lower_half,
              "Ambient scrolling copied pixels instead of moving the actual retained descriptors");
    for (unsigned index = width * 4; index < moved.cells.size(); ++index)
        check(moved.cells[index].fixed_character == 32 && !moved.cells[index].lower_half &&
                  moved.cells[index].style == TextStyle{0, 0, false, false, false},
              "Ambient scrolling did not fill its final two rows with the source blank descriptor");
    check(f.windows.slot_output(f.slot).cursor == TextCursor{0, 2} && !f.state.focus &&
              f.output.publication_snapshot().current_column == (before.current_column + (font ? 1 : 0)) % 48 &&
              sample->pixels == pixels && scene->pixels == frozen_scene &&
              f.windows.frame()->pixels == frozen_scene,
          "Ambient scroll altered focus, reset count or immutable/published scene membership");
    check(f.windows.slot_frame(f.slot)->pixels != pixels,
          "Scroll fixture did not contain distinguishable rows or failed to move them");
    f.windows.draw_windows();
    f.windows.publish_scene();
    check(f.windows.draw_order().size() == (retired ? 0u : 1u) &&
              f.windows.frame()->pixels != frozen_scene && scene->pixels == frozen_scene,
          "Explicit scene publication failed to reflect the live/closed window lifecycle");
}
void shared_publication_and_reuse() {
    context = "JP retained/live/publication ownership";
    Fixture f;
    f.output.set_style({0}, {1, 0, false, false, false});
    f.output.set_cursor({0}, {1, 0});
    glyph(f, 0x61);
    const auto first_cells = f.windows.slot_cells(f.slot);
    const auto first_image = first_cells.cells.at(1).image;
    const auto first_pixels = first_image->pixels;
    const auto first_frame = f.windows.slot_frame(f.slot);
    const auto first_sample = first_frame->pixels;
    f.windows.draw_windows();
    f.windows.publish_scene();
    const auto scene = f.windows.frame();
    const auto scene_pixels = scene->pixels;
    f.window(WindowAction::Open, WindowId{1});
    const auto second_slot = *f.windows.slot_for({1});
    f.output.set_style({1}, {1, 0, false, false, false});
    f.output.set_cursor({1}, {1, 0});
    glyph(f, 0x61);
    const auto second_cells = f.windows.slot_cells(second_slot);
    const auto second_image = second_cells.cells.at(1).image;
    const auto second_pixels = second_image->pixels;
    const auto second_frame = f.windows.slot_frame(second_slot);
    const auto second_sample = second_frame->pixels;
    check(first_image != second_image, "Fixture did not establish distinct source publication identities");
    f.window(WindowAction::Close, WindowId{0});
    f.state.focus.reset();
    f.state.unfocused_register_slot = f.slot;
    check(same_cells(first_cells, f.windows.slot_cells(f.slot)),
          "Japanese close detached existing cell-image ownership");
    bool first_changed = false, second_changed = false;
    // A source-supported sub32 mapping still composes but bypasses the
    // initial printable-wrap branch. It cycles the shared publication ring
    // without scrolling the descriptor rows whose aliases we are measuring.
    for (unsigned glyphs = 0; glyphs < 512 && !(first_changed && second_changed); ++glyphs) {
        glyph(f, 30);
        first_changed = first_image->pixels != first_pixels;
        second_changed = second_image->pixels != second_pixels;
    }
    check(first_changed && second_changed && f.windows.frame()->pixels != scene_pixels &&
              f.windows.slot_frame(f.slot)->pixels != first_sample &&
              f.windows.slot_frame(second_slot)->pixels != second_sample,
          "Absent Saturn failed to update retained, live and already-published aliases through shared artwork");
    check(same_cells(first_cells, f.windows.slot_cells(f.slot)) &&
              same_cells(second_cells, f.windows.slot_cells(second_slot)) && !f.state.focus &&
              f.windows.draw_order().size() == 1 && f.windows.draw_order().front() == WindowId{1},
          "Absent publication changed descriptor membership or silently reopened the closed window");
    check(first_frame->pixels == first_sample && second_frame->pixels == second_sample &&
              scene->pixels == scene_pixels,
          "Shared publication mutated deep frame samples");

    f.window(WindowAction::Open, WindowId{2});
    check(f.windows.slot_for({2}) == f.slot && !f.windows.slot_for({0}),
          "Reopening did not reuse the original free physical slot");
    const auto fresh = f.windows.slot_cells(f.slot);
    for (const auto &cell : fresh.cells)
        check(cell.fixed_character == 32 && !cell.lower_half && cell.image != first_image,
              "Reused slot retained a second stale canvas instead of initializing the source window");
    check(first_frame->pixels == first_sample && scene->pixels == scene_pixels,
          "Replacing a retained canvas changed an earlier immutable sample");
}
std::shared_ptr<const Program> program(eb::GameVersion version, std::vector<std::uint8_t> bytes) {
    return std::make_shared<const Program>(version, std::vector<ContentBlock>{{0, 0, std::move(bytes)}},
                                          std::vector<Location>{{0, 0}});
}
Progress next(Conversation &conversation) {
    for (unsigned work = 0; work < 4096; ++work) {
        const auto result = conversation.advance(1);
        if (result != Progress::BudgetExhausted)
            return result;
    }
    throw std::runtime_error("Conversation exceeded bounded work without a host boundary");
}
TextEffectKind text_event(const Conversation &conversation) {
    check(conversation.event() && std::holds_alternative<TextEffect>(*conversation.event()),
          "Expected a native glyph effect instead of an unhandled service");
    return std::get<TextEffect>(*conversation.event()).kind;
}
void callback_close_reopen() {
    context = "JP nested close/reopen while ambient glyph waits";
    Fixture f;
    f.output.set_style({0}, {1, 0, false, false, false});
    f.output.set_cursor({0}, {1, 0});
    f.absent(false);
    f.output.policy().instant = false;
    f.output.policy().sound_mode = 2;
    f.output.policy().text_speed = 1;
    const auto old_frame = f.windows.slot_frame(f.slot);
    const auto old_pixels = old_frame->pixels;
    Conversation parent(program(eb::GameVersion::JP, {0x61, 0x62, 2}), f.windows);
    Conversation child(program(eb::GameVersion::JP, {0x18, 3, 0, 0x18, 0, 0x18, 1, 1, 0x62, 2}), f.windows);
    Conversation sibling(program(eb::GameVersion::JP, {2}), f.windows);
    parent.start(EntryId{0});
    check(next(parent) == Progress::Suspended && text_event(parent) == TextEffectKind::TextSound &&
              f.windows.slot_output(f.slot).cursor == TextCursor{0, 0},
          "Parent ambient glyph did not reach its sound boundary after composition");
    rejects([&] { child.start_nested(EntryId{0}, parent); }, "Sound callback admitted nested dialogue execution");
    parent.respond();
    check(next(parent) == Progress::Suspended && text_event(parent) == TextEffectKind::WindowTick,
          "Parent ambient glyph did not reach its first world callback");
    const auto pending = parent.event();
    const auto parent_cursor = parent.snapshot();
    child.start_nested(EntryId{0}, parent);
    const auto before_child = f.output.composition_snapshot();
    rejects([&] { parent.advance(0); }, "Ancestor advanced while child owned an ambient output continuation");
    rejects([&] { parent.respond(); }, "Ancestor acknowledged a world callback before child return");
    rejects([&] { sibling.start_nested(EntryId{0}, parent); }, "Sibling bypassed the current nested owner");
    rejects([&] { f.output.begin_glyph(0x61); }, "Raw ambient output bypassed Conversation ownership");
    check(f.output.composition_snapshot() == before_child && parent.event() == pending,
          "Rejected execution changed shared brush or pending source callback");
    unsigned child_glyph_ticks = 0, child_open_effects = 0;
    for (unsigned events = 0; events < 32; ++events) {
        if (next(child) == Progress::Finished)
            break;
        if (std::holds_alternative<TextEffect>(*child.event())) {
            if (text_event(child) == TextEffectKind::WindowTick)
                ++child_glyph_ticks;
        } else {
            check(std::holds_alternative<WindowEffect>(*child.event()) &&
                      std::get<WindowEffect>(*child.event()).kind == WindowEffectKind::ClearPartyBlink,
                  "JP close/reopen added an unsupported event or an extra close world tick");
            ++child_open_effects;
        }
        child.respond();
    }
    check(child.finished() && child_glyph_ticks == 2 && child_open_effects == 1 &&
              f.windows.slot_for({1}) == f.slot && !f.windows.slot_for({0}) &&
              f.state.focus == WindowId{1} && f.windows.slot_output(f.slot).style.font == 0 &&
              parent.event() == pending && parent.snapshot().consumed_bytes == parent_cursor.consumed_bytes,
          "Nested window lifecycle failed to replace the single slot owner or preserve the caller continuation");
    f.output.policy().text_speed = 0;
    f.output.policy().sound_mode = 3;
    parent.respond();
    check(next(parent) == Progress::Suspended && text_event(parent) == TextEffectKind::WindowTick,
          "Child policy change replaced the parent's previously captured wait count");
    parent.respond();
    check(next(parent) == Progress::Suspended && text_event(parent) == TextEffectKind::WindowTick,
          "Following glyph failed to resolve the new live slot/font after callback return");
    parent.respond();
    check(next(parent) == Progress::Finished && parent.finished(), "Parent did not complete after its remaining glyph");
    const auto cells = f.windows.slot_cells(f.slot);
    check(cells.cells[0].fixed_character == 0x62 && cells.cells[1].fixed_character == 0x62 &&
              f.windows.slot_output(f.slot).cursor == TextCursor{2, 0} && old_frame->pixels == old_pixels,
          "Parent restored stale closed-canvas state or redrew its first ambient glyph after nesting");
}
void invalid_ambient_and_us() {
    for (const auto ambient : {std::optional<unsigned>{}, std::optional<unsigned>{8},
                               std::optional<unsigned>{0xffff}, std::optional<unsigned>{0x3456}}) {
        context = "JP invalid ambient " + (ambient ? std::to_string(*ambient) : std::string("missing"));
        Fixture f;
        f.state.focus.reset();
        f.state.unfocused_register_slot = ambient;
        const auto before = f.output.composition_snapshot();
        const auto publication = f.output.publication_snapshot();
        const auto canvas = f.windows.slot_frame(f.slot)->pixels;
        rejects([&] { f.output.begin_glyph(0x61); }, "JP payload lookup accepted an absent or invalid physical slot");
        check(f.output.complete() && !f.output.effect() && f.output.composition_snapshot() == before &&
                  f.output.publication_snapshot().columns == publication.columns &&
                  f.output.publication_snapshot().current_column == publication.current_column &&
                  f.windows.slot_frame(f.slot)->pixels == canvas,
              "Rejected ambient lookup changed output before validating its payload owner");
        rejects([&] { f.windows.slot_cells(8); }, "Canvas diagnostic accepted an out-of-range slot");
        rejects([&] { f.windows.slot_frame(7); }, "Canvas diagnostic invented storage for a never-open slot");
    }
    for (bool retired : {false, true}) {
        context = retired ? "US absent retired regression" : "US absent live regression";
        Fixture f(eb::GameVersion::US);
        f.output.set_cursor({0}, {2, 1}, 5);
        const auto old_frame = f.windows.slot_frame(f.slot);
        const auto old_pixels = old_frame->pixels;
        f.absent(retired);
        // US glyph/newline early returns do not need any ambient payload at all.
        f.state.unfocused_register_slot = 0x3456;
        f.output.policy().instant = false;
        f.output.policy().sound_mode = 2;
        f.output.policy().text_speed = 2;
        const auto before = f.output.composition_snapshot();
        const auto cursor = f.windows.slot_output(f.slot).cursor;
        check(glyph(f, 0xffff).empty(), "US absent glyph gained a Japanese footer or artwork lookup");
        request(f, RequestKind::Newline);
        request(f, RequestKind::ConditionalNewline);
        check(f.output.composition_snapshot() == before && f.windows.slot_output(f.slot).cursor == cursor &&
                  f.output.last_pixel_offset_set() == 5 && old_frame->pixels == old_pixels && !f.state.focus,
              "Japanese ambient support changed existing US early-return behavior");
    }
}
void initial_state_and_layout_commands() {
    context = "JP cold composition and unallocated metadata";
    Fixture f;
    const auto initial = f.output.composition_snapshot();
    check(initial.columns.size() == 4 &&
              std::all_of(initial.columns.begin(), initial.columns.end(), [](const auto &column) {
                  return std::all_of(column.begin(), column.end(), [](std::uint8_t pixel) { return pixel == 3; });
              }),
          "Cold Japanese composition did not initialize all four source columns");
    f.state.focus.reset();
    f.state.unfocused_register_slot = 7;
    check(f.windows.slot_output(7).geometry == WindowGeometry{} &&
              f.windows.slot_output(7).cursor == TextCursor{},
          "Never-open slot metadata was invented from a live window");
    request(f, RequestKind::Newline);
    check(f.windows.slot_output(7).cursor == TextCursor{0, 1} &&
              f.output.composition_snapshot() == initial,
          "Nonbottom newline demanded a canvas or reset the zero-font composition");
    request(f, RequestKind::ConditionalNewline);
    check(f.windows.slot_output(7).cursor == TextCursor{0, 1},
          "Conditional newline advanced a zero column in never-open metadata");
    rejects([&] { f.windows.slot_frame(7); }, "Metadata-only positioning fabricated a canvas");

    for (bool retired : {false, true}) {
        context = retired ? "JP retained ClearLine/ConditionalNewline" : "JP live ambient ClearLine/ConditionalNewline";
        Fixture layout;
        for (unsigned line = 0; line < 3; ++line) {
            layout.output.set_cursor({0}, {0, std::uint16_t(line)});
            glyph(layout, std::uint16_t(0x61 + line));
        }
        layout.output.set_style({0}, {1, 0, false, false, false});
        layout.output.set_cursor({0}, {4, 1});
        glyph(layout, 0x61);
        layout.absent(retired);
        const auto before = layout.output.composition_snapshot();
        const auto publications = layout.output.publication_snapshot();
        const auto cells = layout.windows.slot_cells(layout.slot);
        request(layout, RequestKind::ClearLine);
        const auto cleared = layout.windows.slot_cells(layout.slot);
        const auto width = cleared.geometry.columns;
        for (unsigned index = 0; index < cleared.cells.size(); ++index) {
            if (index >= width * 2 && index < width * 4)
                check(cleared.cells[index].fixed_character == 32 && !cleared.cells[index].lower_half,
                      "Ambient ClearLine did not blank exactly the current two rows");
            else
                check(cleared.cells[index].image == cells.cells[index].image &&
                          cleared.cells[index].fixed_character == cells.cells[index].fixed_character,
                      "Ambient ClearLine altered a different text line");
        }
        check(layout.windows.slot_output(layout.slot).cursor == TextCursor{0, 1} &&
                  layout.output.composition_snapshot() == before &&
                  layout.output.publication_snapshot() == publications && layout.output.saturn_composition_active(),
              "Japanese ClearLine reset shared composition instead of clearing only cells/x");
        request(layout, RequestKind::ConditionalNewline);
        check(layout.windows.slot_output(layout.slot).cursor == TextCursor{0, 1} &&
                  layout.output.publication_snapshot() == publications,
              "Conditional newline at zero column changed shared state");
        glyph(layout, 0x61);
        check(layout.windows.slot_output(layout.slot).cursor == TextCursor{0xffff, 1},
              "Conditional newline fixture did not establish a source-word column");
        const auto after_glyph = layout.output.publication_snapshot();
        request(layout, RequestKind::ConditionalNewline);
        check(layout.windows.slot_output(layout.slot).cursor == TextCursor{0, 2} &&
                  layout.output.publication_snapshot().current_column == (after_glyph.current_column + 1) % 48,
              "Conditional newline treated ffff as an invalid coordinate instead of a nonzero source word");
    }
}
void source_word_restoration() {
    context = "JP source-word attribute restoration";
    Fixture f;
    f.output.set_style({0}, {1, 0, false, false, false});
    f.absent(false);
    glyph(f, 0x61);
    check(f.windows.slot_output(f.slot).cursor == TextCursor{0xffff, 0},
          "Attribute fixture did not establish the source's wrapped x word");
    f.window(WindowAction::Focus, WindowId{0});
    f.output.policy().instant = false;
    Conversation conversation(program(eb::GameVersion::JP, {0x18, 2, 0x61, 2}), f.windows);
    conversation.start(EntryId{0});
    check(next(conversation) == Progress::Suspended && text_event(conversation) == TextEffectKind::WindowTick &&
              f.windows.slot_output(f.slot).cursor == TextCursor{1, 1},
          "Saved-window fixture failed to recover its source-word cursor before callback");
    f.output.set_cursor({0}, {4, 2});
    f.output.set_style({0}, {0, 5, true, true, false});
    const auto brush = f.output.composition_snapshot();
    const auto canvas = f.windows.slot_frame(f.slot)->pixels;
    conversation.respond();
    check(next(conversation) == Progress::Finished &&
              f.windows.slot_output(f.slot).cursor == TextCursor{0xffff, 0} &&
              f.windows.slot_output(f.slot).style == TextStyle{1, 0, false, false, false} &&
              f.output.composition_snapshot() == brush && f.windows.slot_frame(f.slot)->pixels == canvas,
          "CC02/C20ABC failed to restore a raw Japanese cursor word without repainting or aligning");
    rejects([&] { f.output.set_cursor({0}, {0xffff, 0}); },
            "Source-word restoration weakened public setup cursor bounds");
    check(f.windows.slot_output(f.slot).cursor == TextCursor{0xffff, 0},
          "Rejected public placement changed the existing valid source-word state");

    context = "JP money source-word restoration";
    f.output.set_style({0}, {0, 0, false, false, false});
    f.output.policy().instant = true;
    SubstitutionCommand command;
    command.action = SubstitutionAction::Money;
    command.value = 123;
    auto money = f.windows.substitutions().begin(command);
    check(money->advance() == Progress::Finished && money->complete() &&
              f.windows.slot_output(f.slot).cursor == TextCursor{0xffff, 0} && f.state.focus == WindowId{0},
          "Money's source positioning restored a clamped coordinate or rejected the saved word");
}
void retained_graphics_binding() {
    for (const auto version : {eb::GameVersion::JP, eb::GameVersion::US}) {
        context = version == eb::GameVersion::JP ? "JP retained artwork binding" : "US retained artwork binding";
        Fixture f(version);
        // A direct fixed glyph allocates no reusable US dynamic images. After
        // close, neither live windows nor the dynamic-image pool can establish
        // freshness: the physical canvas remains an independently visible owner.
        f.output.begin_fixed_glyph(0x61);
        check(finish(f).empty(), "Instant fixed glyph invented a callback");
        f.absent(true);
        const auto cells = f.windows.slot_cells(f.slot);
        const auto old_frame = f.windows.slot_frame(f.slot);
        const auto old_pixels = old_frame->pixels;
        const auto metadata = f.windows.slot_output(f.slot);
        const auto brush = f.output.composition_snapshot();
        check(cells.cells.front().fixed_character == (version == eb::GameVersion::JP ? 0x61 : 0x20),
              "Close did not preserve JP fixed artwork or blank released US cells");
        auto graphics = std::make_shared<WindowGraphics>(resources(version).initialization, f.output);
        rejects([&] { f.windows.set_graphics(graphics); },
                "Late graphics binding accepted a closed physical canvas with unsubscribed images");
        check(same_cells(cells, f.windows.slot_cells(f.slot)) &&
                  f.windows.slot_output(f.slot) == metadata &&
                  f.windows.slot_frame(f.slot)->pixels == old_pixels && old_frame->pixels == old_pixels &&
                  f.output.composition_snapshot() == brush && !f.state.focus,
              "Rejected late binding changed retained membership, pixels, metadata or composition");
        // Rejection must precede provider ownership: the unbound resource path
        // remains usable and can change decorations without replacing the canvas.
        f.windows.load_artwork(2);
        check(same_cells(cells, f.windows.slot_cells(f.slot)) && f.windows.slot_frame(f.slot)->pixels == old_pixels,
              "Failed binding left a partial provider or changed retained fixed images");
    }
}
} // namespace

int main() {
    try {
        for (bool retired : {false, true}) {
            fixed_absence(retired);
            saturn_arithmetic(retired);
            for (unsigned font : {0u, 1u})
                retained_scroll(retired, font);
        }
        saturn_branches();
        shared_publication_and_reuse();
        callback_close_reopen();
        invalid_ambient_and_us();
        initial_state_and_layout_commands();
        source_word_restoration();
        retained_graphics_binding();
        std::cout << "PASS " << checks << " native ambient dialogue checks\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "FAIL " << error.what() << '\n';
        return 1;
    }
}
