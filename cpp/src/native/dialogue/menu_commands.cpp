#include "eb/native/dialogue/menu_commands.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool condition, const char *message) {
    if (!condition)
        throw std::invalid_argument(message);
}
void validate(const Request &request, const Program &program, GameVersion version) {
    require(program.version() == version, "Menu command program and output must share a region");
    switch (request.kind) {
    case RequestKind::AppendMenuOption:
        require(request.menu_append.has_value(), "Authored menu append has no label payload");
        require(request.menu_append->length <= request.menu_append->label.size(),
                "Authored menu label leaves its collected extent");
        break;
    case RequestKind::LayoutMenu:
        require(request.menu_layout.has_value(), "Authored menu layout has no layout payload");
        break;
    default:
        throw std::invalid_argument("Menu commands cannot handle this request");
    }
}
bool world_callback(const MenuPrintEffect &effect) {
    if (const auto *text = std::get_if<TextEffect>(&effect))
        return text->kind == TextEffectKind::WindowTick;
    return std::get<WindowEffect>(effect).kind == WindowEffectKind::WindowTick;
}
} // namespace

struct MenuCommands::Execution {
    Program program;
    WindowHost &windows;
    MenuPrinter &printer;
    MenuModel model;
    Execution(const Program &content, WindowHost &host, MenuPrinter &output)
        : program(content), windows(host), printer(output), model(host, host.output().font_resources()) {
        require(program.version() == host.version(), "Menu command program and output must share a region");
        require(printer.bound_to(host), "Menu commands and printer must share one window host");
        windows.bind_menu_program(program);
    }
};
struct MenuCommands::Operation::Execution {
    MenuCommands::Execution &commands;
    TextOutput &output;
    Request request;
    Program program;
    TextOutput::Owner owner{};
    bool owns{}, started{}, done{};
    std::unique_ptr<MenuPrinter::Operation> printing;
    std::optional<MenuPrintEffect> pending;

    Execution(MenuCommands::Execution &service, const Request &command, const Program &content,
              TextOutput::Owner activation)
        : commands(service), output(service.windows.output()), request(command), program(content),
          owner(activation) {}
    void finish() {
        if (owns)
            output.leave(owner);
        done = true;
    }
    void start() {
        if (request.kind == RequestKind::AppendMenuOption) {
            const auto &append = *request.menu_append;
            const auto label = std::span(append.label).first(append.length);
            commands.model.append_resolving(label, [&]() -> std::optional<Location> {
                // The source constructor's no-focus/full-pool returns happen
                // before reading either the label or its selected-text key.
                require(!label.empty() && label.back() == 0,
                        "Authored menu label has no delimiter-written terminator");
                return append.selected_text ? program.resolve(*append.selected_text) : std::nullopt;
            });
            finish();
            return;
        }
        const auto &layout = *request.menu_layout;
        // CC1C07/0C call C1180D, not the ordinal-setting C1181B. Existing
        // selected_option and page_number therefore survive this preparation.
        commands.model.layout({layout.columns, 0, layout.centered, false},
                              commands.printer.resources().next_page_label());
        printing = commands.printer.begin({MenuPrintAction::Page}, owner);
        started = true;
    }
};

MenuCommands::MenuCommands(const Program &program, WindowHost &host, MenuPrinter &printer)
    : execution_(std::make_unique<Execution>(program, host, printer)) {}
MenuCommands::~MenuCommands() = default;
MenuCommands::Operation::Operation(std::unique_ptr<Execution> state) : execution_(std::move(state)) {}
MenuCommands::Operation::~Operation() {
    if (!execution_->done)
        execution_->output.abandon(execution_->owner);
}
std::unique_ptr<MenuCommands::Operation> MenuCommands::begin(const Request &request, const Program &program) {
    auto &output = execution_->windows.output();
    const auto owner = output.enter();
    try {
        auto operation = begin(request, program, owner);
        operation->execution_->owns = true;
        return operation;
    } catch (...) {
        output.leave(owner);
        throw;
    }
}
std::unique_ptr<MenuCommands::Operation> MenuCommands::begin(const Request &request, const Program &program,
                                                          TextOutput::Owner owner) {
    auto &e = *execution_;
    e.windows.output().require_owner(owner);
    require(e.windows.output().complete(), "Menu commands require idle text output");
    require(e.program.shares_content_with(program),
            "Authored menu commands and selection must share one imported program");
    validate(request, program, e.windows.version());
    return std::unique_ptr<Operation>(new Operation(
        std::make_unique<Operation::Execution>(e, request, program, owner)));
}
Progress MenuCommands::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.done)
        return Progress::Finished;
    e.output.require_owner(e.owner);
    if (e.pending)
        return Progress::Suspended;
    while (budget--) {
        if (!e.started)
            e.start();
        else if (e.printing->advance() == OutputProgress::Suspended) {
            e.pending = e.printing->effect();
            return Progress::Suspended;
        } else {
            e.printing.reset();
            e.finish();
        }
        if (e.done)
            return Progress::Finished;
    }
    return Progress::BudgetExhausted;
}
const std::optional<MenuPrintEffect> &MenuCommands::Operation::effect() const { return execution_->pending; }
void MenuCommands::Operation::respond() {
    auto &e = *execution_;
    e.output.require_owner(e.owner);
    require(e.pending.has_value(), "Menu command has no pending effect");
    e.printing->respond();
    e.pending.reset();
}
bool MenuCommands::Operation::complete() const { return execution_->done; }
TextOutput::Owner MenuCommands::Operation::callback_owner(TextOutput &output) const {
    const auto &e = *execution_;
    require(&output == &e.output && e.pending && world_callback(*e.pending),
            "Nested dialogue requires this menu command's window tick");
    output.require_owner(e.owner);
    return e.owner;
}
} // namespace eb::native::dialogue
