#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "native_dialogue_test_assets.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok, const char *message) {
    ++checks;
    if (!ok)
        throw std::runtime_error(message);
}
template <class F> void rejects(F function, const char *message) {
    bool rejected = false;
    try {
        function();
    } catch (const std::exception &) {
        rejected = true;
    }
    check(rejected, message);
}
struct Assets {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const MenuResources> menus;
};
Assets make_assets(eb::GameVersion version) {
    dialogue_test_assets::WindowInput input(version);
    dialogue_test_assets::add_text_fonts(input);
    for (unsigned id = 0; id < input.count; ++id) {
        input.put(input.configs + id * 8, 0);
        input.put(input.configs + id * 8 + 2, (id % 3) * 8);
        input.put(input.configs + id * 8 + 4, 16);
        input.put(input.configs + id * 8 + 6, 8);
    }
    const bool jp = version == eb::GameVersion::JP;
    const unsigned blink = jp ? 0x3e3e8 : 0x3e406, label = jp ? 0x3e42e : 0x3e44c;
    input.put(blink, 0x0441);
    input.put(blink + 2, 0x204f);
    input.put(blink + 4, 0x0451);
    input.put(blink + 6, 0x205f);
    input.image[label] = 0x71;
    input.image[label + 1] = 0x72;
    input.image[label + 2] = 0;
    return {FontResources::import(input.image, version), input.import(),
            MenuResources::import(input.image, version)};
}
const Assets &assets(eb::GameVersion version) {
    static const auto us = make_assets(eb::GameVersion::US), jp = make_assets(eb::GameVersion::JP);
    return version == eb::GameVersion::US ? us : jp;
}
std::shared_ptr<const Program> program(eb::GameVersion version, std::vector<std::uint8_t> root,
                                       std::vector<std::uint8_t> selected = {0x0f, 2}) {
    return std::make_shared<const Program>(
        version, std::vector<ContentBlock>{{0, 0, std::move(root)}, {1, 0, std::move(selected)}},
        std::vector<Location>{{0, 0}, {1, 0}});
}
struct Fixture {
    std::shared_ptr<const Program> scripts;
    State state;
    TextOutput output;
    WindowHost windows;
    MenuHost menus;
    MenuModel model;
    MenuPrinter printer;
    Fixture(eb::GameVersion version, std::vector<std::uint8_t> root = {2},
            std::vector<std::uint8_t> selected = {0x0f, 2})
        : scripts(program(version, std::move(root), std::move(selected))),
          output(assets(version).fonts, state), windows(assets(version).windows, state, output),
          menus(scripts, windows, assets(version).menus), model(windows, *assets(version).fonts),
          printer(windows, assets(version).menus) {}
    void tick() {
        windows.draw_tick();
        windows.publish_scene();
    }
    void finish(WindowHost::Operation &operation) {
        for (unsigned i = 0; i < 128; ++i) {
            if (operation.advance() == OutputProgress::Complete)
                return;
            if (operation.effect()->kind == WindowEffectKind::WindowTick)
                tick();
            operation.respond();
        }
        throw std::runtime_error("Window fixture exhausted work");
    }
    void open(unsigned id) {
        auto operation = windows.begin({WindowAction::Open, WindowId{id}, {}, 0});
        finish(*operation);
    }
    void page() {
        auto operation = printer.begin({MenuPrintAction::Page});
        for (unsigned i = 0; i < 4096; ++i) {
            if (operation->advance() == OutputProgress::Complete)
                return;
            if (const auto *text = std::get_if<TextEffect>(&*operation->effect());
                text && text->kind == TextEffectKind::WindowTick)
                tick();
            if (const auto *window = std::get_if<WindowEffect>(&*operation->effect());
                window && window->kind == WindowEffectKind::WindowTick)
                tick();
            operation->respond();
        }
        throw std::runtime_error("Menu page fixture exhausted work");
    }
    void options(unsigned id = 1, bool scripts_enabled = false) {
        open(id);
        const std::array<std::uint8_t, 1> first{0x71}, second{0x72}, third{0x73};
        const auto script = scripts_enabled ? std::optional(Location{1, 0}) : std::nullopt;
        model.append_at(first, script, 0, 0);
        model.append_at(second, script, 0, 1);
        model.append_at(third, script, 5, 1);
        page();
    }
};
Progress next(MenuHost::Operation &operation, unsigned budget = 1) {
    for (unsigned i = 0; i < 20000; ++i) {
        const auto progress = operation.advance(budget);
        if (progress != Progress::BudgetExhausted)
            return progress;
    }
    throw std::runtime_error("Menu fixture exhausted dispatch work");
}
Progress next(Conversation &text) {
    for (unsigned i = 0; i < 20000; ++i) {
        const auto progress = text.advance(1);
        if (progress != Progress::BudgetExhausted)
            return progress;
    }
    throw std::runtime_error("Conversation fixture exhausted dispatch work");
}
void acknowledge(Fixture &f, MenuHost::Operation &operation) {
    const auto &event = *operation.event();
    if (const auto *window = std::get_if<WindowEffect>(&event);
        window && window->kind == WindowEffectKind::WindowTick)
        f.tick();
    else if (const auto *text = std::get_if<TextEffect>(&event);
             text && text->kind == TextEffectKind::WindowTick)
        f.tick();
    operation.respond();
}
void seek(Fixture &f, MenuHost::Operation &operation, MenuEffectKind kind) {
    for (unsigned i = 0; i < 1000; ++i) {
        check(next(operation) == Progress::Suspended, "Menu returned before expected service");
        if (const auto *effect = std::get_if<MenuEffect>(&*operation.event()); effect && effect->kind == kind)
            return;
        check(!std::holds_alternative<Request>(*operation.event()), "Unexpected authored request in fixture");
        acknowledge(f, operation);
    }
    throw std::runtime_error("Expected menu service did not arrive");
}
std::uint16_t finish(Fixture &f, MenuHost::Operation &operation) {
    for (unsigned i = 0; i < 2000; ++i) {
        if (next(operation) == Progress::Finished)
            return operation.result();
        if (const auto *effect = std::get_if<MenuEffect>(&*operation.event());
            effect && effect->kind == MenuEffectKind::Input)
            operation.respond({std::uint16_t(MenuButton::A), 0, 0});
        else
            acknowledge(f, operation);
    }
    throw std::runtime_error("Selection fixture did not finish");
}
void no_focus(eb::GameVersion version) {
    Fixture f(version);
    auto operation = f.menus.begin();
    rejects([&] { (void)operation->result(); }, "Unfinished menu exposed a result");
    check(operation->advance(0) == Progress::BudgetExhausted && !operation->event(),
          "Zero work budget started menu execution");
    check(next(*operation) == Progress::Finished && operation->result() == 0 && !operation->event(),
          "No-focus selection emitted effects or returned a nonzero result");
    check(operation->advance() == Progress::Finished, "Completed selection restarted");
    rejects([&] { operation->respond(); }, "Completed selection accepted a response");
}
void pending_and_navigation(eb::GameVersion version) {
    Fixture f(version);
    f.options();
    f.windows.metadata({1}).cursor_callback = MenuCallbackId{7};
    auto operation = f.menus.begin();
    seek(f, *operation, MenuEffectKind::Callback);
    check(std::get<MenuEffect>(*operation->event()) ==
              MenuEffect{MenuEffectKind::Callback, 1, MenuCallbackId{7}},
          "Initial cursor callback lost ordinal or registered identity");
    const auto pending = operation->event();
    const auto registers = f.state.window();
    const auto menu = f.windows.menu_options();
    const auto frame = f.windows.frame();
    for (unsigned i = 0; i < 8; ++i) {
        check(operation->advance(0) == Progress::Suspended && operation->event() == pending &&
                  f.windows.menu_options() == menu && f.state.window() == registers &&
                  f.windows.frame()->pixels == frame->pixels,
              "Pending selection or presentation sampling advanced logical state");
    }
    rejects([&] { auto other = f.menus.begin(); }, "Second root menu stole active output");
    // A registered native callback may perform nested window work. Its focus
    // change must be visible until the original selection restores its ID.
    auto opening = f.menus.begin_window({WindowAction::Open, WindowId{2}, {}, 0}, *operation);
    check(opening->advance() == OutputProgress::Suspended && f.state.focus == WindowId{2},
          "Nested native menu callback did not open its window");
    rejects([&] { operation->respond(); }, "Parent callback resumed over unfinished nested window work");
    rejects([&] { operation->advance(); }, "Parent callback advanced over a nested window activation");
    f.finish(*opening);
    operation->respond();
    seek(f, *operation, MenuEffectKind::Input);
    check(f.state.focus == WindowId{1}, "Cursor callback did not restore the captured window ID");
    operation->respond({std::uint16_t(MenuButton::Down), 0, 0});
    seek(f, *operation, MenuEffectKind::Sound);
    check(std::get<MenuEffect>(*operation->event()).value == 3, "Vertical movement sound changed");
    rejects(
        [&] {
            Conversation child(f.scripts, f.menus);
            child.start_nested(EntryId{1}, *operation);
        },
        "Sound service incorrectly admitted nested dialogue");
    operation->respond();
    seek(f, *operation, MenuEffectKind::Callback);
    check(std::get<MenuEffect>(*operation->event()).value == 2, "Movement callback used stale ordinal");
    operation->respond();
    check(finish(f, *operation) == 2 && f.windows.metadata({1}).selected_option == 1 &&
              !f.output.policy().instant && f.output.window({1}).style.palette == 0,
          "Confirmed selection lost its result, ordinal or final print policy");
}
void held_failure_and_cancel(eb::GameVersion version) {
    for (unsigned mode : {0u, 1u, 2u}) {
        Fixture f(version);
        f.options();
        f.windows.metadata({1}).cursor_callback = MenuCallbackId{2};
        auto operation = f.menus.begin(std::uint16_t(mode));
        seek(f, *operation, MenuEffectKind::Input);
        // A held direction at the edge does not wrap; it executes setup and
        // callback again, and takes priority over simultaneous confirmation.
        operation->respond({std::uint16_t(MenuButton::A), std::uint16_t(MenuButton::Up), 0});
        check(next(*operation) == Progress::Suspended &&
                  std::get<MenuEffect>(*operation->event()).kind == MenuEffectKind::Callback &&
                  std::get<MenuEffect>(*operation->event()).value == 1,
              "Held edge wrapped, emitted sound or confirmed instead of repeating callback");
        operation->respond();
        seek(f, *operation, MenuEffectKind::Input);
        operation->respond({std::uint16_t(MenuButton::Select), 0, 0});
        if (mode == 1)
            check(finish(f, *operation) == 0, "Cancellable menu ignored Select");
        else {
            check(next(*operation) == Progress::Suspended &&
                      std::get<MenuEffect>(*operation->event()).kind == MenuEffectKind::Input,
                  "Cancel mode other than one incorrectly admitted Select");
            operation->respond({std::uint16_t(MenuButton::L), 0, 0});
            check(finish(f, *operation) == 1, "L did not confirm after ignored cancellation");
        }
    }
}
void selected_dialogue_and_nested(eb::GameVersion version) {
    Fixture f(version, {2}, {0x10, 1, 0x0f, 2});
    f.options(1, true);
    auto operation = f.menus.begin();
    check(next(*operation) == Progress::Suspended &&
              std::get<Request>(*operation->event()).kind == RequestKind::Pause,
          "Authored selected-option dialogue did not execute within selection");
    const auto parent_event = operation->event();
    Conversation child(program(version, {0x10, 2, 0x0f, 2}), f.menus);
    child.start_nested(EntryId{0}, *operation);
    check(next(child) == Progress::Suspended && std::get<Request>(*child.event()).count == 2,
          "Selected dialogue callback did not admit a second authored activation");
    rejects([&] { operation->advance(); }, "Selection ran ahead of external child dialogue");
    rejects([&] { operation->respond(); },
            "Selection acknowledged selected dialogue before its child returned");
    child.respond();
    check(next(child) == Progress::Finished && f.state.window().active.secondary == 1,
          "Nested authored callback failed to return its state");
    check(operation->event() == parent_event, "Nested dialogue replaced selected-option pending request");
    operation->respond();
    seek(f, *operation, MenuEffectKind::Input);
    check(f.state.window().active.secondary == 2,
          "Selected-option dialogue did not resume after nested callback");
    operation->respond({std::uint16_t(MenuButton::B), 0, 0});
    check(finish(f, *operation) == 0, "Nested selected dialogue did not return to cancel processing");
}
void nested_selection(eb::GameVersion version) {
    Fixture f(version);
    f.options(1);
    f.options(2);
    f.state.focus = WindowId{1};
    f.windows.metadata({1}).cursor_callback = MenuCallbackId{17};
    auto parent = f.menus.begin();
    seek(f, *parent, MenuEffectKind::Callback);
    f.state.focus = WindowId{2};
    auto child = f.menus.begin_nested(1, *parent);
    seek(f, *child, MenuEffectKind::Input);
    rejects([&] { parent->advance(); }, "Parent selection ran while child selection owned output");
    child->respond({std::uint16_t(MenuButton::Down), 0, 0});
    check(finish(f, *child) == 2 && f.windows.metadata({2}).selected_option == 1,
          "Nested menu selection lost its call-local ordinal");
    parent->respond();
    check(finish(f, *parent) == 1 && f.state.focus == WindowId{1} &&
              f.windows.metadata({1}).selected_option == 0,
          "Nested selection corrupted its parent's captured option or restored focus");
}
void idle_and_blink(eb::GameVersion version) {
    Fixture f(version);
    f.options(0);
    auto operation = f.menus.begin();
    unsigned polls = 0, money = 0;
    std::shared_ptr<const TextFrame> first, second;
    for (unsigned step = 0; step < 1000; ++step) {
        if (next(*operation) == Progress::Finished)
            break;
        if (const auto *effect = std::get_if<MenuEffect>(&*operation->event())) {
            if (effect->kind == MenuEffectKind::Input) {
                ++polls;
                if (polls == 1)
                    first = f.windows.frame();
                if (polls == 11)
                    second = f.windows.frame();
                for (unsigned sample = 0; sample < 5; ++sample)
                    (void)f.windows.frame();
                operation->respond({polls == 63 ? std::uint16_t(MenuButton::A) : std::uint16_t(0), 0, 0});
                continue;
            }
            if (effect->kind == MenuEffectKind::ShowMoneyMeters) {
                check(polls == 61, "Money meters opened at a render count instead of the 61st input poll");
                ++money;
                auto open = f.menus.begin_window({WindowAction::Open, WindowId{10}, {}, 0}, *operation);
                f.finish(*open);
            }
        }
        acknowledge(f, *operation);
    }
    check(operation->complete() && operation->result() == 1 && polls == 63 && money == 1,
          "Idle menu polling or money callback changed source timing");
    check(first && second && first->pixels != second->pixels,
          "Two-frame selected marker did not change after ten input polls");
}
void authored_selection_commands(eb::GameVersion version) {
    for (unsigned selector : {0x11u, 4u, 8u, 9u}) {
        std::vector<std::uint8_t> root;
        if (selector == 0x11)
            root = {0x11, 0x0f, 2};
        else
            root = {0x1a, std::uint8_t(selector), 0x0f, 2};
        Fixture f(version, root);
        f.options(1, true);
        Conversation conversation(f.scripts, f.menus);
        bool observed_result = false;
        conversation.observe([&](const Event &event) {
            if (event.kind == EventKind::RegisterChanged && event.reg == RegisterKind::Working) {
                observed_result = true;
                check(event.value == 1 && f.windows.menu_options()[0].flags == 1,
                      "Authored selection freed options before assigning working memory");
            }
        });
        conversation.start(EntryId{0});
        for (unsigned step = 0; step < 1000; ++step) {
            if (next(conversation) == Progress::Finished)
                break;
            const auto &event = *conversation.event();
            check(!std::holds_alternative<Request>(event),
                  "Native conversation forwarded its implemented selection or cleanup");
            Response response;
            if (const auto *menu = std::get_if<MenuEffect>(&event);
                menu && menu->kind == MenuEffectKind::Input)
                response.pressed = std::uint16_t(MenuButton::A);
            if (const auto *window = std::get_if<WindowEffect>(&event);
                window && window->kind == WindowEffectKind::WindowTick)
                f.tick();
            if (const auto *text = std::get_if<TextEffect>(&event);
                text && text->kind == TextEffectKind::WindowTick)
                f.tick();
            conversation.respond(response);
        }
        check(conversation.finished() && observed_result && f.state.window().active.working == 1 &&
                  f.state.window().active.secondary == 2,
              "Native dialogue menu failed to execute selected script and resume its parent");
        const bool reset = selector == 0x11 || selector == 4;
        check((f.windows.metadata({1}).first_option == 0xffff) == reset &&
                  (f.windows.menu_options()[0].flags == 0) == reset,
              "CC11/1A04 cleanup or 1A08/09 retention differs");
    }
}
} // namespace
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            no_focus(version);
            pending_and_navigation(version);
            held_failure_and_cancel(version);
            selected_dialogue_and_nested(version);
            nested_selection(version);
            idle_and_blink(version);
            authored_selection_commands(version);
        }
        std::cout << "Native dialogue menus: " << checks << " checks passed\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
