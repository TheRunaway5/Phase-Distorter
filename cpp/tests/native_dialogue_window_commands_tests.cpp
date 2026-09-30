#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/dialogue/window_commands.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <functional>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
std::string context;
void check(bool condition, const char *message) {
    ++checks;
    if (!condition) throw std::runtime_error(context + ": " + message);
}
template<class F> void rejects(F operation, const char *message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception &) { rejected = true; }
    check(rejected, message);
}
struct Resources {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const MenuResources> menus;
    std::shared_ptr<const SubstitutionResources> substitutions;
    explicit Resources(eb::GameVersion version) {
        dialogue_test_assets::WindowInput input(version);
        dialogue_test_assets::add_text_fonts(input);
        for (unsigned id = 0; id < input.count; ++id) {
            input.put(input.configs + id * 8, 0);
            input.put(input.configs + id * 8 + 2, 0);
            input.put(input.configs + id * 8 + 4, 22);
            input.put(input.configs + id * 8 + 6, 10);
        }
        const auto label = version == eb::GameVersion::JP ? 0x3e42eu : 0x3e44cu;
        input.image[label] = 0x71; input.image[label + 1] = 0x72;
        input.image[label + 2] = 0; input.image[label + 3] = 0;
        dialogue_substitution_test_assets::Input catalogs(version);
        catalogs.overlay(input.image);
        fonts = FontResources::import(input.image, version);
        windows = input.import();
        menus = MenuResources::import(input.image, version);
        substitutions = SubstitutionResources::import(input.image, version);
    }
};
const Resources &resources(eb::GameVersion version) {
    static const Resources us(eb::GameVersion::US), jp(eb::GameVersion::JP);
    return version == eb::GameVersion::JP ? jp : us;
}
std::shared_ptr<const Program> program(eb::GameVersion version, std::vector<std::uint8_t> root,
                                      std::vector<std::uint8_t> selected, std::vector<std::uint8_t> child) {
    return std::make_shared<const Program>(version,
        std::vector<ContentBlock>{{0, 0, std::move(root)}, {1, 0, std::move(selected)}, {2, 0, std::move(child)}},
        std::vector<Location>{{0, 0}, {1, 0}, {2, 0}});
}
Request select(unsigned id = 1, bool cancel = true) {
    Request request;
    request.kind = RequestKind::SelectInWindow;
    request.window_selection = WindowSelectionRequest{WindowId{id}, cancel};
    return request;
}
Request wallet() { Request request; request.kind = RequestKind::ShowWallet; return request; }
struct Fixture {
    std::shared_ptr<const Program> scripts;
    State state;
    TextOutput output;
    WindowHost windows;
    PromptHost prompts;
    std::unique_ptr<MenuHost> menus;
    std::uint32_t amount = 1234;
    unsigned reads{};
    std::function<void()> at_read;
    Fixture(eb::GameVersion version, std::vector<std::uint8_t> root = {2},
            std::vector<std::uint8_t> selected = {4, 0x55, 0, 2},
            std::vector<std::uint8_t> child = {2}, bool with_menus = true)
        : scripts(program(version, std::move(root), std::move(selected), std::move(child))),
          output(resources(version).fonts, state), windows(resources(version).windows, state, output),
          prompts(windows) {
        if (with_menus) menus = std::make_unique<MenuHost>(scripts, prompts, resources(version).menus);
        windows.substitutions().configure(resources(version).substitutions,
            {[this](StatKey key) {
                check(key == StatKey{StatField::MoneyCarried, 0}, "Wallet requested the wrong live state field");
                ++reads;
                if (at_read) at_read();
                return amount;
            }, {}});
        window(WindowAction::Open, WindowId{0});
        output.policy().instant = true;
        output.policy().text_speed = 0;
        output.policy().sound_mode = 3;
        output.policy().character_padding = 0;
        state.word_wrap = false;
        state.window().active.working = 0x12345678;
        state.window().active.argument = 0xabcdef00;
    }
    void window(WindowAction action, std::optional<WindowId> id = {}) {
        auto operation = windows.begin({action, id, {}, 0});
        for (unsigned i = 0; i < 64; ++i) {
            if (operation->advance() == OutputProgress::Complete) return;
            operation->respond();
        }
        throw std::runtime_error("Fixture window did not return");
    }
    void choice(unsigned id = 1, std::uint16_t value = 0xbeef, bool has_script = true) {
        window(WindowAction::Open, WindowId{id});
        MenuModel model(windows, *resources(windows.version()).fonts);
        model.append_value(std::array<std::uint8_t, 1>{0x61},
                           has_script ? std::optional(Location{1, 0}) : std::nullopt, value, 0, 0);
        model.layout({1, 0, false, false}, resources(windows.version()).menus->next_page_label());
        state.window().active.working = 0x87654321;
        window(WindowAction::Focus, WindowId{0});
    }
    void decorate() {
        output.set_cursor({0}, {3, 1});
        output.set_style({0}, {1, 3, true, true, false});
        windows.metadata({0}).number_padding = 0xfe;
    }
    void glyph(std::uint16_t value) {
        output.begin_glyph(value);
        for (unsigned i = 0; i < 64; ++i) {
            if (output.advance() == OutputProgress::Complete) return;
            output.respond();
        }
        throw std::runtime_error("Fixture glyph did not finish");
    }
};
bool is_tick(const MenuEvent &event) {
    if (const auto *text = std::get_if<TextEffect>(&event)) return text->kind == TextEffectKind::WindowTick;
    if (const auto *window = std::get_if<WindowEffect>(&event)) return window->kind == WindowEffectKind::WindowTick;
    return std::holds_alternative<PromptEffect>(event);
}
using Hook = std::function<void(WindowCommands::Operation &, const MenuEvent &, MenuResponse &)>;
std::vector<MenuEvent> finish(Fixture &f, WindowCommands::Operation &operation, Hook hook = {}, unsigned budget = 1) {
    std::vector<MenuEvent> trace;
    for (unsigned work = 0; work < 20000; ++work) {
        const auto progress = operation.advance(budget);
        if (progress == Progress::Finished) return trace;
        if (progress == Progress::BudgetExhausted) continue;
        const auto event = operation.event();
        check(event.has_value(), "Window coordinator suspended without a service event");
        const auto pool = f.windows.menu_options();
        const auto frame = f.windows.frame();
        check(operation.advance(0) == Progress::Suspended && operation.event() == event &&
                  f.windows.menu_options() == pool && f.windows.frame()->pixels == frame->pixels,
              "Pending event or read-only sample advanced the window command");
        MenuResponse response{f.windows.prompt_state().pressed, 0, 0};
        if (const auto *menu = std::get_if<MenuEffect>(&*event); menu && menu->kind == MenuEffectKind::Input)
            response.pressed = std::uint16_t(MenuButton::A);
        if (hook) hook(operation, *event, response);
        trace.push_back(*event);
        operation.respond(response);
    }
    throw std::runtime_error(context + ": Window command did not return within its fixture bound");
}
void finish_child(Conversation &child) {
    for (unsigned work = 0; work < 20000; ++work) {
        const auto progress = child.advance(1);
        if (progress == Progress::Finished) return;
        if (progress == Progress::BudgetExhausted) continue;
        Response response;
        if (const auto *menu = std::get_if<MenuEffect>(&*child.event()); menu && menu->kind == MenuEffectKind::Input)
            response.pressed = std::uint16_t(MenuButton::A);
        child.respond(response);
    }
    throw std::runtime_error("Nested context conversation did not return");
}
void selection_restore(eb::GameVersion version, bool allow_cancel, bool absent) {
    context = "selection restore/cancel";
    Fixture f(version);
    f.choice(); f.decorate();
    const auto saved = f.output.window({0});
    const auto pool = f.windows.menu_options();
    if (absent) { f.state.focus.reset(); f.state.unfocused_register_slot = 0; }
    auto operation = f.windows.commands().begin(select(1, allow_cancel), f.menus.get());
    check(operation->advance(0) == Progress::BudgetExhausted && f.state.focus == (absent ? std::nullopt : std::optional(WindowId{0})),
          "Zero work budget saved/switched the active context");
    rejects([&] { operation->result(); }, "Selection result escaped before restoration");
    unsigned polls = 0;
    finish(f, *operation, [&](auto &, const auto &event, auto &response) {
        if (const auto *menu = std::get_if<MenuEffect>(&event); menu && menu->kind == MenuEffectKind::Input)
            response.pressed = std::uint16_t(++polls == 1 ? MenuButton::B : MenuButton::A);
    });
    check(operation->result() == (allow_cancel ? 0 : 0xbeef) && polls == (allow_cancel ? 1 : 2) &&
              f.state.focus == WindowId{absent ? 1u : 0u} && f.state.flag(0x55),
          "Selection lost cancel mode, exact16-bit result, selected script or null-backup semantics");
    check(f.state.windows.at({0}).active.working == 0x12345678 &&
              f.state.windows.at({1}).active.working == 0x87654321 &&
              f.windows.menu_options()[0].flags == pool[0].flags &&
              f.windows.menu_options()[0].selected_text == pool[0].selected_text,
          "Direct context command wrote a Runtime result or reset the menu");
    if (!absent)
        check(f.output.window({0}) == saved && f.windows.metadata({0}).number_padding == 0xfe,
              "Scoped selection failed to restore saved font/attributes/cursor/padding");
}
void wallet_behavior(eb::GameVersion version, bool existing, bool absent, bool full) {
    context = "wallet source ordering";
    Fixture f(version, {2}, {2}, {2}, false);
    if (full) for (unsigned id = 1; id < 8; ++id) f.window(WindowAction::Open, WindowId{id});
    if (existing) {
        f.window(WindowAction::Open, WindowId{10});
        f.glyph(0x61);
    }
    f.window(WindowAction::Focus, WindowId{0});
    f.decorate();
    const auto saved = f.output.window({0});
    const auto old_frame = f.output.frame({0});
    const auto old_pixels = old_frame->pixels;
    if (absent) { f.state.focus.reset(); f.state.unfocused_register_slot = 0; }
    const auto expected_focus = full ? (absent ? std::nullopt : std::optional(WindowId{0})) : std::optional(WindowId{10});
    f.amount = 1;
    f.at_read = [&] {
        check(f.state.focus == expected_focus && f.output.policy().instant,
              "Money was read before CREATE/current-focus setup or instant printing");
        if (expected_focus) {
            check(f.windows.metadata(*expected_focus).number_padding == 5 &&
                      f.output.window(*expected_focus).cursor == TextCursor{},
                  "Money was read before padding5 and clear");
            const auto canvas = f.output.cells(*expected_focus);
            check(std::all_of(canvas.cells.begin(), canvas.cells.end(), [](const auto &cell) {
                      return cell.fixed_character == 32;
                  }), "Money read saw text that should have been cleared");
        }
    };
    auto operation = f.windows.commands().begin(wallet());
    unsigned blink = 0;
    const auto trace = finish(f, *operation, [&](auto &, const auto &event, auto &) {
        const auto *effect = std::get_if<WindowEffect>(&event);
        check(effect && effect->kind == WindowEffectKind::ClearPartyBlink,
              "Instant wallet invented a sound/world/input effect");
        ++blink;
        check(!f.reads, "Wallet read live money before the creation effect was acknowledged");
        f.amount = 9999999;
    });
    check(f.reads == 1 && blink == (full ? 0 : 1) && trace.size() == blink &&
              operation->result() == 0 && !f.output.policy().instant &&
              f.state.focus == (absent ? expected_focus : std::optional(WindowId{0})) &&
              f.state.windows.at({0}).active.working == 0x12345678 && old_frame->pixels == old_pixels,
          "Wallet skipped failed-CREATE continuation, restored instant, wrote working or changed an old frame");
    if (!absent)
        check(f.output.window({0}) == saved && f.windows.metadata({0}).number_padding == 0xfe,
              "Wallet restore lost original attributes even when CREATE failed");
    if (!full)
        check(f.windows.slot_for({10}).has_value() && f.windows.metadata({10}).number_padding == 5,
              "Wallet failed to retain its real money window");
}
void nested_context(eb::GameVersion version, bool wallet_child) {
    context = wallet_child ? "nested wallet shared backup" : "nested selection shared backup/active owner";
    Fixture f(version, {2}, {0x10, 0, 4, 0x55, 0, 2},
              wallet_child ? std::vector<std::uint8_t>{0x18, 0x0a, 2}
                           : std::vector<std::uint8_t>{0x18, 8, 2, 2});
    f.choice(); f.choice(2, 0xcafe, false); f.decorate();
    const auto original = f.output.window({0});
    auto operation = f.windows.commands().begin(select(1, false), f.menus.get());
    bool nested = false;
    finish(f, *operation, [&](auto &parent, const auto &event, auto &) {
        if (nested || !is_tick(event)) return;
        nested = true;
        check(!f.state.flag(0x55), "Nested fixture missed the selected child's initial delay callback");
        const auto pending = parent.event();
        const auto pool = f.windows.menu_options();
        Conversation child(f.scripts, *f.menus);
        child.start_nested(EntryId{2}, parent);
        rejects([&] { parent.advance(0); }, "Parent resumed through an active selected-text grandchild");
        rejects([&] { parent.respond(); }, "Parent acknowledged a grandchild-owned event");
        rejects([&] { f.output.begin_glyph(0x61); }, "Raw output bypassed nested context ownership");
        check(f.windows.menu_options() == pool && parent.event() == pending,
              "Rejected parent execution changed menu state or its pending event");
        finish_child(child);
        check(parent.event() == pending && parent.advance(0) == Progress::Suspended,
              "Nested context implicitly acknowledged its suspended parent");
    });
    check(nested && operation->result() == 0xbeef && f.state.focus == WindowId{1} &&
              f.output.window({0}) == original && f.state.flag(0x55),
          "Outer restore used a local snapshot instead of the nested helper's shared backup");
    check(wallet_child ? f.reads == 1 : f.state.windows.at({1}).active.working == 0xcafe,
          "Nested service did not finish its own live read or post-restore result write");
}
void closed_saved_window(eb::GameVersion version, bool reopen) {
    context = reopen ? "restoration into reopened logical ID" : "closed saved context";
    std::vector<std::uint8_t> child{0x18, 3, 0, 0x18, 0};
    if (reopen) {
        const std::array<std::uint8_t, 13> commands{0x18, 1, 2, 0x18, 1, 0, 0x18, 5, 7, 2, 0x1c, 9, 5};
        child.insert(child.end(), commands.begin(), commands.end());
    }
    child.insert(child.end(), {0x18, 3, 1, 2});
    Fixture f(version, {2}, {0x10, 0, 2}, child);
    f.choice(); f.decorate();
    // JP CREATE inherits the source active register bank even while focus is
    // absent. Keep the closed window's physical bank explicit across reopen.
    f.state.unfocused_register_slot = 0;
    const auto saved = f.output.window({0});
    auto operation = f.windows.commands().begin(select(1, false), f.menus.get());
    bool changed = false;
    finish(f, *operation, [&](auto &parent, const auto &event, auto &) {
        if (changed || !is_tick(event)) return;
        changed = true;
        Conversation nested(f.scripts, *f.menus);
        nested.start_nested(EntryId{2}, parent);
        finish_child(nested);
    });
    check(changed && operation->result() == 0xbeef &&
              f.state.focus == WindowId{reopen ? 0u : 1u},
          "Closed saved ID was reopened or cleared focus during conditional restore");
    if (reopen)
        check(f.windows.slot_for({0}) == 2 && f.output.window({0}) == saved &&
                  f.windows.metadata({0}).number_padding == 0xfe,
              "Restore captured a stale physical slot instead of the reopened logical window");
    else
        check(!f.windows.slot_for({0}), "Restore fabricated the closed original window");
}
void validation_and_abandonment(eb::GameVersion version) {
    context = "window coordinator validation and abandonment";
    Fixture f(version), foreign(version);
    f.choice(); foreign.choice();
    const auto pool = f.windows.menu_options();
    const auto frame = f.output.frame({0});
    rejects([&] { f.windows.commands().begin(select()); }, "Selection accepted a missing menu service");
    rejects([&] { f.windows.commands().begin(select(), foreign.menus.get()); }, "Selection accepted a foreign window pool");
    rejects([&] { f.windows.commands().begin(select(52), f.menus.get()); }, "Selection accepted a closed/out-of-domain target");
    Request missing; missing.kind = RequestKind::SelectInWindow;
    rejects([&] { f.windows.commands().begin(missing, f.menus.get()); }, "Selection accepted a missing target payload");
    check(f.state.focus == WindowId{0} && f.windows.menu_options() == pool &&
              f.output.frame({0})->pixels == frame->pixels && f.output.complete(),
          "Invalid request changed state or acquired ownership before validation");
    auto abandoned = f.windows.commands().begin(select(), f.menus.get());
    check(abandoned->advance(0) == Progress::BudgetExhausted, "Fixture executed before its work budget");
    abandoned.reset();
    rejects([&] { f.output.begin_glyph(0x61); }, "Abandoned context operation permitted resumed output execution");
    check(f.output.frame({0})->pixels == frame->pixels, "Poisoned execution disabled immutable frame sampling");
}
void positioning_controls(eb::GameVersion version, bool pixel) {
    context = "authored raw positioning and absent style guards";
    Fixture f(version, {0x18, 5, 255, 255, 0x1c, 9, 0, 0x1f, 0x31, 2});
    f.output.set_cursor({0}, {2, 1}, version == eb::GameVersion::US ? 3 : 0);
    f.windows.metadata({0}).number_padding = 0xab;
    f.windows.menu_state().force_left_alignment = pixel;
    f.state.focus.reset(); f.state.unfocused_register_slot = 0;
    const auto brush = f.output.composition_snapshot();
    const auto pixels = f.output.frame({0})->pixels;
    Conversation conversation(f.scripts, f.windows);
    conversation.start(EntryId{0});
    check(conversation.advance() == Progress::Finished && !conversation.event(),
          "Immediate authored context controls invented a host effect");
    const bool fractional = pixel && version == eb::GameVersion::US;
    check(f.windows.slot_output(0).cursor == TextCursor{std::uint16_t(fractional ? 31 : 255), 255} &&
              f.windows.slot_output(0).style.font == 0 && f.windows.slot(0).number_padding == 0xab &&
              !f.state.focus && f.output.frame({0})->pixels == pixels,
          "Source positioning clamped bytes, applied absent-focus style changes or painted a canvas");
    if (version == eb::GameVersion::JP)
        check(f.output.composition_snapshot() == brush, "JP raw positioning aligned Saturn composition");
    else
        check(f.output.fractional_offset() == (fractional ? 7 : 0) &&
                  f.output.last_pixel_offset_set() == (fractional ? 7 : 3),
              "US raw positioning lost fractional brush or persistent offset semantics");
    rejects([&] { f.output.set_cursor({0}, {255, 255}); }, "Private source positioning weakened public setup bounds");
}
void raw_restoration(eb::GameVersion version) {
    for (bool stream_save : {false, true}) {
        context = stream_save ? "raw per-stream attribute restore" : "raw scoped-selection attribute restore";
        const std::vector<std::uint8_t> bytes = stream_save
            ? std::vector<std::uint8_t>{0x18, 5, 255, 255, 0x18, 2, 0x18, 5, 0, 0, 2}
            : std::vector<std::uint8_t>{0x18, 5, 255, 255, 0x18, 9, 1, 2};
        Fixture f(version, bytes);
        f.choice();
        const auto pixels = f.output.frame({0})->pixels;
        Conversation text(f.scripts, *f.menus);
        text.start(EntryId{0});
        finish_child(text);
        check(f.state.focus == WindowId{0} && f.output.window({0}).cursor == TextCursor{255, 255} &&
                  f.output.frame({0})->pixels == pixels,
              "Source save/restore clipped raw cursor words or painted the out-of-rectangle location");
        check(f.state.windows.at({0}).active.working == (stream_save ? 0x12345678 : 0xbeef),
              "Context result write happened before restoration or leaked into per-stream save");
        rejects([&] { f.output.set_cursor({0}, {255, 255}); },
                "Raw restoration weakened the bounded public positioning API");
    }
}
void late_money_failure(eb::GameVersion version, bool missing_provider) {
    context = missing_provider ? "missing live wallet provider" : "unsupported live wallet number";
    Fixture f(version, {2}, {2}, {2}, false);
    if (missing_provider)
        f.windows.substitutions().configure(resources(version).substitutions);
    else
        f.amount = 10000000;
    auto operation = f.windows.commands().begin(wallet());
    rejects([&] { finish(f, *operation); }, "Wallet fabricated a value or widened unsupported numeric content");
    check(f.windows.slot_for({10}).has_value() && f.state.focus == WindowId{10} &&
              f.windows.metadata({10}).number_padding == 5 && f.output.window({10}).cursor == TextCursor{} &&
              f.output.policy().instant && f.state.windows.at({0}).active.working == 0x12345678 &&
              f.reads == (missing_provider ? 0u : 1u),
          "Late provider error rolled back observable source work or read money at the wrong stage");
}
struct StoryResult {
    std::vector<MenuEvent> events;
    std::vector<std::uint8_t> pixels;
    TextCompositionSnapshot composition;
    std::array<WindowMenuOption, 70> options;
    std::optional<Location> returned;
    bool operator==(const StoryResult &) const = default;
};
StoryResult story(eb::GameVersion version, unsigned budget) {
    context = "whole authored context story budget " + std::to_string(budget);
    const std::vector<std::uint8_t> bytes{0x18, 5, 7, 1, 0x1f, 0x31, 0x1c, 9, 0xff,
        0x18, 9, 1, 0x18, 0x0a, 0x1f, 0x30, 0x18, 5, 0, 2, 0x61, 2};
    Fixture f(version, bytes);
    f.choice();
    Conversation conversation(f.scripts, *f.menus);
    conversation.start(EntryId{0});
    StoryResult result;
    unsigned polls = 0;
    for (unsigned work = 0; work < 20000; ++work) {
        const auto progress = conversation.advance(budget);
        if (progress == Progress::Finished) break;
        if (progress == Progress::BudgetExhausted) continue;
        const auto event = conversation.event();
        check(event && !std::holds_alternative<Request>(*event), "Native context story leaked an unhandled request");
        const auto before = conversation.snapshot();
        check(conversation.advance(0) == Progress::Suspended && conversation.event() == event &&
                  conversation.snapshot().consumed_bytes == before.consumed_bytes,
              "Pending context event fetched later authored content");
        result.events.push_back(*event);
        Response response;
        if (const auto *menu = std::get_if<MenuEffect>(&*event); menu && menu->kind == MenuEffectKind::Input) {
            ++polls; response.pressed = std::uint16_t(MenuButton::A);
        }
        conversation.respond(response);
    }
    check(conversation.finished() && polls == 1 && f.reads == 1 && f.state.focus == WindowId{0} &&
              f.state.windows.at({0}).active.working == 0xbeef &&
              f.state.windows.at({1}).active.working == 0x87654321 && f.state.flag(0x55) &&
              f.windows.menu_options()[0].flags == 2 && f.windows.metadata({1}).first_option == 0 &&
              f.windows.metadata({0}).number_padding == 0xff && f.output.window({0}).style.font == 0 &&
              !f.output.policy().instant,
          "Context story stored result before restore, reset choices or lost wallet/style postconditions");
    result.pixels = f.output.frame({0})->pixels;
    result.composition = f.output.composition_snapshot();
    result.options = f.windows.menu_options();
    result.returned = conversation.snapshot().returned_cursor;
    check(result.returned == Location{0, std::uint16_t(bytes.size())}, "Context handlers consumed the wrong operand widths");
    return result;
}
} // namespace
int main() {
    try {
        for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            for (bool cancel : {false, true}) for (bool absent : {false, true})
                selection_restore(version, cancel, absent);
            wallet_behavior(version, false, false, false);
            wallet_behavior(version, true, false, false);
            wallet_behavior(version, false, true, false);
            wallet_behavior(version, false, false, true);
            wallet_behavior(version, false, true, true);
            nested_context(version, false);
            nested_context(version, true);
            closed_saved_window(version, false);
            closed_saved_window(version, true);
            validation_and_abandonment(version);
            positioning_controls(version, false);
            positioning_controls(version, true);
            raw_restoration(version);
            late_money_failure(version, false);
            late_money_failure(version, true);
            const auto one = story(version, 1);
            check(one == story(version, 7) && one == story(version, 4096),
                  "Logical work budget changed complete context-story effects/state/rendering");
        }
        std::cout << "PASS " << checks << " native window-command checks\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "FAIL [" << context << "] " << error.what() << '\n';
        return 1;
    }
}
