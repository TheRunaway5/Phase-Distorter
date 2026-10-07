#pragma once

#include "eb/native/dialogue/substitution_resources.hpp"
#include "eb/native/dialogue/output.hpp"
#include "eb/native/dialogue/menu_host.hpp"
#include <functional>

namespace eb::native::dialogue {
// Re-resolved after each glyph's callbacks. The source owner must outlive the
// operation; a view must remain valid only until the next callback. Never cache
// a mutable name's span across world effects.
// Include an actual NUL or enough source continuation to reach the operation's
// maximum. The end of a view is a bounds check, never an invented terminator.
using TextReader = std::function<std::span<const std::uint8_t>()>;
struct SubstitutionValues {
    std::function<std::uint32_t(StatKey)> read_number;
    std::function<std::span<const std::uint8_t>(StatKey)> read_string;
};
enum class SubstitutionAction {
    String, WrappedString, WordSplitString, Number, Money, Character, Attributes,
    Stat, CharacterName, ItemName, TeleportName, PsiName,
    PreparedAttacker, PreparedTarget, PreparedNumber
};
struct SubstitutionCommand {
    SubstitutionAction action{};
    std::uint32_t value{};
    TextReader text;
    std::uint16_t maximum = 0xffff;
};

// One host-owned formatter and source-shared scratch buffers. Operations keep
// only call-local cursors, counts and restoration state. PRINT_LETTER, artwork,
// focus, style and callbacks remain owned by the existing window/output host.
class TextSubstitutions {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        Progress advance(unsigned work_budget = 4096);
        const std::optional<TextEffect> &effect() const;
        void respond();
        bool complete() const;
      private:
        friend class TextSubstitutions;
        friend class Conversation;
        friend class WindowCommands;
        TextOutput::Owner callback_owner(TextOutput &) const;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    ~TextSubstitutions();
    TextSubstitutions(const TextSubstitutions &) = delete;
    TextSubstitutions &operator=(const TextSubstitutions &) = delete;
    // Configuration is immutable while output is owned. Live values are read
    // through typed callbacks; immutable catalog bytes come from local import.
    void configure(std::shared_ptr<const SubstitutionResources>, SubstitutionValues = {});
    std::unique_ptr<Operation> begin(SubstitutionCommand);
    std::unique_ptr<Operation> begin_nested(SubstitutionCommand, Conversation &);
    std::unique_ptr<Operation> begin_nested(SubstitutionCommand, MenuHost::Operation &);
    std::unique_ptr<Operation> begin_nested(SubstitutionCommand, Operation &);
    WindowHost &windows();
  private:
    friend class WindowHost;
    friend class Conversation;
    friend class WindowCommands;
    explicit TextSubstitutions(WindowHost &);
    std::uint32_t read_number(StatKey, TextOutput::Owner) const;
    std::uint8_t stat_letter(unsigned descriptor, TextOutput::Owner) const;
    std::optional<std::uint16_t> query_item(const ItemQueryRequest &, TextOutput::Owner) const;
    std::unique_ptr<Operation> begin(SubstitutionCommand, TextOutput::Owner, bool owns);
    std::unique_ptr<Operation> begin(const Request &, TextOutput::Owner);
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::dialogue
