#include "eb/native/dialogue/text_animations.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool condition, const char *message) {
    if (!condition) throw std::logic_error(message);
}
bool has_sequence(std::uint8_t selector) { return selector == 1 || selector == 2; }
} // namespace

struct TextAnimations::Operation::Execution {
    WindowHost &windows;
    TextOutput &output;
    std::shared_ptr<const TextAnimationResources> resources;
    TextOutput::Owner owner{};
    bool owns{}, done{};
    std::uint8_t selector{};
    unsigned index{}, remaining_world_ticks = 8;
    enum class Stage { Start, Glyph, MiddleWait, Finish } stage = Stage::Start;
    std::optional<PromptEvent> event;

    Execution(WindowHost &host, std::shared_ptr<const TextAnimationResources> content,
              std::uint8_t selected, TextOutput::Owner activation, bool owns_activation)
        : windows(host), output(host.output()), resources(std::move(content)), owner(activation),
          owns(owns_activation), selector(selected) {}
    void palette(std::uint8_t number) {
        // C10FEA replaces attributes at the live focus. Font is a separate
        // field. A callback can change either before the next placement.
        if (const auto id = windows.state().focus) {
            auto style = output.window(*id).style;
            style.palette = number;
            style.priority = style.flip_horizontal = style.flip_vertical = false;
            output.set_style(*id, style);
        }
    }
    void finish() {
        if (owns) output.leave(owner);
        done = true;
    }
    void step() {
        switch (stage) {
        case Stage::Start:
            if (!has_sequence(selector)) {
                finish();
                return;
            }
            palette(3);
            stage = Stage::Glyph;
            break;
        case Stage::Glyph: {
            const auto sequence = resources->sequence(selector);
            if (index == sequence.size()) {
                stage = Stage::Finish;
                break;
            }
            // C10D60 performs direct fixed placement and redraw comparison.
            // PRINT_LETTER sound, variable-font and wrapping paths do not run.
            output.draw_fixed_glyph(sequence[index], owner);
            ++index;
            if (selector == 2 && index == 4) stage = Stage::MiddleWait;
            event = WindowEffect{WindowEffectKind::WindowTick};
            break;
        }
        case Stage::MiddleWait:
            if (remaining_world_ticks) {
                --remaining_world_ticks;
                event = PromptEffect{PromptEffectKind::WorldTick};
            } else
                stage = Stage::Glyph;
            break;
        case Stage::Finish:
            palette(0);
            finish();
            break;
        }
    }
};

TextAnimations::TextAnimations(WindowHost &windows) : windows_(windows) {}
TextAnimations::~TextAnimations() = default;
WindowHost &TextAnimations::windows() { return windows_; }
void TextAnimations::configure(std::shared_ptr<const TextAnimationResources> resources) {
    auto &output = windows_.output();
    output.require_owner(0);
    require(output.complete(), "Text animation configuration requires idle output");
    require(resources && resources->version() == windows_.version(),
            "Text animation resources and window host must share a region");
    resources_ = std::move(resources);
}
void TextAnimations::validate(std::uint8_t selector) const {
    require(!has_sequence(selector) || bool(resources_),
            "Text animation requires imported sequence resources");
}
TextAnimations::Operation::Operation(std::unique_ptr<Execution> execution)
    : execution_(std::move(execution)) {}
TextAnimations::Operation::~Operation() {
    if (!execution_->done) execution_->output.abandon(execution_->owner);
}
std::unique_ptr<TextAnimations::Operation>
TextAnimations::begin(std::uint8_t selector, TextOutput::Owner owner, bool owns_activation) {
    windows_.output().require_owner(owner);
    require(windows_.output().complete(), "Text animation requires idle output");
    validate(selector);
    return std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(
        windows_, resources_, selector, owner, owns_activation)));
}
std::unique_ptr<TextAnimations::Operation> TextAnimations::begin(std::uint8_t selector) {
    auto &output = windows_.output();
    output.require_owner(0);
    validate(selector);
    const auto owner = output.enter();
    try { return begin(selector, owner, true); }
    catch (...) { output.leave(owner); throw; }
}
std::unique_ptr<TextAnimations::Operation>
TextAnimations::begin_nested(std::uint8_t selector, Conversation &parent) {
    auto &output = windows_.output();
    const auto caller = parent.callback_owner(output);
    validate(selector);
    const auto owner = output.enter(caller);
    try { return begin(selector, owner, true); }
    catch (...) { output.leave(owner); throw; }
}
std::unique_ptr<TextAnimations::Operation>
TextAnimations::begin_nested(std::uint8_t selector, Operation &parent) {
    auto &output = windows_.output();
    const auto caller = parent.callback_owner(output);
    validate(selector);
    const auto owner = output.enter(caller);
    try { return begin(selector, owner, true); }
    catch (...) { output.leave(owner); throw; }
}
TextOutput::Owner TextAnimations::Operation::callback_owner(TextOutput &output) const {
    const auto &e = *execution_;
    require(&output == &e.output && e.event && !e.done,
            "Nested text animation requires a suspended parent sharing output");
    output.require_owner(e.owner);
    return e.owner; // Every emitted event is a genuine window/world callback.
}
Progress TextAnimations::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.done) return Progress::Finished;
    e.output.require_owner(e.owner);
    if (e.event) return Progress::Suspended;
    while (budget--) {
        e.step();
        if (e.event) return Progress::Suspended;
        if (e.done) return Progress::Finished;
    }
    return Progress::BudgetExhausted;
}
const std::optional<PromptEvent> &TextAnimations::Operation::event() const { return execution_->event; }
void TextAnimations::Operation::respond(std::optional<std::uint16_t> pressed) {
    auto &e = *execution_;
    e.output.require_owner(e.owner);
    require(e.event.has_value(), "Text animation has no pending host event");
    if (pressed) e.windows.prompt_state().pressed = *pressed;
    e.event.reset();
}
bool TextAnimations::Operation::complete() const { return execution_->done; }
} // namespace eb::native::dialogue
