#pragma once

#include "eb/native/dialogue/menu_host.hpp"

namespace eb::native::dialogue {
// C19A11 and C1AA18 compose existing window, selection and money services.
// WindowHost owns their single shared attribute backup; operations retain
// only their continuation and selection result, never a restoration snapshot.
class WindowCommands {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        Progress advance(unsigned work_budget = 4096);
        const std::optional<MenuEvent> &event() const;
        void respond();
        void respond(MenuResponse);
        bool complete() const;
        std::uint16_t result() const;

      private:
        friend class WindowCommands;
        friend class Conversation;
        TextOutput::Owner active_owner() const;
        TextOutput::Owner callback_owner(TextOutput &) const;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    ~WindowCommands();
    WindowCommands(const WindowCommands &) = delete;
    WindowCommands &operator=(const WindowCommands &) = delete;
    std::unique_ptr<Operation> begin(const Request &, MenuHost *menus = nullptr);

  private:
    friend class WindowHost;
    friend class Conversation;
    explicit WindowCommands(WindowHost &);
    std::unique_ptr<Operation> begin(const Request &, MenuHost *, TextOutput::Owner);
    WindowHost &windows_;
};
} // namespace eb::native::dialogue
