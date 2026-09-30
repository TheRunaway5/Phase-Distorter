// Source: PRINT_STRING/PRINT_NUMBER{,-jp}, C10D7C, C4507A/C11404,
// C447FB/C4487C, C19249/C1931B/C19216, GET_PSI_NAME and C1CA06.
#include "eb/native/dialogue/substitutions.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "detail/string_printer.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool ok, const char *message) {
    if (!ok) throw std::logic_error(message);
}
void valid_number(std::uint32_t value) {
    // The original CLEAN_ROM clamp is FFFF967F, not9999999. Eight or
    // more digits write backwards into CURRENT_FOCUS_WINDOW and the last
    // titled-window owner. Those corrupt addresses have no native window
    // identity. Reject explicitly instead of inventing a clamp/extra digits.
    if (value > 9999999)
        throw std::out_of_range("Source decimal value overwrites focus/title-owner memory (more than seven digits)");
}
}
struct TextSubstitutions::Execution {
    WindowHost &host;
    std::shared_ptr<const SubstitutionResources> resources;
    SubstitutionValues values;
    std::array<std::uint8_t, 12> digits{};
    std::array<std::uint8_t, 32> word{};
    explicit Execution(WindowHost &h) : host(h) {}
    const SubstitutionResources &catalog() const {
        require(bool(resources), "Text substitution requires imported regional catalogs");
        return *resources;
    }
    TextReader live(StatKey key) {
        if (key.field == StatField::None)
            return [] { return std::span<const std::uint8_t>{}; };
        require(bool(values.read_string), "Text substitution requires a live string provider");
        return [this, key] { return values.read_string(key); };
    }
    unsigned decimal(std::uint32_t value) {
        valid_number(value);
        unsigned count = 0;
        do {
            digits[6 - count++] = std::uint8_t(value % 10);
            value /= 10;
        } while (value);
        return count;
    }
};
struct TextSubstitutions::Operation::Execution {
    TextSubstitutions::Execution &shared;
    WindowHost &host;
    TextOutput &output;
    SubstitutionCommand command;
    TextOutput::Owner owner;
    bool owns{}, done{}, saved_indent{}, split_finished{};
    unsigned physical_slot{}, digit_index{}, digit_count{}, padding{}, word_index{};
    std::size_t text_index{};
    TextCursor saved_cursor;
    PsiNameSelection psi;
    std::unique_ptr<detail::StringPrinter> string;
    std::optional<TextEffect> pending;
    enum class Stage { Start, String, Split, SplitNext, Padding, Digits, MoneyEnd,
                       MoneyRestore, PsiSuffix, PreparedName, Output, Finish } stage = Stage::Start,
                       after_output = Stage::Finish, after_string = Stage::Finish;
    Execution(TextSubstitutions::Execution &s, SubstitutionCommand c, TextOutput::Owner o, bool root)
        : shared(s), host(s.host), output(host.output()), command(std::move(c)), owner(o), owns(root) {}
    bool japanese() const { return host.version() == GameVersion::JP; }
    PreparedMessage &prepared() const {
        auto *value = host.prepared_message();
        require(value != nullptr, "Prepared substitution requires its shared message owner");
        return *value;
    }
    dialogue::PreparedName prepared_side() const {
        return command.action == SubstitutionAction::PreparedAttacker
            ? dialogue::PreparedName::Attacker : dialogue::PreparedName::Target;
    }
    void prepared_name() {
        auto &message = prepared();
        const auto side = prepared_side();
        // Re-resolve later bytes after every actual glyph callback. The US
        // article continuation may have changed the name before reaching here.
        print([&message, side] { return message.name(side); }, 80, !japanese());
    }
    WindowId focus() const {
        require(host.state().focus.has_value(), "Substitution layout requires a focused window");
        return *host.state().focus;
    }
    void finish() {
        if (owns) output.leave(owner);
        done = true;
    }
    void glyph(std::uint16_t code, Stage next, bool fixed = false) {
        if (fixed) output.begin_fixed_glyph(code, owner);
        else output.begin_glyph(code, owner);
        after_output = next;
        stage = Stage::Output;
    }
    void print(TextReader reader, std::uint16_t maximum, bool wrapped, Stage next = Stage::Finish) {
        string = std::make_unique<detail::StringPrinter>(host, owner, std::move(reader), maximum, wrapped);
        after_string = next;
        stage = Stage::String;
    }
    void print(std::span<const std::uint8_t> bytes, std::uint16_t maximum, bool wrapped,
               Stage next = Stage::Finish) {
        print([bytes] { return bytes; }, maximum, wrapped, next);
    }
    void number(std::uint32_t value, bool money) {
        if (!host.state().focus) { stage = Stage::Finish; return; }
        valid_number(value);
        physical_slot = *host.slot_for(focus());
        if (money && !japanese()) {
            saved_indent = output.indent_pending();
            output.set_indent(false, owner);
        }
        digit_count = shared.decimal(value);
        digit_index = 7 - digit_count;
        if (!money) {
            const auto fill = host.slot(physical_slot).number_padding;
            if (!(fill & 0x80)) {
                padding = std::max(unsigned(fill & 15) + 1, digit_count) - digit_count;
                if (!japanese()) {
                    output.shift_pixels(std::uint16_t(padding * 6), owner);
                    padding = 0;
                }
            }
            stage = Stage::Padding;
            return;
        }
        const auto &captured = host.slot_output(physical_slot);
        saved_cursor = captured.cursor;
        if (japanese()) {
            output.set_cursor(focus(), {std::uint16_t(captured.geometry.columns - 2 - digit_count), saved_cursor.line});
            glyph(0x23, Stage::Digits);
        } else {
            const auto widths = output.word_widths();
            const auto spacing = output.policy().character_padding;
            std::uint16_t width = std::uint16_t(widths[4] + spacing);
            for (unsigned i = digit_index; i < 7; ++i)
                width = std::uint16_t(width + widths[0x10 + shared.digits[i]] + spacing);
            width = std::uint16_t(width + spacing);
            host.menu_state().force_left_alignment = true;
            output.position_pixels(std::uint16_t((captured.geometry.columns - 1) * 8 - width),
                                   captured.cursor.line, owner);
            glyph(0x54, Stage::Digits);
        }
    }
    void start() {
        switch (command.action) {
        case SubstitutionAction::String:
        case SubstitutionAction::WrappedString:
            print(command.text, command.maximum, command.action == SubstitutionAction::WrappedString);
            break;
        case SubstitutionAction::WordSplitString:
            require(bool(command.text), "Word splitting requires a live source");
            require(!japanese(), "Japanese item strings do not use US word splitting");
            stage = Stage::Split;
            break;
        case SubstitutionAction::Number: number(command.value, false); break;
        case SubstitutionAction::PreparedNumber:
            // C1AD26 captures the full number before PRINT_NUMBER can yield.
            number(prepared().number(), false);
            break;
        case SubstitutionAction::PreparedAttacker:
        case SubstitutionAction::PreparedTarget: {
            auto &message = prepared();
            if (!japanese()) {
                auto &metadata = message.metadata(prepared_side());
                if (metadata.enemy_id == 0xffff) metadata.article = 0;
                else if (!metadata.article && shared.catalog().enemy_article(metadata.enemy_id)) {
                    // C3E75D never sets the flag after printing an article.
                    print(shared.catalog().article_text(output.last_character() == 0x70),
                          4, true, Stage::PreparedName);
                    break;
                }
            }
            prepared_name();
            break;
        }
        case SubstitutionAction::Money: number(command.value, true); break;
        case SubstitutionAction::Character: glyph(std::uint16_t(command.value), Stage::Finish); break;
        case SubstitutionAction::Attributes:
            if (host.state().focus) {
                const auto bits = std::uint16_t(command.value * 1024);
                auto style = output.window(focus()).style;
                style.palette = std::uint8_t((bits >> 10) & 7);
                style.priority = (bits & 0x2000) != 0;
                style.flip_horizontal = (bits & 0x4000) != 0;
                style.flip_vertical = (bits & 0x8000) != 0;
                output.set_style(focus(), style);
            }
            stage = Stage::Finish;
            break;
        case SubstitutionAction::Stat: {
            const auto descriptor = shared.catalog().stat(command.value);
            if (descriptor.kind == StatKind::String)
                print(shared.live(descriptor.key), descriptor.size, !japanese());
            else {
                require(bool(shared.values.read_number), "Stat substitution requires a live numeric provider");
                auto value = shared.values.read_number(descriptor.key);
                if (descriptor.size == 1) value = std::uint8_t(value);
                else if (descriptor.size == 2) value = std::uint16_t(value);
                number(value, false);
            }
            break;
        }
        case SubstitutionAction::CharacterName: {
            const auto name = shared.catalog().character_name(command.value);
            if (name.kind == CharacterNameKind::Enemy)
                print(shared.catalog().enemy_name(name.index), name.maximum, !japanese());
            else {
                const auto key = name.kind == CharacterNameKind::Party
                    ? StatKey{StatField::CharacterName, std::uint8_t(name.index)} : StatKey{StatField::PetName, 0};
                print(shared.live(key), name.maximum, !japanese() && !output.policy().allow_overflow);
            }
            break;
        }
        case SubstitutionAction::ItemName: {
            const auto bytes = shared.catalog().item_text(command.value);
            if (japanese()) print(bytes, 10, false);
            else {
                command.text = [bytes] { return bytes; };
                stage = Stage::Split;
            }
            break;
        }
        case SubstitutionAction::TeleportName:
            print(shared.catalog().teleport_name(command.value), japanese() ? 10 : 25, !japanese());
            break;
        case SubstitutionAction::PsiName:
            psi = shared.catalog().psi(command.value);
            if (psi.name_id == 1)
                print(shared.live({StatField::FavouriteThing, 0}), 0xffff, !japanese(), Stage::PsiSuffix);
            else
                print(shared.catalog().psi_name(psi.name_id), 0xffff, !japanese(), Stage::PsiSuffix);
            break;
        }
    }
    Progress advance(unsigned budget) {
        if (done) return Progress::Finished;
        output.require_owner(owner);
        if (pending) return Progress::Suspended;
        while (budget--) {
            switch (stage) {
            case Stage::Start: start(); break;
            case Stage::String: {
                const auto result = string->advance(1);
                if (result == Progress::Suspended) {
                    pending = *output.effect();
                    return result;
                }
                if (result == Progress::Finished) {
                    string.reset();
                    stage = after_string;
                }
                break;
            }
            case Stage::Split: {
                const auto bytes = command.text();
                if (text_index >= bytes.size())
                    throw std::out_of_range("US word-split source has no terminator in its imported extent");
                const auto code = bytes[text_index++];
                if (word_index >= shared.word.size())
                    throw std::out_of_range("US word exceeds the source word-splitting buffer");
                shared.word[word_index] = code;
                if (code == 0 || code == 0x50) {
                    split_finished = code == 0;
                    if (code) {
                        if (++word_index >= shared.word.size())
                            throw std::out_of_range("US word delimiter overwrites adjacent source memory");
                        shared.word[word_index] = 0;
                    }
                    print([this] { return std::span<const std::uint8_t>(shared.word); }, 0xffff,
                          true, Stage::SplitNext);
                } else ++word_index;
                break;
            }
            case Stage::SplitNext:
                word_index = 0;
                stage = split_finished ? Stage::Finish : Stage::Split;
                break;
            case Stage::Padding:
                if (padding) {
                    --padding;
                    glyph(0x20, Stage::Padding);
                } else stage = Stage::Digits;
                break;
            case Stage::Digits:
                if (digit_count) {
                    --digit_count;
                    const auto code = std::uint16_t(shared.digits.at(digit_index++) + (japanese() ? 0x30 : 0x60));
                    glyph(code, Stage::Digits);
                } else stage = command.action == SubstitutionAction::Money ? Stage::MoneyEnd : Stage::Finish;
                break;
            case Stage::MoneyEnd:
                if (japanese()) glyph(0x24, Stage::MoneyRestore);
                else {
                    host.menu_state().force_left_alignment = false;
                    const auto &captured = host.slot_output(physical_slot);
                    host.position_source({std::uint16_t(captured.geometry.columns - 1), captured.cursor.line}, 0, owner);
                    glyph(36, Stage::MoneyRestore, true);
                }
                break;
            case Stage::MoneyRestore:
                host.position_source(saved_cursor, 0, owner);
                if (!japanese()) output.set_indent(saved_indent, owner);
                stage = Stage::Finish;
                break;
            case Stage::PsiSuffix: {
                const auto suffix = shared.catalog().psi_suffix(psi.level);
                if (japanese()) glyph(suffix.front(), Stage::Finish);
                else print(suffix, 0xffff, true);
                break;
            }
            case Stage::PreparedName:
                prepared_name();
                break;
            case Stage::Output:
                if (output.advance(owner) == OutputProgress::Suspended) {
                    pending = *output.effect();
                    return Progress::Suspended;
                }
                stage = after_output;
                break;
            case Stage::Finish:
                finish();
                return Progress::Finished;
            }
        }
        return Progress::BudgetExhausted;
    }
};
TextSubstitutions::TextSubstitutions(WindowHost &host) : execution_(std::make_unique<Execution>(host)) {}
TextSubstitutions::~TextSubstitutions() = default;
WindowHost &TextSubstitutions::windows() { return execution_->host; }
std::uint32_t TextSubstitutions::read_number(StatKey key, TextOutput::Owner owner) const {
    const auto &e = *execution_;
    e.host.output().require_owner(owner);
    require(e.host.output().complete(), "Live substitution values require idle text output");
    require(bool(e.values.read_number), "Text substitution requires a live numeric provider");
    return e.values.read_number(key);
}
void TextSubstitutions::configure(std::shared_ptr<const SubstitutionResources> resources, SubstitutionValues values) {
    auto &e = *execution_;
    e.host.output().require_owner(0);
    require(e.host.output().complete(), "Configure substitutions only with idle output");
    require(resources && resources->version() == e.host.version(), "Substitution and window regions differ");
    e.resources = std::move(resources);
    e.values = std::move(values);
}
TextSubstitutions::Operation::Operation(std::unique_ptr<Execution> e) : execution_(std::move(e)) {}
TextSubstitutions::Operation::~Operation() {
    if (!execution_->done) execution_->output.abandon(execution_->owner);
}
Progress TextSubstitutions::Operation::advance(unsigned budget) { return execution_->advance(budget); }
bool TextSubstitutions::Operation::complete() const { return execution_->done; }
const std::optional<TextEffect> &TextSubstitutions::Operation::effect() const { return execution_->pending; }
void TextSubstitutions::Operation::respond() {
    auto &e = *execution_;
    e.output.require_owner(e.owner);
    require(e.pending.has_value(), "Text substitution has no pending effect");
    e.output.respond(e.owner);
    e.pending.reset();
}
TextOutput::Owner TextSubstitutions::Operation::callback_owner(TextOutput &output) const {
    const auto &e = *execution_;
    require(&output == &e.output && !e.done && e.pending && e.pending->kind == TextEffectKind::WindowTick,
            "Nested text requires a shared substitution's WindowTick callback");
    output.require_owner(e.owner);
    return e.owner;
}
std::unique_ptr<TextSubstitutions::Operation> TextSubstitutions::begin(SubstitutionCommand command,
                                                                     TextOutput::Owner owner, bool owns) {
    auto &output = execution_->host.output();
    output.require_owner(owner);
    require(output.complete(), "Text substitution requires idle output");
    return std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(
        *execution_, std::move(command), owner, owns)));
}
std::unique_ptr<TextSubstitutions::Operation> TextSubstitutions::begin(SubstitutionCommand command) {
    auto &output = execution_->host.output();
    output.require_owner(0);
    if (execution_->host.state().focus &&
        (command.action == SubstitutionAction::Number || command.action == SubstitutionAction::Money))
        valid_number(command.value);
    const auto owner = output.enter();
    try { return begin(std::move(command), owner, true); }
    catch (...) { output.leave(owner); throw; }
}
std::unique_ptr<TextSubstitutions::Operation> TextSubstitutions::begin_nested(SubstitutionCommand command,
                                                                            Conversation &parent) {
    auto &output = execution_->host.output();
    const auto parent_owner = parent.callback_owner(output);
    if (execution_->host.state().focus &&
        (command.action == SubstitutionAction::Number || command.action == SubstitutionAction::Money))
        valid_number(command.value);
    const auto owner = output.enter(parent_owner);
    try { return begin(std::move(command), owner, true); }
    catch (...) { output.leave(owner); throw; }
}
std::unique_ptr<TextSubstitutions::Operation> TextSubstitutions::begin_nested(SubstitutionCommand command,
                                                                            Operation &parent) {
    auto &output = execution_->host.output();
    const auto parent_owner = parent.callback_owner(output);
    if (execution_->host.state().focus &&
        (command.action == SubstitutionAction::Number || command.action == SubstitutionAction::Money))
        valid_number(command.value);
    const auto owner = output.enter(parent_owner);
    try { return begin(std::move(command), owner, true); }
    catch (...) { output.leave(owner); throw; }
}
std::unique_ptr<TextSubstitutions::Operation> TextSubstitutions::begin(const Request &request,
                                                                     TextOutput::Owner owner) {
    require(request.kind == RequestKind::Substitution, "Unexpected text substitution request");
    SubstitutionAction action;
    switch (request.selector) {
    case 0: action = SubstitutionAction::Attributes; break;
    case 1: action = SubstitutionAction::Stat; break;
    case 2: action = SubstitutionAction::CharacterName; break;
    case 3: action = SubstitutionAction::Character; break;
    case 5: action = SubstitutionAction::ItemName; break;
    case 6: action = SubstitutionAction::TeleportName; break;
    case 0x0a: action = SubstitutionAction::Number; break;
    case 0x0b: action = SubstitutionAction::Money; break;
    case 0x0d: action = SubstitutionAction::PreparedAttacker; break;
    case 0x0e: action = SubstitutionAction::PreparedTarget; break;
    case 0x0f: action = SubstitutionAction::PreparedNumber; break;
    case 0x12: action = SubstitutionAction::PsiName; break;
    case 0x11:
        require(execution_->host.output().version() == GameVersion::JP,
                "Formation-name substitution belongs only to Japanese1C11");
        action = SubstitutionAction::CharacterName;
        break;
    default: throw std::logic_error("Unsupported text substitution selector");
    }
    return begin({action, request.count, {}, 0xffff}, owner, false);
}
} // namespace eb::native::dialogue
