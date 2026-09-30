#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok, const char *message) {
    ++checks;
    if (!ok) throw std::runtime_error(message);
}
template<class F> void rejects(F function, const char *message) {
    bool rejected = false;
    try { function(); } catch (const std::exception &) { rejected = true; }
    check(rejected, message);
}
struct Assets {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
};
Assets make_assets(eb::GameVersion version) {
    dialogue_test_assets::WindowInput input(version);
    dialogue_test_assets::add_text_fonts(input);
    // Wide, separate strips make title-owner spill observable without one
    // window hiding another. Repeated later IDs still test overlapping lists.
    for (unsigned id = 0; id < input.count; ++id) {
        input.put(input.configs + id * 8, 0);
        input.put(input.configs + id * 8 + 2, (id % 7) * 4);
        input.put(input.configs + id * 8 + 4, 28);
        input.put(input.configs + id * 8 + 6, 4);
    }
    return {FontResources::import(input.image, version), input.import()};
}
const Assets &assets(eb::GameVersion version) {
    static const auto us = make_assets(eb::GameVersion::US), jp = make_assets(eb::GameVersion::JP);
    return version == eb::GameVersion::JP ? jp : us;
}
struct Fixture {
    State state;
    TextOutput output;
    WindowHost host;
    explicit Fixture(eb::GameVersion version)
        : output(assets(version).fonts, state), host(assets(version).windows, state, output) {}
};
WindowCommand command(WindowAction action, std::optional<WindowId> id = {}) {
    WindowCommand result;
    result.action = action;
    result.id = id;
    return result;
}
struct Outcome {
    std::vector<WindowEffectKind> effects;
    bool succeeded{};
};
Outcome finish(WindowHost::Operation &operation) {
    Outcome result;
    for (unsigned step = 0; step < 128; ++step) {
        if (operation.advance() == OutputProgress::Complete) {
            check(operation.complete() && !operation.effect(), "Completed window operation retained an effect");
            result.succeeded = operation.succeeded();
            return result;
        }
        check(operation.effect().has_value(), "Suspended window operation lacks a typed effect");
        const auto pending = operation.effect();
        check(operation.advance() == OutputProgress::Suspended && operation.effect() == pending,
              "Unacknowledged window effect advanced or changed");
        result.effects.push_back(pending->kind);
        operation.respond();
    }
    throw std::runtime_error("Window operation exceeded bounded fixture work");
}
Outcome run(Fixture &fixture, WindowCommand request) {
    auto operation = fixture.host.begin(std::move(request));
    return finish(*operation);
}
Outcome open(Fixture &fixture, unsigned id) { return run(fixture, command(WindowAction::Open, WindowId{id})); }
std::vector<WindowId> order(const WindowHost &host) {
    return {host.draw_order().begin(), host.draw_order().end()};
}
void glyph(TextOutput &output, unsigned encoded) {
    Request request;
    request.kind = RequestKind::Glyph;
    request.glyph = std::uint8_t(encoded);
    output.begin(request);
    for (unsigned i = 0; i < 64; ++i) {
        if (output.advance() == OutputProgress::Complete) return;
        output.respond();
    }
    throw std::runtime_error("Fixture glyph did not complete");
}
WindowState registers(unsigned seed) {
    return {{seed * 0x1020304u, seed * 0x3040506u, std::uint16_t(seed * 13)},
            {seed * 0x708090au, seed * 0xa0b0c0du, std::uint16_t(seed * 29)}};
}
void lifecycle(eb::GameVersion version) {
    const bool us = version == eb::GameVersion::US;
    Fixture f(version);
    f.state.dummy = registers(3);
    const auto first = open(f, 0);
    check(first.succeeded && first.effects == std::vector{WindowEffectKind::ClearPartyBlink},
          "Open omitted or reordered its world blink effect");
    check(f.host.slot_for({0}) == 0 && f.state.focus == WindowId{0} &&
              f.state.windows.at({0}) == (us ? WindowState{} : f.state.dummy),
          "First open lost regional register-copy semantics or first-free slot");
    check(f.output.window({0}) == OutputWindow{{26, 2}, {0, 0, false, false, false}, {}} &&
              f.host.metadata({0}).number_padding == 128,
          "Open did not initialize content geometry, text attributes and padding");
    open(f, 1); open(f, 10); open(f, 2);
    check(order(f.host) == std::vector<WindowId>{{10}, {0}, {1}, {2}},
          "Money window was not inserted at the back of source draw order");
    f.state.windows.at({0}) = registers(7);
    f.state.windows.at({2}) = registers(11);
    f.host.metadata({0}).number_padding = 6;
    f.host.metadata({0}).layout_columns = 9;
    f.host.metadata({0}).first_option = 4;
    f.host.metadata({0}).last_option = 2;
    f.host.menu_options()[4] = {0x1357, 9};
    f.host.menu_options()[9] = {0x2468, {}};
    f.host.menu_options()[10] = {0x5678, {}};
    f.output.set_style({0}, {1, 5, true, true, true});
    f.output.set_cursor({0}, {3, 0});
    const auto before = order(f.host);
    open(f, 0);
    check(order(f.host) == before && f.state.focus == WindowId{0},
          "Reopening brought a window to front or failed to change focus");
    check(f.state.windows.at({0}) == registers(us ? 7 : 11),
          "Reopen changed regional active/saved register inheritance");
    check(f.output.window({0}).cursor == TextCursor{} && f.output.window({0}).style == TextStyle{0, 0, false, false, false} &&
              f.host.metadata({0}).number_padding == 128 && f.host.metadata({0}).layout_columns == 1 &&
              f.host.metadata({0}).first_option == 0xffff && f.host.metadata({0}).selected_option == 0xffff,
          "Reopen retained stale cursor, font, attributes or menu metadata");
    check(!f.host.menu_options()[4].flags && f.host.menu_options()[4].next == 9 &&
              !f.host.menu_options()[9].flags && !f.host.menu_options()[9].next &&
              f.host.menu_options()[10].flags == 0x5678,
          "Reopen changed the menu chain links or released an unrelated option");
    f.state.windows.at({1}) = registers(13);
    f.host.metadata({1}).first_option = 10;
    f.host.metadata({1}).page_number = 8;
    run(f, command(WindowAction::Focus, WindowId{2}));
    const auto closed = run(f, command(WindowAction::Close, WindowId{1}));
    check(closed.effects == (us ? std::vector{WindowEffectKind::WindowTick} : std::vector<WindowEffectKind>{}) &&
              f.state.focus == WindowId{2} && !f.host.slot_for({1}) && !f.state.windows.contains({1}),
          "Closing a nonfocused window changed focus or regional effects");
    check(!f.host.menu_options()[10].flags && f.host.slot(1).first_option == 0xffff &&
              f.host.slot(1).page_number == 1,
          "Close did not release its menu chain and reset retained slot metadata");
    open(f, 3);
    check(f.host.slot_for({3}) == 1 && f.state.windows.at({3}) == registers(us ? 13 : 11),
          "Freed slot was not reused with source-faithful retained/copy registers");
    run(f, command(WindowAction::CloseFocus));
    check(!f.state.focus && !f.host.slot_for({3}), "Closing focus selected another window implicitly");
    const auto held_order = order(f.host);
    check(run(f, command(WindowAction::Close, WindowId{3})).effects.empty() && order(f.host) == held_order,
          "Closing an absent ID mutated the list or emitted a tick");
    run(f, command(WindowAction::Close, WindowId{10}));
    check(order(f.host) == std::vector<WindowId>{{0}, {2}}, "Closing the head broke the surviving list");
}
void capacity_and_clear(eb::GameVersion version) {
    const bool us = version == eb::GameVersion::US;
    Fixture f(version);
    for (unsigned id = 0; id < 8; ++id) check(open(f, id).succeeded, "An available source slot was refused");
    const auto old_order = order(f.host);
    const auto focus = f.state.focus;
    const auto failed = open(f, 8);
    check(!failed.succeeded && failed.effects.empty() && order(f.host) == old_order &&
              f.state.focus == focus && !f.state.windows.contains({8}),
          "Ninth-window failure mutated focus, registers or draw order");
    check(open(f, 0).succeeded, "Reopen incorrectly required a ninth slot");
    f.output.policy().instant = true;
    f.output.set_style({0}, {1, 3, true, false, true});
    glyph(f.output, us ? 0x71 : 0x61);
    const auto fraction = f.output.fractional_offset();
    const auto saturn = f.output.saturn_composition_active();
    const auto last = f.output.last_character();
    const auto cleared = run(f, command(WindowAction::ClearFocus));
    check(cleared.effects.empty() && f.output.window({0}).cursor == TextCursor{} &&
              f.output.window({0}).style == TextStyle{1, 3, true, false, true},
          "Clear focus changed style or emitted a world effect");
    check(f.output.fractional_offset() == (us ? 0u : fraction) &&
              f.output.saturn_composition_active() == (us ? false : saturn) &&
              f.output.last_character() == last,
          "Clear focus reset the wrong regional/shared composition fields");
    f.host.suppress_close_tick() = true;
    f.output.policy().instant = true;
    const auto suppressed = run(f, command(WindowAction::Close, WindowId{7}));
    check(suppressed.effects.empty() && f.output.policy().instant,
          "Suppressed close changed instant printing or emitted its per-window tick");
    f.host.suppress_close_tick() = false;
    f.host.set_pagination(WindowId{2}, 1);
    run(f, command(WindowAction::Close, WindowId{2}));
    check(!f.host.pagination_window(), "Closing pagination owner retained its active identity");
    const auto all = run(f, command(WindowAction::CloseAll));
    check(all.effects == (us ? std::vector{WindowEffectKind::WindowTick} : std::vector<WindowEffectKind>{}) &&
              f.host.draw_order().empty() && f.state.windows.empty() && !f.state.focus &&
              !f.host.suppress_close_tick(),
          "Close-all did not suppress individual ticks or clear its final shared flag");
}
void publication(eb::GameVersion version) {
    Fixture f(version);
    open(f, 0);
    f.output.policy().instant = true;
    glyph(f.output, version == eb::GameVersion::US ? 0x71 : 0x61);
    f.host.draw_windows();
    f.host.publish_scene();
    const auto frozen = f.host.frame();
    const auto pixels = frozen->pixels, priority = frozen->priority;
    check(frozen->width && frozen->height && pixels.size() == frozen->width * frozen->height,
          "Published window frame has invalid dimensions");
    for (unsigned i = 0; i < 8; ++i)
        check(f.host.frame()->pixels == pixels && f.host.frame()->priority == priority,
              "Read-only frame sampling repainted or advanced the scene");
    if (version == eb::GameVersion::US) {
        glyph(f.output, 0x71);
        check(f.host.frame()->pixels != pixels, "Published scene lost the live partial glyph-image identity");
        check(frozen->pixels == pixels && frozen->priority == priority,
              "Live glyph update mutated an immutable frame snapshot");
    }
    f.host.publish_palette(2);
    check(f.host.palette() == assets(version).windows->palette(2), "Window host lost imported palette publication");
    f.host.animate_palette(2, 4);
    const auto animated = assets(version).windows->animated_palette5(2, 4);
    check(std::equal(animated.begin(), animated.end(), f.host.palette().begin() + 20),
          "Palette animation did not update only the source palette-five slice");
}
void attribute_carry(eb::GameVersion version) {
    Fixture f(version);
    for (unsigned flags = 0; flags < 8; ++flags) {
        open(f, 0);
        f.output.policy().instant = true;
        f.output.set_style({0}, {1, 3, bool(flags & 1), bool(flags & 2), bool(flags & 4)});
        glyph(f.output, version == eb::GameVersion::US ? 0x71 : 0x61);
        const auto source = f.output.cells({0}).cells.front();
        f.host.draw_windows();
        f.host.publish_scene();
        const auto frame = f.host.frame();
        // Independent source descriptor arithmetic: adding priority can carry
        // into both flip bits, unlike setting priority on a flat pixel frame.
        const std::uint16_t descriptor = std::uint16_t((flags << 13) + 0x2000);
        for (unsigned y = 0; y < 8; ++y) for (unsigned x = 0; x < 8; ++x) {
            const auto pixel = source.image->pixels[(descriptor & 0x8000 ? 7-y : y)*8 +
                                                    (descriptor & 0x4000 ? 7-x : x)];
            const unsigned at = (8+y)*256+8+x;
            check(frame->pixels[at] == (pixel ? 12+pixel : 0) &&
                      frame->priority[at] == (pixel ? bool(descriptor & 0x2000) : false),
                  "Window composition did not preserve full descriptor-addition carry");
        }
    }
}
WindowCommand title(unsigned id, unsigned count, std::uint8_t character = 0x71) {
    auto request = command(WindowAction::Title, WindowId{id});
    request.title.assign(count, character);
    request.title_limit = count;
    return request;
}
void titles(eb::GameVersion version) {
    const bool us = version == eb::GameVersion::US;
    const unsigned capacity = us ? 5 : 4;
    Fixture f(version);
    for (unsigned id = 0; id <= capacity; ++id) open(f, id);
    for (unsigned id = 0; id < capacity; ++id) {
        const auto result = run(f, title(id, 4));
        check(result.succeeded && f.host.metadata({id}).title_owner == id &&
                  result.effects == (us ? std::vector{WindowEffectKind::FrameWait, WindowEffectKind::FrameWait}
                                        : std::vector<WindowEffectKind>{}),
              "Title ownership or regional frame-wait ordering changed");
    }
    const auto exhausted = run(f, title(capacity, 3));
    check(!exhausted.succeeded && exhausted.effects.empty() && !f.host.metadata({capacity}).title_owner &&
              f.host.metadata({capacity}).title == std::vector<std::uint8_t>(3, 0x71),
          "Exhausted title pool invented art/effects or discarded the copied title bytes");
    run(f, command(WindowAction::Close, WindowId{1}));
    check(run(f, title(capacity, 2)).succeeded && f.host.metadata({capacity}).title_owner == 1,
          "Closed title identity was not reused in source order");
    const auto empty = run(f, title(0, 0));
    check(empty.succeeded && empty.effects == (us ? std::vector{WindowEffectKind::FrameWait, WindowEffectKind::FrameWait}
                                                   : std::vector<WindowEffectKind>{}),
          "Empty title skipped the source alignment/frame-wait path");
    auto bounded = title(0, 8); bounded.title_limit = 3;
    run(f, bounded);
    check(f.host.metadata({0}).title.size() == 3, "Title limit did not truncate before its terminator");
    auto too_long = title(0, us ? 22 : 16);
    rejects([&] { auto operation = f.host.begin(too_long); finish(*operation); },
            "Title overran its source record capacity");
}
std::vector<std::uint8_t> rectangle(const TextFrame &frame, unsigned x, unsigned y, unsigned width,
                                  unsigned height) {
    std::vector<std::uint8_t> result;
    for (unsigned row = 0; row < height; ++row)
        result.insert(result.end(), frame.pixels.begin() + (y+row)*frame.width+x,
                      frame.pixels.begin() + (y+row)*frame.width+x+width);
    return result;
}
void title_publication() {
    Fixture f(eb::GameVersion::US);
    open(f, 0); open(f, 1);
    run(f, title(0, 4)); run(f, title(1, 4));
    f.host.draw_windows(); f.host.publish_scene();
    const auto old = f.host.frame();
    const auto neighbor = rectangle(*old, 16, 32, 24, 8);
    // Source copies strlen columns from the brush, even though 21 Tiny
    // characters occupy only 16 drawn columns. The five extra publications
    // overwrite the next title owner's live artwork, without a scene redraw.
    run(f, title(0, 21, 0x72));
    check(rectangle(*f.host.frame(), 16, 32, 24, 8) != neighbor,
          "Long US title did not update the adjacent live title identity");
    check(rectangle(*old, 16, 32, 24, 8) == neighbor,
          "Title publication mutated a previously sampled frame");
    const auto first = rectangle(*f.host.frame(), 16, 0, 24, 8);
    run(f, command(WindowAction::Close, WindowId{0}));
    open(f, 2); run(f, title(2, 4, 0x71));
    check(f.host.metadata({2}).title_owner == 0 &&
              rectangle(*f.host.frame(), 16, 0, 24, 8) != first,
          "Released title owner lost its published live artwork identity");
}
std::shared_ptr<const Program> program(eb::GameVersion version, std::vector<std::uint8_t> bytes) {
    return std::make_shared<const Program>(version, std::vector<ContentBlock>{{0, 0, std::move(bytes)}},
                                          std::vector<Location>{{0, 0}});
}
Progress next(Conversation &conversation) {
    for (unsigned i = 0; i < 10000; ++i) {
        const auto result = conversation.advance(1);
        if (result != Progress::BudgetExhausted) return result;
    }
    throw std::runtime_error("Conversation did not reach a bounded callback");
}
void saved_attributes(eb::GameVersion version) {
    Fixture f(version); open(f, 0); open(f, 1);
    run(f, command(WindowAction::Focus, WindowId{0}));
    f.output.policy().instant = true;
    f.output.set_style({0}, {1, 4, true, true, false});
    f.host.metadata({0}).number_padding = 7;
    glyph(f.output, version == eb::GameVersion::US ? 0x71 : 0x61);
    const auto saved = f.host.save_attributes();
    Conversation parent(program(version, {0x18, 2, 0x10, 1, 2}), f.host);
    parent.start(EntryId{0});
    check(next(parent) == Progress::Suspended && std::get<Request>(*parent.event()).kind == RequestKind::Pause,
          "Save-attributes stream did not reach its explicit callback");
    f.output.set_style({0}, {0, 2, false, false, true});
    f.output.set_cursor({0}, {5, 0});
    f.host.metadata({0}).number_padding = 2;
    auto focus = f.host.begin_nested(command(WindowAction::Focus, WindowId{1}), parent);
    finish(*focus);
    f.output.set_style({1}, {1, 0, false, false, false});
    Conversation child(program(version, {std::uint8_t(version == eb::GameVersion::US ? 0x71 : 0x61), 2}), f.host);
    child.start_nested(EntryId{0}, parent);
    check(next(child) == Progress::Finished, "Instant child unexpectedly emitted a host effect");
    const auto fraction = f.output.fractional_offset();
    const auto saturn = f.output.saturn_composition_active();
    const auto last = f.output.last_character();
    check(fraction != 0, "Attribute restoration fixture did not retain a partial composition column");
    parent.respond();
    check(next(parent) == Progress::Finished && f.host.save_attributes() == saved,
          "Stream return did not restore focus, cursor, style and number padding");
    check(f.output.fractional_offset() == fraction && f.output.saturn_composition_active() == saturn &&
              f.output.last_character() == last,
          "Attribute restoration aligned or reset shared child composition");
}
void close_all_callback() {
    Fixture f(eb::GameVersion::US); open(f, 0);
    f.output.policy().instant = true; glyph(f.output, 0x71);
    auto closing = f.host.begin(command(WindowAction::CloseAll));
    check(closing->advance() == OutputProgress::Suspended &&
              closing->effect()->kind == WindowEffectKind::WindowTick && f.host.draw_order().empty(),
          "Close-all did not suspend after removing its original windows");
    const auto pending = closing->effect();
    f.output.policy().instant = true;
    Conversation child(program(eb::GameVersion::US, {0x18, 1, 1, 0x71, 2}), f.host);
    child.start_nested(EntryId{0}, *closing);
    check(next(child) == Progress::Suspended && std::get<WindowEffect>(*child.event()).kind ==
              WindowEffectKind::ClearPartyBlink,
          "Close-all callback did not yield its nested window's world effect");
    rejects([&] { closing->respond(); }, "Close-all resumed before its child callback returned");
    child.respond();
    check(next(child) == Progress::Finished && closing->effect() == pending,
          "Nested window creation consumed the close-all callback");
    const auto sampled = f.output.frame({1});
    const auto old_pixels = sampled->pixels;
    const auto image = f.output.cells({1}).cells.front().image;
    const auto fraction = f.output.fractional_offset();
    finish(*closing);
    check(f.state.focus == WindowId{1} && f.host.slot_for({1}) && !f.host.suppress_close_tick() &&
              f.output.fractional_offset() == fraction && f.output.frame({1})->pixels == old_pixels,
          "Final close-all reset discarded callback-created window content or partial brush");
    // C1008E resets reusable-image marks *after* its world tick. A callback's
    // newly printed image must be reusable, while its visible cell keeps that
    // same identity. This fails if marks are reset before the callback instead.
    open(f, 2); glyph(f.output, 0x72);
    check(f.output.cells({2}).cells.front().image == image && f.output.frame({1})->pixels != old_pixels,
          "Close-all did not make callback-created live glyph images reusable");
    check(sampled->pixels == old_pixels, "Image reuse changed an immutable callback frame");
}
void nested_close_footer() {
    for (unsigned character : {0x20u, 0x22u, 0x2fu})
        for (bool all : {false, true})
            for (std::optional<unsigned> ambient : {std::optional<unsigned>{}, {0}, {1}, {0xffff}, {0x3456}}) {
                Fixture f(eb::GameVersion::US); open(f, 0); open(f, 1);
                run(f, command(WindowAction::Focus, WindowId{0}));
                f.state.word_wrap = false;
                f.state.unfocused_register_slot = ambient;
                f.output.policy().instant = false;
                f.output.policy().sound_mode = 3;
                f.output.policy().text_speed = 0;
                Conversation parent(program(eb::GameVersion::US, {std::uint8_t(character), 2}), f.host);
                parent.start(EntryId{0});
                check(next(parent) == Progress::Suspended &&
                          std::get<TextEffect>(*parent.event()).kind == TextEffectKind::WindowTick,
                      "Special character did not reach its inner world tick");
                auto close = f.host.begin_nested(command(all ? WindowAction::CloseAll : WindowAction::CloseFocus), parent);
                const auto result = finish(*close);
                check(result.succeeded && !f.state.focus && !f.host.slot_for({0}) &&
                          bool(f.host.slot_for({1})) == !all,
                      "Nested close did not leave the intended absent-focus state");
                f.output.acknowledge_redraw();
                parent.respond();
                if (!ambient) {
                    rejects([&] { next(parent); }, "Unfocused footer invented an unspecified ambient lookup word");
                    continue;
                }
                check(next(parent) == Progress::Suspended &&
                          std::get<TextEffect>(*parent.event()).kind == TextEffectKind::WindowTick,
                      "Closing focus interrupted the outer special-character footer cadence");
                check(f.output.redraw_pending() == (*ambient != (all ? 0xffffu : 1u)),
                      "Unfocused footer compared a window payload instead of the ambient lookup word");
                parent.respond();
                check(next(parent) == Progress::Finished,
                      "Outer character footer did not finish after its original remaining tick");
            }
}
void ownership(eb::GameVersion version) {
    Fixture f(version); open(f, 0);
    auto source = program(version, {0x71, 4, 1, 0, 2});
    Conversation parent(source, f.host);
    f.output.policy().instant = false; f.output.policy().text_speed = 0; f.output.policy().sound_mode = 3;
    parent.start(EntryId{0});
    check(next(parent) == Progress::Suspended && std::holds_alternative<TextEffect>(*parent.event()) &&
              std::get<TextEffect>(*parent.event()).kind == TextEffectKind::WindowTick,
          "Nested window fixture did not suspend at a glyph's world tick");
    const auto pending = parent.event();
    auto child = f.host.begin_nested(command(WindowAction::Open, WindowId{1}), parent);
    rejects([&] { parent.respond(); }, "Parent acknowledged its world tick before child window service returned");
    rejects([&] { parent.advance(); }, "Parent ran while a child window operation owned output");
    rejects([&] { f.output.advance(); }, "Raw output bypassed window operation ownership");
    check(finish(*child).succeeded && parent.event() == pending && !f.state.flag(1),
          "Window callback consumed the parent's event or following script command");
    parent.respond();
    check(next(parent) == Progress::Finished && f.state.flag(1) && f.state.focus == WindowId{1},
          "Parent did not resume once after nested window creation");
    Fixture abandoned(version); open(abandoned, 0);
    const auto before = abandoned.output.frame({0});
    { auto operation = abandoned.host.begin(command(WindowAction::Open, WindowId{1})); }
    rejects([&] { abandoned.output.advance(); }, "Abandoned window operation did not poison output execution");
    check(abandoned.output.frame({0})->pixels == before->pixels,
          "Abandoned operation invalidated already-published pixel sampling");
}
} // namespace
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            lifecycle(version);
            capacity_and_clear(version);
            publication(version);
            attribute_carry(version);
            titles(version);
            saved_attributes(version);
            ownership(version);
        }
        title_publication();
        close_all_callback();
        nested_close_footer();
        std::cout << "PASS " << checks << " native window lifecycle, publication, title and ownership checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
