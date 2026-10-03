#include "eb/native/dialogue/runtime.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::dialogue {
WindowState &State::registers_at(unsigned slot) {
    const auto &id = window_slots.at(slot);
    return id ? windows.at(*id) : retired_window_banks.at(slot);
}
const WindowState &State::registers_at(unsigned slot) const {
    const auto &id = window_slots.at(slot);
    return id ? windows.at(*id) : retired_window_banks.at(slot);
}
WindowState &State::window() {
    return const_cast<WindowState &>(std::as_const(*this).window());
}
const WindowState &State::window() const {
    if (window_host_managed && windows.empty()) return dummy;
    if (focus) return windows.at(*focus);
    if (window_host_managed && !windows.empty()) {
        if (!unfocused_register_slot)
            throw std::logic_error("Unfocused open windows require the source ambient register slot");
        if (*unfocused_register_slot == 0xffff) return dummy;
        return registers_at(*unfocused_register_slot);
    }
    return dummy;
}
bool State::flag(std::uint16_t id) const {
    if (!id || unsigned(id - 1) / 8 >= event_flags.size())
        throw std::out_of_range("Dialogue event flag outside declared game flags");
    return (event_flags[(id - 1) / 8] & (1u << ((id - 1) & 7))) != 0;
}
void State::set_flag(std::uint16_t id, bool enabled) {
    (void)flag(id);
    auto &byte = event_flags[(id - 1) / 8];
    const auto bit = 1u << ((id - 1) & 7);
    byte = std::uint8_t(enabled ? byte | bit : byte & ~bit);
}
struct Runtime::Execution {
    enum class Handler {
        None,
        SetFlag,
        ClearFlag,
        FlagJump,
        GetFlag,
        Call,
        Jump,
        MultiJump,
        Equal,
        NotEqual,
        CopyArgument,
        Secondary,
        Pause,
        TimedWait,
        PromptMode,
        OpenWindow,
        FocusWindow,
        PositionText,
        SelectInWindow,
        NumberPadding,
        CompareUnsigned,
        TextAnimation,
        BattleAnimation,
        BattleGrammar,
        Inventory,
        PartyQuery,
        ItemCommand,
        ScriptSound,
        WorldControl,
        Substitution,
        WidthHint,
        MenuLabelFirst,
        MenuLabelBody,
        MenuReference,
        MenuLayout,
        Tree,
        SubroutineCount,
        SubroutineTarget
    };
    // JP1C11 has no authored operands after its selector. Keep its suspended
    // calls distinct from byte-gathering handlers so no next stream byte is
    // consumed and each recursive DISPLAY_TEXT retains its own continuation.
    enum class FormationStage { None, Refresh, FirstConscious, Name, Count, SuffixFirst, SuffixLast };
    struct Frame {
        unsigned slot{};
        std::optional<Location> dictionary;
        Handler handler{};
        std::uint8_t command{}, selector{};
        Location command_source{};
        ReferenceKey arguments{};
        unsigned argument_count{};
        bool skip_after_return{}, wrap_checked{};
        FormationStage formation{};
    };
    std::shared_ptr<const Program> program;
    State &state;
    std::vector<Frame> frames;
    std::optional<Request> pending;
    std::optional<Location> returned;
    std::function<void(const Event &)> observer;
    std::uint64_t serial{}, consumed{}, completed_stages{};
    bool started{};
    // This shared scratch survives completed commands and parser calls. No
    // source host effect can interrupt gathering; bounded parser work is not
    // a callback boundary. The request owns its completed prefix while the
    // menu service decides whether to copy it into an option record.
    std::array<std::uint8_t, 30> menu_label{};
    std::uint8_t menu_label_length{};
    Execution(std::shared_ptr<const Program> p, State &s) : program(std::move(p)), state(s) {
        if (!program)
            throw std::invalid_argument("Missing dialogue program");
    }
    void emit(EventKind kind, Location source, RegisterKind reg = {}, std::uint32_t value = 0,
              std::uint16_t flag = 0, std::optional<Location> target = {}) {
        if (observer)
            observer(Event{kind, source, state.focus, reg, value, flag, target});
    }
    void register_changed(Location source, RegisterKind reg, std::uint32_t value) {
        emit(EventKind::RegisterChanged, source, reg, value);
    }
    std::optional<Location> &cursor() { return state.streams.at(frames.back().slot).cursor; }
    std::uint8_t primary_byte() {
        auto &at = cursor();
        if (!at)
            throw std::out_of_range("Dialogue jumped to a null content reference");
        const auto byte = program->byte(*at);
        *at = Program::advance(*at);
        ++consumed;
        return byte;
    }
    std::pair<std::uint8_t, Location> next_byte() {
        auto &frame = frames.back();
        if (frame.dictionary) {
            const auto at = *frame.dictionary;
            const auto byte = program->byte(at);
            if (byte) {
                frame.dictionary = Program::advance(at);
                ++consumed;
                return {byte, at};
            }
        }
        if (!cursor())
            throw std::out_of_range("Null dialogue stream");
        const auto at = *cursor();
        return {primary_byte(), at};
    }
    void ask(RequestKind kind, Location source, std::uint8_t command, std::uint8_t selector = 0,
             unsigned value = 0, bool prompt = false, bool force = false) {
        pending =
            Request{kind,    ++serial, source,
                    command, selector, kind == RequestKind::Glyph ? std::uint8_t(value) : std::uint8_t(0),
                    value,   prompt,   force, {}, {}, {}, {}, {}};
        if (kind == RequestKind::WordWrap)
            pending->lookahead = Lookahead{*cursor(), frames.back().dictionary};
    }
    std::uint16_t next_stream_slot() const {
        auto next = std::uint16_t(state.stream_slot + 1);
        // CLC/SBC in the source tests signed(candidate)<=9. In particular,
        // an underflowed global counter must not be normalized modulo ten.
        if (next < 0x8000 && next > 9)
            next = 0;
        if (next >= state.streams.size())
            throw std::out_of_range("Dialogue allocation selects an unsupported out-of-table source slot");
        return next;
    }
    void enter(Location target, bool skip_after_return = false) {
        (void)program->byte(target);
        if (frames.size() >= 1024)
            throw std::runtime_error("Dialogue call-depth budget exceeded");
        const auto next = next_stream_slot();
        state.stream_slot = next;
        state.streams[next].cursor = target;
        state.streams[next].saved_window.reset();
        Frame frame;
        frame.slot = state.stream_slot;
        frame.skip_after_return = skip_after_return;
        frames.push_back(frame);
    }
    void leave(Location source) {
        returned = cursor();
        const bool skip = frames.back().skip_after_return;
        emit(EventKind::Return, source, {}, 0, 0, returned);
        frames.pop_back();
        auto previous = std::uint16_t(state.stream_slot - 1);
        if (previous < 0x8000 && previous > 9)
            previous = 9;
        state.stream_slot = previous;
        if (skip && !frames.empty())
            skip_primary(unsigned(state.subroutine_table_remaining) * 4);
    }
    void skip_primary(unsigned count) {
        if (!cursor())
            throw std::out_of_range("Null dialogue stream while skipping operands");
        *cursor() = Program::advance(*cursor(), count);
    }
    void complete_handler() {
        frames.back().handler = Handler::None;
        ++completed_stages;
    }
    void set_working(Location source, std::uint32_t value) {
        state.window().active.working = value;
        register_changed(source, RegisterKind::Working, value);
    }
    void tree(std::uint8_t selector) {
        auto &frame = frames.back();
        const auto command = frame.command;
        const auto source = frame.command_source;
        complete_handler();
        if (command == 0x1b) {
            auto &window = state.window();
            switch (selector) {
            case 0:
                window.saved = window.active;
                register_changed(source, RegisterKind::Saved, 0);
                break;
            case 1:
                window.active = window.saved;
                register_changed(source, RegisterKind::Working, window.active.working);
                register_changed(source, RegisterKind::Argument, window.active.argument);
                register_changed(source, RegisterKind::Secondary, window.active.secondary);
                break;
            case 2:
            case 3:
                if ((window.active.working == 0) == (selector == 2)) {
                    frame.handler = Handler::Jump;
                    frame.argument_count = 0;
                } else
                    skip_primary(4);
                break;
            case 4: {
                const auto working = window.active.working;
                window.active.working = window.active.argument;
                window.active.argument = working;
                register_changed(source, RegisterKind::Working, window.active.working);
                register_changed(source, RegisterKind::Argument, window.active.argument);
                break;
            }
            case 5:
                state.backup = {window.active.working, window.active.argument,
                                std::uint8_t(window.active.secondary)};
                register_changed(source, RegisterKind::GlobalBackup, 0);
                break;
            case 6:
                window.active = {state.backup.working, state.backup.argument, state.backup.secondary};
                register_changed(source, RegisterKind::Working, window.active.working);
                register_changed(source, RegisterKind::Argument, window.active.argument);
                register_changed(source, RegisterKind::Secondary, window.active.secondary);
                break;
            default:
                break; // The source consumes unknown1B selectors as no-ops.
            }
        } else if (command == 0x18) {
            switch (selector) {
            case 0: ask(RequestKind::CloseWindow, source, command, selector); break;
            case 1: frame.handler = Handler::OpenWindow; break;
            case 2: ask(RequestKind::SaveWindowAttributes, source, command, selector, frame.slot); break;
            case 3: frame.handler = Handler::FocusWindow; break;
            case 4: ask(RequestKind::CloseAllWindows, source, command, selector); break;
            case 5: frame.handler = Handler::PositionText; break;
            case 6: ask(RequestKind::ClearWindow, source, command, selector); break;
            case 7: frame.handler = Handler::CompareUnsigned; break;
            case 8: case 9:
                frame.selector = selector;
                frame.handler = Handler::SelectInWindow;
                break;
            case 0x0a: ask(RequestKind::ShowWallet, source, command, selector); break;
            default: ask(RequestKind::UnsupportedCommand, source, command, selector); break;
            }
        } else if (command == 0x19) {
            if (selector == 2) {
                frame.selector = selector;
                frame.argument_count = 0;
                frame.handler = Handler::MenuLabelFirst;
            } else if (selector == 4)
                ask(RequestKind::ResetMenu, source, command, selector);
            else if (selector == 0x10 || selector == 0x16) {
                frame.selector = selector;
                frame.argument_count = 0;
                frame.handler = Handler::PartyQuery;
            } else if (selector == 0x20) {
                ask(RequestKind::PartyQuery, source, command, selector);
                pending->party_query = PartyQueryRequest{PartyQueryKind::ControlledCount};
            } else if (selector == 0x1e || selector == 0x1f) {
                ask(RequestKind::PreparedValue, source, command, selector);
            } else
                ask(RequestKind::UnsupportedCommand, source, command, selector);
        } else if (command == 0x1c) {
            switch (selector) {
            case 0x11:
                if (program->version() == GameVersion::JP) {
                    frame.formation = FormationStage::Refresh;
                    ask(RequestKind::RefreshParty, source, command, selector);
                } else
                    frame.handler = Handler::WidthHint;
                break;
            case 4: ask(RequestKind::ShowMeters, source, command, selector); break;
            case 8: frame.handler = Handler::TextAnimation; break;
            case 0x13: frame.handler = Handler::BattleAnimation; break;
            case 0x14: case 0x15:
                if (program->version() == GameVersion::US) {
                    frame.selector = selector;
                    frame.handler = Handler::BattleGrammar;
                }
                break;
            case 9: frame.handler = Handler::NumberPadding; break;
            case 0x0d: case 0x0e: case 0x0f:
                ask(RequestKind::Substitution, source, command, selector);
                break;
            case 7: case 0x0c:
                frame.selector = selector;
                frame.handler = Handler::MenuLayout;
                break;
            case 0: case 1: case 2: case 3: case 5: case 6: case 0x0a: case 0x0b: case 0x12:
                frame.selector = selector;
                frame.argument_count = 0;
                frame.handler = Handler::Substitution;
                break;
            default: ask(RequestKind::UnsupportedCommand, source, command, selector); break;
            }
        } else if (command == 0x1d && (selector == 3 || selector == 8 || selector == 0x0e)) {
            frame.selector = selector;
            frame.argument_count = 0;
            frame.handler = Handler::ItemCommand;
        } else if (command == 0x1d && (selector == 0x0d || selector == 0x19)) {
            frame.selector = selector;
            frame.argument_count = 0;
            frame.handler = Handler::PartyQuery;
        } else if (command == 0x1a && selector == 5) {
            frame.argument_count = 0;
            frame.handler = Handler::Inventory;
        } else if (command == 0x1a && (selector == 4 || selector == 8 || selector == 9)) {
            ask(RequestKind::Selection, source, command, selector, selector == 9 ? 1 : 0);
        } else if (command == 0x1f) {
            switch (selector) {
            case 0x02: frame.handler = Handler::ScriptSound; break;
            case 0x30: case 0x31:
                ask(RequestKind::SetFont, source, command, selector, selector - 0x30);
                break;
            case 0x50: ask(RequestKind::InputLock, source, command, selector, 1); break;
            case 0x51: ask(RequestKind::InputLock, source, command, selector, 0); break;
            case 0x60: frame.handler = Handler::TimedWait; break;
            case 0x62: frame.handler = Handler::PromptMode; break;
            case 0xa0: case 0xa1: case 0xa2:
                ask(RequestKind::NpcGift, source, command, selector);
                pending->npc_gift = selector == 0xa0 ? NpcGiftAction::Open :
                                    selector == 0xa1 ? NpcGiftAction::Close : NpcGiftAction::IsOpen;
                break;
            case 0xc0: frame.handler = Handler::SubroutineCount; break;
            case 0xed:
                ask(RequestKind::WorldControl, source, command, selector);
                pending->world_control = WorldControlCommand{WorldControlCommandKind::StopAutomatic};
                break;
            case 0xee: case 0xef:
                frame.selector = selector;
                frame.argument_count = 0;
                frame.handler = Handler::WorldControl;
                break;
            default: ask(RequestKind::UnsupportedCommand, source, command, selector); break;
            }
        } else {
            ask(RequestKind::UnsupportedCommand, source, command, selector);
        }
    }
    bool respond_formation(const Request &request, Response response) {
        if (frames.empty() || frames.back().formation == FormationStage::None)
            return false;
        auto &stage = frames.back().formation;
        const auto expect = [&](RequestKind kind) {
            if (request.kind != kind || request.command != 0x1c || request.selector != 0x11)
                throw std::logic_error("Formation-name continuation lost its pending call");
        };
        const auto query = [&](PartyQueryKind kind) {
            ask(RequestKind::PartyQuery, request.source, 0x1c, 0x11);
            pending->party_query = PartyQueryRequest{kind};
        };
        switch (stage) {
        case FormationStage::Refresh:
            expect(RequestKind::RefreshParty);
            stage = FormationStage::FirstConscious;
            query(PartyQueryKind::FirstConscious);
            break;
        case FormationStage::FirstConscious:
            expect(RequestKind::PartyQuery);
            stage = FormationStage::Name;
            ask(RequestKind::Substitution, request.source, 0x1c, 0x11, response.value);
            break;
        case FormationStage::Name:
            expect(RequestKind::Substitution);
            // This query must follow the entire name, including its callbacks.
            // It is not the count used to choose the name before printing.
            stage = FormationStage::Count;
            query(PartyQueryKind::ConsciousCount);
            break;
        case FormationStage::Count:
            expect(RequestKind::PartyQuery);
            if (response.value > 1) {
                stage = FormationStage::SuffixFirst;
                ask(RequestKind::Glyph, request.source, 0x1c, 0x11, 0x66);
            } else {
                stage = FormationStage::None;
                pending.reset();
            }
            break;
        case FormationStage::SuffixFirst:
            expect(RequestKind::Glyph);
            stage = FormationStage::SuffixLast;
            ask(RequestKind::Glyph, request.source, 0x1c, 0x11, 0x76);
            break;
        case FormationStage::SuffixLast:
            expect(RequestKind::Glyph);
            stage = FormationStage::None;
            pending.reset();
            break;
        case FormationStage::None:
            throw std::logic_error("Unexpected idle formation continuation");
        }
        // Neither helper return is a working-register assignment. In
        // particular callbacks may have moved focus or changed every bank.
        return true;
    }
    void argument(std::uint8_t value) {
        auto &frame = frames.back();
        const auto source = frame.command_source;
        const auto handler = frame.handler;
        if (handler == Handler::Tree) {
            tree(value);
            return;
        }
        if (handler == Handler::WorldControl) {
            frame.arguments.at(frame.argument_count++) = value;
            if (frame.argument_count != 2) return;
            const auto selector = std::uint16_t(frame.arguments[0] | unsigned(value) << 8);
            complete_handler();
            ask(RequestKind::WorldControl, source, frame.command, frame.selector);
            pending->world_control = WorldControlCommand{
                frame.selector == 0xee ? WorldControlCommandKind::FocusNpc : WorldControlCommandKind::FocusSprite,
                selector};
            return;
        }
        if (handler == Handler::WidthHint) {
            const auto word = value ? std::uint16_t(value) : std::uint16_t(state.window().active.argument);
            complete_handler();
            ask(RequestKind::WidthHint, source, frame.command, 0x11, word);
            return;
        }
        if (handler == Handler::ScriptSound) {
            // CC1F02 resolves a zero literal through the low argument word;
            // PLAY_SOUND subsequently consumes only its low byte.
            const auto word = value ? std::uint16_t(value) : std::uint16_t(state.window().active.argument);
            const auto byte = std::uint8_t(word);
            complete_handler();
            ask(RequestKind::ScriptSound, source, frame.command, 2);
            pending->script_sound = ScriptSoundRequest{
                byte ? ScriptSoundKind::QueueEffect : ScriptSoundKind::DirectDriverCommand,
                byte ? byte : std::uint8_t(0x57), word};
            return;
        }
        if (handler == Handler::ItemCommand) {
            frame.arguments.at(frame.argument_count++) = value;
            const unsigned count = frame.selector == 3 ? 1 : 2;
            if (frame.argument_count != count) return;
            ItemCommandRequest item;
            if (frame.selector == 3) {
                item.kind = ItemCommandKind::FindSpace;
                item.character = value ? std::uint16_t(value) : std::uint16_t(state.window().active.argument);
            } else if (frame.selector == 8) {
                item.kind = ItemCommandKind::AddMoney;
                const auto literal = std::uint16_t(frame.arguments[0] | (unsigned(value) << 8));
                item.amount = literal ? std::uint32_t(literal) : state.window().active.argument;
            } else {
                item.kind = ItemCommandKind::Give;
                // CC1D0E reads argument for the item before working for the
                // recipient, after gathering both bytes. Neither is truncated
                // to an authored byte when the zero fallback selects a word.
                item.item = value ? std::uint16_t(value) : std::uint16_t(state.window().active.argument);
                item.character = frame.arguments[0] ? std::uint16_t(frame.arguments[0]) :
                                                       std::uint16_t(state.window().active.working);
            }
            complete_handler();
            ask(RequestKind::ItemCommand, source, frame.command, frame.selector);
            pending->item_command = item;
            return;
        }
        if (handler == Handler::PartyQuery) {
            frame.arguments.at(frame.argument_count++) = value;
            const unsigned count = frame.command == 0x1d ? (frame.selector == 0x19 ? 1 : 3) :
                                   frame.selector == 0x10 ? 1 : 2;
            if (frame.argument_count != count) return;
            PartyQueryRequest query;
            if (frame.command == 0x1d && frame.selector == 0x19) {
                query.kind = PartyQueryKind::FewerControlledThan;
                query.amount = value ? std::uint32_t(value) : state.window().active.argument;
            } else if (frame.selector == 0x10) {
                query.kind = PartyQueryKind::DisplayCharacter;
                query.position = value ? std::uint16_t(value) : std::uint16_t(state.window().active.argument);
            } else {
                query.kind = frame.command == 0x1d ? PartyQueryKind::StatusEquals : PartyQueryKind::Status;
                // CHECK_STATUS_GROUP callers resolve group before character,
                // after gathering all literals. Publish re-resolves focus.
                query.group = frame.arguments[1] ? std::uint16_t(frame.arguments[1]) :
                                                   std::uint16_t(state.window().active.argument);
                query.character = frame.arguments[0] ? std::uint16_t(frame.arguments[0]) :
                                                       std::uint16_t(state.window().active.working);
                if (count == 3) query.expected_status = frame.arguments[2];
            }
            complete_handler();
            ask(RequestKind::PartyQuery, source, frame.command, frame.selector);
            pending->party_query = query;
            return;
        }
        if (handler == Handler::Inventory) {
            frame.arguments.at(frame.argument_count++) = value;
            if (frame.argument_count != 2) return;
            complete_handler();
            ask(RequestKind::Inventory, source, frame.command, 5);
            pending->inventory = InventoryRequest{WindowId{frame.arguments[0]}, frame.arguments[1], frame.slot};
            return;
        }
        if (handler == Handler::PositionText) {
            frame.arguments.at(frame.argument_count++) = value;
            if (frame.argument_count != 2) return;
            complete_handler();
            ask(RequestKind::PositionText, source, frame.command, 5);
            pending->text_position = TextPositionRequest{frame.arguments[0], frame.arguments[1]};
            return;
        }
        if (handler == Handler::SelectInWindow) {
            complete_handler();
            ask(RequestKind::SelectInWindow, source, frame.command, frame.selector);
            pending->window_selection = WindowSelectionRequest{WindowId{value}, frame.selector == 9};
            return;
        }
        if (handler == Handler::NumberPadding) {
            complete_handler();
            ask(RequestKind::SetNumberPadding, source, frame.command, 9, value);
            return;
        }
        if (handler == Handler::CompareUnsigned) {
            if (frame.argument_count < 4) {
                frame.arguments.at(frame.argument_count++) = value;
                return;
            }
            std::uint32_t literal = 0;
            for (unsigned i = 0; i < 4; ++i)
                literal |= std::uint32_t(frame.arguments[i]) << (i * 8);
            const auto &registers = state.window().active;
            const std::uint32_t selected = value == 0 ? registers.working :
                                           value == 1 ? registers.argument : registers.secondary;
            complete_handler();
            set_working(source, selected < literal ? 0u : selected == literal ? 1u : 2u);
            return;
        }
        if (handler == Handler::TextAnimation) {
            complete_handler();
            ask(RequestKind::TextAnimation, source, frame.command, 8, value);
            return;
        }
        if (handler == Handler::MenuLabelFirst) {
            menu_label[0] = value;
            frame.argument_count = 1;
            frame.handler = Handler::MenuLabelBody;
            return;
        }
        if (handler == Handler::MenuLabelBody) {
            if (frame.argument_count >= menu_label.size())
                throw std::out_of_range("Authored menu label exceeds its gathering buffer");
            const bool delimiter = value == 1 || value == 2;
            menu_label[frame.argument_count++] = delimiter ? 0 : value;
            if (!delimiter) return;
            menu_label_length = std::uint8_t(frame.argument_count);
            if (value == 1) {
                frame.argument_count = 0;
                frame.handler = Handler::MenuReference;
            } else {
                complete_handler();
                ask(RequestKind::AppendMenuOption, source, frame.command, 2);
                pending->menu_append = MenuAppendRequest{menu_label, menu_label_length, {}};
            }
            return;
        }
        if (handler == Handler::MenuReference) {
            frame.arguments.at(frame.argument_count++) = value;
            if (frame.argument_count != 4) return;
            complete_handler();
            ask(RequestKind::AppendMenuOption, source, frame.command, 2);
            pending->menu_append = MenuAppendRequest{menu_label, menu_label_length, frame.arguments};
            return;
        }
        if (handler == Handler::MenuLayout) {
            const auto columns = value ? std::uint16_t(value) : std::uint16_t(state.window().active.argument);
            complete_handler();
            ask(RequestKind::LayoutMenu, source, frame.command, frame.selector);
            pending->menu_layout = MenuLayoutRequest{columns, frame.selector == 7};
            return;
        }
        if (handler == Handler::Substitution) {
            const auto selector = frame.selector;
            std::uint32_t operand = value;
            if (selector == 0x0a || selector == 0x0b) {
                frame.arguments.at(frame.argument_count++) = value;
                if (frame.argument_count != 4) return;
                operand = 0;
                for (unsigned i = 0; i < 4; ++i)
                    operand |= std::uint32_t(frame.arguments[i]) << (i * 8);
                if (!operand) operand = state.window().active.argument;
            } else if (selector == 2 && value == 0xff && program->version() == GameVersion::US) {
                operand = std::uint16_t(state.window().saved.working);
            } else if (!value && selector != 0) {
                operand = std::uint16_t(state.window().active.argument);
            }
            complete_handler();
            ask(RequestKind::Substitution, source, frame.command, selector, operand);
            return;
        }
        if (handler == Handler::BattleGrammar) {
            complete_handler();
            ask(RequestKind::BattleGrammar, source, frame.command, frame.selector);
            pending->battle_grammar = BattleGrammarRequest{frame.selector == 0x15, value};
            return;
        }
        if (handler == Handler::BattleAnimation) {
            if (!frame.argument_count) {
                frame.arguments[frame.argument_count++] = value;
                return;
            }
            const BattleAnimationRequest animation{
                std::uint16_t(unsigned(frame.arguments[0]) - 1),
                std::uint16_t(unsigned(value) - 1)};
            complete_handler();
            ask(RequestKind::BattleAnimation, source, frame.command, 0x13);
            pending->battle_animation = animation;
            return;
        }
        if (handler == Handler::Call || handler == Handler::Jump || handler == Handler::SubroutineTarget) {
            frame.arguments.at(frame.argument_count++) = value;
            if (frame.argument_count < 4)
                return;
            const auto target = program->resolve(frame.arguments);
            complete_handler();
            if (handler == Handler::Jump) {
                cursor() = target;
                emit(EventKind::Jump, source, {}, 0, 0, target);
            } else {
                emit(EventKind::Call, source, {}, 0, 0, target);
                if (target)
                    enter(*target, handler == Handler::SubroutineTarget);
                else if (handler == Handler::SubroutineTarget)
                    skip_primary(unsigned(state.subroutine_table_remaining) * 4);
            }
            return;
        }
        if (handler == Handler::SetFlag || handler == Handler::ClearFlag || handler == Handler::FlagJump ||
            handler == Handler::GetFlag) {
            if (!frame.argument_count) {
                frame.arguments[0] = value;
                ++frame.argument_count;
                return;
            }
            const auto id = std::uint16_t(frame.arguments[0] | (unsigned(value) << 8));
            complete_handler();
            if (handler == Handler::SetFlag || handler == Handler::ClearFlag) {
                state.set_flag(id, handler == Handler::SetFlag);
                emit(EventKind::FlagChanged, source, {}, handler == Handler::SetFlag, id);
            } else if (handler == Handler::GetFlag)
                set_working(source, state.flag(id));
            else if (state.flag(id)) {
                frame.handler = Handler::Jump;
                frame.argument_count = 0;
            } else
                skip_primary(4);
            return;
        }
        complete_handler();
        switch (handler) {
        case Handler::MultiJump:
        case Handler::SubroutineCount: {
            const auto working = state.window().active.working;
            if (working && working <= value) {
                if (handler == Handler::SubroutineCount)
                    state.subroutine_table_remaining = std::uint16_t(value - working);
                skip_primary(unsigned(std::uint16_t(working - 1)) * 4);
                frame.handler = handler == Handler::MultiJump ? Handler::Jump : Handler::SubroutineTarget;
                frame.argument_count = 0;
            } else
                skip_primary(unsigned(value) * 4);
            break;
        }
        case Handler::Equal:
        case Handler::NotEqual:
            set_working(source, (std::uint16_t(state.window().active.working) == value) ==
                                    (handler == Handler::Equal));
            break;
        case Handler::CopyArgument: {
            auto &window = state.window();
            window.active.argument = value ? window.active.secondary : window.active.working;
            register_changed(source, RegisterKind::Argument, window.active.argument);
            break;
        }
        case Handler::Secondary: {
            auto &window = state.window();
            window.active.secondary = value ? value : std::uint8_t(window.active.argument);
            register_changed(source, RegisterKind::Secondary, window.active.secondary);
            break;
        }
        case Handler::Pause:
            ask(RequestKind::Pause, source, frame.command, 0, value);
            break;
        case Handler::TimedWait:
            ask(RequestKind::TimedWait, source, frame.command, 0x60, value);
            break;
        case Handler::PromptMode:
            ask(RequestKind::PromptMode, source, frame.command, 0x62, value);
            break;
        case Handler::OpenWindow:
            ask(RequestKind::OpenWindow, source, frame.command, 1, value);
            break;
        case Handler::FocusWindow:
            ask(RequestKind::FocusWindow, source, frame.command, 3, value);
            break;
        default:
            throw std::logic_error("Invalid dialogue argument continuation");
        }
    }
    void begin(std::uint8_t command, Location source) {
        auto &frame = frames.back();
        frame.command = command;
        frame.command_source = source;
        frame.argument_count = 0;
        if (command >= 0x20) {
            ++completed_stages;
            ask(RequestKind::Glyph, source, command, 0, command);
            return;
        }
        switch (command) {
        case 0:
            ask(RequestKind::Newline, source, command);
            break;
        case 1:
            ask(RequestKind::ConditionalNewline, source, command);
            break;
        case 2:
            ++completed_stages;
            if (state.streams.at(frame.slot).saved_window)
                ask(RequestKind::RestoreWindowAttributes, source, command, 0, frame.slot);
            else
                leave(source);
            return;
        case 3:
            ask(RequestKind::Prompt, source, command, 0, 0, true);
            break;
        case 4:
            frame.handler = Handler::SetFlag;
            return;
        case 5:
            frame.handler = Handler::ClearFlag;
            return;
        case 6:
            frame.handler = Handler::FlagJump;
            return;
        case 7:
            frame.handler = Handler::GetFlag;
            return;
        case 8:
            frame.handler = Handler::Call;
            return;
        case 9:
            frame.handler = Handler::MultiJump;
            return;
        case 0x0a:
            frame.handler = Handler::Jump;
            return;
        case 0x0b:
            frame.handler = Handler::Equal;
            return;
        case 0x0c:
            frame.handler = Handler::NotEqual;
            return;
        case 0x0d:
            frame.handler = Handler::CopyArgument;
            return;
        case 0x0e:
            frame.handler = Handler::Secondary;
            return;
        case 0x0f:
            ++state.window().active.secondary;
            register_changed(source, RegisterKind::Secondary, state.window().active.secondary);
            break;
        case 0x10:
            frame.handler = Handler::Pause;
            return;
        case 0x11:
            ask(RequestKind::Selection, source, command, 0, 1);
            break;
        case 0x12:
            ask(RequestKind::ClearLine, source, command);
            break;
        case 0x13:
            ask(RequestKind::Prompt, source, command);
            break;
        case 0x14:
            ask(RequestKind::Prompt, source, command, 0, 0, true, true);
            break;
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
            frame.handler = Handler::Tree;
            return;
        default:
            break; // JP ignores15..17; US can also produce these from a dictionary's first byte.
        }
        ++completed_stages;
    }
};
Runtime::Runtime(std::shared_ptr<const Program> program, State &state)
    : execution_(std::make_unique<Execution>(std::move(program), state)) {}
Runtime::~Runtime() = default;
Runtime::Runtime(Runtime &&) noexcept = default;
Runtime &Runtime::operator=(Runtime &&) noexcept = default;
void Runtime::start(EntryId entry) { start(execution_->program->entry(entry)); }
void Runtime::validate_start() const {
    const auto &e = *execution_;
    if (!e.frames.empty() || e.pending)
        throw std::logic_error("Dialogue is already running");
    (void)e.next_stream_slot();
}
void Runtime::start(Location location) {
    auto &e = *execution_;
    validate_start();
    e.returned.reset();
    e.enter(location);
    e.started = true;
}
Progress Runtime::advance(unsigned work_budget) {
    auto &e = *execution_;
    if (e.pending)
        return Progress::Suspended;
    if (e.frames.empty())
        return Progress::Finished;
    for (unsigned step = 0; step < work_budget; ++step) {
        auto &frame = e.frames.back();
        if (!e.cursor())
            throw std::out_of_range("Null dialogue stream");
        if (e.program->version() == GameVersion::US && e.state.word_wrap &&
            frame.handler == Execution::Handler::None && !frame.wrap_checked) {
            frame.wrap_checked = true;
            if (!e.state.upcoming_word_length) {
                e.ask(RequestKind::WordWrap, *e.cursor(), 0);
                return Progress::Suspended;
            }
            --e.state.upcoming_word_length;
        }
        auto [value, source] = e.next_byte();
        frame.wrap_checked = false;
        if (frame.handler != Execution::Handler::None)
            e.argument(value);
        else {
            if (e.program->version() == GameVersion::US && value >= 0x15 && value <= 0x17) {
                const auto index = unsigned(value - 0x15) * 256 + e.primary_byte();
                const auto at = e.program->dictionary_entry(index);
                value = e.program->byte(at);
                frame.dictionary = Program::advance(at);
                ++e.consumed;
            }
            e.begin(value, source);
        }
        if (e.pending)
            return Progress::Suspended;
        if (e.frames.empty())
            return Progress::Finished;
    }
    return Progress::BudgetExhausted;
}
const std::optional<Request> &Runtime::request() const { return execution_->pending; }
void Runtime::respond(Response response) {
    auto &e = *execution_;
    if (!e.pending)
        throw std::logic_error("Dialogue has no pending request");
    const auto request = *e.pending;
    if (request.kind == RequestKind::UnsupportedCommand)
        throw std::logic_error("Unsupported dialogue command cannot be resumed");
    if (e.respond_formation(request, response))
        return;
    if (request.kind == RequestKind::ScriptSound) {
        // PLAY_SOUND_AND_UNKNOWN always completes C12E42 after PLAY_SOUND,
        // including its direct-command case. Keep the stream paused through it.
        e.ask(RequestKind::SoundWorldTick, request.source, request.command, request.selector);
        return;
    }
    if (request.kind == RequestKind::Selection) {
        e.set_working(request.source, response.value);
        // DISPLAY_TEXT CC11 and tree1A04 reset the current focus's menu only
        // after assigning the result. Callbacks may have changed that focus.
        if (request.command == 0x11 || (request.command == 0x1a && request.selector == 4)) {
            e.ask(RequestKind::ResetMenu, request.source, request.command, request.selector);
            return;
        }
    } else if (request.kind == RequestKind::BattleAnimation) {
        if (!request.battle_animation || !response.battle_animation_result)
            throw std::logic_error("Battle animation requires its complete typed result");
        // Resolve the current focus after every real setup wait and callback.
        // The original bool is sign-extended into the complete working dword.
        if (response.battle_animation_result->executed)
            e.set_working(request.source, response.battle_animation_result->value ? 1u : 0u);
    } else if (request.kind == RequestKind::ItemCommand) {
        if (!request.item_command || !response.item_result ||
            response.item_result->argument.has_value() != (request.item_command->kind == ItemCommandKind::Give))
            throw std::logic_error("Item command requires its complete typed result");
        if (response.item_result->argument) {
            e.state.window().active.argument = *response.item_result->argument;
            e.register_changed(request.source, RegisterKind::Argument, *response.item_result->argument);
        }
        e.set_working(request.source, response.item_result->working);
    } else if (request.kind == RequestKind::NpcGift) {
        if (!request.npc_gift) throw std::logic_error("NPC gift command lacks its typed operation");
        if (*request.npc_gift == NpcGiftAction::IsOpen) e.set_working(request.source, response.value);
    } else if (request.kind == RequestKind::PartyQuery) {
        if (!request.party_query) throw std::logic_error("Party query lacks its typed operands");
        e.set_working(request.source, response.value);
    } else if (request.kind == RequestKind::BattleGrammar) {
        if (!request.battle_grammar) throw std::logic_error("Battle grammar lacks its literal selector");
        e.set_working(request.source, response.value);
    } else if (request.kind == RequestKind::PreparedValue) {
        if (!response.prepared_value)
            throw std::logic_error("Prepared-value query requires its complete typed result");
        e.set_working(request.source, request.selector == 0x1f
            ? std::uint8_t(*response.prepared_value) : *response.prepared_value);
    } else if (request.kind == RequestKind::SelectInWindow)
        // C19A11 has restored the current shared window context before the
        // handler stores this zero-extended result. It does not reset a menu.
        e.set_working(request.source, response.value);
    else if (request.kind == RequestKind::WordWrap)
        e.state.upcoming_word_length = response.value;
    else if (request.kind == RequestKind::RestoreWindowAttributes)
        e.leave(request.source);
    e.pending.reset();
}
std::optional<Location> Runtime::returned_cursor() const { return execution_->returned; }
Snapshot Runtime::snapshot() const {
    const auto &e = *execution_;
    Snapshot result{{}, e.returned, e.consumed, e.completed_stages};
    for (const auto &frame : e.frames)
        result.frames.push_back({frame.slot, e.state.streams.at(frame.slot).cursor, frame.dictionary,
                                 frame.handler == Execution::Handler::None ? std::uint8_t(0) : frame.command,
                                 frame.argument_count});
    return result;
}
void Runtime::observe(std::function<void(const Event &)> observer) {
    execution_->observer = std::move(observer);
}
} // namespace eb::native::dialogue
