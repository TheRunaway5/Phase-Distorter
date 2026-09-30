#pragma once

#include "eb/native/dialogue/menu_printer.hpp"

namespace eb::native::dialogue {
class Conversation;

// Authored CC19_02 and CC1C_07/0C services over the host's existing option
// pool and printer. Selection references are retained as content locations;
// append never executes them. The bound program must be the same imported
// content used by menu selection. The window host and printer outlive this owner
// and all its operations. No menu state or composition is duplicated here.
class MenuCommands {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        Progress advance(unsigned work_budget = 4096);
        const std::optional<MenuPrintEffect> &effect() const;
        void respond();
        bool complete() const;

      private:
        friend class MenuCommands;
        friend class Conversation;
        TextOutput::Owner callback_owner(TextOutput &) const;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    MenuCommands(const Program &, WindowHost &, MenuPrinter &);
    ~MenuCommands();
    MenuCommands(const MenuCommands &) = delete;
    MenuCommands &operator=(const MenuCommands &) = delete;
    std::unique_ptr<Operation> begin(const Request &, const Program &);

  private:
    friend class Conversation;
    std::unique_ptr<Operation> begin(const Request &, const Program &, TextOutput::Owner);
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::dialogue
