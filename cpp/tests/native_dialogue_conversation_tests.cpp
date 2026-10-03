#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>
#include <type_traits>

namespace {
using namespace eb::native::dialogue;
static_assert(!std::is_copy_constructible_v<Conversation> && !std::is_move_constructible_v<Conversation>);
unsigned checks = 0;
void require(bool ok, const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F f, const char* message) {
    bool rejected = false;
    try { f(); } catch (const std::exception&) { rejected = true; }
    require(rejected, message);
}
// A deterministic imported-art fixture. Four-pixel ink strokes and four-pixel
// advances make word placement visible without embedding any original artwork.
std::shared_ptr<const FontResources> make_fonts(eb::GameVersion version) {
    const bool jp = version == eb::GameVersion::JP;
    std::vector<std::uint8_t> image(0x300000), fixed(jp ? 0x2a00 : 0x1a00, 0xff);
    const auto put = [&](unsigned at, unsigned value, unsigned size) {
        while (size--) { image[at++] = value; value >>= 8; }
    };
    for (unsigned character : jp ? std::vector<unsigned>{0x71,0x72,0x73} : std::vector<unsigned>{0x2f}) {
        const unsigned top = (character / 16 * 32 + character % 16) * 16;
        for (unsigned y = 0; y < 16; ++y) fixed[top + y / 8 * 256 + y % 8 * 2 + 1] = 0x0f;
    }
    const unsigned literal = jp ? 4138 : 1803;
    unsigned at = 0x200000, out = 0;
    while (out < literal) {
        const auto count = std::min(32u, literal - out);
        image[at++] = count - 1;
        for (unsigned i = 0; i < count; ++i) image[at++] = fixed[out++];
    }
    while (out < fixed.size()) {
        const auto count = std::min(1024u, unsigned(fixed.size()) - out);
        if (count <= 32) image[at++] = 0x20 | (count - 1);
        else { image[at++] = 0xe4 | ((count - 1) >> 8); image[at++] = count - 1; }
        image[at++] = 255; out += count;
    }
    image[at++] = 255;
    require(at == 0x200000 + (jp ? 0x10c2 : 0x754), "Conversation font fixture extent is invalid");
    if (jp) {
        std::fill_n(image.begin() + 0x3ebdd, 62, 4);
        std::fill_n(image.begin() + 0x20209d, 4096, 255);
    } else {
        constexpr std::array<unsigned,5> widths{0x210c7a,0x201359,0x2118da,0x211f3a,0x21229a};
        constexpr std::array<unsigned,5> graphics{0x210cda,0x2013b9,0x21193a,0x211f9a,0x2122fa};
        constexpr std::array<unsigned,5> strides{32,32,16,8,32}, heights{16,16,16,8,16};
        for (unsigned font = 0; font < 5; ++font) {
            put(0x3f054 + font * 12, widths[font] + 0xc00000, 4);
            put(0x3f058 + font * 12, graphics[font] + 0xc00000, 4);
            put(0x3f05c + font * 12, strides[font], 2); put(0x3f05e + font * 12, heights[font], 2);
            std::fill_n(image.begin() + widths[font], 96, 4);
            std::fill_n(image.begin() + graphics[font], 95 * strides[font] + 34 * heights[font], 255);
            for (unsigned index = 0; index < 96; ++index)
                std::fill_n(image.begin() + graphics[font] + index * strides[font], heights[font], 0x0f);
        }
    }
    return FontResources::import(image, version);
}
std::shared_ptr<const FontResources> fonts(eb::GameVersion version) {
    static const auto us = make_fonts(eb::GameVersion::US), jp = make_fonts(eb::GameVersion::JP);
    return version == eb::GameVersion::JP ? jp : us;
}
std::shared_ptr<const Program> program(std::vector<std::uint8_t> bytes, eb::GameVersion version) {
    return std::make_shared<const Program>(version, std::vector<ContentBlock>{{0,0,std::move(bytes)}},
                                          std::vector<Location>{{0,0}});
}
struct Fixture {
    static constexpr WindowId first{1}, second{2};
    State state;
    TextOutput output;
    Conversation conversation;
    Fixture(std::vector<std::uint8_t> bytes, eb::GameVersion version = eb::GameVersion::US,
            WindowGeometry geometry = {8,4})
        : output(fonts(version), state), conversation(program(std::move(bytes), version), state, output) {
        state.windows[first] = {}; state.windows[second] = {}; state.focus = first;
        output.define_window(first,geometry); output.define_window(second,{8,4});
        output.bring_to_front(first);
    }
};
bool same(const Snapshot& a, const Snapshot& b) {
    return a.frames == b.frames && a.returned_cursor == b.returned_cursor &&
           a.consumed_bytes == b.consumed_bytes && a.completed_stages == b.completed_stages;
}
Progress next(Conversation& conversation, unsigned budget = 1) {
    for (unsigned i = 0; i < 10000; ++i) {
        const auto result = conversation.advance(budget);
        if (result != Progress::BudgetExhausted) return result;
    }
    throw std::runtime_error("Conversation did not reach a host event or return");
}
TextEffectKind effect(const Conversation& conversation) {
    require(conversation.event().has_value() && std::holds_alternative<TextEffect>(*conversation.event()),
            "Expected native output effect, not an unhandled glyph request");
    return std::get<TextEffect>(*conversation.event()).kind;
}
void stable_pending(Fixture& f) {
    const auto event = f.conversation.event();
    const auto snapshot = f.conversation.snapshot();
    const auto cursor = f.output.window(Fixture::first).cursor;
    const auto frame = f.output.frame(Fixture::first);
    for (unsigned i = 0; i < 5; ++i) {
        require(f.conversation.advance(i) == Progress::Suspended && f.conversation.event() == event &&
                same(snapshot, f.conversation.snapshot()), "Pending conversation event advanced or changed");
        const auto sample = f.output.frame(Fixture::first);
        require(sample->pixels == frame->pixels && sample->priority == frame->priority &&
                f.output.window(Fixture::first).cursor == cursor, "Frame sampling advanced native text");
    }
}
void battle_animation_prompt(eb::GameVersion version) {
    for (unsigned mode : {0u, 1u, 2u, 0xffffu}) {
        Fixture f({0x1c, 0x13, 0, 255, 4, 3, 0, 2}, version);
        f.output.policy().prompt_mode = mode;
        f.state.window().active.working = 0xffff4321;
        f.conversation.start(EntryId{0});
        if (!mode) {
            require(next(f.conversation) == Progress::Finished && f.state.flag(3) &&
                        f.state.window().active.working == 0xffff4321,
                    "Disabled animation prompt changed working memory or failed to consume operands");
            continue;
        }
        require(next(f.conversation) == Progress::Suspended &&
                    std::holds_alternative<Request>(*f.conversation.event()),
                "Nonzero prompt mode failed to reach the real battle animation owner");
        const auto& request = std::get<Request>(*f.conversation.event());
        require(request.kind == RequestKind::BattleAnimation &&
                    request.battle_animation == BattleAnimationRequest{0xffff, 254} &&
                    !f.state.flag(3), "Conversation changed literal battle arguments");
        stable_pending(f);
        f.output.policy().prompt_mode = 0;
        f.state.focus = Fixture::second;
        f.state.window().active.working = 0xabcd0000;
        Response response;
        response.battle_animation_result = BattleAnimationResult{true, true};
        f.conversation.respond(response);
        require(next(f.conversation) == Progress::Finished && f.state.flag(3) &&
                    f.state.window().active.working == 1 &&
                    f.state.windows.at(Fixture::first).active.working == 0xffff4321,
                "Animation callback result ignored live focus or rechecked prompt mode after setup");
    }
}
void ordered_glyph_effects(eb::GameVersion version) {
    Fixture f({0x71,4,1,0,0x72,2}, version);
    f.output.policy().instant = false; f.output.policy().text_speed = 1; f.output.policy().sound_mode = 2;
    std::vector<unsigned> changes;
    f.conversation.observe([&](const Event& event) {
        if (event.kind == EventKind::FlagChanged) changes.push_back(event.flag);
    });
    f.conversation.start(EntryId{0});
    const auto initial = f.conversation.snapshot();
    require(f.conversation.advance(0) == Progress::BudgetExhausted && same(initial,f.conversation.snapshot()),
            "Zero work budget consumed dialogue or output");
    std::vector<TextEffectKind> observed;
    for (unsigned index = 0; index < 6; ++index) {
        require(next(f.conversation) == Progress::Suspended, "Glyph completed before its host effects");
        observed.push_back(effect(f.conversation)); stable_pending(f);
        if (index < 3) {
            require(changes.empty() && !f.state.flag(1) && f.conversation.snapshot().consumed_bytes == 1,
                    "Glyph was acknowledged before sound and both window ticks completed");
        } else require(changes == std::vector<unsigned>{1}, "Following source command did not execute once");
        f.conversation.respond();
    }
    require(next(f.conversation) == Progress::Finished && f.conversation.finished(), "Conversation did not return");
    require(observed == std::vector<TextEffectKind>{TextEffectKind::TextSound,TextEffectKind::WindowTick,
                TextEffectKind::WindowTick,TextEffectKind::TextSound,TextEffectKind::WindowTick,TextEffectKind::WindowTick},
            "Glyph sound/tick ordering changed");
    require(f.conversation.snapshot().returned_cursor == Location{0,6}, "Final script return cursor changed");
    rejects([&]{ f.conversation.respond(); }, "Host acknowledged a nonexistent event");
}
void wrap_handoff(eb::GameVersion version) {
    Fixture f({0x71,0x72,0x73,2}, version, {4,4});
    f.state.word_wrap = true;
    f.output.set_cursor(Fixture::first,{3,0}, version == eb::GameVersion::US ? 7 : 0);
    f.conversation.start(EntryId{0});
    require(next(f.conversation) == Progress::Finished, "Automatic layout leaked a glyph/word request to the host");
    const auto frame = f.output.frame(Fixture::first);
    if (version == eb::GameVersion::US) {
        require(f.output.window(Fixture::first).cursor.line == 1 && frame->pixels[16 * frame->width + 6] == 1 &&
                frame->pixels[16 * frame->width + 5] == 3 && frame->pixels[24] == 3,
                "US word measurement did not move the whole word and apply source indentation");
    } else {
        require(f.output.window(Fixture::first).cursor == TextCursor{2,1} && frame->pixels[24] == 1,
                "Japanese dialogue accidentally used US prefetch/wrap instead of fixed-column flow");
        require(f.state.upcoming_word_length == 0, "Japanese dialogue mutated US lookahead state");
    }
}
void policy_and_focus_between_ticks() {
    Fixture f({0x2f,0x71,2});
    f.output.policy().instant = false; f.output.policy().text_speed = 2; f.output.policy().sound_mode = 2;
    f.conversation.start(EntryId{0});
    require(next(f.conversation) == Progress::Suspended && effect(f.conversation) == TextEffectKind::TextSound,
            "Fixed special glyph did not begin with its inner sound effect");
    f.conversation.respond();
    for (unsigned tick = 0; tick < 3; ++tick) {
        require(next(f.conversation) == Progress::Suspended && effect(f.conversation) == TextEffectKind::WindowTick,
                "Captured wait count changed during host policy mutation");
        require(f.conversation.snapshot().consumed_bytes == 1, "Next glyph ran during the fixed glyph's wait");
        if (tick == 0) {
            f.state.focus = Fixture::second;
            f.output.policy().instant = true;
            f.output.set_style(Fixture::second, TextStyle{4});
        }
        f.conversation.respond();
    }
    require(next(f.conversation) == Progress::Finished,
            "Outer footer ignored new instant policy or following glyph failed to finish");
    require(f.output.window(Fixture::first).cursor.column == 1 && f.output.window(Fixture::second).cursor.column == 1 &&
            f.output.frame(Fixture::first)->pixels[0] == 1 && f.output.frame(Fixture::second)->pixels[0] == 1,
            "Focus mutation moved already-published text or lost the following glyph");
    require(f.output.redraw_pending(), "Printing through a changed focus lost the redraw request");
}
void host_requests() {
    Fixture f({0x10,0,3,0x13,0x14,0x11,0x0f,2});
    f.state.windows[Fixture::first].active.working = 0x12345678;
    f.state.windows[Fixture::second].active.secondary = 10;
    std::vector<std::pair<RegisterKind,unsigned>> changes;
    f.conversation.observe([&](const Event& event) {
        if (event.kind == EventKind::RegisterChanged) {
            require(event.window == Fixture::second, "Selection response used a stale focus");
            changes.emplace_back(event.reg,event.value);
        }
    });
    f.conversation.start(EntryId{0});
    for (unsigned i = 0; i < 5; ++i) {
        require(next(f.conversation) == Progress::Suspended && std::holds_alternative<Request>(*f.conversation.event()),
                "World request was not forwarded to the host");
        const auto request = std::get<Request>(*f.conversation.event());
        stable_pending(f);
        if (i == 0) require(request.kind == RequestKind::Pause && request.count == 0, "Zero pause was changed");
        else if (i < 4) require(request.kind == RequestKind::Prompt && request.show_prompt == (i != 2) &&
                               request.force_wait == (i == 3), "Prompt variants were collapsed");
        else {
            require(request.kind == RequestKind::Selection && request.count == 1, "Selection arguments changed");
            f.state.focus = Fixture::second;
        }
        f.conversation.respond({7});
    }
    require(next(f.conversation) == Progress::Suspended &&
                std::get<Request>(*f.conversation.event()).kind == RequestKind::ResetMenu &&
                f.state.windows[Fixture::second].active == Registers{7,0,10},
            "Selection cleanup was not exposed after assigning the result and before the next command");
    f.conversation.respond();
    require(next(f.conversation) == Progress::Finished &&
            f.state.windows[Fixture::first].active.working == 0x12345678 &&
            f.state.windows[Fixture::second].active == Registers{7,0,11},
            "Host response did not reach authoritative focused registers");
    require(changes == std::vector<std::pair<RegisterKind,unsigned>>{{RegisterKind::Working,7},{RegisterKind::Secondary,11}},
            "Selection and subsequent authored effects were reordered");
}
void shared_output_lifetime() {
    Fixture f({0x71,2});
    const auto other_program = program({0x72,2}, eb::GameVersion::US);
    State other_state;
    rejects([&]{ Conversation invalid(other_program, other_state, f.output); },
            "Conversation accepted an output bound to different authoritative state");
    rejects([&]{ Conversation invalid(program({2}, eb::GameVersion::JP), f.state, f.output); },
            "Conversation accepted a program/font region mismatch");
    Conversation following(other_program, f.state, f.output);
    require(&following.output() == &f.output && &f.conversation.output() == &f.output,
            "Conversation recreated rather than borrowed the host text compositor");
    f.output.policy().instant = false; f.output.policy().sound_mode = 2;
    f.conversation.start(EntryId{0});
    require(next(f.conversation) == Progress::Suspended && effect(f.conversation) == TextEffectKind::TextSound,
            "Shared-output fixture did not suspend during an active glyph");
    const auto pending = f.conversation.event();
    const auto snapshot = f.conversation.snapshot();
    rejects([&]{ following.start(EntryId{0}); },
            "Another conversation replaced an active output request");
    require(f.conversation.event() == pending && same(snapshot, f.conversation.snapshot()),
            "Rejected recursive start changed the original conversation");
    do { f.conversation.respond(); } while (next(f.conversation) == Progress::Suspended);
    require(f.conversation.finished(), "First borrowed conversation did not finish");
    const auto held = f.output.frame(Fixture::first);
    const auto finished = f.conversation.snapshot();
    f.output.policy().instant = true;
    following.start(EntryId{0});
    require(next(following) == Progress::Finished && same(finished, f.conversation.snapshot()),
            "Following conversation changed the previous interpreter state");
    require(held->pixels[3] == 1 && held->pixels[4] == 3 && f.output.frame(Fixture::first)->pixels[4] == 1,
            "Distinct conversations lost their shared partial glyph column");
}
bool same_state(const State& a, const State& b) {
    return a.windows == b.windows && a.focus == b.focus && a.dummy == b.dummy &&
           a.window_host_managed == b.window_host_managed && a.window_slots == b.window_slots &&
           a.retired_window_banks == b.retired_window_banks && a.unfocused_register_slot == b.unfocused_register_slot &&
           a.backup == b.backup && a.event_flags == b.event_flags && a.streams == b.streams &&
           a.stream_slot == b.stream_slot && a.subroutine_table_remaining == b.subroutine_table_remaining &&
           a.word_wrap == b.word_wrap && a.upcoming_word_length == b.upcoming_word_length;
}
template<class F> void rejects_without_mutation(Fixture& f, Conversation& owner, F operation,
                                              const char* message) {
    const auto state = f.state;
    const auto snapshot = owner.snapshot();
    const auto event = owner.event();
    const auto first = f.output.frame(Fixture::first), second = f.output.frame(Fixture::second);
    const auto first_window = f.output.window(Fixture::first), second_window = f.output.window(Fixture::second);
    const auto fraction = f.output.fractional_offset();
    const auto last = f.output.last_character();
    const bool indent = f.output.indent_pending(), saturn = f.output.saturn_composition_active();
    rejects(operation, message);
    require(same_state(state, f.state) && same(snapshot, owner.snapshot()) && event == owner.event() &&
            first->pixels == f.output.frame(Fixture::first)->pixels &&
            first->priority == f.output.frame(Fixture::first)->priority &&
            second->pixels == f.output.frame(Fixture::second)->pixels &&
            second->priority == f.output.frame(Fixture::second)->priority &&
            first_window == f.output.window(Fixture::first) && second_window == f.output.window(Fixture::second) &&
            fraction == f.output.fractional_offset() && last == f.output.last_character() &&
            indent == f.output.indent_pending() && saturn == f.output.saturn_composition_active(),
            "Rejected ownership operation mutated authoritative state, continuation or output");
}
std::vector<TextEffectKind> finish_effects(Conversation& conversation) {
    std::vector<TextEffectKind> effects;
    for (unsigned i = 0; i < 100; ++i) {
        if (!conversation.event() && next(conversation) == Progress::Finished) return effects;
        effects.push_back(effect(conversation));
        conversation.respond();
    }
    throw std::runtime_error("Nested conversation did not complete its bounded output effects");
}
void first_tick(Conversation& conversation) {
    require(next(conversation) == Progress::Suspended && effect(conversation) == TextEffectKind::TextSound,
            "Nested fixture did not enter the first glyph's sound boundary");
    conversation.respond();
    require(next(conversation) == Progress::Suspended && effect(conversation) == TextEffectKind::WindowTick,
            "Nested fixture did not enter the first glyph's window tick");
}
void nested_depth(eb::GameVersion version) {
    Fixture f({0x71,4,1,0,0x72,2}, version);
    Conversation child(program({0x72,4,2,0,2}, version), f.state, f.output);
    Conversation grandchild(program({0x73,4,3,0,2}, version), f.state, f.output);
    Conversation sibling(program({0x71,2}, version), f.state, f.output);
    std::vector<unsigned> flags;
    const auto observe = [&](const Event& event) {
        if (event.kind == EventKind::FlagChanged) flags.push_back(event.flag);
    };
    f.conversation.observe(observe); child.observe(observe); grandchild.observe(observe);
    f.output.policy().instant = false; f.output.policy().text_speed = 1; f.output.policy().sound_mode = 2;
    f.conversation.start(EntryId{0}); first_tick(f.conversation);
    const auto parent_event = f.conversation.event();
    const auto parent_snapshot = f.conversation.snapshot();
    const auto parent_slot = f.state.stream_slot;
    const auto held = f.output.frame(Fixture::first);
    const auto held_copy = *held;
    child.start_nested(EntryId{0}, f.conversation);
    require(f.state.stream_slot == parent_slot + 1 && child.event() == std::nullopt,
            "Child did not allocate exactly one source stream frame");
    rejects_without_mutation(f, child, [&]{ f.conversation.advance(0); }, "Inactive parent accepted zero-budget advance");
    rejects_without_mutation(f, child, [&]{ f.conversation.advance(1); }, "Inactive parent advanced while child owned execution");
    rejects_without_mutation(f, child, [&]{ f.conversation.respond(); }, "Inactive parent acknowledged its event while child ran");
    rejects_without_mutation(f, child, [&]{ sibling.start_nested(EntryId{0}, f.conversation); },
                             "Sibling entered through an inactive parent");
    rejects_without_mutation(f, child, [&]{ sibling.start(EntryId{0}); }, "Root start bypassed an active child");
    rejects_without_mutation(f, child, [&]{ Request request; request.kind = RequestKind::Newline; f.output.begin(request); },
                             "Raw output begin bypassed a conversation owner");
    rejects_without_mutation(f, child, [&]{ f.output.advance(); }, "Raw output advance bypassed a conversation owner");
    rejects_without_mutation(f, child, [&]{ f.output.respond(); }, "Raw output response bypassed a conversation owner");
    rejects_without_mutation(f, child, [&]{ f.output.prepare_word({1,1}); },
                             "Raw word preparation bypassed a conversation owner");
    first_tick(child);
    const auto child_event = child.event();
    const auto child_snapshot = child.snapshot();
    grandchild.start_nested(Location{0,0}, child);
    rejects_without_mutation(f, grandchild, [&]{ child.respond(); }, "Child acknowledged through its active grandchild");
    rejects_without_mutation(f, grandchild, [&]{ child.advance(0); }, "Child advanced through its active grandchild");
    const auto grand_effects = finish_effects(grandchild);
    require(grand_effects == std::vector<TextEffectKind>{TextEffectKind::TextSound,TextEffectKind::WindowTick,
                                                       TextEffectKind::WindowTick} && flags == std::vector<unsigned>{3},
            "Grandchild did not complete before its callers' authored side effects");
    require(f.state.stream_slot == parent_slot + 1 && child.event() == child_event &&
            same(child.snapshot(), child_snapshot) && f.conversation.event() == parent_event &&
            same(f.conversation.snapshot(), parent_snapshot), "Returning child lost a suspended caller continuation");
    require(finish_effects(child) == std::vector<TextEffectKind>{TextEffectKind::WindowTick,TextEffectKind::WindowTick} &&
            flags == std::vector<unsigned>{3,2}, "Child return implicitly acknowledged or repeated its parent tick");
    require(f.state.stream_slot == parent_slot && f.conversation.event() == parent_event &&
            same(f.conversation.snapshot(), parent_snapshot), "Child return advanced the parent's interpreter");
    require(finish_effects(f.conversation) == std::vector<TextEffectKind>{TextEffectKind::WindowTick,
                TextEffectKind::WindowTick,TextEffectKind::TextSound,TextEffectKind::WindowTick,TextEffectKind::WindowTick} &&
            flags == std::vector<unsigned>{3,2,1}, "Parent continuation lost its captured cadence or source order");
    require(f.state.stream_slot == std::uint16_t(parent_slot - 1) && held->pixels == held_copy.pixels &&
            held->priority == held_copy.priority && held->pixels != f.output.frame(Fixture::first)->pixels,
            "Nested output corrupted a sampled frame or failed to leave visible shared output");
    // A completed child can be reused as a root without resetting host output.
    const auto before = f.output.frame(Fixture::first);
    f.output.policy().instant = true;
    child.start(EntryId{0});
    require(next(child) == Progress::Finished && before->pixels != f.output.frame(Fixture::first)->pixels,
            "A finished child could not restart over the retained host composition");
}
void nested_policy_and_focus() {
    Fixture f({0x2f,0x71,2});
    Conversation child(program({0x72,2}, eb::GameVersion::US), f.state, f.output);
    f.output.policy().instant = false; f.output.policy().text_speed = 2; f.output.policy().sound_mode = 2;
    f.conversation.start(EntryId{0}); first_tick(f.conversation);
    const auto pending = f.conversation.event();
    const auto parent = f.conversation.snapshot();
    f.state.focus = Fixture::second;
    f.output.set_style(Fixture::second,{4});
    f.output.policy().instant = true;
    child.start_nested(EntryId{0}, f.conversation);
    require(next(child) == Progress::Finished && f.conversation.event() == pending && same(parent,f.conversation.snapshot()),
            "Instant child acknowledged the outer special glyph");
    const auto child_frame = f.output.frame(Fixture::second);
    require(child_frame->pixels[0] == 1 && f.output.fractional_offset() == 4,
            "Child did not publish through the shared focus/font/composition");
    const auto remaining = finish_effects(f.conversation);
    require(remaining == std::vector<TextEffectKind>(3, TextEffectKind::WindowTick),
            "Child policy change altered captured inner waits or failed to affect the outer footer");
    require(f.output.window(Fixture::first).cursor == TextCursor{1,0} &&
            f.output.window(Fixture::second).cursor == TextCursor{2,0} &&
            f.output.frame(Fixture::first)->pixels[0] == 1 && f.output.frame(Fixture::second)->pixels[8] == 1 &&
            child_frame->pixels[8] == 3 && f.output.redraw_pending(),
            "Parent completion rewound child state or lost post-inner-footer composition alignment");
}
void nested_host_requests() {
    for (const auto command : {std::uint8_t(0x10),std::uint8_t(3),std::uint8_t(0x11)}) {
        Fixture f(command == 0x10 ? std::vector<std::uint8_t>{0x10,0,4,1,0,2}
                                  : std::vector<std::uint8_t>{command,4,1,0,2});
        Conversation child(program({0x71,4,2,0,2}, eb::GameVersion::US), f.state, f.output);
        f.conversation.start(EntryId{0});
        require(next(f.conversation) == Progress::Suspended && std::holds_alternative<Request>(*f.conversation.event()),
                "Host-service fixture did not suspend");
        const auto event = f.conversation.event();
        const auto snapshot = f.conversation.snapshot();
        const auto slot = f.state.stream_slot;
        child.start_nested(EntryId{0}, f.conversation);
        rejects_without_mutation(f, child, [&]{ f.conversation.respond({9}); },
                                 "Parent UI response was accepted while its nested dialogue ran");
        require(next(child) == Progress::Finished && f.state.flag(2) && !f.state.flag(1) &&
                f.state.stream_slot == slot && f.conversation.event() == event && same(snapshot,f.conversation.snapshot()),
                "Nested UI dialogue lost pending service state");
        f.state.focus = Fixture::second;
        f.conversation.respond({9});
        if (command == 0x11) {
            require(next(f.conversation) == Progress::Suspended &&
                        std::get<Request>(*f.conversation.event()).kind == RequestKind::ResetMenu && !f.state.flag(1),
                    "Nested selection bypassed its post-result cleanup");
            f.conversation.respond();
        }
        require(next(f.conversation) == Progress::Finished && f.state.flag(1), "Parent UI response did not resume source execution");
        if (command == 0x11)
            require(f.state.windows[Fixture::second].active.working == 9 &&
                    f.state.windows[Fixture::first].active.working == 0,
                    "Selection completion used the focus captured before nested UI");
    }
}
void invalid_nested_starts() {
    Fixture f({0x71,2});
    Conversation child(program({0x72,2}, eb::GameVersion::US), f.state, f.output);
    rejects_without_mutation(f, f.conversation, [&]{ child.start_nested(EntryId{0}, f.conversation); },
                             "Nested start accepted an unstarted parent");
    f.output.policy().instant = false; f.output.policy().sound_mode = 2;
    f.conversation.start(EntryId{0});
    rejects_without_mutation(f, f.conversation, [&]{ child.start_nested(EntryId{0}, f.conversation); },
                             "Nested start accepted a parser budget boundary");
    require(next(f.conversation) == Progress::Suspended && effect(f.conversation) == TextEffectKind::TextSound,
            "Invalid-start fixture did not reach sound");
    rejects_without_mutation(f, f.conversation, [&]{ child.start_nested(EntryId{0}, f.conversation); },
                             "Nested dialogue entered through text sound instead of a world/UI boundary");
    f.conversation.respond();
    require(next(f.conversation) == Progress::Suspended && effect(f.conversation) == TextEffectKind::WindowTick,
            "Invalid-start fixture did not reach its tick");
    rejects_without_mutation(f, f.conversation, [&]{ child.start_nested(Location{9,0}, f.conversation); },
                             "Invalid child content acquired execution ownership");
    rejects_without_mutation(f, f.conversation, [&]{ child.start_nested(EntryId{99}, f.conversation); },
                             "Invalid child entry acquired execution ownership");
    Fixture other({0x71,2});
    rejects_without_mutation(f, f.conversation, [&]{ other.conversation.start_nested(EntryId{0}, f.conversation); },
                             "Nested dialogue crossed authoritative renderer/state owners");
    child.start_nested(EntryId{0}, f.conversation);
    finish_effects(child); finish_effects(f.conversation);

    Fixture blocked({0x1f,0x23});
    Conversation service_child(program({2}, eb::GameVersion::US), blocked.state, blocked.output);
    blocked.conversation.start(EntryId{0}); next(blocked.conversation);
    rejects_without_mutation(blocked, blocked.conversation,
                             [&]{ service_child.start_nested(EntryId{0}, blocked.conversation); },
                             "Nested dialogue bypassed an unsupported service");

    Fixture scanning({0x71,0x72,2}); scanning.state.word_wrap = true;
    Conversation scan_child(program({2}, eb::GameVersion::US), scanning.state, scanning.output);
    scanning.conversation.start(EntryId{0});
    require(scanning.conversation.advance(1) == Progress::BudgetExhausted && !scanning.conversation.event(),
            "Word-scan fixture failed to yield before an output event");
    rejects_without_mutation(scanning, scanning.conversation,
                             [&]{ scan_child.start_nested(EntryId{0}, scanning.conversation); },
                             "Nested dialogue entered during non-observable word measurement");
    require(next(scanning.conversation) == Progress::Finished, "Rejected word-scan child broke the original word");
}
void destruction_policy() {
    Fixture f({0x71,2});
    f.output.policy().instant = false; f.output.policy().sound_mode = 2;
    f.conversation.start(EntryId{0}); first_tick(f.conversation);
    {
        Conversation completed(program({2}, eb::GameVersion::US), f.state, f.output);
        completed.start_nested(EntryId{0}, f.conversation);
        require(next(completed) == Progress::Finished, "Empty child did not finish");
    }
    stable_pending(f); // Destruction of a finished child must not poison its caller.
    const auto earlier = f.output.frame(Fixture::first);
    {
        Conversation abandoned(program({0x72,2}, eb::GameVersion::US), f.state, f.output);
        abandoned.start_nested(EntryId{0}, f.conversation); first_tick(abandoned);
    }
    const auto state = f.state;
    const auto visible = f.output.frame(Fixture::first);
    require(visible->pixels != earlier->pixels, "Abandoned child did not leave meaningful visible output");
    rejects_without_mutation(f, f.conversation, [&]{ f.conversation.advance(0); }, "Poisoned parent accepted advance");
    rejects_without_mutation(f, f.conversation, [&]{ f.conversation.respond(); }, "Poisoned parent accepted its old response");
    rejects_without_mutation(f, f.conversation, [&]{ f.output.advance(); }, "Poisoned raw output resumed");
    rejects_without_mutation(f, f.conversation, [&]{ f.output.respond(); }, "Poisoned raw output accepted acknowledgment");
    rejects_without_mutation(f, f.conversation, [&]{ Request request; request.kind = RequestKind::Newline; f.output.begin(request); },
                             "Poisoned raw output began new execution");
    rejects_without_mutation(f, f.conversation, [&]{ f.output.prepare_word({1,1}); }, "Poisoned output prepared a word");
    Conversation replacement(program({2}, eb::GameVersion::US), f.state, f.output);
    rejects_without_mutation(f, f.conversation, [&]{ replacement.start(EntryId{0}); }, "Poisoned renderer accepted a new root");
    rejects_without_mutation(f, f.conversation, [&]{ replacement.start_nested(EntryId{0}, f.conversation); },
                             "Poisoned renderer accepted a new child");
    require(same_state(state,f.state) && visible->pixels == f.output.frame(Fixture::first)->pixels,
            "Poisoning rolled back semantic effects or prevented immutable frame sampling");
}
void unsupported_and_restart() {
    Fixture blocked({0x1f,0x23,0xaa,0xbb,2});
    blocked.conversation.start(EntryId{0});
    require(next(blocked.conversation) == Progress::Suspended, "Unsupported service did not suspend");
    const auto request = std::get<Request>(*blocked.conversation.event());
    require(request.kind == RequestKind::UnsupportedCommand && request.command == 0x1f && request.selector == 0x23 &&
            blocked.conversation.snapshot().consumed_bytes == 2, "Unsupported operands were guessed or consumed");
    const auto before = blocked.conversation.snapshot();
    rejects([&]{ blocked.conversation.respond(); }, "Unsupported service accepted acknowledgment");
    stable_pending(blocked);
    require(same(before,blocked.conversation.snapshot()), "Rejected unsupported response advanced script");
    rejects([&]{ blocked.conversation.start(EntryId{0}); }, "Restart replaced an active conversation");

    Fixture f({0x0e,7,0x71,2});
    f.conversation.start(EntryId{0});
    require(next(f.conversation) == Progress::Finished, "First conversation did not finish");
    const auto held = f.output.frame(Fixture::first);
    require(held->pixels[3] == 1 && held->pixels[4] == 3, "First glyph fixture was not visibly meaningful");
    f.state.window().active.working = 0x87654321;
    f.conversation.start(EntryId{0});
    require(next(f.conversation) == Progress::Finished && f.state.window().active == Registers{0x87654321,0,7},
            "Restart reset authoritative game state");
    require(held->pixels[4] == 3 && f.output.frame(Fixture::first)->pixels[4] == 1,
            "Restart lost shared composition or mutated an already sampled frame");
}
struct WindowAssets {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    explicit WindowAssets(eb::GameVersion version) {
        dialogue_test_assets::WindowInput image(version);
        dialogue_test_assets::add_text_fonts(image);
        fonts=FontResources::import(image.image,version);
        windows=image.import();
    }
};
const WindowAssets& window_assets(eb::GameVersion version) {
    static const WindowAssets us(eb::GameVersion::US),jp(eb::GameVersion::JP);
    return version==eb::GameVersion::JP ? jp : us;
}
struct WindowFixture {
    State state;
    TextOutput output;
    WindowHost host;
    explicit WindowFixture(eb::GameVersion version)
        : output(window_assets(version).fonts,state),host(window_assets(version).windows,state,output) {
        state.word_wrap=false;
        output.policy().instant=true;
    }
};
WindowEffectKind window_effect(const Conversation& conversation) {
    require(conversation.event() && std::holds_alternative<WindowEffect>(*conversation.event()),
            "Window service did not expose its typed host effect");
    return std::get<WindowEffect>(*conversation.event()).kind;
}
void window_control_and_restore(eb::GameVersion version) {
    WindowFixture f(version);
    Conversation conversation(program({0x18,1,0,0x10,1,0x18,2,0x18,1,5,0x10,2,
                                       0x18,6,0x18,3,0,0x71,0x18,3,5,2},version),f.host);
    Conversation child(program({4,2,0,2},version),f.host);
    bool returned=false;
    const TextStyle saved_style{0,3,true,false,false};
    conversation.observe([&](const Event& event) {
        if(event.kind==EventKind::Return) {
            require(f.state.focus==WindowId{0} && f.output.window(WindowId{0}).cursor==TextCursor{1,0} &&
                    f.output.window(WindowId{0}).style==saved_style && f.host.metadata(WindowId{0}).number_padding==37,
                    "Dialogue Return was published before restoring saved window attributes");
            returned=true;
        }
    });
    conversation.start(EntryId{0});
    require(next(conversation)==Progress::Suspended && window_effect(conversation)==WindowEffectKind::ClearPartyBlink &&
            f.state.focus==WindowId{0} && conversation.snapshot().consumed_bytes==3,
            "Window create did not finish semantic allocation before its party effect");
    const auto before=conversation.snapshot(); const auto pending=conversation.event(); const auto state=f.state;
    rejects([&]{child.start_nested(EntryId{0},conversation);},"Party blink effect allowed recursive dialogue");
    require(same_state(state,f.state) && same(before,conversation.snapshot()) && pending==conversation.event(),
            "Rejected party-effect nesting changed its owner");
    for(unsigned i=0;i<4;++i) {
        const auto frame=f.host.frame();
        require(conversation.advance(i)==Progress::Suspended && same(before,conversation.snapshot()) &&
                frame->pixels==f.host.frame()->pixels,"Sampling/advance implicitly acknowledged a window effect");
    }
    conversation.respond();
    require(next(conversation)==Progress::Suspended && std::get<Request>(*conversation.event()).kind==RequestKind::Pause &&
            std::get<Request>(*conversation.event()).count==1,"First authored pause was lost behind window create");
    f.output.set_cursor(WindowId{0},{1,0}); f.output.set_style(WindowId{0},saved_style);
    f.host.metadata(WindowId{0}).number_padding=37;
    conversation.respond();
    require(next(conversation)==Progress::Suspended && window_effect(conversation)==WindowEffectKind::ClearPartyBlink &&
            f.state.focus==WindowId{5} && f.state.streams[1].saved_window &&
            f.state.streams[1].saved_window->id==WindowId{0},"CC18 save was not captured before opening another window");
    conversation.respond();
    require(next(conversation)==Progress::Suspended && std::get<Request>(*conversation.event()).count==2,
            "Second authored pause was not forwarded");
    f.output.set_cursor(WindowId{0},{2,0}); f.output.set_style(WindowId{0},{0,6,false,true,false});
    f.host.metadata(WindowId{0}).number_padding=7;
    const auto old_frame=f.output.frame(WindowId{0}); const auto old_pixels=old_frame->pixels;
    conversation.respond();
    require(next(conversation)==Progress::Finished && returned && f.state.stream_slot==0,
            "Window-integrated conversation did not finish its restore and unwind");
    require(f.output.window(WindowId{5}).cursor==TextCursor{} && old_frame->pixels==old_pixels &&
            old_frame->pixels!=f.output.frame(WindowId{0})->pixels,
            "Window focus/clear lost visible text or mutated an immutable frame");
    if(version==eb::GameVersion::US)
        require(f.output.fractional_offset()==5,"Attribute restoration reset the shared partial glyph composition");
    Conversation following(program({0x18,3,5,2},version),f.host);
    following.start(EntryId{0});
    require(next(following)==Progress::Finished && f.state.focus==WindowId{5} && !f.state.streams[1].saved_window,
            "Reused conversation stream restored a previous call's saved focus");
}
void window_effect_nesting(eb::GameVersion version) {
    WindowFixture f(version);
    Conversation parent(program({0x18,1,0,0x18,1,5,0x18,3,0,0x18,0,0x18,4,4,1,0,2},version),f.host);
    Conversation child(program({4,2,0,2},version),f.host);
    std::vector<WindowEffectKind> effects;
    unsigned nested=0;
    parent.start(EntryId{0});
    while(next(parent)==Progress::Suspended) {
        const auto kind=window_effect(parent); effects.push_back(kind);
        const auto pending=parent.event(); const auto snapshot=parent.snapshot(); const auto state=f.state;
        require(!f.state.flag(1),"Commands after close-all executed before all its effects");
        if(kind==WindowEffectKind::WindowTick) {
            child.start_nested(EntryId{0},parent);
            rejects([&]{parent.advance(0);},"Window-effect parent advanced while child owned output");
            rejects([&]{parent.respond();},"Window-effect parent responded while child owned output");
            require(next(child)==Progress::Finished && child.finished() && f.state.flag(2),
                    "Nested window callback failed to execute child dialogue");
            ++nested;
        } else {
            rejects([&]{child.start_nested(EntryId{0},parent);},"Non-tick window effect allowed nested dialogue");
            require(same_state(state,f.state),"Rejected non-tick child start changed native window state");
        }
        require(parent.event()==pending && same(snapshot,parent.snapshot()),
                "Child completion implicitly acknowledged a window-host effect");
        parent.respond();
    }
    const std::vector<WindowEffectKind> expected=version==eb::GameVersion::US ?
        std::vector<WindowEffectKind>{WindowEffectKind::ClearPartyBlink,WindowEffectKind::ClearPartyBlink,
            WindowEffectKind::WindowTick,WindowEffectKind::WindowTick,WindowEffectKind::HideMeters,WindowEffectKind::WindowTick} :
        std::vector<WindowEffectKind>{WindowEffectKind::ClearPartyBlink,WindowEffectKind::ClearPartyBlink,
            WindowEffectKind::HideMeters,WindowEffectKind::WindowTick};
    require(effects==expected && nested==(version==eb::GameVersion::US ? 3u : 1u) &&
            f.state.windows.empty() && !f.state.focus && f.state.flag(1) && parent.finished(),
            "Window close/close-all effects or regional cadence changed");
}
void dialogue_from_window_operation(eb::GameVersion version) {
    WindowFixture f(version);
    auto opening=f.host.begin({WindowAction::Open,WindowId{0},{},0});
    require(opening->advance()==OutputProgress::Suspended && opening->effect()->kind==WindowEffectKind::ClearPartyBlink,
            "Root open did not yield its real party effect");
    Conversation child(program({4,3,0,2},version),f.host);
    const auto state=f.state;
    rejects([&]{child.start_nested(EntryId{0},*opening);},"Root party effect accepted recursive text");
    require(same_state(state,f.state),"Rejected operation child start mutated native state");
    opening->respond(); require(opening->advance()==OutputProgress::Complete,"Root window open did not complete");
    auto closing=f.host.begin({WindowAction::CloseAllAndHideMeters,{},{},0});
    unsigned callbacks=0;
    while(closing->advance()==OutputProgress::Suspended) {
        const auto pending=closing->effect();
        if(pending->kind==WindowEffectKind::WindowTick) {
            const auto state_before=f.state;
            rejects([&]{child.start_nested(Location{99,0},*closing);},"Invalid authored location entered an operation callback");
            require(same_state(state_before,f.state) && closing->effect()==pending,
                    "Failed operation callback acquisition changed its owner");
            child.start_nested(Location{0,0},*closing);
            rejects([&]{closing->advance();},"Root window operation advanced through its active text child");
            rejects([&]{closing->respond();},"Root window operation acknowledged through its active text child");
            require(next(child)==Progress::Finished && closing->effect()==pending && f.state.flag(3),
                    "Source window callback failed to restore its pending operation");
            ++callbacks;
        } else rejects([&]{child.start_nested(EntryId{0},*closing);},"Hide-meters effect accepted recursive text");
        closing->respond();
    }
    require(closing->complete() && callbacks==(version==eb::GameVersion::US ? 2u : 1u),
            "Root window operation lost its regional callback cadence");
}
}
int main() {
    try {
        for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
            battle_animation_prompt(version);
            ordered_glyph_effects(version); wrap_handoff(version); nested_depth(version);
            window_control_and_restore(version); window_effect_nesting(version); dialogue_from_window_operation(version);
        }
        policy_and_focus_between_ticks(); host_requests(); shared_output_lifetime(); unsupported_and_restart();
        nested_policy_and_focus(); nested_host_requests(); invalid_nested_starts(); destruction_policy();
        std::cout << "PASS native conversation: " << checks << " integrated output, word-wrap, host-effect, suspension and restart checks\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
