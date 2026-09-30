#include "eb/native/dialogue/inventory.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool condition, const char *message) {
    if (!condition) throw std::logic_error(message);
}
bool window_tick(const MenuPrintEffect &effect) {
    if (const auto *text = std::get_if<TextEffect>(&effect))
        return text->kind == TextEffectKind::WindowTick;
    return std::get<WindowEffect>(effect).kind == WindowEffectKind::WindowTick;
}
} // namespace
struct Inventory::Execution {
    WindowHost &windows;
    MenuPrinter &printer;
    MenuModel model;
    std::shared_ptr<const SubstitutionResources> resources;
    std::optional<party::View> party;
    Execution(WindowHost &host, MenuPrinter &printing)
        : windows(host), printer(printing), model(host, host.output().font_resources()) {
        require(printer.bound_to(windows), "Inventory and menu printer must share a window host");
    }
    void validate() const {
        require(resources && party.has_value(), "Inventory requires imported items and a live party owner");
    }
};
struct Inventory::Operation::Execution {
    Inventory::Execution &shared;
    WindowHost &windows;
    TextOutput &output;
    TextOutput::Owner owner{};
    bool owns{}, done{};
    WindowId target;
    std::uint16_t character{};
    std::optional<InventoryRequest> authored;
    unsigned item_position{};
    enum class Stage { Start, AfterPreclear, Resolve, Open, Title, Items, AfterTick, Print, Finish } stage = Stage::Start;
    std::unique_ptr<WindowHost::Operation> window;
    std::unique_ptr<MenuPrinter::Operation> printing;
    std::optional<MenuPrintEffect> pending;
    Execution(Inventory::Execution &s, WindowId id, std::uint16_t member, TextOutput::Owner token, bool root)
        : shared(s), windows(s.windows), output(windows.output()), owner(token), owns(root),
          target(id), character(member) {}
    bool japanese() const { return windows.version() == GameVersion::JP; }
    void finish() {
        if (owns) output.leave(owner);
        done = true;
    }
    bool equipped() const {
        for (const auto slot : {party::EquipmentSlot::Weapon, party::EquipmentSlot::Body,
                                party::EquipmentSlot::Arms, party::EquipmentSlot::Other})
            if (shared.party->equipped_position(character, slot) == item_position + 1) return true;
        return false;
    }
    void append_item() {
        const auto item = shared.party->item(character, item_position);
        auto &scratch = windows.temporary_text_buffer();
        if (japanese()) {
            const auto name = shared.resources->raw_item_name(item);
            std::copy(name.begin(), name.end(), scratch.begin());
            scratch[10] = 0;
            if (equipped()) {
                const auto end = std::find(scratch.begin(), scratch.begin() + 11, 0);
                const auto length = unsigned(end - scratch.begin());
                scratch[length] = 0x22;
                scratch[length + 1] = 0;
            }
        } else {
            // MEMCPY16 copies words: the requested25 bytes copy only24.
            // Unequipped byte24 retains the shared buffer's previous value.
            const bool is_equipped = equipped();
            if (is_equipped) scratch[0] = 0x22;
            const auto name = shared.resources->raw_item_name(item);
            std::copy_n(name.begin(), 24, scratch.begin() + (is_equipped ? 1 : 0));
            scratch[25] = 0;
        }
        // Even an empty position prepares its name/equipment before this test.
        // Basic append preserves source ordinal values and the slot69 fallback.
        if (item) shared.model.append(scratch);
        ++item_position;
    }
    void step() {
        switch (stage) {
        case Stage::Start:
            if (authored && !japanese() && windows.state().focus == WindowId{1}) {
                output.clear_canvas(WindowId{1}, owner);
                pending = WindowEffect{WindowEffectKind::ClearPartyBlink};
                stage = Stage::AfterPreclear;
            } else
                stage = Stage::Resolve;
            break;
        case Stage::AfterPreclear: {
            const auto focus = windows.state().focus;
            require(focus.has_value(), "Inventory preclear lost its live focused window");
            output.restore_window(*focus, output.window(*focus).style, {}, owner);
            windows.state().streams.at(authored->stream_slot).saved_window.update_attributes(windows.save_attributes());
            windows.menu_state().force_left_alignment = false;
            stage = Stage::Resolve;
            break;
        }
        case Stage::Resolve:
            if (authored)
                character = authored->character ? authored->character :
                            std::uint16_t(windows.state().window().active.argument);
            require(character >= 1 && character <= 6, "Inventory character is outside the six party records");
            stage = Stage::Open;
            break;
        case Stage::Open:
            window = windows.begin({WindowAction::Open, target, {}, 0}, owner, false);
            stage = Stage::Title;
            break;
        case Stage::Title: {
            if (shared.party->controlled_count() != 1)
                windows.set_inventory_pagination(target, owner);
            const auto name = shared.party->name_field(character);
            WindowCommand command{WindowAction::Title, target,
                                  std::vector<std::uint8_t>(name.begin(), name.end()), unsigned(name.size())};
            // The original continues after failed CREATE and still writes the
            // explicit no-slot title record. Ordinary public Title stays bounded.
            window = windows.begin_inventory_title(std::move(command), owner);
            stage = Stage::Items;
            break;
        }
        case Stage::Items:
            if (item_position != 14) append_item();
            else if (!japanese()) {
                output.policy().instant = false;
                pending = WindowEffect{WindowEffectKind::WindowTick};
                stage = Stage::AfterTick;
            } else
                stage = Stage::Print;
            break;
        case Stage::AfterTick:
            output.policy().instant = true;
            stage = Stage::Print;
            break;
        case Stage::Print:
            shared.model.layout({2, 0, false, false}, shared.printer.resources().next_page_label());
            printing = shared.printer.begin({MenuPrintAction::Page}, owner);
            stage = Stage::Finish;
            break;
        case Stage::Finish:
            finish();
            break;
        }
    }
};
Inventory::Inventory(WindowHost &host, MenuPrinter &printer)
    : execution_(std::make_unique<Execution>(host, printer)) {}
Inventory::~Inventory() = default;
WindowHost &Inventory::windows() { return execution_->windows; }
void Inventory::configure(std::shared_ptr<const SubstitutionResources> resources, party::View party) {
    auto &e = *execution_;
    e.windows.output().require_owner(0);
    require(e.windows.output().complete(), "Inventory configuration requires idle output");
    require(resources && resources->version() == e.windows.version() && party.version() == e.windows.version(),
            "Inventory items, party and windows must share a region");
    e.resources = std::move(resources);
    e.party.emplace(party);
}
Inventory::Operation::Operation(std::unique_ptr<Execution> execution) : execution_(std::move(execution)) {}
Inventory::Operation::~Operation() {
    if (!execution_->done) execution_->output.abandon(execution_->owner);
}
std::unique_ptr<Inventory::Operation> Inventory::begin(WindowId target, std::uint16_t character,
                                                     TextOutput::Owner owner, bool owns) {
    auto &e = *execution_;
    e.windows.output().require_owner(owner);
    require(e.windows.output().complete(), "Inventory requires idle text output");
    e.validate();
    return std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(
        e, target, character, owner, owns)));
}
std::unique_ptr<Inventory::Operation> Inventory::begin(WindowId target, std::uint16_t character) {
    auto &output = windows().output();
    output.require_owner(0);
    execution_->validate();
    const auto owner = output.enter();
    try { return begin(target, character, owner, true); }
    catch (...) { output.leave(owner); throw; }
}
std::unique_ptr<Inventory::Operation> Inventory::begin_nested(WindowId target, std::uint16_t character,
                                                            Conversation &parent) {
    auto &output = windows().output();
    const auto caller = parent.callback_owner(output);
    execution_->validate();
    const auto owner = output.enter(caller);
    try { return begin(target, character, owner, true); }
    catch (...) { output.leave(owner); throw; }
}
std::unique_ptr<Inventory::Operation> Inventory::begin_nested(WindowId target, std::uint16_t character,
                                                            Operation &parent) {
    auto &output = windows().output();
    const auto caller = parent.callback_owner(output);
    execution_->validate();
    const auto owner = output.enter(caller);
    try { return begin(target, character, owner, true); }
    catch (...) { output.leave(owner); throw; }
}
std::unique_ptr<Inventory::Operation> Inventory::begin(const Request &request, TextOutput::Owner owner) {
    require(request.kind == RequestKind::Inventory && request.inventory.has_value(),
            "Inventory command has no inventory request");
    require(request.inventory->stream_slot < windows().state().streams.size(),
            "Inventory request has an invalid stream slot");
    auto operation = begin(request.inventory->window, request.inventory->character, owner, false);
    operation->execution_->authored = request.inventory;
    return operation;
}
Progress Inventory::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.done) return Progress::Finished;
    e.output.require_owner(e.owner);
    if (e.pending) return Progress::Suspended;
    while (budget--) {
        if (e.window) {
            if (e.window->advance() == OutputProgress::Suspended) {
                e.pending = *e.window->effect();
                return Progress::Suspended;
            }
            e.window.reset();
        } else if (e.printing) {
            if (e.printing->advance() == OutputProgress::Suspended) {
                e.pending = *e.printing->effect();
                return Progress::Suspended;
            }
            e.printing.reset();
        } else
            e.step();
        if (e.pending) return Progress::Suspended;
        if (e.done) return Progress::Finished;
    }
    return Progress::BudgetExhausted;
}
const std::optional<MenuPrintEffect> &Inventory::Operation::effect() const { return execution_->pending; }
void Inventory::Operation::respond(std::optional<std::uint16_t> pressed) {
    auto &e = *execution_;
    e.output.require_owner(e.owner);
    require(e.pending.has_value(), "Inventory has no pending host effect");
    const auto *window = std::get_if<WindowEffect>(&*e.pending);
    if (pressed && (window_tick(*e.pending) || (window && window->kind == WindowEffectKind::FrameWait)))
        e.windows.prompt_state().pressed = *pressed;
    if (e.window) e.window->respond();
    else if (e.printing) e.printing->respond();
    e.pending.reset();
}
bool Inventory::Operation::complete() const { return execution_->done; }
TextOutput::Owner Inventory::Operation::callback_owner(TextOutput &output) const {
    const auto &e = *execution_;
    require(&output == &e.output && e.pending && !e.done && window_tick(*e.pending),
            "Nested inventory requires its current window tick");
    output.require_owner(e.owner);
    return e.owner;
}
} // namespace eb::native::dialogue
