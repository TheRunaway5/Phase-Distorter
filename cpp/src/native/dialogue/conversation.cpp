#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::dialogue {
Conversation::Conversation(std::shared_ptr<const Program> program, State& state, TextOutput& output)
    : program_(std::move(program)), state_(state), runtime_(program_, state), output_(output) {
    if (program_->version() != output_.version())
        throw std::invalid_argument("Dialogue program and fonts must use the same region");
    if (!output_.bound_to(state))
        throw std::invalid_argument("Dialogue interpreter and output must share one state owner");
}
Conversation::Conversation(std::shared_ptr<const Program> program, WindowHost& windows)
    : Conversation(std::move(program), windows.state(), windows.output()) {
    windows_ = &windows;
}
Conversation::Conversation(std::shared_ptr<const Program> program, MenuHost& menus)
    : Conversation(std::move(program), menus.windows()) {
    menus_ = &menus;
    prompts_ = menus.prompts();
}
Conversation::Conversation(std::shared_ptr<const Program> program, PromptHost& prompts)
    : Conversation(std::move(program), prompts.windows()) {
    prompts_ = &prompts;
}
Conversation::~Conversation() {
    if (owner_) output_.abandon(owner_);
}
void Conversation::start(EntryId entry) { start(program_->entry(entry)); }
void Conversation::start(Location location) { start(location, 0); }
void Conversation::validate_start() const { validate_start(0); }
void Conversation::validate_start_nested(Conversation &parent) const {
    if (&parent == this)
        throw std::logic_error("Conversation cannot nest within itself");
    validate_start(parent.callback_owner(output_));
}
void Conversation::validate_start(TextOutput::Owner parent) const {
    if (phase_ != Phase::Complete || event_ || owner_)
        throw std::logic_error("Conversation is already running");
    runtime_.validate_start();
    output_.validate_enter(parent);
}
void Conversation::start_nested(EntryId entry, Conversation& parent) {
    start_nested(program_->entry(entry), parent);
}
void Conversation::start_nested(Location location, Conversation& parent) {
    if (&parent == this)
        throw std::logic_error("Conversation cannot nest within itself");
    start(location, parent.callback_owner(output_));
}
TextOutput::Owner Conversation::active_owner() const {
    if (menu_operation_) return menu_operation_->active_owner();
    if (window_commands_operation_) return window_commands_operation_->active_owner();
    return owner_;
}
TextOutput::Owner Conversation::callback_owner(TextOutput &output) const {
    if (&output != &output_ || !owner_ || !event_)
        throw std::logic_error("Nested dialogue requires a suspended parent sharing its output");
    if (menu_operation_) return menu_operation_->callback_owner(output);
    if (prompt_operation_) return prompt_operation_->callback_owner(output);
    if (menu_commands_operation_) return menu_commands_operation_->callback_owner(output);
    if (window_commands_operation_) return window_commands_operation_->callback_owner(output);
    if (animation_operation_) return animation_operation_->callback_owner(output);
    if (inventory_operation_) return inventory_operation_->callback_owner(output);
    output_.require_owner(owner_);
    const auto* effect = std::get_if<TextEffect>(&*event_);
    const auto* window_effect = std::get_if<WindowEffect>(&*event_);
    const auto* request = std::get_if<Request>(&*event_);
    const bool callback = effect ? effect->kind == TextEffectKind::WindowTick :
        window_effect ? window_effect->kind == WindowEffectKind::WindowTick :
        request && (request->kind == RequestKind::Pause || request->kind == RequestKind::TimedWait || request->kind == RequestKind::Prompt ||
                    request->kind == RequestKind::Selection ||
                    request->kind == RequestKind::SoundWorldTick ||
                    request->kind == RequestKind::Teleport ||
                    (request->kind == RequestKind::SpecialEvent && request->special_event &&
                     (*request->special_event==1 || *request->special_event==2 ||
                      *request->special_event==7 || *request->special_event==9 || *request->special_event==11 ||
                      *request->special_event==12 || *request->special_event==16)));
    if (!callback)
        throw std::logic_error("Dialogue can nest only within a world or UI host event");
    return owner_;
}
void Conversation::start_nested(EntryId entry, WindowHost::Operation& parent) {
    start_nested(program_->entry(entry), parent);
}
void Conversation::start_nested(Location location, WindowHost::Operation& parent) {
    start(location, parent.callback_owner(output_));
}
void Conversation::start_nested(EntryId entry, MenuHost::Operation& parent) {
    start_nested(program_->entry(entry), parent);
}
void Conversation::start_nested(Location location, MenuHost::Operation& parent) {
    start(location, parent.callback_owner(output_));
}
void Conversation::start_nested(EntryId entry, PromptHost::Operation& parent) {
    start_nested(program_->entry(entry), parent);
}
void Conversation::start_nested(Location location, PromptHost::Operation& parent) {
    start(location, parent.callback_owner(output_));
}
void Conversation::start_nested(EntryId entry, TextSubstitutions::Operation& parent) {
    start_nested(program_->entry(entry), parent);
}
void Conversation::start_nested(Location location, TextSubstitutions::Operation& parent) {
    start(location, parent.callback_owner(output_));
}
void Conversation::start_nested(EntryId entry, MenuCommands::Operation& parent) {
    start_nested(program_->entry(entry), parent);
}
void Conversation::start_nested(Location location, MenuCommands::Operation& parent) {
    start(location, parent.callback_owner(output_));
}
void Conversation::start_nested(EntryId entry, WindowCommands::Operation& parent) {
    start_nested(program_->entry(entry), parent);
}
void Conversation::start_nested(Location location, WindowCommands::Operation& parent) {
    start(location, parent.callback_owner(output_));
}
void Conversation::start_nested(EntryId entry, TextAnimations::Operation& parent) {
    start_nested(program_->entry(entry), parent);
}
void Conversation::start_nested(Location location, TextAnimations::Operation& parent) {
    start(location, parent.callback_owner(output_));
}
void Conversation::start_nested(EntryId entry, Inventory::Operation& parent) {
    start_nested(program_->entry(entry), parent);
}
void Conversation::start_nested(Location location, Inventory::Operation& parent) {
    start(location, parent.callback_owner(output_));
}
void Conversation::start(Location location, TextOutput::Owner parent) {
    validate_start(parent);
    // Validate the content before reserving a child continuation. Acquiring the
    // output first then unwinding failed entry must not acknowledge the parent.
    (void)program_->byte(location);
    owner_ = output_.enter(parent);
    try {
        runtime_.start(location);
    } catch (...) {
        output_.leave(owner_);
        owner_ = 0;
        throw;
    }
    phase_ = Phase::Interpreter;
}
Progress Conversation::advance(unsigned work_budget) {
    if (phase_ == Phase::Complete) return Progress::Finished;
    output_.require_owner(active_owner());
    if (event_) return Progress::Suspended;
    while (work_budget--) {
        switch (phase_) {
        case Phase::Interpreter: {
            const auto progress = runtime_.advance(1);
            if (progress == Progress::Finished) {
                output_.leave(owner_);
                owner_ = 0;
                phase_ = Phase::Complete;
                return Progress::Finished;
            }
            if (progress == Progress::BudgetExhausted) break;
            const auto& request = *runtime_.request();
            switch (request.kind) {
            case RequestKind::Glyph:
            case RequestKind::WidthHint:
            case RequestKind::ClearLine:
                output_.begin(request, owner_);
                phase_ = Phase::Output;
                break;
            case RequestKind::Newline:
            case RequestKind::ConditionalNewline:
                if (windows_) {
                    if (const auto x = windows_->aliased_text_x()) {
                        if (request.kind == RequestKind::Newline || *x)
                            windows_->aliased_newline(owner_);
                        // PRINT_NEWLINE writes the actual aliased registers
                        // without a glyph/footer effect. CC01 skips it when
                        // GET_TEXT_X is zero; CC00 always executes it.
                        runtime_.respond();
                        break;
                    }
                }
                output_.begin(request, owner_);
                phase_ = Phase::Output;
                break;
            case RequestKind::WordWrap:
                if (!state_.focus) {
                    // Original lookahead returns before reading either stream
                    // or changing UPCOMING_WORD_LENGTH when focus is absent.
                    runtime_.respond({state_.upcoming_word_length});
                } else {
                    if (!request.lookahead) throw std::logic_error("Word request lacks authored cursors");
                    word_.emplace(program_, *request.lookahead, output_.word_widths(), output_.policy().character_padding);
                    phase_ = Phase::Word;
                }
                break;
            case RequestKind::CloseWindow:
            case RequestKind::OpenWindow:
            case RequestKind::SaveWindowAttributes:
            case RequestKind::FocusWindow:
            case RequestKind::CloseAllWindows:
            case RequestKind::ClearWindow:
            case RequestKind::RestoreWindowAttributes:
            case RequestKind::ResetMenu:
            case RequestKind::PositionText:
            case RequestKind::SetNumberPadding:
            case RequestKind::SetFont:
                if (windows_) {
                    window_operation_ = windows_->begin(request, owner_);
                    phase_ = Phase::Window;
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            case RequestKind::PromptMode:
                output_.policy().prompt_mode = std::uint16_t(request.count);
                runtime_.respond();
                break;
            case RequestKind::BattleAnimation:
                if (!output_.policy().prompt_mode) {
                    Response response;
                    response.battle_animation_result = BattleAnimationResult{false, false};
                    runtime_.respond(response);
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            case RequestKind::InputLock:
                if (windows_) {
                    windows_->prompt_state().input_lock = std::uint16_t(request.count);
                    runtime_.respond();
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            case RequestKind::Pause:
            case RequestKind::TimedWait:
            case RequestKind::Prompt:
                if (prompts_) {
                    PromptCommand command;
                    command.action = request.kind == RequestKind::Pause ? PromptAction::Delay :
                                     request.kind == RequestKind::TimedWait ? PromptAction::TimedWait : PromptAction::Prompt;
                    command.count = std::uint16_t(request.count);
                    command.show_prompt = request.show_prompt;
                    command.force_wait = request.force_wait;
                    prompt_operation_ = prompts_->begin(command, owner_, false);
                    phase_ = Phase::Prompt;
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            case RequestKind::Selection:
                if (menus_) {
                    menu_operation_ = menus_->begin(std::uint16_t(request.count), owner_, false);
                    phase_ = Phase::Menu;
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            case RequestKind::Substitution:
                if (windows_ && ((request.selector < 0x0d || request.selector > 0x0f) ||
                                 windows_->prepared_message())) {
                    substitution_operation_ = windows_->substitutions().begin(request, owner_);
                    phase_ = Phase::Substitution;
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            case RequestKind::AppendMenuOption:
            case RequestKind::LayoutMenu:
                if (menus_) {
                    menu_commands_operation_ = menus_->commands().begin(request, *program_, owner_);
                    phase_ = Phase::MenuCommands;
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            case RequestKind::SelectInWindow:
            case RequestKind::ShowWallet:
                if (windows_ && (request.kind == RequestKind::ShowWallet || menus_)) {
                    window_commands_operation_ = windows_->commands().begin(request, menus_, owner_);
                    phase_ = Phase::WindowCommands;
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            case RequestKind::Inventory:
                if (menus_) {
                    inventory_operation_ = menus_->inventory().begin(request, owner_);
                    phase_ = Phase::Inventory;
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            case RequestKind::PartyQuery: {
                if (!request.party_query) throw std::logic_error("Party query lacks its typed operands");
                const auto result = windows_ ? windows_->query_party(*request.party_query) : std::nullopt;
                if (result) runtime_.respond({*result});
                else { event_ = request; return Progress::Suspended; }
                break;
            }
            case RequestKind::ItemQuery: {
                if (!request.item_query) throw std::logic_error("Item query lacks its typed operand");
                const auto result=windows_ ? windows_->substitutions().query_item(*request.item_query, owner_) : std::nullopt;
                if (result) runtime_.respond({*result});
                else { event_ = request; return Progress::Suspended; }
                break;
            }
            case RequestKind::BattleGrammar: {
                if (!request.battle_grammar) throw std::logic_error("Battle grammar lacks its literal selector");
                const auto result = windows_ ? windows_->query_battle(*request.battle_grammar) : std::nullopt;
                if (result) runtime_.respond({*result});
                else { event_ = request; return Progress::Suspended; }
                break;
            }
            case RequestKind::StatLetter:
                if (windows_) runtime_.respond({windows_->substitutions().stat_letter(request.count, owner_)});
                else { event_ = request; return Progress::Suspended; }
                break;
            case RequestKind::PreparedNamesEqual: {
                const auto *prepared=windows_ ? windows_->prepared_message() : nullptr;
                if(prepared) runtime_.respond({std::uint16_t(prepared->names_equal())});
                else {event_=request;return Progress::Suspended;}
                break;
            }
            case RequestKind::PreparedValue: {
                const auto *prepared = windows_ ? windows_->prepared_message() : nullptr;
                if (prepared) {
                    Response response;
                    response.prepared_value = request.selector == 0x1f
                        ? std::uint32_t(prepared->item()) : prepared->number();
                    runtime_.respond(response);
                } else { event_ = request; return Progress::Suspended; }
                break;
            }
            case RequestKind::TextAnimation:
                if (windows_) {
                    animation_operation_ = windows_->animations().begin(std::uint8_t(request.count), owner_, false);
                    phase_ = Phase::TextAnimation;
                } else {
                    event_ = request;
                    return Progress::Suspended;
                }
                break;
            default:
                event_ = request;
                return Progress::Suspended;
            }
            break;
        }
        case Phase::Output:
            if (output_.advance(owner_) == OutputProgress::Suspended) {
                event_ = *output_.effect();
                return Progress::Suspended;
            }
            runtime_.respond();
            phase_ = Phase::Interpreter;
            break;
        case Phase::Word:
            if (word_->advance(1)) {
                runtime_.respond(output_.prepare_word(word_->result(), owner_));
                word_.reset();
                phase_ = Phase::Interpreter;
            }
            break;
        case Phase::Window:
            if (window_operation_->advance() == OutputProgress::Suspended) {
                event_ = *window_operation_->effect();
                return Progress::Suspended;
            }
            window_operation_.reset();
            runtime_.respond();
            phase_ = Phase::Interpreter;
            break;
        case Phase::Menu: {
            const auto progress = menu_operation_->advance(1);
            if (progress == Progress::Suspended) {
                event_ = *menu_operation_->event();
                return progress;
            }
            if (progress == Progress::Finished) {
                const auto result = menu_operation_->result();
                menu_operation_.reset();
                runtime_.respond({result});
                phase_ = Phase::Interpreter;
            }
            break;
        }
        case Phase::Prompt: {
            const auto progress = prompt_operation_->advance(1);
            if (progress == Progress::Suspended) {
                std::visit([&](const auto &effect) { event_ = effect; }, *prompt_operation_->event());
                return progress;
            }
            if (progress == Progress::Finished) {
                prompt_operation_.reset();
                runtime_.respond();
                phase_ = Phase::Interpreter;
            }
            break;
        }
        case Phase::Substitution: {
            const auto progress = substitution_operation_->advance(1);
            if (progress == Progress::Suspended) {
                event_ = *substitution_operation_->effect();
                return progress;
            }
            if (progress == Progress::Finished) {
                substitution_operation_.reset();
                runtime_.respond();
                phase_ = Phase::Interpreter;
            }
            break;
        }
        case Phase::MenuCommands: {
            const auto progress = menu_commands_operation_->advance(1);
            if (progress == Progress::Suspended) {
                std::visit([&](const auto &effect) { event_ = effect; }, *menu_commands_operation_->effect());
                return progress;
            }
            if (progress == Progress::Finished) {
                menu_commands_operation_.reset();
                runtime_.respond();
                phase_ = Phase::Interpreter;
            }
            break;
        }
        case Phase::WindowCommands: {
            const auto progress = window_commands_operation_->advance(1);
            if (progress == Progress::Suspended) {
                event_ = *window_commands_operation_->event();
                return progress;
            }
            if (progress == Progress::Finished) {
                const auto result = window_commands_operation_->result();
                window_commands_operation_.reset();
                runtime_.respond({result});
                phase_ = Phase::Interpreter;
            }
            break;
        }
        case Phase::Inventory: {
            const auto progress = inventory_operation_->advance(1);
            if (progress == Progress::Suspended) {
                std::visit([&](const auto &effect) { event_ = effect; }, *inventory_operation_->effect());
                return progress;
            }
            if (progress == Progress::Finished) {
                inventory_operation_.reset();
                runtime_.respond();
                phase_ = Phase::Interpreter;
            }
            break;
        }
        case Phase::TextAnimation: {
            const auto progress = animation_operation_->advance(1);
            if (progress == Progress::Suspended) {
                std::visit([&](const auto &effect) { event_ = effect; }, *animation_operation_->event());
                return progress;
            }
            if (progress == Progress::Finished) {
                animation_operation_.reset();
                runtime_.respond();
                phase_ = Phase::Interpreter;
            }
            break;
        }
        case Phase::Complete:
            return Progress::Finished;
        }
    }
    return Progress::BudgetExhausted;
}
const std::optional<ConversationEvent>& Conversation::event() const { return event_; }
void Conversation::respond() {
    respond({0, windows_ ? windows_->prompt_state().pressed : std::uint16_t(0), 0});
}
void Conversation::respond(Response response) {
    if (!event_) throw std::logic_error("Conversation has no pending host event");
    output_.require_owner(active_owner());
    if (windows_) {
        const auto *text = std::get_if<TextEffect>(&*event_);
        const auto *window = std::get_if<WindowEffect>(&*event_);
        const auto *request = std::get_if<Request>(&*event_);
        if ((text && text->kind == TextEffectKind::WindowTick) ||
            (window && (window->kind == WindowEffectKind::WindowTick ||
                        window->kind == WindowEffectKind::FrameWait)) ||
            (request && request->kind == RequestKind::SoundWorldTick))
            windows_->prompt_state().pressed = response.pressed;
    }
    if (menu_operation_) menu_operation_->respond({response.pressed, response.held, response.value});
    else if (prompt_operation_) prompt_operation_->respond(response.pressed);
    else if (substitution_operation_) substitution_operation_->respond();
    else if (menu_commands_operation_) menu_commands_operation_->respond();
    else if (window_commands_operation_)
        window_commands_operation_->respond({response.pressed, response.held, response.value});
    else if (animation_operation_) animation_operation_->respond(response.pressed);
    else if (inventory_operation_) inventory_operation_->respond(response.pressed);
    else if (std::holds_alternative<TextEffect>(*event_)) output_.respond(owner_);
    else if (std::holds_alternative<WindowEffect>(*event_)) window_operation_->respond();
    else runtime_.respond(response);
    // An unsupported command throws before clearing the event. The caller
    // cannot accidentally advance past a service which has no implementation.
    event_.reset();
}
bool Conversation::finished() const { return phase_ == Phase::Complete; }
TextOutput& Conversation::output() { return output_; }
const TextOutput& Conversation::output() const { return output_; }
Snapshot Conversation::snapshot() const { return runtime_.snapshot(); }
void Conversation::observe(std::function<void(const Event&)> observer) { runtime_.observe(std::move(observer)); }
} // namespace eb::native::dialogue
