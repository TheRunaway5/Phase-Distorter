#include "eb/native/dialogue/menu_host.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/menu_navigation.hpp"
#include "eb/native/dialogue/menu_commands.hpp"
#include "eb/native/dialogue/inventory.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::dialogue {
namespace {
void require(bool condition, const char *message) {
    if (!condition)
        throw std::logic_error(message);
}
bool pressed(std::uint16_t bits, MenuButton button) { return (bits & std::uint16_t(button)) != 0; }
bool callback_event(const MenuEvent &event) {
    if (const auto *effect = std::get_if<MenuEffect>(&event))
        return effect->kind != MenuEffectKind::Sound;
    if (const auto *effect = std::get_if<TextEffect>(&event))
        return effect->kind == TextEffectKind::WindowTick;
    if (const auto *effect = std::get_if<WindowEffect>(&event))
        return effect->kind == WindowEffectKind::WindowTick;
    if (std::holds_alternative<PromptEffect>(event)) return true;
    const auto &request = std::get<Request>(event);
    return request.kind == RequestKind::Pause || request.kind == RequestKind::TimedWait || request.kind == RequestKind::Prompt ||
           request.kind == RequestKind::Selection;
}
} // namespace
struct MenuHost::Execution {
    std::shared_ptr<const Program> program;
    WindowHost &windows;
    MenuPrinter printer;
    std::unique_ptr<MenuCommands> commands;
    std::unique_ptr<Inventory> inventory;
    PromptHost *prompts{};
    Execution(std::shared_ptr<const Program> p, WindowHost &w, std::shared_ptr<const MenuResources> r)
        : program(std::move(p)), windows(w), printer(w, std::move(r)) {
        require(program && program->version() == w.version(), "Menu program and windows must share a region");
        windows.bind_menu_program(*program);
    }
};
struct MenuHost::Operation::Execution {
    enum class Stage {
        Start,
        RestoreHighlight,
        Setup,
        Callback,
        RestoreFocus,
        PositionSelected,
        SelectedGlyph,
        SelectedTick,
        BeginBlink,
        Blink,
        Poll,
        Input,
        FindMovedOption,
        PositionOld,
        EraseOld,
        AdoptMoved,
        PositionConfirmed,
        EraseConfirmed,
        HighlightConfirmed,
        FinishConfirmed,
        ClearPage,
        AdvancePage,
        ClearPageCanvas,
        PageTick,
        PrintPage,
        AfterPage,
        FocusMoney,
        Finish,
        Complete
    };
    MenuHost &host;
    WindowHost &windows;
    TextOutput &output;
    TextOutput::Owner owner{};
    bool owns_activation{};
    std::uint16_t cancel_mode{}, ordinal{}, value{}, idle_count{}, poll_count{};
    WindowId original_id{};
    unsigned slot{}, option{}, moved_option{}, blink_phase{};
    std::uint16_t moved_ordinal{};
    TextCursor destination{};
    MenuResponse input;
    Stage stage = Stage::Start;
    std::optional<MenuEvent> event;
    std::unique_ptr<MenuPrinter::Operation> print;
    std::unique_ptr<WindowHost::Operation> window;
    std::unique_ptr<Conversation> text;

    Execution(MenuHost &h, std::uint16_t mode, TextOutput::Owner o, bool owns)
        : host(h), windows(h.windows()), output(windows.output()), owner(o), owns_activation(owns),
          cancel_mode(mode) {}
    bool japanese() const { return windows.version() == GameVersion::JP; }
    WindowMetadata &record() { return windows.slot(slot); }
    WindowMenuOption &current() { return windows.menu_options().at(option); }
    std::uint16_t selected_value() {
        return current().flags == 1 ? std::uint16_t(ordinal + 1) : current().userdata;
    }
    void palette(std::uint8_t number) {
        if (auto id = windows.state().focus) {
            auto style = output.window(*id).style;
            style.palette = number;
            style.priority = style.flip_horizontal = style.flip_vertical = false;
            output.set_style(*id, style);
        }
    }
    void focus(WindowId id) {
        require(windows.slot_for(id).has_value(), "Selection callback restored a closed window ID");
        windows.state().focus = id;
    }
    void run_print(MenuPrintCommand command, Stage next) {
        print = host.execution_->printer.begin(command, owner);
        stage = next;
    }
    void position(Stage next, std::uint16_t delta = 0) {
        MenuPrintCommand command{MenuPrintAction::Position};
        command.option = option;
        command.x_delta = delta;
        run_print(command, next);
    }
    void glyph(std::uint16_t character, Stage next) {
        MenuPrintCommand command{MenuPrintAction::FixedGlyph};
        command.character = character;
        run_print(command, next);
    }
    void sound(std::uint16_t id, Stage next) {
        stage = next;
        event = MenuEffect{MenuEffectKind::Sound, id, {}};
    }
    void tick(Stage next) {
        stage = next;
        event = WindowEffect{WindowEffectKind::WindowTick};
    }
    unsigned next(unsigned from) {
        const auto successor = windows.menu_options().at(from).next;
        require(successor.has_value(), "Selection ordinal exceeds the option chain");
        require(*successor < windows.menu_options().size(), "Selection option exceeds the source pool");
        return *successor;
    }
    void move(MenuDirection direction, bool wrap) {
        const auto id = windows.state().focus;
        require(id.has_value(), "Menu movement requires focused output");
        const TextCursor from{current().x, current().y};
        const auto geometry = windows.slot_output(slot).geometry;
        std::optional<TextCursor> origin;
        if (wrap) {
            switch (direction) {
            case MenuDirection::Up:
                origin = TextCursor{from.column, std::uint16_t(geometry.tile_rows / 2)};
                break;
            case MenuDirection::Left:
                origin = TextCursor{geometry.columns, from.line};
                break;
            case MenuDirection::Down:
                origin = TextCursor{from.column, 0xffff};
                break;
            case MenuDirection::Right:
                origin = TextCursor{0xffff, from.line};
                break;
            }
        }
        const auto found = find_menu_marker(output, *id, from, direction, origin);
        if (!found) {
            stage = Stage::Setup;
            return;
        }
        destination = *found;
        sound(direction == MenuDirection::Up || direction == MenuDirection::Down ? 3 : 2,
              Stage::FindMovedOption);
    }
    void interpret_input() {
        constexpr std::array buttons{MenuButton::Up, MenuButton::Left, MenuButton::Down, MenuButton::Right};
        constexpr std::array directions{MenuDirection::Up, MenuDirection::Left, MenuDirection::Down,
                                        MenuDirection::Right};
        for (unsigned pass = 0; pass < 2; ++pass)
            for (unsigned i = 0; i < buttons.size(); ++i)
                if (pressed(pass ? input.held : input.pressed, buttons[i])) {
                    move(directions[i], pass == 0);
                    return;
                }
        if (pressed(input.pressed, MenuButton::A) || pressed(input.pressed, MenuButton::L)) {
            output.policy().instant = true;
            if (current().page)
                sound(current().sound_effect, Stage::PositionConfirmed);
            else
                sound(2, Stage::ClearPage);
            return;
        }
        if (cancel_mode == 1 &&
            (pressed(input.pressed, MenuButton::B) || pressed(input.pressed, MenuButton::Select))) {
            value = 0;
            sound(2, Stage::Finish);
            return;
        }
        ++idle_count;
        const auto zero_slot = windows.slot_for(WindowId{0});
        const auto order = windows.draw_order();
        const auto tail = order.empty() ? std::nullopt : windows.slot_for(order.back());
        if (zero_slot == tail && idle_count > 60) {
            stage = Stage::FocusMoney;
            if (japanese() || !windows.slot_for(WindowId{10}))
                event = MenuEffect{MenuEffectKind::ShowMoneyMeters, 0, {}};
            return;
        }
        ++poll_count;
        stage = poll_count < 10 ? Stage::Poll : Stage::Blink;
    }
    void step() {
        switch (stage) {
        case Stage::Start: {
            const auto id = windows.state().focus;
            if (!id) {
                value = 0;
                stage = Stage::Finish;
                break;
            }
            original_id = *id;
            const auto index = windows.slot_for(*id);
            require(index.has_value(), "Selection requires an open focused window");
            slot = *index;
            auto &shared = windows.menu_state();
            if (!japanese() && shared.restore_backup) {
                record().first_option = shared.backup_first_option;
                record().selected_option = shared.backup_selected_option;
            }
            option = record().first_option;
            require(option < windows.menu_options().size(), "Selection requires a valid option chain");
            ordinal = record().selected_option == 0xffff ? 0 : record().selected_option;
            for (unsigned i = 0; i < ordinal; ++i)
                option = next(option);
            if (record().selected_option != 0xffff) {
                output.policy().instant = true;
                position(Stage::RestoreHighlight, 1);
            } else
                stage = Stage::Setup;
            break;
        }
        case Stage::RestoreHighlight: {
            MenuPrintCommand command{MenuPrintAction::Highlight};
            command.option = option;
            command.selected = false;
            run_print(command, Stage::Setup);
            break;
        }
        case Stage::Setup:
            idle_count = 0;
            stage = Stage::Callback;
            if (const auto script = current().selected_text) {
                output.policy().instant = true;
                text = std::make_unique<Conversation>(host.execution_->program, host);
                text->start(*script, owner);
            }
            break;
        case Stage::Callback:
            stage = Stage::PositionSelected;
            if (const auto callback = record().cursor_callback) {
                event = MenuEffect{MenuEffectKind::Callback, selected_value(), callback};
                stage = Stage::RestoreFocus;
            }
            break;
        case Stage::RestoreFocus:
            focus(original_id);
            stage = Stage::PositionSelected;
            break;
        case Stage::PositionSelected: {
            output.policy().instant = false;
            const auto &shared = windows.menu_state();
            if (!japanese() && shared.restore_backup) {
                current().x = shared.backup_x;
                current().y = shared.backup_y;
            }
            position(Stage::SelectedGlyph);
            break;
        }
        case Stage::SelectedGlyph:
            palette(1);
            glyph(33, Stage::SelectedTick);
            break;
        case Stage::SelectedTick:
            palette(0);
            tick(Stage::BeginBlink);
            break;
        case Stage::BeginBlink:
            blink_phase = 1;
            stage = Stage::Blink;
            break;
        case Stage::Blink: {
            blink_phase ^= 1;
            const auto &rectangle = record().rectangle;
            const auto cursor = windows.slot_output(slot).cursor;
            windows.publish_menu_blink(std::uint16_t(rectangle.outer_x + cursor.column),
                                       std::uint16_t(rectangle.outer_y + cursor.line * 2 + 1),
                                       host.execution_->printer.resources().blink(blink_phase));
            poll_count = 0;
            stage = Stage::Poll;
            break;
        }
        case Stage::Poll:
            stage = Stage::Input;
            event = MenuEffect{MenuEffectKind::Input, 0, {}};
            break;
        case Stage::Input:
            interpret_input();
            break;
        case Stage::FindMovedOption: {
            auto candidate = unsigned(record().first_option);
            bool found = false;
            for (unsigned i = 0; i < windows.menu_options().size(); ++i) {
                const auto &entry = windows.menu_options().at(candidate);
                if (entry.x == destination.column && entry.y == destination.line &&
                    (entry.page == record().page_number || entry.page == 0)) {
                    moved_option = candidate;
                    moved_ordinal = std::uint16_t(i);
                    found = true;
                    break;
                }
                candidate = next(candidate);
            }
            require(found, "Visible menu marker has no matching option in the captured window");
            stage = Stage::PositionOld;
            break;
        }
        case Stage::PositionOld:
            position(Stage::EraseOld);
            break;
        case Stage::EraseOld:
            glyph(47, Stage::AdoptMoved);
            break;
        case Stage::AdoptMoved:
            option = moved_option;
            ordinal = moved_ordinal;
            stage = Stage::Setup;
            break;
        case Stage::PositionConfirmed:
            position(Stage::EraseConfirmed);
            break;
        case Stage::EraseConfirmed:
            glyph(47, Stage::HighlightConfirmed);
            break;
        case Stage::HighlightConfirmed: {
            palette(6);
            const auto focus_id = windows.state().focus;
            const bool remainder =
                !japanese() && (!windows.state().word_wrap ||
                                (output.policy().allow_overflow && focus_id == WindowId{0x13}));
            MenuPrintCommand command{remainder ? MenuPrintAction::HighlightRemainder
                                               : MenuPrintAction::Highlight};
            command.option = option;
            if (!japanese() && windows.state().word_wrap && output.policy().allow_overflow)
                command.limit = 4;
            run_print(command, Stage::FinishConfirmed);
            break;
        }
        case Stage::FinishConfirmed:
            palette(0);
            output.policy().instant = false;
            record().selected_option = ordinal;
            value = selected_value();
            stage = Stage::Finish;
            break;
        case Stage::ClearPage:
            window = windows.begin({WindowAction::ClearFocus, {}, {}, 0}, owner, false);
            stage = Stage::AdvancePage;
            break;
        case Stage::AdvancePage: {
            const auto previous = current().previous;
            require(previous.has_value(), "Menu page control requires a preceding option");
            const auto last_page = windows.menu_options().at(*previous).page;
            record().page_number =
                record().page_number == last_page ? 1 : std::uint16_t(record().page_number + 1);
            if (japanese())
                stage = Stage::PrintPage;
            else {
                output.policy().instant = false;
                stage = Stage::ClearPageCanvas;
            }
            break;
        }
        case Stage::ClearPageCanvas:
            output.clear_canvas(original_id, owner);
            output.mark_redraw(owner);
            stage = Stage::PageTick;
            event = WindowEffect{WindowEffectKind::ClearPartyBlink};
            break;
        case Stage::PageTick:
            tick(Stage::PrintPage);
            break;
        case Stage::PrintPage:
            run_print({MenuPrintAction::Page}, Stage::AfterPage);
            break;
        case Stage::AfterPage:
            if (!japanese())
                output.policy().instant = true;
            stage = Stage::Setup;
            break;
        case Stage::FocusMoney:
            focus(WindowId{0});
            stage = Stage::Setup;
            break;
        case Stage::Finish:
            if (owns_activation)
                output.leave(owner);
            owner = 0;
            stage = Stage::Complete;
            break;
        case Stage::Complete:
            break;
        }
    }
};

MenuHost::MenuHost(std::shared_ptr<const Program> p, WindowHost &w, std::shared_ptr<const MenuResources> r)
    : execution_(std::make_unique<Execution>(std::move(p), w, std::move(r))) {}
MenuHost::MenuHost(std::shared_ptr<const Program> p, PromptHost &prompts, std::shared_ptr<const MenuResources> r)
    : MenuHost(std::move(p), prompts.windows(), std::move(r)) { execution_->prompts = &prompts; }
MenuHost::~MenuHost() = default;
PromptHost *MenuHost::prompts() { return execution_->prompts; }
MenuCommands &MenuHost::commands() {
    auto &e = *execution_;
    if (!e.commands)
        e.commands = std::make_unique<MenuCommands>(*e.program, e.windows, e.printer);
    return *e.commands;
}
Inventory &MenuHost::inventory() {
    auto &e = *execution_;
    if (!e.inventory) e.inventory.reset(new Inventory(e.windows, e.printer));
    return *e.inventory;
}
WindowHost &MenuHost::windows() { return execution_->windows; }
MenuHost::Operation::Operation(std::unique_ptr<Execution> e) : execution_(std::move(e)) {}
MenuHost::Operation::~Operation() {
    if (execution_->owner)
        execution_->output.abandon(execution_->owner);
}
std::unique_ptr<MenuHost::Operation> MenuHost::begin(std::uint16_t mode) {
    auto &output = windows().output();
    const auto owner = output.enter();
    try {
        return begin(mode, owner, true);
    } catch (...) {
        output.leave(owner);
        throw;
    }
}
std::unique_ptr<MenuHost::Operation> MenuHost::begin(std::uint16_t mode, TextOutput::Owner owner, bool owns) {
    windows().output().require_owner(owner);
    return std::unique_ptr<Operation>(
        new Operation(std::make_unique<Operation::Execution>(*this, mode, owner, owns)));
}
std::unique_ptr<MenuHost::Operation> MenuHost::begin_nested(std::uint16_t mode, Conversation &parent) {
    auto &output = windows().output();
    const auto owner = output.enter(parent.callback_owner(output));
    try {
        return begin(mode, owner, true);
    } catch (...) {
        output.leave(owner);
        throw;
    }
}
std::unique_ptr<MenuHost::Operation> MenuHost::begin_nested(std::uint16_t mode, Operation &parent) {
    auto &output = windows().output();
    const auto owner = output.enter(parent.callback_owner(output));
    try {
        return begin(mode, owner, true);
    } catch (...) {
        output.leave(owner);
        throw;
    }
}
std::unique_ptr<MenuHost::Operation> MenuHost::begin_nested(std::uint16_t mode, PromptHost::Operation &parent) {
    auto &output = windows().output();
    const auto owner = output.enter(parent.callback_owner(output));
    try { return begin(mode, owner, true); }
    catch (...) { output.leave(owner); throw; }
}
std::unique_ptr<WindowHost::Operation> MenuHost::begin_window(WindowCommand command, Operation &parent) {
    auto &output = windows().output();
    const auto owner = output.enter(parent.callback_owner(output));
    try {
        return windows().begin(std::move(command), owner, true);
    } catch (...) {
        output.leave(owner);
        throw;
    }
}
TextOutput::Owner MenuHost::Operation::callback_owner(TextOutput &output) const {
    const auto &e = *execution_;
    require(&output == &e.output && e.owner && e.event && callback_event(*e.event),
            "Nested menu work requires a suspended world or UI callback sharing output");
    if (e.text)
        return e.text->callback_owner(output);
    output.require_owner(e.owner);
    return e.owner;
}
TextOutput::Owner MenuHost::Operation::active_owner() const {
    const auto &e = *execution_;
    return e.text ? e.text->active_owner() : e.owner;
}
Progress MenuHost::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.stage == Execution::Stage::Complete)
        return Progress::Finished;
    e.output.require_owner(active_owner());
    if (e.event)
        return Progress::Suspended;
    while (budget--) {
        if (e.text) {
            const auto progress = e.text->advance(1);
            if (progress == Progress::Suspended) {
                std::visit([&](const auto &effect) { e.event = effect; }, *e.text->event());
                return progress;
            }
            if (progress == Progress::Finished)
                e.text.reset();
            continue;
        }
        if (e.print) {
            if (e.print->advance() == OutputProgress::Suspended) {
                std::visit([&](const auto &effect) { e.event = effect; }, *e.print->effect());
                return Progress::Suspended;
            }
            e.print.reset();
        } else if (e.window) {
            if (e.window->advance() == OutputProgress::Suspended) {
                e.event = *e.window->effect();
                return Progress::Suspended;
            }
            e.window.reset();
        } else
            e.step();
        if (e.event)
            return Progress::Suspended;
        if (e.stage == Execution::Stage::Complete)
            return Progress::Finished;
    }
    return Progress::BudgetExhausted;
}
const std::optional<MenuEvent> &MenuHost::Operation::event() const { return execution_->event; }
void MenuHost::Operation::respond() {
    const auto &e = *execution_;
    respond({e.windows.prompt_state().pressed, 0, 0});
}
void MenuHost::Operation::respond(MenuResponse response) {
    auto &e = *execution_;
    require(e.event.has_value(), "Menu has no pending host event");
    if (e.text)
        e.text->respond({response.value, response.pressed, response.held});
    else {
        e.output.require_owner(e.owner);
        const auto *window = std::get_if<WindowEffect>(&*e.event);
        const auto *text = std::get_if<TextEffect>(&*e.event);
        if ((window && (window->kind == WindowEffectKind::WindowTick ||
                        window->kind == WindowEffectKind::FrameWait)) ||
                                (text && text->kind == TextEffectKind::WindowTick))
            e.windows.prompt_state().pressed = response.pressed;
        if (e.print)
            e.print->respond();
        else if (e.window)
            e.window->respond();
        else if (const auto *effect = std::get_if<MenuEffect>(&*e.event);
                 effect && effect->kind == MenuEffectKind::Input)
        {
            e.input = response;
            e.windows.prompt_state().pressed = response.pressed;
        }
    }
    e.event.reset();
}
bool MenuHost::Operation::complete() const { return execution_->stage == Execution::Stage::Complete; }
std::uint16_t MenuHost::Operation::result() const {
    require(complete(), "Selection result is unavailable before completion");
    return execution_->value;
}
} // namespace eb::native::dialogue
