#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/text_animations.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "native_dialogue_test_assets.hpp"

#include <algorithm>
#include <functional>
#include <iostream>
#include <stdexcept>

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
struct Resources {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const WindowInitializationResources> initialization;
    std::shared_ptr<const TextAnimationResources> animations, empty;
    explicit Resources(GameVersion version) {
        dialogue_test_assets::WindowInput input(version);
        dialogue_test_assets::add_text_fonts(input);
        for (unsigned id = 0; id < input.count; ++id) {
            input.put(input.configs + id * 8, 0); input.put(input.configs + id * 8 + 2, 0);
            input.put(input.configs + id * 8 + 4, 22); input.put(input.configs + id * 8 + 6, 10);
        }
        const auto first = version == GameVersion::US ? 0x3e84eu : 0x3e432u;
        for (unsigned i = 0; i < 9; ++i) {
            input.put(first + i * 2, 0x100 + i * 2);
            input.put(first + 20 + i * 2, 0x140 - i);
        }
        input.put(first + 18, 0);
        fonts = FontResources::import(input.image, version);
        windows = input.import();
        initialization = WindowInitializationResources::import(input.image, version);
        animations = TextAnimationResources::import(input.image, version);
        input.put(first, 0);
        empty = TextAnimationResources::import(input.image, version);
    }
};
const Resources &resources(GameVersion version) {
    static const Resources us(GameVersion::US), jp(GameVersion::JP);
    return version == GameVersion::US ? us : jp;
}
std::shared_ptr<const Program> program(GameVersion version, std::vector<std::uint8_t> root,
                                     std::vector<std::uint8_t> child = {2}) {
    return std::make_shared<Program>(version,
        std::vector<ContentBlock>{{0, 0, std::move(root)}, {1, 0, std::move(child)}},
        std::vector<Location>{{0, 0}, {1, 0}});
}
struct Fixture {
    State state;
    TextOutput output;
    WindowHost windows;
    PromptHost prompts;
    std::shared_ptr<WindowGraphics> graphics;
    explicit Fixture(GameVersion version, bool configure = true, bool artwork = false)
        : output(resources(version).fonts, state), windows(resources(version).windows, state, output),
          prompts(windows) {
        if (artwork) {
            graphics = std::make_shared<WindowGraphics>(resources(version).initialization, output);
            windows.set_graphics(graphics);
        }
        window(WindowAction::Open, {0});
        output.policy().instant = true; output.policy().text_speed = 0;
        output.policy().sound_mode = 3; output.policy().character_padding = 0;
        state.word_wrap = false; state.unfocused_register_slot = 0;
        if (configure) windows.animations().configure(resources(version).animations);
    }
    void window(WindowAction action, WindowId id) {
        auto operation = windows.begin({action, id, {}, 0});
        for (unsigned i = 0; i < 100; ++i) {
            if (operation->advance() == OutputProgress::Complete) return;
            operation->respond();
        }
        throw std::runtime_error("Fixture window operation did not terminate");
    }
};
bool world(const PromptEvent &event) {
    if (const auto *effect = std::get_if<WindowEffect>(&event)) {
        check(effect->kind == WindowEffectKind::WindowTick, "Animation emitted a frame-only or unrelated window effect");
        return false;
    }
    check(std::get<PromptEffect>(event).kind == PromptEffectKind::WorldTick,
          "Animation did not expose the distinct C12E42 world service");
    return true;
}
using Hook = std::function<void(unsigned, const PromptEvent &)>;
std::vector<bool> finish(Fixture &fixture, TextAnimations::Operation &operation,
                         Hook hook = {}, unsigned budget = 1) {
    std::vector<bool> trace;
    for (unsigned step = 0; step < 1000; ++step) {
        const auto progress = operation.advance(budget);
        if (progress == Progress::Finished) {
            check(operation.complete() && !operation.event(), "Completed animation retained an event");
            return trace;
        }
        if (progress == Progress::BudgetExhausted) continue;
        const auto event = operation.event();
        check(bool(event), "Animation suspended without a typed effect");
        const auto cursor = fixture.state.focus ? fixture.output.window(*fixture.state.focus).cursor : TextCursor{};
        const auto pixels = fixture.windows.frame()->pixels;
        check(operation.advance(0) == Progress::Suspended && operation.advance(4096) == Progress::Suspended &&
                  operation.event() == event && fixture.windows.frame()->pixels == pixels,
              "Pending effect or frame sampling advanced animation");
        if (fixture.state.focus)
            check(fixture.output.window(*fixture.state.focus).cursor == cursor, "Pending animation printed twice");
        trace.push_back(world(*event));
        if (hook) hook(unsigned(trace.size() - 1), *event);
        operation.respond();
    }
    throw std::runtime_error("Animation exceeded its bounded fixture work");
}
void sequence_and_policy(GameVersion version) {
    for (unsigned selector : {1u, 2u}) for (bool instant : {false, true}) for (unsigned budget : {1u, 4096u}) {
        Fixture fixture(version);
        fixture.output.set_style({0}, {std::uint16_t(version == GameVersion::US ? 4 : 0xffff), 6, true, true, true});
        fixture.output.policy().instant = instant;
        fixture.output.policy().text_speed = 0xffff;
        fixture.output.policy().character_padding = 255;
        const auto initial_brush = fixture.output.composition_snapshot();
        const auto before = fixture.output.window({0});
        const auto published = fixture.windows.frame()->pixels;
        auto operation = fixture.windows.animations().begin(std::uint8_t(selector));
        check(operation->advance(0) == Progress::BudgetExhausted && fixture.output.window({0}) == before,
              "Zero budget changed animation attributes or cursor");
        unsigned glyphs = 0, waits = 0;
        const auto trace = finish(fixture, *operation, [&](unsigned, const PromptEvent &event) {
            if (world(event)) {
                ++waits;
                check(glyphs == 4 && fixture.output.window({0}).cursor == TextCursor{4, 0},
                      "Middle world wait printed or occurred at the wrong source boundary");
            } else {
                ++glyphs;
                const auto cells = fixture.output.cells({0});
                const auto expected = resources(version).animations->sequence(std::uint8_t(selector))[glyphs - 1];
                const auto &upper = cells.cells[glyphs - 1];
                const auto &lower = cells.cells[cells.geometry.columns + glyphs - 1];
                check(upper.fixed_character == expected && lower.fixed_character == expected &&
                          !upper.lower_half && lower.lower_half && upper.style.palette == 3 &&
                          !upper.style.priority && !upper.style.flip_horizontal && !upper.style.flip_vertical,
                      "Animation lost wide fixed identity, full attribute replacement or lower glyph half");
                check(fixture.output.window({0}).cursor == TextCursor{std::uint16_t(glyphs), 0},
                      "Direct fixed animation used variable-font metrics or ordinary text padding");
            }
            check(fixture.output.composition_snapshot() == initial_brush &&
                      fixture.windows.frame()->pixels == published,
                  "Fixed animation reset composition or implicitly published the scene");
        }, budget);
        check(glyphs == 9 && waits == (selector == 2 ? 8u : 0u), "Animation source effect count differs");
        for (unsigned i = 0; i < trace.size(); ++i)
            check(trace[i] == (selector == 2 && i >= 4 && i < 12), "Window/world effect order differs");
        const auto style = fixture.output.window({0}).style;
        check(style.palette == 0 && !style.priority && !style.flip_horizontal && !style.flip_vertical &&
                  style.font == before.style.font && fixture.output.policy().instant == instant,
              "Animation restored entry attributes, changed font or changed instant policy");
        check(operation->advance(0) == Progress::Finished, "Finished animation reacquired execution");
        rejects([&] { operation->respond(); }, "Finished animation accepted a stale response");
    }
}
void noops_and_configuration(GameVersion version) {
    Fixture fixture(version, false);
    fixture.output.set_style({0}, {1, 6, true, true, true});
    const auto original = fixture.output.window({0});
    const auto brush = fixture.output.composition_snapshot();
    for (unsigned selector = 0; selector < 256; ++selector) {
        if (selector == 1 || selector == 2) continue;
        auto operation = fixture.windows.animations().begin(std::uint8_t(selector));
        check(finish(fixture, *operation).empty() && fixture.output.window({0}) == original &&
                  fixture.output.composition_snapshot() == brush,
              "Unconfigured source no-op changed style, pixels, brush or emitted effects");
    }
    for (unsigned selector : {1u, 2u})
        rejects([&] { fixture.windows.animations().begin(std::uint8_t(selector)); },
                "Valid animation silently succeeded without imported resources");
    rejects([&] { fixture.windows.animations().configure({}); }, "Missing resource was accepted");
    const auto other = version == GameVersion::US ? GameVersion::JP : GameVersion::US;
    rejects([&] { fixture.windows.animations().configure(resources(other).animations); },
            "Animation resources crossed game regions");
    fixture.windows.animations().configure(resources(version).empty);
    auto empty = fixture.windows.animations().begin(1);
    check(finish(fixture, *empty).empty() && fixture.output.window({0}).style.palette == 0 &&
              !fixture.output.window({0}).style.priority && fixture.output.window({0}).cursor == original.cursor,
          "Empty first sequence skipped source attribute setters or invented a glyph");
    fixture.windows.animations().configure(resources(version).animations);
    auto operation = fixture.windows.animations().begin(1);
    rejects([&] { fixture.windows.animations().configure(resources(version).empty); },
            "Resource reconfiguration replaced an active sequence");
    rejects([&] { fixture.output.begin_glyph(0x61); }, "Raw printing bypassed animation ownership");
    finish(fixture, *operation);
}
void live_focus_and_style(GameVersion version) {
    Fixture fixture(version);
    fixture.window(WindowAction::Open, {1});fixture.window(WindowAction::Focus, {0});
    fixture.output.set_style({1}, {1, 5, true, true, false});
    auto operation = fixture.windows.animations().begin(1);
    unsigned ticks = 0;
    finish(fixture, *operation, [&](unsigned, const PromptEvent &) {
        ++ticks;
        if (ticks == 1) fixture.state.focus = WindowId{1};
        else if (ticks == 2) {
            const auto cell = fixture.output.cells({1}).cells[0];
            check(cell.style.palette == 5 && cell.style.priority && cell.style.flip_horizontal &&
                      cell.fixed_character == 0x102, "Animation captured first focus/style across callback");
            fixture.output.set_style({1}, {std::uint16_t(version == GameVersion::US ? 4 : 0xffff), 2, false, false, true});
        } else {
            const auto cell = fixture.output.cells({1}).cells[ticks - 2];
            check(cell.style.palette == 2 && cell.style.flip_vertical && cell.fixed_character == 0x100 + (ticks - 1) * 2,
                  "Animation re-applied start palette or cached callback font/style");
        }
    });
    check(fixture.output.window({0}).style.palette == 3 && fixture.output.window({0}).cursor == TextCursor{1, 0} &&
              fixture.output.window({1}).style.palette == 0 && fixture.output.window({1}).cursor == TextCursor{8, 0},
          "Animation final zero targeted entry focus rather than current focus");
    Fixture absent(version);
    absent.state.focus.reset();
    const auto before = absent.output.frame({0});const auto style = absent.output.window({0}).style;
    auto missing = absent.windows.animations().begin(2);
    const auto trace = finish(absent, *missing);
    check(trace.size() == 17 && absent.output.frame({0})->pixels == before->pixels &&
              absent.output.window({0}).style == style && absent.output.window({0}).cursor == TextCursor{},
          "Absent-focus fixed animation wrote ambient/retained canvas or skipped ticks");
}
void finish_conversation(Conversation &conversation, unsigned budget = 1, std::uint16_t pressed = 0) {
    for (unsigned i = 0; i < 2000; ++i) {
        const auto progress = conversation.advance(budget);
        if (progress == Progress::Finished) return;
        if (progress == Progress::Suspended) conversation.respond({0, pressed, 0});
    }
    throw std::runtime_error("Child conversation did not terminate");
}
void nested_ownership(GameVersion version) {
    Fixture fixture(version);
    auto scripts = program(version, {2}, {0x1f, 0x60, 1, 4, 0x55, 0, 2});
    auto parent = fixture.windows.animations().begin(2);
    rejects([&] { fixture.windows.animations().begin_nested(1, *parent); },
            "Budget-only parent allowed a world callback");
    unsigned index = 0;
    finish(fixture, *parent, [&](unsigned event_index, const PromptEvent &) {
        if (event_index != 0 && event_index != 4) return;
        ++index;
        const auto original = parent->event();
        auto child = fixture.windows.animations().begin_nested(1, *parent);
        rejects([&] { parent->advance(); }, "Parent advanced beneath active child animation");
        rejects([&] { parent->respond(); }, "Parent acknowledged beneath active child animation");
        finish(fixture, *child);
        check(parent->event() == original, "Child animation replaced parent's pending event");
        Conversation text(scripts, fixture.prompts);text.start_nested(EntryId{1}, *parent);
        finish_conversation(text, 1, 0x80);
        check(fixture.state.flag(0x55) && fixture.windows.prompt_state().pressed == 0x80,
              "Nested prompt/text did not finish or publish shared pressed state");
        check(parent->event() == original, "Child dialogue replaced parent pending event");
    });
    check(index == 2 && fixture.windows.prompt_state().pressed == 0x80,
          "Parent no-argument responses erased nested input or skipped world callback");

    Fixture foreign(version);
    auto one = fixture.windows.animations().begin(1);
    while (one->advance(1) == Progress::BudgetExhausted) {}
    rejects([&] { foreign.windows.animations().begin_nested(1, *one); },
            "Nested animation crossed output owners");
    finish(fixture, *one);
}
void conversation_and_reopen(GameVersion version) {
    Fixture fixture(version);
    auto scripts = program(version, {0x18, 7, 0, 0, 0, 0x80, 1, 0x1c, 8, 2, 0x0f, 2},
                           {0x18, 0, 0x18, 1, 1, 0x1f, 0x31, 4, 0x56, 0, 2});
    fixture.state.window().active.argument = 0x7fffffff;
    fixture.state.window().active.working = 0xdeadbeef;
    Conversation parent(scripts, fixture.windows);parent.start(EntryId{0});
    unsigned window_ticks = 0, world_ticks = 0;
    bool nested = false;
    for (unsigned step = 0; step < 2000; ++step) {
        const auto progress = parent.advance(1);
        if (progress == Progress::Finished) break;
        if (progress == Progress::BudgetExhausted) continue;
        const auto event = parent.event();
        if (const auto *effect = std::get_if<WindowEffect>(&*event)) {
            check(effect->kind == WindowEffectKind::WindowTick, "Animation bridge emitted unrelated window service");
            ++window_ticks;
            if (!nested) {
                nested = true;
                check(fixture.state.window().active.working == 0,
                      "Unsigned comparison before animation did not execute");
                const auto old = fixture.output.frame({0});const auto frozen = old->pixels;
                Conversation child(scripts, fixture.windows);child.start_nested(EntryId{1}, parent);
                finish_conversation(child);
                check(fixture.state.focus == WindowId{1} && !fixture.windows.slot_for({0}) &&
                          fixture.state.flag(0x56) && old->pixels == frozen,
                      "Callback close/reopen failed or mutated prior immutable frame");
                check(parent.event() == event, "Reopening callback lost parent continuation");
            }
        } else if (std::holds_alternative<PromptEffect>(*event)) ++world_ticks;
        else throw std::runtime_error("Animation remained an unhandled runtime request or ordinary glyph effect");
        fixture.windows.prompt_state().pressed = 0x1234;parent.respond();
    }
    check(parent.finished() && window_ticks == 9 && world_ticks == 8 &&
              fixture.windows.prompt_state().pressed == 0x1234 && fixture.state.window().active.secondary == 1,
          "Conversation bridge swallowed following control, world ticks or shared input");
    check(fixture.output.window({1}).cursor == TextCursor{8, 0} &&
              fixture.output.window({1}).style.font == 1 && fixture.output.window({1}).style.palette == 0,
          "Animation held stale canvas references across callback close/reopen");
}
void artwork_alias(GameVersion version) {
    Fixture fixture(version, true, true);
    const auto scripts = program(version, {0x1c, 8, 1, 2});
    Conversation parent(scripts, fixture.windows);parent.start(EntryId{0});
    while (parent.advance(1) == Progress::BudgetExhausted) {}
    check(parent.event() && std::holds_alternative<WindowEffect>(*parent.event()),
          "Animation did not yield before artwork callback");
    const auto cells = fixture.output.cells({0});const auto old = fixture.output.frame({0});const auto pixels = old->pixels;
    check(std::all_of(cells.cells[0].image->pixels.begin(), cells.cells[0].image->pixels.end(),
                      [](auto pixel) { return pixel == 0; }), "Unpublished animation art bypassed shared atlas");
    const std::array<std::uint8_t, 5> name{0x61, 0x61, 0x61, 0x61, 0};
    PartyNameInputs names;for (auto &entry : names.names) entry = name;
    fixture.graphics->prepare_nested(names, 2, parent);
    check(fixture.output.frame({0})->pixels == pixels, "Preparation published animation art prematurely");
    auto publication = fixture.graphics->begin_publication_nested(
        version == GameVersion::US ? ArtworkPublication::GeneratedThenCommon : ArtworkPublication::All, parent);
    while (publication->advance(1) != Progress::Finished) {
        if (publication->effect()) publication->respond();
    }
    const auto expected = fixture.graphics->prepared_artwork()[0x200];
    check(cells.cells[0].image->pixels == expected && fixture.output.cells({0}).cells[0].image == cells.cells[0].image &&
              old->pixels == pixels && fixture.output.frame({0})->pixels != pixels,
          "Animation fixed identity did not follow artwork publication or froze old frame incorrectly");
    parent.respond();finish_conversation(parent);
}
void nested_from_glyph_and_noops(GameVersion version) {
    Fixture fixture(version);
    fixture.output.policy().instant = false;
    fixture.output.policy().sound_mode = 1;
    const auto scripts = program(version, {0x61, 4, 0x57, 0, 2});
    Conversation parent(scripts, fixture.windows);parent.start(EntryId{0});
    rejects([&] { fixture.windows.animations().begin_nested(1, parent); },
            "Animation entered a conversation without an actual callback");
    unsigned sounds = 0, ticks = 0;
    for (unsigned i = 0; i < 1000 && !parent.finished(); ++i) {
        const auto progress = parent.advance(1);
        if (progress != Progress::Suspended) continue;
        const auto event = parent.event();
        const auto *text = std::get_if<TextEffect>(&*event);
        check(text, "Ordinary glyph unexpectedly emitted a different parent effect");
        if (text->kind == TextEffectKind::TextSound) {
            ++sounds;
            rejects([&] { fixture.windows.animations().begin_nested(1, parent); },
                    "Audio service incorrectly allowed nested animation");
        } else {
            ++ticks;
            auto animation = fixture.windows.animations().begin_nested(1, parent);
            check(finish(fixture, *animation).size() == 9,
                  "Nested animation under active glyph lost its full sequence");
            check(parent.event() == event, "Nested animation overwrote suspended glyph continuation");
        }
        parent.respond();
    }
    check(parent.finished() && sounds == 1 && ticks == 1 && fixture.state.flag(0x57),
          "Glyph parent failed to resume after nested animation");

    Fixture unconfigured(version, false);
    const auto noops = program(version, {0x1c, 8, 0, 0x1c, 8, 0xff, 0x1c, 8, 3, 4, 0x58, 0, 2});
    Conversation conversation(noops, unconfigured.windows);conversation.start(EntryId{0});
    for (unsigned i = 0; i < 1000 && !conversation.finished(); ++i)
        check(conversation.advance(1) != Progress::Suspended,
              "No-op animation required resources or escaped as an external request");
    check(conversation.finished() && unconfigured.state.flag(0x58) &&
              unconfigured.output.window({0}).cursor == TextCursor{},
          "No-op animation broke the following authored command");
}
void poison(GameVersion version) {
    Fixture fixture(version);
    auto parent = fixture.windows.animations().begin(1);
    while (parent->advance(1) == Progress::BudgetExhausted) {}
    const auto old = fixture.output.frame({0});const auto pixels = old->pixels;
    auto child = fixture.windows.animations().begin_nested(2, *parent);
    child.reset();
    rejects([&] { parent->advance(); }, "Abandoned child silently resumed parent animation");
    rejects([&] { parent->respond(); }, "Poisoned parent acknowledged an old effect");
    rejects([&] { fixture.windows.animations().begin(0); }, "No-op animation bypassed poisoned owner");
    rejects([&] { fixture.windows.animations().configure(resources(version).animations); },
            "Reconfiguration bypassed poisoned owner");
    check(old->pixels == pixels && fixture.output.frame({0})->pixels == pixels,
          "Cancellation rolled back or invalidated readable published pixels");
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            sequence_and_policy(version); noops_and_configuration(version); live_focus_and_style(version);
            nested_ownership(version); conversation_and_reopen(version); artwork_alias(version);
            nested_from_glyph_and_noops(version); poison(version);
        }
        std::cout << "PASS native text-animation services: " << checks << " checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n'; return 1;
    }
}
