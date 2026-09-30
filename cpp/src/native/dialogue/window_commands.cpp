#include "eb/native/dialogue/window_commands.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool condition, const char *message) {
    if (!condition) throw std::logic_error(message);
}
void validate(const Request &request, WindowHost &windows, MenuHost *menus) {
    switch (request.kind) {
    case RequestKind::SelectInWindow:
        require(request.window_selection.has_value(), "Scoped selection has no target window");
        require(menus && &menus->windows() == &windows,
                "Scoped selection requires the same window host's menu service");
        require(windows.slot_for(request.window_selection->window).has_value(),
                "Scoped selection target window is not open");
        break;
    case RequestKind::ShowWallet:
        break;
    default:
        throw std::invalid_argument("Window context commands cannot handle this request");
    }
}
} // namespace

struct WindowCommands::Operation::Execution {
    WindowHost &windows;
    TextOutput &output;
    MenuHost *menus;
    Request request;
    TextOutput::Owner owner{};
    bool owns{}, done{};
    std::uint16_t value{};
    enum class Stage { Start, Select, PrepareWallet, PrintWallet, WalletPrinted, Restore } stage = Stage::Start;
    std::optional<MenuEvent> event;
    std::unique_ptr<WindowHost::Operation> window;
    std::unique_ptr<MenuHost::Operation> selection;
    std::unique_ptr<TextSubstitutions::Operation> money;

    Execution(WindowHost &host, const Request &command, MenuHost *menu, TextOutput::Owner activation)
        : windows(host), output(host.output()), menus(menu), request(command), owner(activation) {}
    void finish() {
        if (owns) output.leave(owner);
        done = true;
    }
    void step() {
        switch (stage) {
        case Stage::Start:
            windows.save_context(owner);
            if (request.kind == RequestKind::SelectInWindow) {
                window = windows.begin({WindowAction::Focus, request.window_selection->window, {}, 0}, owner, false);
                stage = Stage::Select;
            } else {
                // C1AA18 ignores CREATE's return value. Every following step
                // still operates on the live focus if the eight slots are full.
                window = windows.begin({WindowAction::Open, WindowId{10}, {}, 0}, owner, false);
                stage = Stage::PrepareWallet;
            }
            break;
        case Stage::Select:
            selection = menus->begin(request.window_selection->allow_cancel ? 1 : 0, owner, false);
            stage = Stage::Restore;
            break;
        case Stage::PrepareWallet:
            if (const auto focus = windows.state().focus)
                windows.metadata(*focus).number_padding = 5;
            output.policy().instant = true;
            window = windows.begin({WindowAction::ClearFocus, {}, {}, 0}, owner, false);
            stage = Stage::PrintWallet;
            break;
        case Stage::PrintWallet: {
            auto &formatter = windows.substitutions();
            const auto amount = formatter.read_number({StatField::MoneyCarried, 0}, owner);
            money = formatter.begin({SubstitutionAction::Money, amount, {}, 0xffff}, owner, false);
            stage = Stage::WalletPrinted;
            break;
        }
        case Stage::WalletPrinted:
            output.policy().instant = false;
            stage = Stage::Restore;
            break;
        case Stage::Restore:
            // This reads the host's current global backup. Nested context
            // commands may have overwritten it; there is no local rollback.
            windows.restore_context(owner);
            finish();
            break;
        }
    }
};

WindowCommands::WindowCommands(WindowHost &windows) : windows_(windows) {}
WindowCommands::~WindowCommands() = default;
WindowCommands::Operation::Operation(std::unique_ptr<Execution> execution) : execution_(std::move(execution)) {}
WindowCommands::Operation::~Operation() {
    if (!execution_->done) execution_->output.abandon(execution_->owner);
}
std::unique_ptr<WindowCommands::Operation> WindowCommands::begin(const Request &request, MenuHost *menus) {
    auto &output = windows_.output();
    output.require_owner(0);
    require(output.complete(), "Window context commands require idle text output");
    validate(request, windows_, menus);
    const auto owner = output.enter();
    try {
        auto operation = begin(request, menus, owner);
        operation->execution_->owns = true;
        return operation;
    } catch (...) {
        output.leave(owner);
        throw;
    }
}
std::unique_ptr<WindowCommands::Operation> WindowCommands::begin(const Request &request, MenuHost *menus,
                                                              TextOutput::Owner owner) {
    windows_.output().require_owner(owner);
    require(windows_.output().complete(), "Window context commands require idle text output");
    validate(request, windows_, menus);
    return std::unique_ptr<Operation>(new Operation(
        std::make_unique<Operation::Execution>(windows_, request, menus, owner)));
}
TextOutput::Owner WindowCommands::Operation::active_owner() const {
    const auto &e = *execution_;
    return e.selection ? e.selection->active_owner() : e.owner;
}
TextOutput::Owner WindowCommands::Operation::callback_owner(TextOutput &output) const {
    const auto &e = *execution_;
    require(&output == &e.output && e.event && !e.done,
            "Nested dialogue requires a suspended window context command sharing output");
    if (e.selection) return e.selection->callback_owner(output);
    if (e.money) return e.money->callback_owner(output);
    const auto *window = std::get_if<WindowEffect>(&*e.event);
    require(window && window->kind == WindowEffectKind::WindowTick,
            "Window context nesting requires a world callback");
    output.require_owner(e.owner);
    return e.owner;
}
Progress WindowCommands::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.done) return Progress::Finished;
    e.output.require_owner(active_owner());
    if (e.event) return Progress::Suspended;
    while (budget--) {
        if (e.selection) {
            const auto progress = e.selection->advance(1);
            if (progress == Progress::Suspended) {
                e.event = e.selection->event();
                return Progress::Suspended;
            }
            if (progress == Progress::Finished) {
                e.value = e.selection->result();
                e.selection.reset();
            }
        } else if (e.window) {
            if (e.window->advance() == OutputProgress::Suspended) {
                e.event = *e.window->effect();
                return Progress::Suspended;
            }
            e.window.reset();
        } else if (e.money) {
            const auto progress = e.money->advance(1);
            if (progress == Progress::Suspended) {
                e.event = *e.money->effect();
                return Progress::Suspended;
            }
            if (progress == Progress::Finished) e.money.reset();
        } else
            e.step();
        if (e.done) return Progress::Finished;
    }
    return Progress::BudgetExhausted;
}
const std::optional<MenuEvent> &WindowCommands::Operation::event() const { return execution_->event; }
void WindowCommands::Operation::respond() { respond({execution_->windows.prompt_state().pressed, 0, 0}); }
void WindowCommands::Operation::respond(MenuResponse response) {
    auto &e = *execution_;
    e.output.require_owner(active_owner());
    require(e.event.has_value(), "Window context command has no pending event");
    if (e.selection)
        e.selection->respond(response);
    else {
        const auto *window = std::get_if<WindowEffect>(&*e.event);
        const auto *text = std::get_if<TextEffect>(&*e.event);
        if ((window && (window->kind == WindowEffectKind::WindowTick || window->kind == WindowEffectKind::FrameWait)) ||
            (text && text->kind == TextEffectKind::WindowTick))
            e.windows.prompt_state().pressed = response.pressed;
        if (e.window) e.window->respond();
        else if (e.money) e.money->respond();
        else throw std::logic_error("Window context event has no active service");
    }
    e.event.reset();
}
bool WindowCommands::Operation::complete() const { return execution_->done; }
std::uint16_t WindowCommands::Operation::result() const {
    require(complete(), "Window context result is unavailable before restoration");
    return execution_->value;
}
} // namespace eb::native::dialogue
