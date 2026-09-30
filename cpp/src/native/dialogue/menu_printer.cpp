// Source: text/print_menu_items{,-jp}.asm, print_string{,-jp}.asm;
// C43DDB/C43CD2/C43BB9/C43B15 and C10D60. Authored storage and glyph images
// are native values. Only the source's semantic continuation survives yields.
#include "eb/native/dialogue/menu_printer.hpp"
#include "detail/string_printer.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool condition, const char *message) {
    if (!condition)
        throw std::logic_error(message);
}
} // namespace
struct MenuPrinter::Execution {
    WindowHost &host;
    std::shared_ptr<const MenuResources> resources;
    Execution(WindowHost &owner, std::shared_ptr<const MenuResources> art)
        : host(owner), resources(std::move(art)) {
        require(resources && resources->version() == host.version(), "Menu and window regions differ");
    }
};
struct MenuPrinter::Operation::Execution {
    WindowHost &host;
    TextOutput &output;
    MenuPrintCommand command;
    TextOutput::Owner owner;
    bool owns{}, done{};
    unsigned option{}, window_slot{}, entries{};
    std::unique_ptr<detail::StringPrinter> string_printer;
    enum class Stage {
        Start,
        PageEntry,
        MarkerDone,
        PageAfterMarker,
        SeparatorDone,
        AfterTitle,
        String,
        AfterPrefix,
        AfterNumber,
        AfterDelimiter,
        PageNext,
        Output,
        Window,
        Finish
    } stage = Stage::Start,
      after_output = Stage::Finish, after_string = Stage::Finish;
    enum class StringSource { Label, Temporary, CapturedTitle } string_source = StringSource::Label;
    // A view is rebuilt at every string read; US byte25 is the adjacent
    // pixel_align field, which can hold a full-field label's terminator.
    std::array<std::uint8_t, 26> label_bytes{};
    std::unique_ptr<WindowHost::Operation> title_operation;
    std::optional<MenuPrintEffect> pending;

    Execution(WindowHost &parent, MenuPrintCommand request, TextOutput::Owner token, bool root)
        : host(parent), output(parent.output()), command(request), owner(token), owns(root),
          option(request.option) {}
    bool japanese() const { return host.version() == GameVersion::JP; }
    WindowMenuOption &item() { return host.menu_options().at(option); }
    const WindowMetadata &captured() const { return host.slot(window_slot); }
    WindowId focus() const {
        require(host.state().focus.has_value(), "Menu printing needs its current focused window");
        return *host.state().focus;
    }
    void finish() {
        if (owns)
            output.leave(owner);
        done = true;
    }
    void palette(unsigned index) {
        if (!host.state().focus)
            return;
        auto style = output.window(focus()).style;
        style.palette = std::uint8_t(index);
        style.priority = style.flip_horizontal = style.flip_vertical = false;
        output.set_style(focus(), style);
    }
    void position(std::uint16_t extra = 0) {
        const auto &selected = item();
        output.set_cursor(focus(), {std::uint16_t(selected.x + extra), selected.y},
                          japanese() ? 0 : selected.pixel_align);
        if (!japanese())
            host.menu_state().restore_backup = false;
    }
    void glyph(std::uint16_t character, bool fixed, Stage next) {
        if (fixed)
            output.begin_fixed_glyph(character, owner);
        else
            output.begin_glyph(character, owner);
        after_output = next;
        stage = Stage::Output;
    }
    void marker() {
        const auto &selected = item();
        // C43DDB first uses ordinary cell positioning. Pixel alignment is
        // sampled only after the fixed marker's possible world callbacks.
        output.set_cursor(focus(), {selected.x, selected.y});
        glyph(47, !japanese(), Stage::MarkerDone);
    }
    std::span<const std::uint8_t> live_label() {
        const auto &value = item();
        std::copy(value.label.begin(), value.label.end(), label_bytes.begin());
        label_bytes[25] = value.pixel_align;
        return std::span<const std::uint8_t>(label_bytes).first(japanese() ? 25 : 26);
    }
    std::span<const std::uint8_t> string_bytes() {
        switch (string_source) {
        case StringSource::Label:
            return live_label();
        case StringSource::Temporary:
            return host.temporary_text_buffer();
        case StringSource::CapturedTitle:
            return captured().title;
        }
        throw std::logic_error("Invalid menu string source");
    }
    void string(StringSource source, std::uint16_t maximum, Stage next) {
        string_source = source;
        after_string = next;
        string_printer = std::make_unique<detail::StringPrinter>(
            host, owner, [this] { return string_bytes(); }, maximum);
        stage = Stage::String;
    }
    void page_title() {
        const auto opening = japanese() ? 0x3a : 0x58;
        const auto closing = japanese() ? 0x3b : 0x59;
        auto &temporary = host.temporary_text_buffer();
        unsigned length = 0;
        for (auto character : captured().title) {
            if (!character || character == opening)
                break;
            require(length + 4 < temporary.size(), "Menu title exceeds shared temporary text storage");
            temporary[length++] = character;
        }
        temporary[length++] = std::uint8_t(opening);
        temporary[length++] = std::uint8_t(captured().page_number + (japanese() ? 0x30 : 0x60));
        temporary[length++] = std::uint8_t(closing);
        temporary[length] = 0;
        if (!japanese())
            output.align_composition(owner);
        WindowCommand request;
        request.action = WindowAction::Title;
        request.id = focus();
        request.title.assign(temporary.begin(), temporary.begin() + length);
        request.title_limit = length;
        title_operation = host.begin(std::move(request), owner, false);
        stage = Stage::Window;
    }
    void start() {
        switch (command.action) {
        case MenuPrintAction::Page:
            if (!host.state().focus) {
                finish();
                return;
            }
            window_slot = *host.slot_for(focus());
            option = captured().first_option;
            if (option == 0xffff) {
                if (!japanese())
                    host.menu_state().early_tick_exit = true;
                finish();
                return;
            }
            output.policy().instant = true;
            stage = Stage::PageEntry;
            break;
        case MenuPrintAction::Position:
            position(command.x_delta);
            finish();
            break;
        case MenuPrintAction::UnselectedMarker:
            marker();
            break;
        case MenuPrintAction::FixedGlyph:
            output.draw_fixed_glyph(command.character, owner);
            finish();
            break;
        case MenuPrintAction::Highlight:
            if (japanese())
                string(StringSource::Label, command.limit, Stage::Finish);
            else {
                output.highlight_label(live_label(), command.limit, command.selected, owner);
                finish();
            }
            break;
        case MenuPrintAction::HighlightRemainder:
            output.highlight_remainder(owner);
            finish();
            break;
        }
    }
    OutputProgress advance() {
        if (done)
            return OutputProgress::Complete;
        output.require_owner(owner);
        if (pending)
            return OutputProgress::Suspended;
        for (unsigned work = 0; work < 16384; ++work) {
            switch (stage) {
            case Stage::Start:
                start();
                break;
            case Stage::PageEntry:
                require(++entries <= 70, "Menu page follows a cyclic or overlong option chain");
                if (item().page == captured().page_number || item().page == 0)
                    marker();
                else
                    stage = Stage::PageNext;
                break;
            case Stage::MarkerDone:
                if (!japanese()) {
                    output.align_composition(owner);
                    if (item().pixel_align)
                        position(1);
                }
                stage = command.action == MenuPrintAction::Page ? Stage::PageAfterMarker : Stage::Finish;
                break;
            case Stage::PageAfterMarker:
                if (item().page == 0) {
                    palette(0);
                    glyph(0x14f, !japanese(), Stage::SeparatorDone);
                } else
                    string(StringSource::Label, 0xffff, Stage::PageNext);
                break;
            case Stage::SeparatorDone:
                if (!japanese())
                    output.align_composition(owner);
                palette(0);
                if (captured().title.empty() || !captured().title.front())
                    string(StringSource::Label, 0xffff, Stage::PageNext);
                else
                    page_title();
                break;
            case Stage::Window:
                if (title_operation->advance() == OutputProgress::Suspended) {
                    pending = *title_operation->effect();
                    return OutputProgress::Suspended;
                }
                title_operation.reset();
                stage = Stage::AfterTitle;
                break;
            case Stage::AfterTitle: {
                if (!japanese())
                    output.align_composition(owner);
                const auto source = japanese() ? StringSource::CapturedTitle : StringSource::Temporary;
                const auto &temporary = host.temporary_text_buffer();
                const auto end = std::find(temporary.begin(), temporary.end(), 0);
                require(japanese() || end != temporary.end(), "Menu title leaves shared temporary text storage");
                const auto size = japanese() ? captured().title.size() : std::size_t(end - temporary.begin());
                require(size >= 2, "Menu page title became shorter than its source suffix");
                string(source, std::uint16_t(size - 2), Stage::AfterPrefix);
                break;
            }
            case Stage::String: {
                const auto result = string_printer->advance(1);
                if (result == Progress::Finished) {
                    string_printer.reset();
                    stage = after_string;
                } else if (result == Progress::Suspended) {
                    pending = *output.effect();
                    return OutputProgress::Suspended;
                }
                break;
            }
            case Stage::AfterPrefix: {
                const auto &last = host.menu_options().at(captured().last_option);
                require(last.previous.has_value(), "Page control has no preceding page-bearing option");
                const auto final_page = host.menu_options().at(*last.previous).page;
                const unsigned one = japanese() ? 0x31 : 0x61;
                glyph(captured().page_number == final_page ? one
                                                           : std::uint16_t(captured().page_number + one),
                      false, Stage::AfterNumber);
                break;
            }
            case Stage::AfterNumber:
                glyph(japanese() ? 0x3b : 0x59, false, Stage::AfterDelimiter);
                break;
            case Stage::AfterDelimiter:
                if (japanese())
                    glyph(153, false, Stage::PageNext);
                else
                    stage = Stage::PageNext;
                break;
            case Stage::PageNext:
                if (item().next) {
                    option = *item().next;
                    stage = Stage::PageEntry;
                } else
                    stage = Stage::Finish;
                break;
            case Stage::Output:
                if (output.advance(owner) == OutputProgress::Suspended) {
                    pending = *output.effect();
                    return OutputProgress::Suspended;
                }
                stage = after_output;
                break;
            case Stage::Finish:
                finish();
                break;
            }
            if (done)
                return OutputProgress::Complete;
        }
        throw std::logic_error("Menu printing exceeded bounded native content work");
    }
};
MenuPrinter::MenuPrinter(WindowHost &host, std::shared_ptr<const MenuResources> resources)
    : execution_(std::make_unique<Execution>(host, std::move(resources))) {}
MenuPrinter::~MenuPrinter() = default;
const MenuResources &MenuPrinter::resources() const { return *execution_->resources; }
bool MenuPrinter::bound_to(const WindowHost &host) const { return &execution_->host == &host; }
MenuPrinter::Operation::Operation(std::unique_ptr<Execution> execution) : execution_(std::move(execution)) {}
MenuPrinter::Operation::~Operation() {
    if (!execution_->done)
        execution_->output.abandon(execution_->owner);
}
OutputProgress MenuPrinter::Operation::advance() { return execution_->advance(); }
const std::optional<MenuPrintEffect> &MenuPrinter::Operation::effect() const { return execution_->pending; }
bool MenuPrinter::Operation::complete() const { return execution_->done; }
void MenuPrinter::Operation::respond() {
    auto &e = *execution_;
    e.output.require_owner(e.owner);
    require(e.pending.has_value(), "Menu printer has no pending effect");
    if (std::holds_alternative<TextEffect>(*e.pending))
        e.output.respond(e.owner);
    else
        e.title_operation->respond();
    e.pending.reset();
}
std::unique_ptr<MenuPrinter::Operation> MenuPrinter::begin(MenuPrintCommand command) {
    auto &output = execution_->host.output();
    const auto owner = output.enter();
    try {
        return std::unique_ptr<Operation>(
            new Operation(std::make_unique<Operation::Execution>(execution_->host, command, owner, true)));
    } catch (...) {
        output.leave(owner);
        throw;
    }
}
std::unique_ptr<MenuPrinter::Operation> MenuPrinter::begin(MenuPrintCommand command,
                                                           TextOutput::Owner owner) {
    auto &output = execution_->host.output();
    output.require_owner(owner);
    require(output.complete(), "Menu printer requires idle text output");
    return std::unique_ptr<Operation>(
        new Operation(std::make_unique<Operation::Execution>(execution_->host, command, owner, false)));
}
} // namespace eb::native::dialogue
